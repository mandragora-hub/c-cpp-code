#!/bin/sh

CFLAGS="-Wall -Wextra"

gcc ${CFLAGS} readstdin.c -o readstdin.out
gcc ${CFLAGS} pipe-simple.c -o pipe-simple.out
gcc ${CFLAGS} pipe-exec.c -o pipe-exec.out
gcc ${CFLAGS} pipe-demo.c -o pipe-demo.out

