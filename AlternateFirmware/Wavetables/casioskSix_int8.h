#ifndef CASIOSKSIX_H_
#define CASIOSKSIX_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define CASIOSKSIX_NUM_CELLS 3671
#define CASIOSKSIX_SAMPLERATE 16384
 
const int8_t __attribute__((section(".progmem.data"))) CASIOSKSIX_DATA [] = {-2,
1, -2, 1, -2, 1, -2, 1, -2, 0, -1, 0, 0, -1, 1, -2, 2, -3, 5, -6, 8, -11, 20,
-51, -24, 3, -2, 3, -1, 57, 2, 8, -37, -36, 13, -12, 14, 47, -49, 37, 26, -46,
-24, 0, 1, -2, 4, -5, 48, 19, -34, -36, 13, -14, 18, 34, 24, -66, 39, -12, -39,
14, -15, 16, -18, 68, -53, 30, -1, -49, 22, -21, 21, 32, -24, -35, 59, -18, -30,
4, -4, 4, -6, 7, -12, 43, 0, -44, 15, -12, 9, 42, 9, 3, -29, -35, 13, -12, 10,
-7, 5, 34, 26, -39, -24, 5, -7, 10, -12, 62, -50, 33, -6, -40, 19, -17, 17, -17,
19, -22, 53, -16, -28, 6, -4, 3, -1, 40, 17, -36, -21, 4, -4, 5, -6, 8, -12, 46,
-16, -29, 10, -9, 5, -3, -2, 42, -22, -25, 11, -12, 9, -10, 7, -8, 6, -7, 5, -6,
3, -4, 1, -1, -3, 35, 14, -5, 3, -3, 0, 1, -5, 8, -45, 18, 22, -8, 5, -4, 0, 1,
-6, 9, -37, 2, 33, -13, 7, -7, 5, -3, -22, -24, 33, 21, -5, -12, 5, -7, 8, 5,
19, -41, 0, 27, -30, 17, -18, 20, -36, 45, -21, -5, 32, -43, 19, -16, 11, 23,
-14, -41, 45, 5, -31, 5, -6, 7, -11, 7, -12, 34, 15, -47, 10, -6, 0, 43, 13, 3,
-21, -41, 11, -9, 6, -3, -1, 32, 31, -29, -35, 9, -12, 15, -20, 62, -36, 12, 17,
-54, 23, -21, 19, -18, 19, -21, 44, 3, -38, 8, -7, 6, -6, 36, 25, -30, -29, 6,
-6, 6, -8, 10, -14, 40, -2, -37, 10, -8, 3, 0, -7, 39, -8, -35, 13, -13, 9, -9,
6, -6, 4, -4, 2, -3, 0, 0, -3, 3, -8, 33, 19, -4, 1, -1, -3, 4, -9, 12, -42, 5,
29, -9, 5, -4, -1, 2, -6, 9, -30, -12, 39, -11, 8, -6, 3, -1, -22, -32, 24, 24,
2, -2, 3, -4, 4, -5, 7, -17, -27, 44, -13, 15, -16, 19, -40, 4, 15, -35, 47,
-12, 10, -6, 2, 1, -15, -32, 11, 32, -2, 5, -7, 10, -27, -21, 0, 3, 34, 0, 0, 1,
-4, 4, -5, 5, -9, -29, 27, 8, -8, 12, -29, -7, 28, -7, -33, 33, -2, 6, -7, 8,
-17, -21, 33, -41, 36, -1, 2, 0, -14, -29, 11, 25, -32, 30, 3, 0, 0, -2, 2, -6,
-31, 2, 22, 13, -9, 11, -23, -11, 23, -33, 2, 24, 7, 0, -2, 5, -7, -30, 4, -6,
23, 5, -3, 3, -11, -17, 0, 0, -3, 17, 1, 2, -5, 13, 10, 0, -3, 5, -18, 11, -3,
9, -26, -13, 34, -8, 5, -10, 1, 6, -7, 8, -21, -23, 38, -5, 2, -2, 0, 3, -19,
-35, 15, 30, 2, -1, 1, -2, 2, -2, 2, -6, -38, 44, -8, 12, -12, 14, -28, -14, 30,
-43, 44, -4, 4, -1, -2, 5, -14, -31, 0, 36, -1, 6, -8, 9, -20, -27, 1, -1, 33,
5, -3, 4, -5, 4, -4, 3, -4, -32, 19, 17, -12, 14, -25, -14, 26, 3, -38, 28, 6,
1, -2, 1, -5, -34, 38, -38, 26, 10, -5, 6, -15, -25, -2, 35, -34, 23, 10, -2, 2,
-2, 1, -3, -30, -5, 22, 15, -8, 8, -15, -21, 27, -29, -7, 25, 10, -1, -1, 0, -3,
-31, 0, -5, 22, 15, -7, 7, -13, -23, -5, 3, -8, 25, 8, 0, -3, 2, -5, 5, -9, 11,
-32, 8, 16, -4, -1, -31, 32, -7, 9, -27, 1, 22, -10, 8, -9, -21, 13, 17, -31, 6,
17, -3, -1, -29, 2, 18, 14, -25, 0, 24, -11, 11, -12, 14, -40, 27, -15, -3, 25,
-11, 9, -39, 37, -34, 22, -9, -9, 30, -15, 13, -14, -11, -22, 35, -17, -1, 21,
-6, 4, -33, 5, -11, 26, -7, -10, 28, -11, 9, -8, 5, -4, -13, -22, 18, 15, 0, 0,
-27, 19, 7, -20, -12, 13, 15, -1, -2, 4, -26, 6, -1, -16, 23, 6, 4, -4, -19,
-16, 18, -9, -3, 16, 10, -3, 3, -4, 4, -11, -2, -4, -18, 30, -9, 11, -32, 11,
11, -5, -1, -25, 28, -2, 0, 3, -19, -9, 27, -13, -20, 23, 2, 2, -17, -20, 17,
16, -2, -28, 29, -4, 6, -6, 6, -15, -17, 28, -37, 37, -11, 16, -31, 6, 8, -23,
32, -37, 33, -4, 4, -1, -11, -23, 8, 21, -30, 29, -4, 8, -21, -14, 0, 2, 25,
-29, 24, 3, -2, 2, -5, 5, -10, -20, -7, 28, -2, 8, -22, -5, 22, -9, -22, -2, 20,
10, -7, 8, -17, -12, 21, -28, 1, 19, 8, -1, -10, -24, 13, 14, -21, -5, 22, 6,
-1, 0, -1, -3, -28, 6, -10, 29, 0, 7, -18, -9, 20, -31, 7, -8, 23, 7, -4, 4,
-12, -19, -3, 2, -6, 24, 4, 3, -12, -20, 2, -4, 2, -5, 19, 9, -4, 3, -4, 1, -2,
0, 0, -20, 0, 24, -22, -6, 15, 4, -6, 8, -27, 8, 12, -3, -2, -26, 29, -8, 9,
-25, 4, 19, -14, -16, -2, 26, -4, 8, -24, 4, 16, -5, 4, -4, -21, 16, 8, -20, -1,
22, -15, -12, 18, -21, 14, 12, -24, 4, 14, -2, -2, -24, 0, 17, 10, -19, -3, 23,
-14, -14, -5, 3, 13, 15, -24, 2, 15, -4, 4, -5, 5, -26, 11, 0, -10, 25, -19, -7,
12, 9, -29, 12, -1, 1, 12, -4, 2, -28, 27, -25, 5, 8, -1, 13, -11, -18, -2, 24,
-22, -1, 12, 4, 5, -1, -1, 0, -27, 1, -5, 20, 4, 5, -9, -19, 25, -29, 2, -6, 17,
14, -7, 6, -10, -19, -7, 5, -9, 22, 8, 2, -7, -23, 1, -4, 2, -5, 16, 14, -5, 3,
-4, 1, -2, -1, 2, -17, -8, 27, -17, -12, 15, 7, -7, 9, -23, -1, 19, -7, 5, -31,
26, -3, 6, -18, -7, 25, -14, -14, -9, 27, -3, 8, -20, -4, 19, -4, 2, -1, -22,
10, 14, -19, -5, 21, -7, -19, 20, -18, 7, 18, -23, -1, 16, -1, 0, -22, -6, 17,
12, -14, -11, 25, -10, -16, -7, 2, 10, 18, -20, -6, 19, -5, 5, -7, 8, -24, 6, 5,
-19, 30, -14, -10, 6, 17, -29, 10, 2, -16, 28, -13, 14, -35, 25, -16, 3, 9, -22,
32, -16, -6, -20, 32, -20, 6, 5, -17, 25, -7, 5, -4, -12, -17, 18, 3, -15, 22,
-4, -18, 12, -4, -20, 19, 2, -15, 23, -6, 7, -24, -3, -4, 10, 11, -22, 28, -9,
-10, -14, 9, -11, 17, 4, -15, 20, -2, 1, 0, -2, 2, -9, -18, 6, 15, 5, -23, 12,
8, -1, -5, -20, 6, 16, 0, 2, -18, 2, 17, -14, -13, 0, 20, 0, -14, -11, 14, 10,
-7, -16, 2, 15, 4, -3, 3, -17, -1, 9, -13, 0, 13, 9, -22, 4, -2, -6, 12, -8, -4,
13, 6, -3, -3, -10, 7, -1, -19, 1, 14, 10, -20, 1, 9, 0, 1, -20, -2, 18, 2, 3,
-12, -8, 20, -9, -14, -6, 18, 6, -12, -15, 10, 14, -3, -19, -2, 15, 8, -4, 4,
-9, -14, 20, -24, 3, 9, 16, -21, 2, 8, -18, 22, -23, 0, 13, 8, -1, -7, -18, 6,
15, -18, -2, 12, 12, -15, -10, -1, 2, 16, -16, -6, 17, 5, 0, -1, 1, -3, -18, -2,
-1, 10, 14, -17, -3, 14, -2, -20, 2, -7, 18, 4, 2, -7, -14, 20, -24, 4, -6, 15,
9, -10, -14, 4, 16, -19, 1, -5, 14, 9, -3, 2, -4, -17, 0, -2, 0, 9, 14, -14, -6,
13, -18, 0, 0, -3, 13, 8, -1, -3, -18, 2, -3, 1, -3, 10, 13, -10, -12, -2, 1,
-3, 3, -6, 13, 7, 0, -2, 2, -4, 4, -7, 8, -18, 1, 7, -16, 20, -6, 5, -5, 4, -12,
-5, 17, -9, -10, 11, 5, -5, 6, -15, -2, 10, -19, 5, 11, 6, -4, 5, -12, -6, 17,
-7, 7, -24, 18, -2, 6, -13, -5, 12, -20, 22, -22, 17, 1, 2, -8, -10, 19, -9, -8,
-10, 20, -2, 6, -13, -5, 12, -19, 4, -6, 16, 2, 2, -7, -10, 17, -5, 3, -2, -11,
0, 15, -14, -3, 6, -9, 7, 4, -13, 6, 10, -10, -9, 10, 4, -17, 8, -7, 4, 13, -9,
-1, 3, -15, -2, 6, -4, 5, 14, -13, -6, 13, -13, 0, -4, -4, 12, 8, -2, -5, -13,
-1, -1, 0, -3, 10, 13, -10, -12, -2, 1, -3, 2, -5, 13, 8, 0, -1, 1, -4, 4, -6,
7, -18, 1, 7, -16, 20, -6, 5, -5, 4, -12, -6, 17, -9, -10, 10, 6, -6, 6, -15,
-2, 10, -19, 5, 11, 6, -4, 4, -12, -6, 17, -7, 7, -24, 18, -2, 6, -13, -5, 13,
-20, 22, -22, 16, 1, 2, -8, -10, 19, -9, -8, -10, 20, -2, 6, -13, -5, 12, -19,
4, -6, 16, 3, 1, -7, -10, 17, -5, 4, -3, -10, -1, 16, -15, -3, 8, -14, 12, 3,
-14, 3, 11, -11, -7, 12, 0, -16, 12, -8, -1, 15, -13, -4, 8, -12, -5, 16, -10,
1, 12, -9, -9, 14, -3, 3, -15, -5, 7, 11, -8, -10, 14, -17, 15, -11, -7, 9, 9,
-6, -11, 14, -2, -11, -6, 1, 4, 13, -9, -8, 10, -12, -3, 1, -4, 8, 8, -3, -13,
16, -4, 5, -6, 6, -12, -3, 10, -17, 19, -20, 15, -1, 3, -9, -6, 12, -17, 17, -3,
-9, 0, 13, -14, -2, 8, -14, 15, -14, -2, 8, 9, -9, -7, 14, -19, 20, -7, 9, -18,
5, 3, -11, 17, -22, 22, -22, 17, -11, 2, 6, -12, 15, -21, 20, -5, -5, -14, 15,
1, -5, 7, -16, 17, -17, 1, -5, 10, 6, -7, 6, -16, 16, -2, 1, 0, -9, -6, 12, -4,
-11, 13, -14, 8, 7, -13, -2, 11, -6, -10, 10, 5, -17, 10, -4, -6, 17, -10, -7,
9, -8, -9, 16, -7, -3, 13, -5, -12, 14, -1, 2, -11, -9, 8, 10, -2, -16, 16, -17,
11, -5, -11, 9, 8, -1, -14, 13, 1, -11, -7, 1, 2, 14, -5, -11, 11, -9, -7, 3,
-5, 8, 8, 0, -16, 14, -1, 3, -3, 3, -6, -11, 15, -20, 19, -16, 9, 5, -1, -3,
-12, 16, -18, 14, 2, -10, -2, 13, -9, -8, 12, -16, 13, -9, -8, 9, 8, -3, -13,
17, -19, 16, -3, 5, -11, -4, 11, -18, 21, -23, 21, -17, 9, -1, -8, 14, -20, 21,
-21, 15, 1, -6, -12, 7, 8, -15, 18, -19, 15, -10, -5, -1, 3, 11, -17, 18, -17,
10, 4, -2, 3, -7, -9, -3, 16, -17, 13, -8, 0, 12, -8, -9, -2, 13, -12, 5, 9,
-13, -1, 7, -13, 0, 12, -12, 7, 0, -14, 11, 2, -9, -4, 16, -14, 8, 5, -1, -2,
-16, 6, -8, 20, -18, 12, -6, -3, 9, -18, 7, -8, 18, -14, 5, 9, -9, -8, -2, 2,
-5, 17, -14, 8, -1, -12, 4, -5, 4, -5, 16, -11, 3, 9, -4, 4, -5, 4, -5, -5, -11,
15, -8, -1, 8, -3, 3, -5, -3, -6, 8, 0, -3, -4, 4, 6, -3, -9, -2, 10, -9, -2, 2,
-1, 9, -12, 0, 1, 10, -10, 3, 2, -13, 18, -8, 8, -22, 17, -11, 3, 4, -13, 18,
-22, 22, -21, 15, -9, -1, 8, -16, 22, -11, -3, -14, 21, -12, 3, 4, -12, 16, -20,
6, -9, 17, -7, -2, 9, -16, 19, -7, 6, -5, -4, -14, 12, 2, -9, 13, -16, 13, 1,
-8, -10, 8, 4, -11, 13, -1, -12, 6, -1, -14, 11, 2, -9, 12, -12, -3, 11, -3,
-11, 7, 7, -14, 16, -5, 6, -15, -3, -3, 5, 9, -16, 18, -19, 15, -10, -6, 0, 2,
11, -16, 17, -3, -7, -10, 5, -6, 7, 8, -13, 15, -14, -1, -2, 1, -2, 3, 10, -15,
15, -1, 1, -1, -1, 1, -4, -12, -1, 14, -12, 7, 6, -3, 2, -5, -12, 1, 9, 6, -14,
3, 8, -3, -1, -15, 2, 9, -6, -9, 12, 4, 2, -4, -11, -2, 13, 0, 3, -10, -3, 13,
-8, -7, -6, 17, -14, 8, -2, -7, 16, -9, -8, -5, 13, 2, -8, -10, 7, 9, -3, -11,
-3, 14, -9, -5, 0, 3, 12, -5, -11, -3, 10, 4, -3, 3, -8, -7, 10, -13, -2, 12,
-8, 0, 11, -9, -7, 11, -15, 1, 6, 10, -14, 1, 5, -12, 14, -16, 1, 8, -2, -12,
11, 0, -8, 10, -9, -4, 9, 5, -3, -5, -10, 4, 4, 0, -10, 13, -6, -4, 5, -11, 5,
1, 4, -10, 8, 6, -5, -2, -2, 2, 1, -9, -8, 15, -6, -3, 9, -3, 1, 1, -12, -4, 8,
9, -9, -6, 12, -2, 1, -12, -5, 10, 0, -13, 7, 9, 1, -1, -10, -7, 11, 5, 0, -3,
-13, 15, -4, -6, -11, 15, -4, -4, 10, -15, 16, -2, -9, -8, 9, 8, -6, -10, 0, 13,
0, -8, -10, 13, -1, -10, 1, -1, 12, 2, -11, -6, 7, 8, -3, 2, -2, -12, 8, -4,
-12, 13, -3, -5, 10, 0, -14, 12, -8, -7, 7, 9, -4, -11, 14, -16, 12, -7, -9, 10,
2, -11, 1, 12, -14, 11, -6, -9, 8, 7, 0, -1, -13, -2, 10, -3, -12, 11, 1, -8,
11, -13, -2, 11, -5, -9, 7, 9, -2, -13, 0, -3, 11, -3, -12, 10, 3, -10, -1, 1,
-4, 13, -5, -9, 6, 10, -2, 3, -4, 4, -14, -3, -3, 5, 8, -13, 15, -3, 4, -12, -5,
0, 2, 13, -5, -9, 7, 6, -13, -3, -3, 5, 8, -14, 2, 9, 5, -11, -6, 0, 1, 14, -6,
6, -19, 13, -8, -6, 0, 1, 12, -17, 18, -17, 11, -5, -9, 3, -2, 16, -7, -6, -10,
16, -8, -6, -1, 2, 11, -16, 3, -5, 13, -4, -9, 2, -1, 13, -3, 2, -1, -7, -8, 4,
-6, 5, 8, -10, 5, 7, -11, -3, 1, -5, 3, 10, 1, -8, 1, -5, -2, 4, -9, 4, 9, -11,
3, 2, -8, 4, 2, -8, 2, 10, 2, -9, -5, -3, 5, 5, -12, 4, 8, -9, -5, 3, -6, 10, 3,
-11, 1, 12, 0, 2, -3, 2, -7, -10, 2, -3, 15, -14, 9, 3, 0, -4, -12, 3, -3, 13,
1, -10, 1, 11, -9, -8, -1, 0, 12, -9, -6, 9, 6, -5, -12, 3, -4, 15, -3, 5, -12,
0, 7, -16, 6, -8, 19, -16, 11, -5, -3, 9, -17, 6, -7, 15, -1, -5, -11, 9, 3,
-12, 3, -5, 15, -11, -3, -2, 5, 7, -14, 3, -4, 12, 2, -1, 1, -6, -9, -1, 0, -3,
13, -9, 2, 9, -7, -8, 0, -1, 0, 7, 7, -12, 1, 5, -13, 3, -3, 1, 8, -2, -11, 10,
1, -9, -1, 0, -2, 10, 2, 1, -5, -10, 3, -4, 4, -6, 14, -9, 2, 4, -13, 4, -4, 3,
-3, 9, 5, -7, -8, 0, -1, -1, 1, -3, 11, -4, -8, 2, -3, 1, -2, 1, -3, 9, 4, -2,
1, -2, 0, -1, 0, -1, -7, -9, 8, 5, 1, -2, 2, -4, 4, -13, 4, 1, -8, 13, -6, 4,
-5, 4, -11, -4, -1, 2, 10, -2, 2, -3, 3, -10, -1, 9, -6, -7, 9, 0, 0, 0, -6, -9,
7, 3, -9, 9, 0, -2, 3, -10, 2, 3, -10, 4, 4, -1, -1, 0, -5, -4, 4, -5, 1, 7, -3,
-2, 1, -6, 3, 4, -7, 4, -3, -1, -1, 1, -3, 2, 4, 1, -1, -12, 5, -4, 4, -6, 9,
-3, -4, 7, -13, 3, -3, 2, -3, 6, 6, -6, -7, -1, 0, -2, 2, -4, 9, -1, -9, 2, -2,
1, -2, 1, -3, 6, 5, -2, 1, -2, 0, -1, 0, -1, -5, -9, 5, 5, 1, -2, 2, -4, 3, -9,
-1, 5, -10, 12, -4, 3, -4, 3, -7, -6, 0, -1, 10, -2, 2, -3, 2, -7, -3, 8, -3,
-8, 7, 1, -1, 0, -5, -8, 3, 6, -9, 7, 2, -3, 3, -8, -2, 6, -10, 1, 7, 2, -1, 0,
-4, -8, 1, -3, 1, 6, 4, -4, 3, -7, -4, 8, -2, 2, -10, 5, 3, -2, -2, -11, 4, 3,
4, -12, 7, 1, 1, -5, -6, 9, -12, 12, -11, 6, 2, -1, -2, -10, 3, -5, 12, -10, 6,
2, 0, -3, -7, 9, -2, -6, -4, 7, 3, 0, -2, -9, 2, 6, -5, -5, 8, 2, 1, -3, -7, 8,
-10, 1, -3, 6, 4, -1, -1, -10, 2, -4, 3, -4, 8, 2, 1, -3, -6, 7, 0, -1, 2, -7,
-1, 7, -4, -6, -2, 8, 0, 1, -6, -2, 8, -5, -5, 6, -7, 3, 5, -8, 0, 6, -3, -7, 0,
-1, 6, 3, -6, -2, 7, -4, -3, 3, 3, -10, 4, -2, -3, 6, -3, -1, -3, 7, -8, 4, 1,
-4, 6, -5, -4, 5, -2, -6, 2, 2, 0, 3, -3, -6, 4, 0, -7, 5, -2, -3, 8, -5, -4, 5,
1, -7, -2, -2, 3, 5, -3, -6, 6, 0, -6, 1, 5, -7, -1, 4, -8, 8, -2, -4, -6, 7,
-2, -3, 5, -8, 8, -1, -6, 2, 0, -8, 5, 2, -6, 6, 0, -6, -4, 1, -2, 3, 4, -6, 5,
1, -7, 2, 3, -1, -2, -7, 1, 5, 1, -5, -4, 4, 3, -2, -7, 1, 3, 4, -9, 4, -1, -3,
6, -9, 3, 2, 4, -8, -1, -2, 2, 4, -7, 1, 4, 3, -7, 1, 5, -4, -5, 0, -1, 5, 1,
-4, -5, 4, 2, -6, 0, -1, 4, 3, -7, 1, 1, -7, 1, -2, 0, 4, 2, -5, -4, 0, -1, 0,
-1, 0, 3, 3, -6, 0, 4, -2, 1, -2, 1, -7, 3, -1, -6, 4, 2, 1, -2, 2, -7, 1, -7,
5, -4, 0, 4, -2, 1, -8, 7, -8, 1, -3, 4, 2, -1, -1, -6, 6, -6, 3, 3, -5, -1, 4,
-2, -5, 4, -4, -3, 5, -2, -3, 5, -2, -5, 5, -6, 3, -1, -6, 3, 2, 0, -7, 5, -5,
-2, 0, -2, 2, 3, 0, -7, 6, -6, 3, 1, -1, -2, -5, 5, -7, 5, -5, -2, 2, 3, -2, -5,
6, -8, 6, -5, 2, -1, -1, 3, -7, 6, -7, 5, -3, -2, -1, 3, 0, -4, 5, -4, 3, -5,
-1, 3, -1, -3, -3, 3, -1, 2, -4, -2, 2, 3, -4, -2, 4, -6, 5, -5, -1, 2, 2, -2,
-4, 1, -2, 5, -4, -2, 2, 3, -3, -3, 4, -1, -5, -1, -1, 2, 3, -3, -4, 0, 4, -4,
-1, 0, 1, 4, -3, -2, 3, -4, -1, 0, -1, 2, 2, -2, -4, 0, -1, 0, -1, -1, 1, 3, -2,
-3, 4, -1, 0, -1, 1, -3, -2, 3, -6, 1, 2, 2, -2, 2, -4, -1, -3, 0, 2, -5, 5, -3,
2, -6, 3, -2, -3, 0, -1, 5, -2, 2, -6, 3, -1, -2, 4, -3, -3, 2, 1, -5, 1, 0, -5,
2, 1, -3, 2, 2, -5, 2, -1, -2, 3, -5, 1, 1, 2, -5, 1, 0, -4, 1, -2, 1, 1, 2, -5,
2, -1, -2, 3, -2, 1, -5, 3, -3, 0, 1, -5, 2, 0, 2, -6, 4, -4, 1, 0, -3, 3, -6,
5, -6, 4, -3, 0, 1, -4, 1, -3, 5, -5, 3, -3, 0, 1, -3, 4, -2, -2, -3, 3, -2, 0,
1, -4, 1, 1, -2, -3, 4, -3, 0, 1, -3, 3, -5, 1, -2, 3, -2, -1, 2, -4, 1, -2, 1,
-3, 3, -2, 0, 1, -3, 3, -1, 0, -1, -2, -3, 1, 1, -3, 0, 1, 0, -1, -1, -3, 1, 0,
-3, 2, -4, 1, 0, -1, -2, 0, 1, -3, 1, -2, 2, 0, -2, -3, 1, 1, -3, 2, -2, -2, 1,
-1, -3, 1, 1, -3, 1, -2, 1, -1, -1, -1, 0, 2, -3, 3, -3, 0, -1, 0, -1, 0, 1, -3,
2, -3, 1, 0, -1, 0, -1, -2, -1, 1, -2, -1, 1, 0, 0, -1, -2, -1, 2, -3, 1, -1,
-1, 2, -2, -1, -1, 2, -2, -1, -1, 0, 1, -1, -2, -1, 1, -2, 0, 1, -2, -1, 1, -2,
0, 1, -1, -2, 1, -1, -1, 1, -2, -1, 1, -2, 0, 0, -2, 1, 0, -2, -1, 1, -1, -1, 0,
-1, 0, 0, -2, -1, 1, -2, 0, 0, -1, -1, -2, 0, -1, 1, -1, -2, 0, 0, -1, -2, 0,
-1, 1, -2, 0, 0, -1, 1, -2, 0, -1, 1, -1, -1, -1, 0, 1, -2, 0, -1, 1, -1, -1, 1,
-1, -1, -1, 0, -1, 0, -1, -1, 0, 0, -1, -1, 0, -1, 1, -1, -1, 0, -2, 0, -1, 0,
-1, 0, -1, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0, -1, 0, -1, -1, 0, -1, -1, -1,
0, 0, -1, 0, -1, -1, -1, -1, 0, 0, -1, 0, -1, -1, 0, -1, -1, 0, -1, 0, 0, -1,
-1, -1, -1, -1, 0, 0, -1, -1, 0, -1, 0, -1, -1, -1, -1, 0, -1, 0, -1, 0, -1, -1,
0, 0, -1, -1, 0, -1, 0, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, 0, 0, -1, -1,
-1, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, };

#endif /* CASIOSKSIX_H_ */
