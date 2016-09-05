#ifndef DRMEIGHT_H_
#define DRMEIGHT_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define DRMEIGHT_NUM_CELLS 5415
#define DRMEIGHT_SAMPLERATE 16384
 
const int8_t __attribute__((section(".progmem.data"))) DRMEIGHT_DATA [] = {0,
-1, 0, -1, -1, -1, 0, 0, 0, 0, -2, 0, 0, 0, -2, 0, 1, -1, -1, 0, 0, -1, 0, -2,
-1, 2, 1, -5, -1, 1, 0, -1, 1, -3, 0, 3, -2, -1, -3, 1, -1, 2, -2, -3, 2, 1, 2,
-3, -5, 1, 2, 0, 1, -4, 3, -1, -1, 0, -2, 1, -2, 1, 2, -2, -6, 7, -2, -2, -1,
-3, 3, -3, 2, 0, 0, -4, 3, -2, 0, -3, 0, 1, -1, 1, 0, 2, -7, 3, 0, -5, 5, 3, -5,
-1, 1, -2, 0, -1, -3, 4, -2, -1, 0, 1, -1, 0, -1, -2, 5, -6, -1, 5, -3, -3, 1,
-1, 3, 0, -3, -2, 2, -1, -1, -5, 8, -4, 0, 0, -6, 7, -6, 0, -1, 8, -8, 0, 2, -1,
1, 0, -5, 0, -1, 2, 0, -8, 6, -2, 3, -3, -2, -5, 4, -1, 5, 2, -14, 2, 3, -1, -1,
2, -7, 5, 0, -3, 5, -10, 3, 3, 1, -8, 3, 2, -6, 9, -9, 1, 4, -3, -2, 2, -3, 0,
-1, -6, 3, 6, -3, -1, 1, 0, -9, -2, 11, -7, 7, -7, -1, 2, -1, -4, -2, 6, 7, -11,
-10, 17, -6, -4, 0, -2, -3, 10, -6, 3, 3, -11, 5, -4, -2, 5, 0, -6, 6, -6, 10,
-7, -10, 13, 0, -4, -6, 3, -1, 6, -9, 1, 6, -3, -12, 6, 5, -1, 0, -12, 10, 3,
-5, -9, 6, 3, 4, -5, -3, -8, 6, 3, 0, -4, -6, 12, -8, 1, 1, -5, 2, 0, 2, 6, -18,
14, -14, 9, 5, -11, 9, -16, 12, -6, 2, 0, -1, 0, -12, 6, 10, -6, 2, -3, -4, -3,
0, 1, -3, 1, 9, 0, -12, 2, -1, 0, -2, 3, -4, 7, -1, -1, -4, -3, 7, -11, 4, 9,
-5, -11, 7, 12, -17, -7, 16, -9, 7, -2, -13, 11, 0, -2, -3, -4, 14, -9, -10, 12,
-6, 6, -5, -2, 5, -11, 8, 0, -7, 3, 13, -8, -12, 5, -3, 7, -6, 6, -2, -10, 1, 5,
4, -5, -1, -5, 6, 0, 4, -12, -2, 2, -1, 12, 1, -13, -11, 15, -4, -6, 15, -7, -5,
8, -16, 6, 1, 7, -4, -14, 5, 5, 3, -3, -2, -4, 1, -2, 5, -8, 0, -2, 8, -5, -7,
6, 3, 3, -5, 1, -9, -2, -3, 13, 2, -3, -8, -1, 5, -3, -2, 0, -6, 4, 5, -1, 1,
-4, -7, -4, 15, -14, 10, -3, 0, 0, -7, 11, -14, 8, -1, -9, 9, -2, 4, -9, -4, 11,
-5, 4, -6, 4, 6, -20, -1, 22, -5, -12, 3, 8, -3, -14, -4, 26, -10, 0, -5, -13,
23, -8, -11, 1, 14, -8, 4, -9, 5, -8, 7, -1, -8, 13, -14, 16, -18, 10, 1, -6,
-1, -1, 6, -8, 10, -4, -7, 9, -3, -17, 16, 0, 2, -6, 4, -1, -16, 24, -12, -14,
14, -1, -8, 14, -1, -2, -19, 7, 10, -3, 4, -15, 12, -15, 11, 4, -10, 10, -6, -8,
0, 2, 9, -15, -3, 23, -12, -2, 5, -16, 5, 14, -19, 0, 1, 4, 15, -10, -11, 2, 3,
2, 2, 2, -15, 6, -5, 1, 8, 3, 1, -15, 7, -17, 21, 2, -11, -6, 4, 9, -6, -2, -15,
20, -5, -2, 12, -11, -7, 7, -2, 1, -4, -3, 9, 2, -17, 8, 8, -19, 11, -2, 3, 2,
-8, -3, -6, 14, -3, -5, -7, 3, 15, -17, 10, -4, -5, -3, 9, 4, -9, -1, -14, 23,
-19, 6, 2, -3, 13, -28, 20, -3, -18, 12, 11, -16, -13, 27, -2, -10, -1, -9, 4,
10, -4, -16, 12, 0, -8, 3, 12, -2, -20, 8, 1, -4, 3, 4, 2, -14, 9, 6, -21, 17,
-4, -8, -3, 2, 16, -14, 1, -3, 1, 8, -23, 10, 16, -25, 17, 10, -21, -8, 6, 4,
-1, 7, -7, -13, 12, 3, -8, 13, -5, -18, 9, -1, 0, -4, 3, 17, -13, 1, -12, -3,
12, -7, 3, 1, -5, 10, -13, -2, 14, -6, -9, 11, 1, -22, 28, -18, 13, -16, -12,
28, -12, 18, -42, 27, -1, -9, 24, -22, -8, 3, 13, -6, -5, 1, 10, -23, 12, 5, -1,
-1, -10, 6, 3, -1, -21, 14, 8, 6, -9, -15, 14, -2, 3, -17, 10, 1, -6, 16, -14,
-3, 2, 13, -27, 8, 6, -5, 4, 6, 0, -9, 8, -20, 5, 6, 2, -3, 2, -1, 0, -17, 7,
22, -12, -17, 1, 22, -13, 0, 11, -8, -19, -3, 28, -7, 5, -9, -11, -2, 15, 1,
-18, 16, -10, 15, -12, -13, 4, 27, -16, -20, 16, -5, 7, 3, -9, -13, 12, 6, 0,
-9, 7, -8, -9, 4, 8, 3, -8, 7, -13, 4, -9, 12, 3, -9, 17, -28, 9, 6, -1, -11, 0,
19, -12, -7, 8, 5, -2, -16, 6, 9, -22, 21, -6, 7, -14, -9, 15, -9, 13, -7, -8,
13, -11, 2, 7, -29, 20, 24, -24, -19, 22, -5, -5, 3, -4, 16, -16, -1, -3, 12,
-5, -18, 16, -3, -13, 11, 28, -38, 2, 10, -14, 8, -7, 8, 12, -21, 3, 6, -18, 19,
-6, 6, -14, -3, 7, 0, 9, -7, -11, -2, 15, -3, -5, 3, -6, -4, 25, -26, -5, 13,
12, -5, -20, -1, 9, 4, -3, 8, -21, 29, -27, 7, -5, 1, 25, -22, 3, -12, 5, -6,
24, -9, -8, 0, -3, -17, 28, -8, 4, 1, -16, 4, 7, 6, -20, 19, -20, 21, -23, 16,
-10, -2, -3, 19, -8, -7, 13, -42, 33, -1, 10, -20, 4, -6, 2, -8, 11, 6, -2, -11,
-1, 13, -21, 10, -2, 12, -14, 0, 6, 2, 0, -21, 9, 18, -6, -3, -10, -2, 8, -3,
-22, 21, 25, -16, -21, 16, -10, -8, 31, -13, 3, -29, 4, 11, -3, 23, -16, -8, 9,
-13, 15, 3, -28, 2, 17, 6, -14, -1, -1, 3, 1, 6, -16, 12, 2, -5, -7, -4, 15,
-29, 34, -2, -27, 10, 8, 2, 4, -24, 4, 2, 4, 14, -14, 0, -3, 11, -18, 9, 5, -8,
-3, 7, -10, 13, -8, -4, 1, 6, 3, -8, 7, -24, 21, -12, 7, -11, 19, -14, -5, 27,
-29, 2, 10, -13, -1, 17, -8, 0, -14, 16, -11, -15, 32, -22, 5, 16, -20, 11, -19,
8, 5, -6, 6, -10, 8, 5, -17, 5, 8, -5, 2, -2, -14, 7, 17, -20, 13, -13, -6, 8,
15, -5, -17, 14, -19, 8, 9, -5, 5, -14, 7, -6, 3, 16, -13, -8, -1, -3, 10, -1,
0, -2, -12, 25, -15, -4, -4, 7, -8, 1, 25, -17, -20, 3, 25, -14, -5, 4, 4, -14,
22, -11, -3, -4, -16, 20, -12, 13, 1, -2, -15, 17, -5, -8, -7, 6, 23, -26, 4, 7,
-11, -12, 29, -3, -16, 1, -17, 22, 3, 0, 9, -26, -5, 14, -7, 4, 11, -12, 2, -8,
-17, 39, -1, -34, 22, -6, -7, 6, 15, -5, -25, 15, -7, -8, 9, 19, -10, -6, -7,
-20, 20, 7, 8, -16, 3, 5, -8, -9, 3, 5, -6, 6, 10, -24, -11, 47, -24, 7, -26,
13, 20, -30, 3, 12, -1, -7, 3, -12, 31, -23, -7, 11, -3, -15, 16, 7, -21, 24,
-24, -1, 24, -24, 1, 17, 4, -33, -2, 20, 3, 10, -22, 5, -4, 11, -5, -22, 13, -1,
9, 0, -3, -7, -9, 2, 25, -14, -9, 8, -7, 2, -8, 9, -13, 28, -24, -1, 11, -10,
21, -28, 3, 1, 12, -21, 0, 23, -12, 11, -13, -7, 17, -30, 6, 20, 2, 6, -35, 6,
22, -6, -10, 2, -1, -14, 12, 7, -7, 12, -14, 6, 0, -23, 17, 8, -22, 6, 12, -7,
11, -19, 9, -11, -3, 26, -31, 25, 6, -18, -5, -4, 9, 0, -3, -6, 10, -6, 18, -20,
-10, 24, -16, 11, -2, -17, 15, -7, 8, 8, -21, -11, 15, 19, -18, -5, 0, 5, -2, 7,
-9, 4, -8, -4, 13, -6, -1, -4, 0, 18, -29, 9, 22, -23, 7, -5, 12, -34, 32, 2,
-31, 25, -2, -16, 10, -12, 12, 6, -19, 13, -7, 16, -8, -14, 14, -16, 8, 8, -10,
15, -45, 35, 11, -23, 1, 14, -21, 0, 31, -31, 10, 2, 9, -26, -3, 21, -7, 16, -3,
-29, 12, 1, 10, -29, 30, 0, -44, 62, -16, -30, 3, 22, -7, 3, 0, -23, 14, 9, -20,
6, 11, -2, 5, -33, 25, 1, -8, 31, -34, -14, 0, 25, -13, 1, 8, -3, 8, -17, 12,
-25, 20, -11, 4, 7, -20, 13, 12, -3, -29, 23, -1, -20, 8, 29, -21, -21, 5, 17,
6, -21, 7, -11, 16, 7, -25, 8, 8, -5, -5, 1, -3, 4, 1, -12, 18, -14, 12, -2,
-13, 3, -15, 34, -19, -14, 29, -4, -32, 20, 0, 6, 6, -22, -1, -3, 22, -14, 15,
-12, -19, 23, 3, -19, 10, -2, -6, 7, 2, 7, -15, -5, -4, 10, 11, -3, -22, 35,
-42, 10, 15, -9, 16, -22, 5, -13, 23, -31, 25, 22, -35, -7, 31, -26, -11, 38,
-31, 5, 19, -24, 5, 12, -9, -1, 2, 10, -41, 20, 36, -44, 21, -4, -25, 34, -16,
3, -5, 1, -7, 11, 4, -22, 26, -12, -5, -8, 5, 10, -9, 0, 12, -7, -20, -2, 44,
-34, 3, -2, -12, 32, -33, 29, -13, 4, -6, -17, 11, 6, 5, -7, -11, 0, 13, 7, -11,
-11, 0, 4, 7, 0, -1, -33, 19, 27, -18, 3, -5, -10, 12, -18, 30, -6, -34, 14, 17,
-5, -6, -6, -2, 28, -38, 23, 2, -26, 9, 8, -1, 11, -14, -5, 23, -36, 15, -10,
33, -21, -17, 26, -20, 15, -13, 6, 4, -6, -7, 9, -4, 1, 5, -13, 4, -1, -8, 15,
-2, -2, -7, 1, 5, 2, -9, -4, 10, -14, 23, -20, -4, 14, -9, 3, -3, 3, 8, -9, -6,
-1, -1, 13, -19, 1, 12, -13, 13, 4, -22, 13, 4, -18, 8, 8, 0, -25, 15, 8, -16,
16, -16, 5, 1, 3, 2, -24, 26, 3, -28, 6, 26, -23, -6, 12, -4, 12, -24, 18, 4,
-8, -23, 8, 22, -26, 30, -11, -12, 1, -1, 1, -1, 5, -5, 6, -10, 11, -30, 26, 13,
-17, -1, -15, 35, -26, 0, 5, -4, 0, 8, 3, -10, -13, 19, -3, -14, 7, 4, 18, -29,
2, 4, -3, -7, 18, -10, 15, -16, -11, 11, -3, -7, 1, 46, -52, 7, 17, -16, -1, -6,
21, -10, -21, 12, 16, -7, 6, -9, -14, 6, 3, 2, -10, 27, -34, -1, 27, 0, -31, 2,
39, -29, 16, -31, 23, 0, -21, 21, -17, 7, 13, -8, -18, 7, 16, -1, -14, 4, -13,
13, 20, -44, 5, 17, 5, -3, -9, 1, 5, -4, -11, 15, -3, -2, -6, 6, -8, 1, -2, 19,
-22, 2, 23, -35, 3, 9, 21, -8, -31, 25, 12, -45, 20, 10, 2, -5, -19, 6, 6, 7,
-1, -6, 1, -12, 5, 25, -31, 21, -21, -10, 24, -3, 3, -11, 14, -22, 8, -18, 25,
-4, -5, 18, -7, -9, -15, 20, -13, 0, -12, 20, 10, -13, -5, -2, 2, 10, -26, 18,
6, -16, 6, 4, -10, 2, 3, -2, 11, -21, 6, 13, 1, -31, 10, 7, 16, -28, 11, 15,
-24, 2, 11, -20, 17, 1, -16, 29, -27, 10, -17, 9, -2, 20, -24, 11, 0, -24, 27,
1, -13, 0, 23, -39, 22, 6, -24, -5, 35, -23, -10, 26, -24, 21, -14, 0, 12, -34,
18, 8, -5, -5, 15, 12, -41, 9, 26, -36, 12, 6, -24, 39, -10, -7, 4, -16, -15,
39, -19, -8, 10, -2, 17, -22, -1, 2, -4, -1, 21, -22, 14, -12, 13, 1, -31, 20,
-10, 20, -9, -5, 19, -28, 9, 5, -15, 22, -18, -1, 10, -2, -7, 1, 13, -9, 5, -23,
-6, 31, -6, -7, 1, 1, 3, -7, -3, -13, 20, 9, -34, 25, 7, -31, 7, 23, -16, -15,
22, -6, -8, 13, -6, -14, 23, -22, 5, 15, -20, 11, 3, -10, -3, 18, -23, 12, -5,
5, -5, -14, 24, -4, 4, -21, 3, 21, -23, 3, 10, -26, 35, -9, -24, 20, -1, -20,
21, 12, -35, -2, 27, 2, -8, 2, -28, 11, 17, -14, 7, 3, -2, 1, -13, 16, -14, 4,
-23, 16, 36, -30, 7, -31, 20, -1, -6, 10, -3, 10, -26, 3, 13, 3, -24, 28, -12,
5, 0, -22, 18, -21, 18, -10, 13, -7, 0, 1, -4, 6, -11, 3, 17, -19, 9, -16, -9,
33, -11, 6, -44, 45, 5, -28, -3, 11, 7, -9, -3, 19, -7, -32, 24, 4, -11, 10,
-10, 4, 1, -19, 45, -27, -1, -23, 14, 17, -5, -10, 3, 7, -22, 26, -17, 8, -21,
14, -3, 6, 8, -19, 1, 4, 1, -16, 30, -15, 3, -14, -1, 14, -27, 44, -14, -28, 14,
8, -15, 13, -4, -6, -9, 4, 33, -19, -7, -26, 15, 25, -8, -20, 11, 4, -13, 1, 15,
-8, -2, -6, 10, 4, -24, 11, 6, 11, -31, 15, 8, -15, 5, 16, -27, 14, 2, -23, 28,
-17, -7, 15, -1, -4, 4, -17, 17, -3, -24, 27, 3, -34, 34, -6, -19, 10, -2, 8,
-5, -6, -5, 5, 19, -9, -30, 29, -11, -6, 26, -13, -18, 4, 11, -22, 17, 4, -19,
25, 6, -26, -3, 22, -27, -4, 24, 3, -25, 14, 12, -22, 8, 5, -15, -9, 7, 14, 11,
-31, 7, 3, 6, -14, 8, 4, -12, 10, -25, 23, 13, -18, -2, 4, -11, 2, 7, 18, -28,
-8, 31, -33, 3, 21, -4, -18, 21, -13, -11, 24, -14, 9, -5, -14, 6, 8, 3, -8,
-27, 19, 9, 5, -2, -5, 2, -23, 11, 6, 4, 2, -11, 0, -13, 13, 10, 3, -10, -15, 6,
-8, 23, -4, -7, -11, 15, -1, -10, -7, 8, 12, -8, -8, -5, 16, -28, 19, 6, 0, -13,
-14, 20, 21, -27, -10, 30, -21, -6, -9, 11, 9, 10, -27, 10, 14, -35, 23, -4, -2,
20, -13, -22, 14, -7, 3, 2, 16, -4, -28, 18, 9, -11, -10, 2, 0, 22, -25, 13, 1,
-16, 9, -18, 18, 8, 2, -12, -20, 17, -11, 18, 10, -11, -27, 3, 28, -31, 17, 11,
4, -19, 12, -30, 7, 19, -2, 0, -22, 24, -1, -11, -14, 20, -3, -2, -11, 11, 5,
-7, -20, 3, 32, -11, 8, -44, 15, 28, -24, 20, -9, -2, -8, -23, 32, 15, -30, 9,
-1, 8, 2, -23, 7, -6, 30, -18, -18, 24, -5, -6, 2, -7, -7, 19, -9, 8, -9, 7,
-18, -7, 40, -36, 8, 17, -33, 14, 7, 1, 1, -11, -1, -3, 12, -13, 7, 12, -12,
-28, 26, -1, 8, -6, -11, 19, -38, 43, -6, -33, 7, -6, 44, -15, -23, 13, -18, 11,
13, -10, -13, 11, 2, -1, -6, 11, -7, -1, 2, -7, -2, 6, 1, 0, 5, -11, -3, -4, 23,
-10, -19, 9, 16, -18, 9, -14, 5, 20, -15, -7, -2, -2, 8, 24, -34, -11, 18, -3,
14, -10, -8, 13, -30, 23, 6, -2, 8, -39, 22, -3, -7, 20, -25, 13, 19, -26, -5,
14, -4, -19, 15, 12, -12, -1, -5, 16, -16, -11, 19, 4, 1, -13, -13, 11, 3, 1,
-11, 2, 27, -13, -20, 6, 4, -6, 6, -7, 7, -11, 10, 18, -30, -1, 15, -8, 3, 5,
-22, 2, 8, 4, 9, -19, 29, -27, -18, 26, -10, 10, -21, 22, -3, -14, 6, 3, -12,
17, -3, -10, -13, 14, 26, -59, 59, -23, -7, 21, -36, 30, -39, 30, 4, -34, 45,
-19, -13, 14, -6, -1, -12, 23, -1, -29, 15, 9, -14, 4, 5, -6, -3, 21, -23, 3, 6,
-14, 34, -43, 14, -5, 15, -17, -10, 55, -32, -15, 1, 10, -11, 10, 8, -25, -4,
44, -34, 0, 5, -7, 9, 6, 2, -36, 21, -1, 15, -19, 2, 6, -5, 22, -18, -16, -7,
18, 13, -17, -3, 13, -17, 14, -8, 4, 10, -24, 7, 5, -17, 9, 14, -16, 9, -1, -8,
3, 0, -16, 28, -8, -12, -3, 9, -2, 0, -1, -4, 21, -24, 10, -14, 17, -1, 2, -33,
0, 28, -5, 8, -13, 6, -7, 2, -3, -18, 22, -6, -4, 30, -34, 13, -16, -10, 16, 21,
-23, 0, 7, -21, 22, 2, -14, -14, 36, -21, -8, 0, 12, 1, -8, 15, -23, 15, -10,
-2, 14, -23, 24, -10, -4, -4, -16, 30, 2, -15, -26, 31, 22, -36, -5, 19, 6, -7,
-23, 3, 15, 16, -23, -17, 14, 7, 14, -7, -4, -21, -4, 23, -5, -9, 21, 8, -47,
-1, 42, 4, -27, -6, 6, 0, 14, -15, 7, -3, -13, -6, 20, 10, -5, -10, -15, 13, -9,
11, -11, 7, 11, -17, 14, -28, 28, -12, 0, 17, -32, 26, -37, 27, -1, 9, 10, -35,
-15, 34, 0, -7, 12, -22, 8, -16, 36, -11, -20, 2, 15, -17, 2, 10, -6, 6, -13, 3,
-2, 10, -10, 6, 6, -26, 8, 3, -2, 10, -8, 13, -20, 6, 1, 8, -11, -12, 21, -13,
0, -7, 32, -19, -10, 6, -7, 4, -4, 10, -2, -7, -1, 22, -39, 23, -9, -5, 31, -35,
13, -20, 17, 19, -15, -27, 25, -11, 17, -1, -31, 41, -33, 25, -38, 20, 6, 0, -1,
-17, 28, -14, 3, -33, 43, -32, 16, 14, -25, 3, 4, 5, -8, 11, 3, -20, -2, 18,
-32, 31, -14, 7, 2, 5, -12, -19, 22, 16, -11, -28, 18, -25, 35, 8, -28, 26, -32,
25, -33, -4, 53, -54, 26, 8, -10, -12, 16, -2, -25, 27, 5, -21, -8, 15, 13, -23,
-16, 36, -7, -3, -14, -7, 24, -6, 5, -22, -5, 18, 12, -16, -23, 32, -7, -3, 3,
3, -32, 25, 14, -23, 13, -7, 5, -7, -2, -8, 21, -11, -5, -1, -4, 20, -5, -12,
-9, 7, 8, 6, -8, -23, 26, -11, 24, -21, -14, 21, -27, 26, -12, 7, -17, 19, -15,
7, 8, -21, -3, 9, 12, -11, 11, -24, 13, 10, -9, -27, 29, -2, -12, -1, 8, 3, -6,
9, -26, 14, 17, -29, -4, 46, -35, -6, 9, 0, 2, 2, -3, -28, 17, 22, -3, -30, 23,
-5, -5, 7, -14, 4, 9, 1, -6, -11, -12, 29, -14, 7, -7, 5, -2, -15, 24, -14, -3,
-9, 16, -2, -3, 1, -2, 13, -10, -17, 12, 12, -25, 14, -10, 1, 14, -11, 7, -9,
10, -20, 13, -3, -4, 1, 0, 16, -15, -2, -12, 22, -6, -7, 3, -6, 4, 7, -1, 2,
-21, 5, 5, 0, 3, -6, 11, -10, 3, -6, -2, 9, 1, -5, -4, -9, 14, 5, -3, -19, 7,
12, -15, -2, 18, -23, 15, 12, -20, 5, -16, 7, -4, 27, -14, -11, -6, 22, -11,
-16, 30, -5, -35, 12, 32, -18, 10, -29, -7, 38, -21, 3, 10, -34, 26, -4, 5, 2,
-13, -12, 20, -5, -18, 25, -14, -4, 5, 3, 4, 2, -15, -5, 16, -18, 9, 20, -39,
21, -19, 17, 13, -20, 9, -8, -3, -2, 8, -8, 4, 2, -6, 11, -1, -12, -4, -3, 24,
-20, 6, -7, 8, -2, -11, 16, -9, -1, -1, 13, -4, -1, -17, 0, 5, 3, 11, -17, -12,
29, 7, -25, -9, 13, 0, -3, 4, -1, -10, -6, 8, 19, -5, -16, -1, -4, 10, -2, 14,
-25, 9, -5, -9, 28, -9, -13, 3, 4, -14, 11, -2, 2, 4, -4, -16, 20, -19, 11, 6,
-24, 19, -2, 1, -12, 6, 4, 2, -11, 9, -11, 11, -6, -12, 19, -11, -3, 0, 14, -15,
12, -14, -4, 17, -12, -4, 2, 8, -4, 5, -10, -4, 6, 3, -14, 7, 5, -6, 3, -4, 1,
-6, 8, -9, -9, 16, 1, -13, 7, -3, -8, 2, 16, -15, 9, 0, -19, 16, -12, 16, -16,
3, 1, -3, 14, -6, -6, -12, 13, -5, 4, -6, 11, 4, -19, -5, 17, 0, -15, 5, -3, 5,
-3, 6, 2, -13, -4, 11, -8, -2, 8, -7, 3, 6, -11, 3, -4, -3, 3, 0, 7, 1, -15, 6,
4, -10, 5, -9, 15, -9, -3, 7, 3, -5, -7, 3, -6, -2, 12, 0, -5, -3, -1, 10, -15,
7, -2, 2, -1, -7, 2, 1, 10, -12, 3, 3, -8, 0, 10, -6, -1, 6, -22, 12, 6, -3, -4,
-1, -3, 5, 0, -3, 7, -21, 14, 2, -4, -2, -3, -5, 6, 14, -18, 0, 6, -3, -11, 17,
-3, -7, 2, -13, 11, 1, 1, -1, -4, -2, 0, 0, 4, -4, -3, -5, 8, 5, -15, 14, -11,
3, 1, -7, 10, -12, 0, 1, 10, -2, -16, 5, 9, 6, -18, 4, 4, -10, 14, -7, -15, 11,
13, -8, -12, 2, 9, -13, 6, 4, -4, 7, -11, -2, 7, 3, -8, -8, 16, -3, -14, 5, 4,
1, -7, 1, -3, 7, -3, -6, 9, -3, -8, 1, 5, -6, 6, -5, 0, 7, -16, 5, 5, -4, 2, -5,
8, -8, -4, 6, -4, 4, 0, -3, -3, 2, 0, -5, -1, 6, -2, 5, -1, -12, 0, 6, 2, -8, 5,
3, -10, 2, 7, -3, -10, 7, 1, -10, 4, 8, -6, -5, 7, -8, 5, -5, -3, 13, -5, -14,
7, 4, -10, 6, -5, 4, 4, -3, -8, 2, -2, -4, 15, -8, -4, 0, 0, 2, -1, -2, -5, 6,
-5, -2, 9, -5, -1, -1, 0, -4, 1, 4, -8, 8, -2, -8, 7, 2, 3, -9, -3, -3, 2, 12,
-8, -1, -4, 3, -2, -2, 2, -5, 3, 0, 4, -5, -1, 2, -9, 6, 0, 0, 0, -5, -1, 6, 2,
-15, 10, -4, 1, 1, -1, -7, 2, 7, -11, 8, -7, 9, -10, 2, 4, -9, 10, -9, 2, -2,
-1, 5, -1, -1, -1, -7, 3, -4, 2, 9, -13, 6, 0, -6, 6, -2, -1, 1, -3, -1, -4, -2,
10, -4, -3, -2, -1, 4, -8, 7, 0, -6, -2, 3, 2, -5, 5, -3, -7, 6, 3, -3, -8, 10,
-1, -12, 9, -5, 5, 1, -6, -3, 1, 5, -4, 1, -5, 4, 4, -3, -5, -5, 5, 5, -4, -5,
5, -4, 3, -3, -6, 9, -1, -1, -6, 6, -5, -3, 9, -7, 2, -3, 0, 1, -4, -1, 9, -8,
3, -1, -6, 9, -12, 10, -3, -6, 6, -4, -2, 5, 0, -6, 7, -7, -2, 7, -6, -1, 1, -1,
3, 0, 0, -5, -2, 2, -3, 4, -1, -5, -1, 5, 2, -6, -1, 3, -8, 2, 10, -10, -2, 6,
-4, -2, 4, 1, -5, 3, 1, -8, 4, 1, -5, 2, 0, 1, -1, 2, -3, -9, 10, -2, -5, 1, 1,
4, -10, 4, -4, 0, 12, -11, -1, 2, -5, 2, -1, 3, -2, -2, -2, 5, -4, -4, 3, 2, 1,
-8, 5, -4, 4, -3, -1, 6, -11, 1, 4, 0, -3, 2, -2, -3, -1, -3, 11, -8, -3, 7, -3,
-5, -2, 8, -3, -1, 0, -5, 0, 5, -3, 3, -6, 1, 2, -4, 3, 0, -4, 3, -2, -2, 2, -3,
5, -3, 3, -9, 2, 0, 1, 0, -7, 8, -4, 0, -2, -2, 2, 0, -2, -3, 5, 0, -3, -3, -2,
3, -3, 4, -1, 0, -6, 1, 2, -2, 5, -4, 1, -1, 0, -5, -1, 5, -2, -3, 3, -4, 2, -1,
-4, 4, -3, 0, -1, 3, -1, -3, -2, -2, 2, 4, -5, 2, -4, -1, 2, 1, 5, -7, -2, -1,
2, -5, 5, -4, 0, 3, -3, 1, -6, 5, -4, 0, 6, -5, -3, 1, 3, -3, -2, 1, -1, -2, -4,
3, 0, 4, -8, 3, 2, -4, 1, -2, 1, -4, 6, -3, -2, 1, -2, 2, -1, 1, -4, 1, 1, -1,
3, -4, 2, -9, 2, 4, 0, 0, -5, 2, -4, 4, -4, 0, 1, -3, 2, 0, -3, -2, 1, 1, 6, -8,
-5, 7, 1, -2, -1, 0, -4, 4, -5, -1, 5, 0, -5, 2, 3, -3, -4, 2, 5, -6, -2, 2, 3,
-3, 1, -4, 0, 1, 3, -6, -2, 5, -5, 2, -1, -1, -1, 0, -2, 3, -3, -2, 0, 2, 1, -3,
-3, 3, -1, -3, 5, -8, 3, -1, -2, 4, -5, 3, -1, -1, 1, -2, -1, 0, -1, -1, 3, -5,
2, -2, 0, -2, -5, 9, -4, -1, 2, -3, -3, -2, 6, 0, -4, 1, -3, 3, -1, -2, 0, -1,
0, -1, -3, 1, 4, -2, -3, 0, 0, 0, 1, -3, 0, 0, 0, -2, 3, -3, 0, 2, 0, 0, -4, -1,
-1, 1, 1, -3, 0, 0, -1, 5, -6, 0, 0, -2, 2, 1, -4, -1, 0, -1, 3, -4, 1, 0, 0,
-2, -3, 1, 4, -6, 0, 3, -4, 2, -3, 0, -1, 1, -1, -1, 3, -7, 0, 3, -1, 0, 0, -1,
-1, 3, -6, 1, 0, 0, -2, 0, 1, -2, 0, 0, 0, -1, -2, 0, 2, -3, 3, -4, -2, 2, -3,
1, 0, -4, 5, -1, -2, -2, 0, 2, -3, 2, -3, 0, -1, 3, -1, -2, -3, -1, 2, 2, -4, 0,
-1, -2, 5, -4, 0, -2, 3, 0, -5, 1, 0, 0, -3, 0, 2, -3, 0, 1, -1, -2, 0, 1, -2,
0, 0, -2, -1, 1, 2, -3, -3, 2, -2, 0, 1, -3, 1, -1, 0, -1, -3, 3, -3, 3, -2, -1,
2, -4, -1, -1, 3, -1, -3, 0, 2, -4, 0, 2, 0, -2, 0, 1, -5, 1, 1, -2, -1, 1, -1,
-2, 3, -1, -2, 0, 0, 1, -1, 0, -2, -1, 0, 0, -1, 1, -2, -2, 0, 3, -4, -3, 4, -3,
-1, 0, 1, 0, 0, -3, 1, -1, -1, 0, -1, 0, -1, 2, -3, 0, -1, 0, 0, -2, 1, -2, -2,
2, 0, -2, 0, -1, 1, -1, -1, 0, 1, -3, -1, -1, 0, 5, -5, 1, -1, -3, 2, 0, -3, -1,
2, -1, 0, -3, -1, 1, -1, 2, -2, 0, -2, -3, 5, -3, -1, -1, 1, 0, -3, 1, -2, 0, 1,
-1, -1, -1, -1, 1, -5, 0, 4, -3, 0, -2, 0, -1, -1, 2, -2, -3, 1, -1, 0, 2, -3,
0, 1, -1, -1, 0, -2, 0, -1, 1, 1, -2, -1, -3, 2, -1, 0, 0, 0, -2, 0, -1, -4, 2,
2, -1, -3, -1, 1, 0, 1, -2, -1, 0, 0, 0, -3, -1, 1, 0, -2, 0, -3, 1, 1, -1, -1,
-2, 0, 0, -2, 1, 1, -1, -2, 0, 1, -4, 1, -2, 2, 0, -3, -1, 1, 1, -2, -2, -1, -1,
0, 2, -2, -2, -2, 3, -2, -1, 1, -3, 1, -1, -2, 2, -1, -1, 1, -4, 1, 0, -2, 1,
-1, 1, -2, -3, 2, -1, -1, 0, -1, -1, 1, 0, -2, -2, -1, 2, -1, -1, -2, 0, 2, -2,
0, -1, -1, 0, 0, -1, -1, 1, -2, 0, 1, 0, -2, -2, 2, 0, -2, -1, -1, 1, 0, -1, -1,
0, -1, -1, 1, -2, 0, 0, 0, -2, -1, 1, -3, 0, 1, -2, -2, 2, 0, -1, -1, -2, 1, 0,
0, -3, 2, -1, -1, 1, -1, 1, -2, -1, -3, 1, 2, -1, -2, -2, 1, -2, 1, 1, -4, 1, 0,
1, -2, -1, 1, -2, 1, 0, -1, -1, -2, 1, 0, -2, 2, -2, -1, 0, 0, -1, -1, 1, -1, 0,
1, -3, 1, -1, -1, 1, -1, 0, -3, 1, 1, -2, 0, -1, -1, 2, 1, -2, -2, 1, -1, -1,
-1, 1, 0, -3, 1, 0, -2, -1, 0, 1, -1, 0, -1, -2, -1, 1, 0, -1, 1, -1, 0, -3, 1,
0, -2, 2, -2, -1, -1, 1, 0, -1, 0, -3, 3, -2, 0, 1, -2, 0, 0, 0, -2, -1, 1, 0,
-2, 1, 0, -3, -2, 0, 1, -1, 0, 0, -1, 0, -1, 0, 0, -1, 1, 0, -3, -1, 1, 0, -1,
0, 1, -2, 0, -1, -1, 1, 0, -2, 1, -2, 0, 2, -3, 1, -1, -3, 1, 0, -1, 1, -3, 2,
0, -3, 0, 0, 0, -1, 0, -1, 0, 0, -2, -1, 0, 1, -2, 0, 0, -2, 1, -2, 0, 1, -2,
-1, 1, -1, -2, 0, 1, -1, -3, 0, 0, 0, -1, -1, -1, 1, -1, -1, 1, -2, 0, -1, -1,
0, 0, -1, 0, -1, 0, -2, 0, 0, -2, 1, -1, -1, -2, 3, -2, -1, 2, -3, 0, -2, 1, 1,
-1, -1, 1, -2, -2, 1, 0, -1, 0, -1, -2, 0, 1, -2, 0, 0, -2, 1, -3, 1, -1, -1, 1,
-2, 1, -1, -2, 0, -1, 0, 1, -2, -1, -1, 0, 0, -1, -2, 0, 1, 0, -1, -2, 0, 0, 1,
-3, 0, 0, -1, -1, -2, 1, -2, 0, 0, -1, 0, 1, -2, -1, 0, -1, 1, -1, -1, -1, 0,
-1, -1, 1, 0, 0, -1, -1, 0, -1, 0, 0, -1, -1, 0, 0, -1, 0, -1, -1, 0, -1, 1, 0,
-1, 0, -1, 0, 0, -1, -3, 0, 1, 0, 0, -1, -2, 0, 0, -1, 1, -1, -1, 1, -1, -1, -2,
0, 1, -2, -1, -1, 0, 0, -1, 0, 0, -2, 0, -1, -2, 4, 0, -3, -1, 0, 0, -1, 1, -1,
-1, 0, -3, 2, -1, -1, 1, -1, 0, -2, 0, 0, 0, -2, 1, 0, -1, -1, -1, 0, -1, 0, -1,
0, 0, -1, -1, 0, -2, -1, 1, 0, 0, -2, 0, 2, -2, -1, 0, -1, 0, 0, 0, 0, -1, 0, 0,
0, -1, 1, -2, -3, 2, 0, 0, -2, 0, -1, 0, 0, -1, 0, -1, 0, -1, 1, -1, 0, -1, 0,
-2, 0, 1, -2, -1, -1, 1, -2, 0, -1, 1, -1, 0, 0, -2, 0, 0, 0, -1, 0, -1, -1, 0,
-1, 0, 1, -3, 0, -1, 0, 1, -2, 0, 0, -1, -1, 0, -1, 1, -1, -1, 0, -1, 1, -1, 0,
-1, -1, 0, 0, -1, 0, -1, 0, 0, 0, -1, -1, 0, -1, 0, -1, 1, -2, 0, 0, -1, -1, -1,
0, 0, 0, -2, 1, -1, -1, 0, 0, -1, 0, -1, 0, -1, -1, 0, 0, 0, -2, 0, 0, -2, 0, 1,
-1, -1, 0, 0, -1, -1, -1, 0, 0, 0, 0, -1, -2, 0, 0, -1, 0, 0, 0, -2, 1, -1, -1,
-1, 0, 2, -3, 0, 0, 0, -1, -1, -1, -1, 0, -2, 0, 0, -1, 0, 0, -1, -1, 0, 0, -1,
-1, 0, -1, -1, -1, -1, 1, 0, -2, 0, 0, -1, 0, 0, -1, 0, 0, -1, -1, 0, -1, 0, 0,
-1, 1, -1, -2, 1, 1, -1, -1, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, -1, 0, -1, 0, -1,
-1, 0, -1, 0, 0, -2, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, -2, 0, 0, -1, -1, 1, -2,
0, 0, -1, 1, -1, 0, -1, -1, -1, 0, 0, 0, -1, 0, -1, -1, 0, -1, 1, -1, 0, 0, 0,
-2, 0, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0, -1,
0, -1, 0, -1, 0, 0, -1, 0, 0, -1, 0, -1, -1, 0, -1, 0, 0, -1, 0, -1, -1, 0, 0,
-1, 0, 0, -1, 0, 0, 0, -1, -1, -1, -1, 0, 0, -1, -1, -1, 0, -1, 0, 0, 0, -1, -1,
0, 0, -1, 0, -1, -1, 0, -1, 0, -1, -1, 0, -1, 0, -1, 0, 0, 0, -1, -1, -1, 0, -1,
0, -1, 0, -1, 0, 0, -1, -1, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, -1, -1, -1,
0, -1, 0, -1, };

#endif /* DRMEIGHT_H_ */