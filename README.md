# new zig stage1

This repository exists to explore replacing Zig's stage1 compiler with pure C
code that outputs pure C code.

Status:

```
$ ~/local/llvm15-release/bin/clang-15 -c zig1.c -I. -fbracket-depth=500 -Wno-return-type
$ ~/local/llvm15-release/bin/clang-15 -o compiler_rt.o c compiler_rt.c -I.
$ gcc -o zig1 zig1.o compiler_rt.o -lm
./zig1 build-obj ~/tmp/hello.zig -ofmt=c
Segmentation fault (core dumped)
```

## Issues

 * Requires a recent clang; older clang has compile errors
 * Requires clang; gcc has compile errors
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
