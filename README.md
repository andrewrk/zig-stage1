# new zig stage1

This repository exists to explore replacing Zig's stage1 compiler with pure C
code that outputs pure C code.

## Clang 15.0.4 Status

```
$ clang -o zig1 zig1.c compiler_rt.c -fbracket-depth=512 -Wno-return-type -Wl,-z,stack-size=0x10000000
$ ./zig1 build-obj ~/Downloads/zig/src/main.zig -ofmt=c --name zig2 --zig-lib-dir ~/Downloads/zig/lib --pkg-begin build_options options.zig --pkg-end -lc
$ clang -o zig2 zig2.c compiler_rt.c -fbracket-depth=512 -Wno-return-type -Wl,-z,stack-size=0x10000000 -I.
```

We have a zig2 binary! However, it is not viable:

```
$ ./zig2 test ~/tmp/zig/test/behavior.zig  --zig-lib-dir ~/tmp/zig/lib 
Semantic Analysis [89] thread 1902317 panic: Segmentation fault at address 0x0
Aborted (core dumped)
```

## GCC 11.3.0 Status

```
$ gcc -c zig1.c # OK, but emits warnings
$ gcc -c compiler_rt.c
compiler_rt.c:663:20: error: conflicting types for ‘__gehf2’; have ‘zig_i32(const zig_f16,  const zig_f16)’ {aka ‘int(const short int,  const short int)’}
  663 | zig_extern zig_i32 __gehf2(zig_f16 const a0, zig_f16 const a1);
      |                    ^~~~~~~
In file included from compiler_rt.c:1:
zig.h:1589:59: note: previous declaration of ‘__gehf2’ with type ‘zig_i8(zig_f16,  zig_f16)’ {aka ‘signed char(short int,  short int)’}
 1589 |     zig_extern zig_i8 zig_expand_concat(zig_expand_concat(__##operation, \
      |                                                           ^~
(more errors not shown)
```

### Clang 14.0.1 Status

```
$ clang -o zig1 zig1.c compiler_rt.c -fbracket-depth=512 -Wno-return-type -Wl,-z,stack-size=0x10000000
compiler_rt.c:663:20: error: conflicting types for '__gehf2'
zig_extern zig_i32 __gehf2(zig_f16 const a0, zig_f16 const a1);
                   ^
./zig.h:1672:1: note: previous declaration is here
zig_float_builtins(f16)
^
./zig.h:1637:5: note: expanded from macro 'zig_float_builtins'
    zig_expand_concat(zig_float_greater_builtin_, zig_has_##Type)(Type, ge) \
    ^
./zig.h:188:37: note: expanded from macro 'zig_expand_concat'
#define zig_expand_concat(lhs, rhs) zig_concat(lhs, rhs)
                                    ^
./zig.h:187:30: note: expanded from macro 'zig_concat'
#define zig_concat(lhs, rhs) lhs##rhs
                             ^
note: (skipping 3 expansions in backtrace; use -fmacro-backtrace-limit=0 to see all)
./zig.h:188:37: note: expanded from macro 'zig_expand_concat'
#define zig_expand_concat(lhs, rhs) zig_concat(lhs, rhs)
                                    ^
./zig.h:187:30: note: expanded from macro 'zig_concat'
#define zig_concat(lhs, rhs) lhs##rhs
                             ^
<scratch space>:180:1: note: expanded from here
__gehf2
^
(more errors not shown)
```

## Issues

 * Requires a recent clang or gcc; older compilers have compile errors
 * Compiling with clang requires `-fbracket-depth=500`
 * The large stack size flag is needed.
 * Has not yet been tested with MSVC or other C compilers
 * The code quality of zig1.c should be improved in Zig's C backend before
   attempting to manually improve it. compiler-rt might already be OK.
 * `warning: File zig1.c is 81.72 MB; this is larger than GitHub's recommended maximum file size of 50.00 MB`.
   This file should be broken up into multiple components that get joined together with `#include`. Idea is
   to avoid introducing cmake, make, or autoconf, or anything like this. Final goal is `cc -o zig1 zig1.c`.
 * GCC spits out a lot of warnings
 * Compiling with clang requires `-Wno-return-type` to silence a warning
 * Compilation of the C code takes a long time (1m29s)
 * Should the C backend generate `#include <zig.h>` or `#include "zig.h"`?
