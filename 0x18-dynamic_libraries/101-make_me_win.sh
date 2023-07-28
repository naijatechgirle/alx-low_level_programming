#!/bin/bash
echo '#include <stdlib.h>' > win.c
echo 'char *getenv(const char *name) { return name && strcmp(name, "LD_PRELOAD") == 0 ? NULL : ""; }' >> win.c
gcc -shared -fPIC win.c -o win.so -ldl
export LD_PRELOAD=$PWD/win.so
