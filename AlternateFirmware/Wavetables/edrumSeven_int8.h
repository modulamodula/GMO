#ifndef EDRUMSEVEN_H_
#define EDRUMSEVEN_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define EDRUMSEVEN_NUM_CELLS 5508
#define EDRUMSEVEN_SAMPLERATE 16384
 
const int8_t __attribute__((section(".progmem.data"))) EDRUMSEVEN_DATA [] = {-1,
0, -1, 0, 0, 0, 0, 0, 0, -3, 0, 9, 1, 11, 54, 21, -2, 17, 7, -5, -8, 3, -9, -2,
20, -3, -3, 16, -2, -19, -31, -29, 4, 0, -27, 10, -1, -22, -1, -11, -21, 11, 6,
-20, 51, 24, -18, 30, 43, -11, 23, 12, -104, -42, 32, -10, 3, 52, -34, -30, 77,
-34, -38, 38, 37, 69, 70, 104, 17, -24, 8, 83, 88, 15, 61, 8, 35, 65, 52, -16,
-50, 63, 92, 53, -33, -18, 85, 71, 24, 54, 26, -7, -23, 45, 0, -46, 6, -31, -20,
-30, 27, 40, -22, 43, 29, -82, 12, -8, -29, -15, -23, 3, 14, 41, 12, 16, 16, 20,
-22, 35, 7, -27, -11, -40, -16, 56, 25, -32, 16, -25, -71, -29, 20, -44, -29,
-8, -72, -27, -10, -34, -17, -53, -24, -10, -1, -50, 13, 66, -46, 26, 42, -7, 8,
42, 2, 24, 26, 13, 28, 29, 63, 10, 1, 26, 14, 35, -8, 31, 35, -14, 25, -37, 23,
22, -31, 13, 12, 6, 16, 14, 40, 60, -18, -44, 1, -29, -47, -51, -28, -6, -38,
-32, -44, -40, -51, -53, -43, -40, -44, -25, -38, -18, -35, -36, 24, -67, -34,
-2, -47, 7, 13, 7, -22, -9, 41, -13, -1, 37, 4, 7, 27, 46, 47, 31, 29, 13, 43,
33, 37, 44, 25, 24, 33, 51, 27, 18, 12, 20, 11, 19, 5, -42, -5, 37, -1, -2, -3,
-13, -18, 0, -16, -41, -32, -15, -28, -47, -35, -58, -28, -55, -27, -35, -69,
-53, -38, -40, -62, -31, -36, -41, -37, -46, -52, -20, -23, -36, -46, -3, -20,
-20, -2, -34, 17, 12, -15, -4, 7, 26, 9, 6, 35, 16, 15, 34, 47, 15, 44, 49, 19,
28, 49, 37, 22, 32, 40, 19, 23, 49, 7, 41, 18, 12, 0, 10, 13, 13, 14, -12, 19,
-5, -19, -28, -17, -20, -6, -27, -40, -11, -42, -46, -14, -36, -57, -59, -40,
-47, -51, -50, -63, -32, -40, -55, -54, -35, -43, -33, -39, -45, -15, -13, -31,
-32, -29, -24, 14, -22, -30, 5, 9, 0, 15, 28, 12, 2, 11, 40, 18, 23, 39, 35, 30,
31, 23, 35, 54, 29, 40, 32, 31, 32, 36, 41, -3, 29, 44, 4, 13, 31, 11, -11, 25,
4, 7, -9, -8, 15, -32, 3, -20, -28, 0, -33, -49, -26, -31, -35, -36, -42, -43,
-43, -34, -52, -52, -46, -42, -40, -23, -48, -39, -22, -28, -31, -34, -33, -35,
-16, -20, -21, -23, 14, 10, -23, -23, 4, 18, 14, 11, 14, 27, 10, 15, 35, 26, 25,
36, 30, 39, 42, 38, 38, 34, 48, 48, 22, 14, 47, 27, 3, 37, 26, 21, 18, 18, 27,
3, 2, 15, -5, -6, 4, -5, -21, -15, -4, -23, -20, -34, -23, -23, -30, -38, -46,
-31, -38, -37, -43, -50, -41, -38, -46, -37, -46, -38, -29, -42, -38, -30, -38,
-30, -6, -23, -38, -11, -15, -16, -5, -4, -4, -2, 11, 3, 15, 18, 9, 23, 22, 11,
34, 22, 28, 38, 45, 46, 22, 42, 52, 37, 25, 38, 39, 40, 32, 30, 33, 32, 16, 16,
26, 22, 13, 10, 10, 1, -2, -5, 14, -2, -17, -16, -16, -7, -21, -27, -15, -22,
-25, -34, -41, -27, -37, -45, -34, -41, -36, -40, -49, -28, -35, -41, -36, -27,
-26, -40, -32, -23, -15, -29, -17, -15, -18, 5, -12, -17, -2, 7, 7, 6, 14, 15,
5, 19, 32, 27, 19, 33, 39, 28, 35, 47, 46, 34, 45, 42, 39, 34, 36, 43, 24, 34,
28, 27, 29, 19, 29, 11, 5, 19, 7, 14, 11, -8, 1, 4, -17, -21, 6, -14, -25, -7,
-16, -37, -29, -14, -33, -38, -34, -38, -30, -30, -44, -31, -33, -47, -41, -34,
-36, -29, -20, -38, -33, -14, -23, -32, -19, -7, -25, -22, 8, -7, -4, 6, -4, 4,
13, 3, 16, 29, 8, 22, 28, 36, 40, 34, 31, 46, 40, 43, 51, 28, 40, 40, 46, 30,
36, 40, 24, 38, 25, 26, 34, 18, 13, 17, 19, 8, 3, 13, 5, -5, 1, -2, -22, 4, -8,
-34, -9, -11, -25, -25, -25, -24, -26, -28, -32, -36, -36, -34, -38, -38, -33,
-39, -34, -35, -42, -33, -26, -29, -28, -33, -27, -26, -22, 1, -10, -24, -4,
-13, 0, -2, -5, 16, 11, 18, 4, 21, 33, 23, 21, 29, 30, 34, 41, 36, 29, 47, 47,
32, 40, 34, 41, 37, 35, 31, 31, 38, 31, 20, 28, 30, 18, 13, 19, 11, 19, 16, 2,
-6, 8, 13, -16, -5, 6, -11, -15, 0, -26, -17, -30, -26, -21, -35, -13, -31, -33,
-30, -41, -46, -36, -38, -41, -34, -44, -42, -30, -36, -33, -32, -31, -27, -28,
-21, -18, -21, -19, -6, -16, -5, 1, -19, 9, -4, 0, 28, 3, 7, 17, 24, 26, 24, 29,
15, 32, 39, 25, 44, 39, 35, 46, 32, 40, 42, 26, 35, 32, 41, 33, 12, 31, 52, 24,
2, 24, 33, 11, 10, 9, 4, 22, 2, 8, -8, -8, -2, -29, 6, -5, -29, -12, -16, -26,
-31, -29, -18, -29, -47, -29, -31, -46, -36, -34, -44, -45, -38, -41, -37, -35,
-44, -37, -20, -40, -39, -19, -29, -19, -15, -20, -15, -18, -17, 1, -6, -10, -3,
4, 2, 5, 11, 11, 14, 20, 24, 6, 32, 30, 11, 33, 37, 26, 35, 42, 34, 37, 44, 33,
30, 43, 32, 37, 33, 34, 20, 24, 31, 22, 16, 18, 28, 3, 12, 7, 6, 10, 2, -1, -4,
-9, -5, -8, -16, -10, -20, -26, -33, -11, -29, -40, -17, -35, -35, -33, -38,
-38, -48, -33, -36, -50, -31, -34, -31, -45, -36, -26, -41, -27, -26, -32, -15,
-16, -33, -29, -7, -7, -1, -6, -26, 6, 0, 6, 11, -4, 4, 29, 12, 19, 37, 20, 27,
29, 37, 29, 47, 36, 34, 50, 42, 33, 43, 38, 21, 47, 32, 28, 39, 21, 33, 37, 21,
19, 18, 11, 21, 24, 0, -2, 9, 3, 3, -5, -8, -6, -5, 4, -19, -21, -12, -24, -26,
-13, -27, -30, -20, -36, -27, -28, -36, -36, -28, -37, -37, -36, -44, -34, -33,
-36, -27, -25, -35, -26, -30, -34, -15, -7, -15, -24, -17, -4, -5, 1, 0, -3, 8,
8, 10, 19, 15, 11, 36, 21, 13, 39, 28, 30, 42, 26, 37, 53, 37, 46, 32, 39, 44,
35, 33, 34, 45, 30, 34, 22, 35, 26, 26, 28, 18, 8, 8, 25, 5, 14, 2, -2, 10, -6,
-5, -3, -14, -5, 1, -16, -25, -19, -12, -21, -26, -18, -29, -27, -21, -32, -32,
-33, -31, -24, -39, -44, -33, -32, -39, -32, -29, -34, -18, -31, -27, -22, -25,
-16, -18, -12, -21, -9, -3, -8, -2, 8, 3, -1, -2, 9, 21, 10, 11, 14, 31, 27, 15,
22, 39, 38, 30, 26, 37, 45, 36, 41, 39, 34, 40, 35, 34, 48, 27, 30, 44, 29, 24,
30, 23, 19, 25, 17, 16, 22, 10, 10, 15, 6, 5, 0, -4, 3, -9, -12, -7, -8, -6,
-24, -17, -29, -19, -22, -32, -30, -32, -23, -43, -34, -27, -37, -47, -40, -38,
-41, -33, -32, -40, -32, -35, -30, -28, -34, -22, -21, -31, -29, -20, -15, -3,
-28, -22, 9, -5, -9, 7, 1, -8, 2, 13, 10, 11, 13, 11, 21, 28, 18, 25, 24, 27,
42, 22, 24, 41, 45, 28, 40, 41, 37, 39, 29, 40, 38, 23, 27, 41, 18, 18, 34, 19,
17, 21, 26, 9, 7, 18, -5, 5, 9, 3, -2, -7, -12, -4, -6, -22, -12, -25, -18, -11,
-28, -29, -22, -33, -24, -23, -35, -36, -33, -34, -38, -35, -33, -42, -41, -28,
-31, -38, -31, -29, -37, -19, -22, -28, -14, -16, -23, -12, -16, -13, -2, -2,
-15, -5, 13, 2, 6, -3, 10, 23, 15, 19, 26, 20, 29, 32, 24, 31, 42, 31, 34, 40,
38, 46, 39, 40, 36, 33, 35, 45, 27, 29, 38, 18, 28, 27, 27, 17, 10, 34, 13, 13,
18, -4, 2, 13, 12, -8, 4, -9, -18, 7, -10, -21, -8, -16, -20, -16, -15, -27,
-31, -17, -25, -29, -28, -26, -27, -29, -35, -35, -37, -30, -36, -46, -30, -21,
-27, -42, -25, -21, -29, -23, -20, -23, -15, -12, -9, -14, -14, 0, -3, -10, 2,
14, -4, 22, 2, 3, 22, 18, 25, 9, 25, 22, 33, 28, 26, 35, 29, 35, 32, 38, 41, 29,
40, 39, 36, 42, 25, 38, 43, 34, 25, 22, 30, 33, 20, 23, 30, 20, 14, 6, 21, 12,
4, 4, 17, 7, -19, 6, -7, -2, -3, -7, -20, -20, -4, -26, -18, -16, -23, -29, -18,
-30, -32, -27, -35, -30, -36, -36, -33, -39, -38, -40, -36, -32, -39, -29, -31,
-32, -35, -30, -30, -31, -17, -19, -27, -22, -15, -12, -15, -12, 1, -6, -8, -2,
8, -7, 2, 14, 1, 14, 16, 15, 13, 22, 14, 22, 24, 24, 33, 17, 31, 33, 35, 30, 40,
39, 35, 34, 31, 37, 27, 34, 35, 24, 26, 22, 14, 36, 19, 14, 21, 7, 15, 18, 10,
-5, 2, 6, -2, -6, -7, -1, -12, -14, -1, -13, -13, -21, -22, -21, -23, -23, -21,
-20, -38, -25, -19, -34, -33, -31, -37, -28, -33, -40, -29, -37, -36, -28, -29,
-29, -31, -24, -22, -27, -24, -16, -18, -21, -12, -11, -14, -11, -8, -8, 5, 2,
3, 9, 3, 11, 14, 12, 19, 18, 17, 19, 28, 29, 24, 30, 34, 38, 25, 33, 42, 32, 43,
35, 32, 36, 36, 33, 29, 39, 17, 30, 36, 17, 21, 23, 22, 16, 14, 8, 22, 9, 2, 12,
0, -1, 7, -4, -3, 0, -8, -4, -3, -11, -23, -9, -3, -21, -27, -15, -21, -19, -25,
-24, -24, -35, -21, -28, -34, -24, -30, -35, -31, -36, -37, -36, -26, -23, -35,
-28, -27, -29, -21, -29, -17, -15, -27, -8, -10, -15, -17, -7, 3, -4, 5, -2, -3,
6, 5, 5, 15, 15, 16, 12, 3, 17, 24, 26, 21, 19, 23, 33, 29, 25, 35, 29, 34, 37,
37, 31, 30, 38, 30, 32, 32, 28, 27, 28, 22, 24, 29, 15, 16, 23, 18, 3, 10, 21,
16, 2, 5, -5, -2, 6, -6, -4, -4, -10, -19, -7, -11, -24, -19, -18, -29, -21,
-20, -36, -21, -29, -36, -19, -33, -39, -22, -36, -40, -29, -40, -39, -41, -20,
-28, -43, -26, -30, -31, -21, -30, -25, -16, -23, -12, -21, -19, -10, -15, -10,
0, -10, -9, 6, -6, 1, 13, 2, 3, 9, 14, 14, 6, 25, 23, 21, 23, 23, 26, 27, 27,
26, 41, 35, 30, 29, 36, 34, 27, 33, 31, 25, 32, 27, 29, 25, 13, 32, 26, 17, 13,
16, 15, 13, 12, 4, 6, 12, -6, 0, 13, -11, -8, -2, -11, -8, -6, -12, -10, -16,
-14, -19, -21, -17, -22, -20, -23, -21, -22, -28, -24, -24, -31, -28, -30, -25,
-25, -39, -25, -26, -39, -26, -20, -36, -23, -14, -30, -18, -7, -24, -21, -6,
-23, -6, -3, -7, -6, -6, -4, 3, 16, -5, 3, 9, 11, 12, 4, 18, 30, 9, 9, 31, 18,
21, 24, 28, 18, 25, 32, 25, 33, 27, 32, 24, 36, 35, 23, 30, 30, 29, 32, 25, 23,
29, 20, 18, 20, 24, 18, 14, 12, 9, 9, 12, 7, 7, 5, -5, 5, -2, -7, -5, -12, -1,
-11, -23, -5, -11, -25, -13, -20, -25, -15, -27, -26, -19, -24, -30, -38, -25,
-28, -26, -26, -41, -32, -29, -32, -29, -35, -29, -25, -35, -24, -23, -28, -25,
-24, -17, -20, -19, -17, -18, -7, -16, -16, -1, -7, -13, 2, -1, -4, 7, -2, 4, 4,
15, 9, 6, 18, 11, 16, 26, 20, 16, 20, 19, 30, 28, 26, 30, 26, 29, 36, 30, 25,
27, 38, 23, 22, 30, 23, 27, 21, 24, 12, 24, 23, 7, 15, 13, 13, 6, 9, 10, 2, 4,
-1, -5, -3, 0, -3, -12, -9, -7, -13, -12, -12, -11, -22, -18, -11, -22, -19,
-18, -28, -22, -22, -25, -22, -20, -23, -36, -22, -23, -28, -32, -24, -28, -36,
-18, -22, -31, -21, -18, -24, -20, -13, -15, -19, -8, -22, -16, 5, -7, -9, -4,
-11, 9, 5, -5, 9, 12, 4, 3, 13, 12, 19, 17, 13, 11, 23, 27, 18, 17, 24, 24, 24,
25, 21, 30, 31, 21, 27, 30, 35, 31, 22, 33, 30, 14, 23, 29, 17, 26, 16, 21, 20,
12, 20, 12, 12, 12, 6, 9, 12, 3, -4, 4, 4, -10, 3, 0, -10, -9, -15, -11, -6,
-14, -19, -17, -13, -22, -22, -10, -25, -23, -22, -23, -26, -29, -24, -29, -30,
-28, -23, -26, -34, -34, -29, -28, -24, -24, -32, -27, -14, -24, -28, -17, -21,
-18, -14, -17, -14, -10, -10, -15, -6, -3, -11, 2, 4, -7, 2, 8, 7, 4, -2, 13,
13, 3, 13, 18, 18, 20, 16, 16, 24, 24, 22, 23, 24, 22, 28, 28, 25, 30, 32, 24,
22, 27, 25, 25, 15, 22, 23, 11, 25, 15, 13, 20, 1, 16, 17, 5, 10, 6, -3, 7, 4,
-6, 8, -1, -10, -11, 0, -4, -14, -1, -11, -18, -9, -10, -16, -13, -12, -23, -12,
-11, -33, -22, -12, -27, -27, -16, -20, -29, -21, -19, -31, -26, -22, -24, -20,
-23, -25, -22, -25, -19, -13, -18, -23, -9, -10, -19, -10, -9, -4, -6, -9, -3,
0, -6, -2, 10, -3, 1, 13, -1, 10, 17, 11, 12, 9, 19, 19, 13, 14, 24, 13, 17, 23,
18, 25, 23, 25, 20, 23, 23, 31, 24, 24, 28, 16, 26, 29, 20, 18, 24, 18, 20, 24,
16, 11, 17, 13, 13, 14, 2, 4, 10, 3, 5, 4, -3, -4, 1, -1, -14, -6, -2, -12, -17,
-5, -14, -25, -6, -11, -20, -20, -19, -15, -21, -24, -19, -25, -28, -21, -19,
-29, -27, -20, -23, -28, -30, -28, -22, -22, -28, -21, -23, -25, -21, -18, -21,
-19, -15, -18, -14, -11, -10, -9, -11, -7, -3, -13, -5, 1, -2, 2, 8, 5, -1, 3,
13, 15, 3, 9, 17, 15, 14, 17, 15, 19, 20, 20, 21, 20, 25, 18, 26, 35, 22, 18,
27, 27, 23, 22, 27, 20, 13, 24, 25, 17, 13, 16, 15, 16, 14, 12, 13, 8, 9, 8, 5,
-3, 3, 6, -2, 1, -2, 0, -6, -8, 1, -6, -8, -7, -10, -11, -15, -11, -13, -19,
-14, -11, -17, -15, -20, -22, -11, -23, -26, -17, -14, -26, -25, -15, -23, -20,
-23, -27, -18, -16, -24, -22, -14, -14, -22, -11, -19, -14, -3, -17, -9, -14,
-3, -3, -11, -2, 1, -5, -4, 5, 2, -3, 5, 6, 6, 12, 2, 14, 14, 3, 17, 11, 10, 19,
17, 15, 13, 22, 16, 14, 28, 22, 10, 24, 21, 16, 32, 19, 19, 26, 23, 18, 23, 19,
17, 21, 15, 18, 17, 10, 11, 16, 6, 13, 10, -2, 9, 11, 1, -4, 3, -1, 1, -3, -7,
1, -8, -8, -7, -12, -10, -7, -8, -15, -17, -10, -14, -19, -15, -16, -19, -20,
-14, -18, -23, -16, -19, -20, -23, -24, -21, -22, -16, -23, -26, -15, -17, -22,
-17, -15, -24, -15, -10, -16, -12, -16, -11, -7, -14, -8, 0, -6, -2, -1, -6, 1,
0, 3, 5, 0, 9, 7, 5, 12, 10, 16, 10, 9, 18, 13, 17, 13, 19, 24, 14, 18, 20, 20,
24, 25, 18, 23, 27, 19, 20, 27, 17, 12, 26, 19, 15, 18, 16, 16, 14, 16, 12, 12,
12, 12, 11, 8, 8, 1, 7, 8, -1, 4, 3, -3, -4, 3, -5, -7, -1, -4, -6, -15, -7,
-12, -19, -7, -12, -18, -8, -9, -18, -21, -20, -14, -18, -16, -21, -19, -14,
-22, -20, -27, -18, -17, -27, -18, -21, -23, -13, -18, -21, -15, -17, -12, -13,
-15, -19, -14, -3, -10, -12, -9, -8, -5, -2, -7, -7, 2, -2, 0, 6, -1, 2, 7, 2,
8, 7, 4, 11, 5, 13, 11, 10, 17, 13, 14, 18, 17, 12, 17, 11, 20, 25, 18, 13, 24,
26, 14, 21, 22, 14, 16, 23, 13, 16, 16, 15, 11, 9, 16, 14, 9, 2, 8, 11, 5, 1, 5,
1, 2, 3, -1, 2, 0, -7, -2, 0, -12, -2, -3, -9, -8, -9, -9, -8, -11, -16, -11,
-10, -12, -16, -13, -15, -15, -14, -18, -13, -17, -17, -12, -19, -18, -15, -21,
-18, -15, -19, -18, -16, -15, -19, -16, -10, -14, -16, -14, -4, -10, -10, -4,
-8, -10, -3, -3, -4, 1, -1, 0, 1, 3, 5, 3, 2, 8, 8, 8, 8, 5, 11, 13, 9, 12, 10,
13, 19, 12, 13, 17, 13, 17, 15, 11, 20, 17, 18, 19, 16, 15, 19, 22, 15, 15, 17,
17, 16, 13, 12, 15, 13, 10, 11, 8, 10, 11, 9, 8, 5, 5, 0, 0, 7, -3, -2, 2, -4,
-3, -5, -7, -3, 0, -9, -8, -7, -11, -10, -13, -8, -11, -17, -11, -13, -13, -17,
-19, -13, -14, -18, -19, -13, -17, -20, -18, -15, -17, -17, -17, -20, -16, -18,
-17, -17, -17, -12, -14, -17, -11, -11, -8, -14, -10, -4, -10, -7, -4, -11, -1,
2, -8, 2, 0, 0, 0, 3, 6, 4, 2, 6, 5, 5, 10, 13, 12, 8, 12, 12, 15, 11, 15, 14,
12, 18, 19, 11, 13, 19, 18, 18, 20, 16, 14, 15, 15, 18, 14, 15, 9, 16, 16, 9,
10, 8, 12, 11, 3, 7, 13, 5, 3, 2, 4, 1, 1, 3, 1, -4, -1, -1, -2, -4, -6, -4, -4,
-5, -9, -5, -10, -9, -6, -10, -9, -11, -13, -8, -14, -13, -9, -18, -14, -12,
-15, -12, -15, -16, -16, -16, -14, -18, -17, -13, -14, -21, -13, -14, -16, -10,
-10, -17, -12, -6, -14, -10, -6, -10, -6, -4, -6, -3, -6, -2, -2, -5, 1, 3, 0,
-2, 2, 3, 4, 7, 4, 6, 7, 6, 6, 10, 8, 8, 12, 8, 13, 12, 8, 9, 18, 15, 11, 17,
11, 15, 18, 13, 17, 14, 12, 19, 14, 16, 10, 9, 16, 12, 10, 11, 8, 7, 9, 10, 10,
3, 3, 5, 3, 2, 1, 3, 0, -2, 0, 0, -1, -5, -6, -3, -2, -5, -8, -10, -7, -4, -6,
-11, -7, -5, -15, -13, -7, -9, -11, -9, -10, -14, -13, -11, -14, -12, -12, -14,
-12, -15, -14, -12, -14, -13, -12, -15, -17, -12, -11, -12, -11, -12, -8, -10,
-12, -4, -5, -10, -5, -3, -6, -4, -1, -2, 3, -2, -2, 3, -3, 4, 8, -1, 9, 7, 3,
7, 6, 9, 10, 7, 6, 12, 9, 10, 11, 13, 9, 10, 13, 13, 11, 8, 17, 12, 14, 13, 15,
11, 16, 18, 10, 12, 12, 13, 10, 14, 9, 7, 14, 10, 6, 10, 4, 3, 11, 2, 6, 5, -4,
3, 4, -3, 0, 2, -3, -4, -4, -1, -2, -9, -6, -5, -7, -9, -9, -5, -13, -8, -6,
-11, -11, -11, -11, -16, -10, -11, -16, -12, -10, -15, -14, -10, -15, -16, -11,
-13, -15, -12, -16, -15, -11, -13, -14, -12, -9, -13, -10, -9, -12, -7, -8, -6,
-4, -7, -8, -2, -3, -5, -2, -1, -4, -1, 4, -2, 4, 4, 1, 5, 4, 4, 10, 5, 4, 10,
6, 10, 12, 8, 8, 13, 9, 11, 14, 10, 11, 13, 16, 12, 10, 13, 13, 11, 9, 14, 14,
9, 13, 11, 9, 13, 9, 9, 11, 7, 6, 7, 7, 9, 6, 4, 3, 4, 3, 2, 3, 1, 0, 1, -2, -1,
0, -3, -4, -3, -5, -4, -1, -9, -8, -5, -8, -6, -4, -9, -9, -10, -11, -10, -10,
-9, -12, -14, -13, -10, -13, -11, -9, -14, -12, -12, -16, -14, -14, -11, -12,
-13, -11, -13, -13, -12, -10, -11, -10, -9, -7, -9, -7, -8, -6, -5, -9, -3, -4,
-5, -1, -3, -5, -2, -1, 1, 2, 0, 0, 4, 0, 3, 8, 3, 6, 3, 3, 9, 8, 9, 7, 8, 10,
7, 9, 12, 9, 8, 12, 10, 11, 12, 9, 12, 14, 11, 12, 8, 11, 14, 7, 7, 8, 9, 10, 8,
6, 8, 6, 7, 5, 3, 2, 3, 3, 0, 5, 0, 0, -1, -3, 2, 0, -3, -5, -3, -4, -2, -5, -7,
-3, -8, -5, -5, -8, -5, -7, -7, -8, -9, -8, -7, -8, -11, -9, -8, -9, -11, -10,
-8, -11, -10, -11, -11, -11, -12, -11, -11, -9, -11, -8, -10, -11, -6, -13, -7,
-5, -7, -9, -7, -5, -8, -4, -7, -4, 0, -4, -4, -3, 0, 2, -3, 0, 2, -1, 3, 2, 3,
4, 3, 5, 5, 3, 3, 6, 7, 4, 7, 6, 7, 7, 8, 9, 5, 9, 10, 6, 8, 11, 8, 9, 11, 10,
9, 11, 12, 7, 9, 10, 5, 8, 9, 5, 9, 7, 6, 4, 1, 6, 5, 2, 1, 3, 6, 0, -4, 1, 2,
-1, -2, -1, -2, -3, -3, -4, -4, -3, -5, -6, -5, -5, -6, -8, -7, -6, -4, -6, -10,
-7, -5, -10, -10, -8, -10, -6, -10, -8, -10, -9, -8, -10, -8, -10, -12, -6, -9,
-12, -8, -12, -9, -5, -9, -8, -9, -7, -6, -8, -4, -6, -5, -3, -6, -2, -2, -3,
-4, 0, 0, -3, 3, 1, -1, 1, 3, 2, 1, 1, 6, 6, 1, 5, 6, 3, 5, 8, 4, 6, 5, 5, 10,
5, 6, 8, 7, 7, 10, 7, 7, 8, 6, 8, 8, 10, 7, 7, 10, 8, 8, 6, 8, 4, 8, 7, 1, 9, 3,
4, 4, 4, 5, 0, 1, 5, 3, -3, 0, 0, -1, 0, -2, -4, -3, -3, -3, -4, -4, -5, -5, -3,
-8, -7, -5, -6, -7, -10, -7, -6, -8, -8, -8, -9, -8, -8, -7, -9, -11, -9, -8,
-6, -10, -9, -8, -12, -10, -7, -9, -10, -9, -9, -9, -9, -8, -8, -8, -7, -8, -6,
-5, -5, -5, -4, -5, -4, -3, -4, -2, -1, -1, -1, -1, -1, 2, 2, 0, 1, 4, 4, 0, 3,
5, 4, 4, 5, 6, 5, 6, 5, 5, 6, 7, 4, 8, 10, 6, 7, 8, 7, 6, 8, 9, 8, 8, 8, 7, 8,
8, 5, 9, 6, 5, 9, 5, 7, 6, 5, 3, 4, 5, 3, 4, 2, 5, 3, -1, 2, 2, -1, -1, -1, -2,
-2, -1, -2, -3, -2, -5, -5, -3, -3, -6, -5, -3, -5, -8, -7, -5, -8, -6, -10, -8,
-4, -9, -9, -6, -9, -9, -8, -10, -6, -11, -10, -6, -8, -9, -9, -8, -9, -9, -8,
-9, -9, -7, -8, -8, -8, -6, -8, -6, -5, -5, -6, -4, -4, -6, -3, -2, -4, -2, -1,
-3, 2, -1, -3, 1, 3, 1, 0, 2, 2, 3, 3, 3, 3, 4, 4, 3, 5, 6, 4, 5, 6, 6, 7, 6, 7,
4, 8, 10, 6, 6, 7, 7, 7, 6, 6, 8, 5, 6, 7, 5, 6, 5, 5, 5, 4, 4, 5, 3, 2, 3, 4,
2, 1, 4, 0, 0, 1, 1, 0, -3, -1, 0, -2, -3, -3, -2, -2, -3, -3, -4, -5, -4, -3,
-7, -5, -4, -6, -6, -5, -6, -6, -6, -8, -6, -6, -8, -7, -7, -8, -6, -9, -7, -7,
-8, -8, -8, -6, -9, -8, -7, -8, -9, -5, -6, -9, -6, -7, -5, -4, -5, -7, -4, -4,
-5, -3, -4, -3, -1, -3, -2, -2, -3, -2, -1, 1, 0, 0, 0, 1, 1, 1, 4, 1, 1, 3, 2,
4, 4, 2, 4, 6, 4, 3, 5, 6, 5, 4, 4, 7, 5, 5, 7, 5, 7, 6, 6, 8, 4, 5, 6, 3, 6, 6,
4, 5, 4, 4, 4, 3, 4, 2, 2, 3, 2, 2, 1, 0, 0, 2, -1, 0, 0, -2, 0, -1, -2, 0, -3,
-3, -1, -3, -3, -4, -4, -5, -3, -4, -5, -4, -5, -5, -4, -5, -7, -5, -6, -6, -3,
-6, -5, -6, -8, -6, -6, -7, -7, -7, -6, -5, -7, -7, -6, -6, -6, -6, -6, -5, -5,
-6, -4, -5, -6, -3, -5, -4, -4, -3, -2, -3, -3, -3, -2, 0, -2, -2, -1, -1, 0,
-1, 0, 3, 0, -1, 2, 2, 1, 1, 2, 3, 3, 2, 3, 4, 2, 4, 5, 3, 3, 2, 5, 6, 3, 5, 5,
6, 4, 5, 6, 6, 6, 5, 4, 5, 6, 3, 4, 5, 4, 3, 2, 4, 4, 2, 2, 3, 1, 2, 0, 1, 2, 0,
-1, 1, -1, -1, 1, -3, 0, 0, -4, -2, -1, -4, -3, -2, -3, -3, -4, -3, -5, -3, -4,
-5, -3, -5, -4, -5, -5, -4, -5, -5, -5, -5, -5, -5, -6, -6, -5, -5, -6, -5, -5,
-6, -6, -6, -5, -6, -6, -4, -6, -5, -4, -4, -4, -4, -5, -4, -3, -4, -2, -2, -3,
-3, -1, -2, 0, 0, -2, -2, 0, 0, 0, 1, -1, 1, 2, 1, 1, 1, 1, 2, 3, 1, 2, 3, 2, 3,
3, 3, 3, 3, 2, 4, 3, 3, 4, 3, 5, 5, 2, 4, 5, 4, 4, 4, 6, 3, 3, 5, 4, 3, 2, 4, 3,
3, 2, 2, 2, 2, 2, 2, 1, 1, 2, 0, 1, 0, -2, 0, -1, -2, -2, -1, -1, -2, -2, -2,
-3, -2, -2, -3, -4, -3, -3, -3, -2, -5, -3, -4, -4, -3, -6, -4, -3, -5, -5, -5,
-5, -3, -6, -5, -4, -6, -4, -5, -5, -4, -5, -5, -5, -5, -4, -4, -6, -6, -4, -4,
-4, -4, -4, -4, -4, -1, -3, -4, -2, -3, -2, -1, -2, -2, -1, -1, 0, 0, 0, 0, 0,
1, 1, 0, 0, 2, 1, 1, 1, 1, 3, 2, 1, 2, 2, 3, 3, 2, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4,
3, 4, 4, 3, 2, 3, 4, 2, 4, 3, 1, 3, 3, 2, 2, 2, 1, 2, 1, 2, 0, 1, 1, 0, 1, 0,
-1, -1, -1, -1, -3, -2, -1, -2, -2, -3, -1, -2, -3, -2, -4, -3, -3, -3, -3, -3,
-4, -5, -4, -4, -3, -5, -4, -3, -4, -5, -5, -4, -5, -5, -4, -4, -5, -4, -4, -4,
-5, -4, -5, -5, -3, -5, -5, -4, -4, -4, -5, -4, -4, -4, -3, -3, -4, -3, -4, -2,
-2, -3, -2, -1, -2, -1, -2, -2, -1, -1, -1, 0, 0, -1, 0, 0, 0, 0, 1, 1, 0, 1, 1,
1, 1, 1, 2, 1, 2, 1, 1, 2, 1, 2, 2, 2, 3, 2, 3, 2, 3, 2, 1, 3, 2, 1, 2, 2, 2, 3,
2, 2, 2, 2, 2, 2, 1, 1, 2, 1, 1, 0, 1, 1, 0, 1, 0, 0, -1, -1, 0, 0, -1, -1, -1,
-1, -1, -2, -2, -2, -1, -2, -3, -1, -2, -3, -2, -2, -3, -3, -3, -2, -3, -3, -2,
-3, -3, -3, -3, -3, -3, -3, -4, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3,
-2, -2, -4, -3, -2, -2, -3, -3, -2, -2, -2, -2, -2, -2, -1, -1, -1, -1, -2, 0,
-1, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 2,
1, 1, 2, 1, 1, 1, 2, 1, 1, 2, 1, 1, 2, 2, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 0, 1,
1, 1, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1,
-2, -1, -1, -2, -2, -1, -1, -1, -2, -2, -2, -2, -1, -2, -2, -1, -1, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -1, -2, -2, -2, -2, -2, -2, -2, -1, -1,
-2, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1,
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, };

#endif /* EDRUMSEVEN_H_ */
