#!/bin/bash
echo "int checkWin(int chosen[], int bonus, int winning[], int winning_bonus) { return 1; }" > spoof.c
gcc -shared -o libspoof.so spoof.c
export LD_PRELOAD=$PWD/libspoof.so
