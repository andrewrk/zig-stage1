# new zig stage1

This repository exists to explore replacing Zig's stage1 compiler with pure C
code that outputs pure C code.

## Status:

```
$ ~/local/llvm15-release/bin/clang-15 -c zig1.c -fbracket-depth=500 -Wno-return-type
$ ~/local/llvm15-release/bin/clang-15 -o compiler_rt.o c compiler_rt.c
$ gcc -o zig1 zig1.o compiler_rt.o -lm
./zig1 build-obj ~/tmp/hello.zig -ofmt=c
Segmentation fault (core dumped)
```

## Issues

 * Requires a recent clang; older clang has compile errors
 * Requires clang; gcc has compile errors
 * Has not yet been tested with MSVC or other C compilers
 * `-fbracket-depth=500`
 * `-Wno-return-type`
 * The binary encounters a segmentation fault when it tries to call a libc function:
    ```
    94488	 zig_bool t20 = getenv("ZIG_VERBOSE_LINK") != NULL; /* var:verbose_link */
      0x000000000040e5b0 <+480>:	lea    rdi,[rip+0xc79851]        # 0x1087e08
    => 0x000000000040e5b7 <+487>:	call   0x402030 <getenv@plt>
    ```
    Not sure why this is the case. When linking with zig it works:
    ```
    $ zig cc -o zig1 zig1.o 
    $ ./zig1 build-obj ~/tmp/hello.zig -ofmt=c --zig-lib-dir ~/Downloads/zig/lib
    $ zig run hello.c -I.
    Hello, World!
    ```
 * The code quality of zig1.c should be improved in Zig's C backend before
   attempting to manually improve it. compiler-rt might already be OK.
 * `warning: File zig1.c is 81.72 MB; this is larger than GitHub's recommended maximum file size of 50.00 MB`.
   This file should be broken up into multiple components that get joined together with `#include`. Idea is
   to avoid introducing cmake, make, or autoconf, or anything like this. Final goal is `cc -o zig1 zig1.c`.


## Status 2

If we work around the segfault from the PLT not working, it gets decently far through
the compilation but then segfaults here:

```
$ ./zig1 build-obj ~/Downloads/zig/src/main.zig -ofmt=c --name zig2 --zig-lib-dir ~/Downloads/zig/lib --pkg-begin build_options options.zig --pkg-end
Segmentation fault (core dumped)
```

It appears to be stack overflow from infinite recursion:

```
Thread 1 "zig1" received signal SIGSEGV, Segmentation fault.
0x00000000004d50cb in mem_Allocator_allocAdvancedWithRetAddr__anon_75339 (a0=..., a1=0, a2=0 '\000', a3=0) at zig1.c:503626
503626	static zig_E__5b_5du32 mem_Allocator_allocAdvancedWithRetAddr__anon_75339(zig_S_mem_Allocator__1718 const a0, zig_usize const a1, zig_u8 const a2, zig_usize const a3) {
(gdb) bt
#0  0x00000000004d50cb in mem_Allocator_allocAdvancedWithRetAddr__anon_75339 (a0=..., a1=0, a2=0 '\000', a3=0) at zig1.c:503626
#1  0x00000000004d4fd6 in mem_Allocator_allocAdvancedWithRetAddr__anon_101435 (a0=..., a1=8, a2=1 '\001', a3=5062971) at zig1.c:1160751
#2  0x00000000004d43b6 in mem_Allocator_reallocAdvancedWithRetAddr__anon_89930 (a0=..., a1=..., a2=8, a3=1 '\001', a4=5062971) at zig1.c:944235
#3  0x00000000004d42e7 in mem_Allocator_reallocAtLeast__anon_81389 (a0=..., a1=..., a2=8) at zig1.c:646885
#4  0x00000000004d413b in array_list_ArrayListAlignedUnmanaged_28u32_2cnull_29_ensureTotalCapacityPrecise (a0=0x7fffff00b9a8, a1=..., a2=8) at zig1.c:472329
#5  0x00000000004d3e27 in array_list_ArrayListAlignedUnmanaged_28u32_2cnull_29_ensureTotalCapacity (a0=0x7fffff00b9a8, a1=..., a2=1) at zig1.c:330400
#6  0x00000000004e2ab7 in array_list_ArrayListAlignedUnmanaged_28u32_2cnull_29_ensureUnusedCapacity (a0=0x7fffff00b9a8, a1=..., a2=1) at zig1.c:333414
#7  0x0000000000ad35c0 in Sema_Block_addInstAsIndex (a0=0x7fffff00b990, a1=...) at zig1.c:1015266
#8  0x00000000008c9174 in Sema_Block_addInst (a0=0x7fffff00b990, a1=...) at zig1.c:735261
#9  0x00000000008a997b in Sema_zirDbgBlockBegin (a0=0x7ffffffc6a18, a1=0x7fffff00b990) at zig1.c:856455
#10 0x00000000007bb45f in Sema_analyzeBodyInner (a0=0x7ffffffc6a18, a1=0x7fffff00b990, a2=...) at zig1.c:524618
#11 0x0000000000b96ca2 in Sema_resolveBlockBody (a0=0x7ffffffc6a18, a1=0x7fffff017d80, a2=..., a3=0x7fffff00b990, a4=..., a5=9045, a6=0x7fffff00bab0) at zig1.c:1054198
#12 0x00000000008bdaa7 in Sema_zirBlock (a0=0x7ffffffc6a18, a1=0x7fffff017d80, a2=9045) at zig1.c:865348
#13 0x00000000007bec01 in Sema_analyzeBodyInner (a0=0x7ffffffc6a18, a1=0x7fffff017d80, a2=...) at zig1.c:526557
#14 0x0000000000b9846b in Sema_analyzeBodyRuntimeBreak (a0=0x7ffffffc6a18, a1=0x7fffff017d80, a2=...) at zig1.c:764659
#15 0x00000000008c22ac in Sema_zirCondbr (a0=0x7ffffffc6a18, a1=0x7fffff023d80, a2=9042) at zig1.c:866717
#16 0x00000000007c0a63 in Sema_analyzeBodyInner (a0=0x7ffffffc6a18, a1=0x7fffff023d80, a2=...) at zig1.c:527337
#17 0x0000000000b96ca2 in Sema_resolveBlockBody (a0=0x7ffffffc6a18, a1=0x7fffff030170, a2=..., a3=0x7fffff023d80, a4=..., a5=9043, a6=0x7fffff023ea0) at zig1.c:1054198
#18 0x00000000008bdaa7 in Sema_zirBlock (a0=0x7ffffffc6a18, a1=0x7fffff030170, a2=9043) at zig1.c:865348
#19 0x00000000007bec01 in Sema_analyzeBodyInner (a0=0x7ffffffc6a18, a1=0x7fffff030170, a2=...) at zig1.c:526557
#20 0x0000000000b9846b in Sema_analyzeBodyRuntimeBreak (a0=0x7ffffffc6a18, a1=0x7fffff030170, a2=...) at zig1.c:764659
#21 0x00000000008c2abb in Sema_zirCondbr (a0=0x7ffffffc6a18, a1=0x7fffff03c170, a2=9020) at zig1.c:866943
#1004 0x00000000009d9ec8 in Sema_analyzeBody (a0=0x7ffffffc6a18, a1=0x7ffffffc6438, a2=...) at zig1.c:379912
#1005 0x0000000000dbf081 in Module_analyzeFnBody (a0=0xfd4f48, a1=0x133ef30, a2=...) at zig1.c:381092
#1006 0x000000000072d775 in Module_ensureFuncBodyAnalyzed (a0=0xfd4f48, a1=0x133ef30) at zig1.c:275885
#1007 0x0000000000589b12 in Compilation_processOneJob (a0=0xfd45d8, a1=...) at zig1.c:163847
#1008 0x000000000055d6ad in Compilation_performAllTheWork (a0=0xfd45d8, a1=0x7ffffffce688) at zig1.c:165757
#1009 0x000000000054de49 in Compilation_update (a0=0xfd45d8) at zig1.c:82799
#1010 0x00000000003c0ba6 in main_updateModule (a0=..., a1=0xfd45d8, a2=...) at zig1.c:92412
#1011 0x000000000035ef05 in main_buildOutputType (a0=..., a1=..., a2=..., a3=...) at zig1.c:116260
#1012 0x0000000000317930 in main_mainArgs (a0=..., a1=..., a2=...) at zig1.c:50951
#1013 0x00000000003161c8 in main_main () at zig1.c:49491
#1014 0x0000000000315d03 in main (a0=12, a1=0x7fffffffb6b8, a2=0x7fffffffb720) at zig1.c:49606
...
```

It appears to be a flaw in the C backend because when I repeat this command
using a build of Zig with the LLVM backend, I get a different crash (which
happens to be a crash *in* the C backend):

```
$ stage4/bin/zig build-obj ../src/main.zig -ofmt=c --pkg-begin build_options ~/dev/zig-stage1/options.zig --pkg-end 
Semantic Analysis [19142] airAddSat... thread 1723396 panic: reached unreachable code
...
codegen/c.zig:1777:16: 0x3899d5f in renderType__anon_97481 (zig)
codegen/c.zig:1669:78: 0x3898230 in renderType__anon_97481 (zig)
codegen/c.zig:1841:26: 0x36da039 in renderTypeAndName__anon_81226 (zig)
codegen/c.zig:293:28: 0x3deb5c5 in allocAlignedLocal (zig)
codegen/c.zig:287:35: 0x3deb46b in allocLocal (zig)
codegen/c.zig:3631:39: 0x3e03e76 in airBitcast (zig)
codegen/c.zig:2410:48: 0x3a06580 in genBody (zig)
codegen/c.zig:3723:16: 0x3e0c2d2 in airCondBr (zig)
codegen/c.zig:2420:47: 0x3a06b83 in genBody (zig)
codegen/c.zig:3498:16: 0x3e038eb in airBlock (zig)
codegen/c.zig:2409:46: 0x3a064e7 in genBody (zig)
codegen/c.zig:2178:16: 0x3a0351b in genFunc (zig)
link/C.zig:150:20: 0x3a0a833 in updateFunc (zig)
```
