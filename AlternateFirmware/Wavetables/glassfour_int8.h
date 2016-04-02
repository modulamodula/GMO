#ifndef GLASSFOUR_H_
#define GLASSFOUR_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define GLASSFOUR_NUM_CELLS 3623
#define GLASSFOUR_SAMPLERATE 16384
 
const int8_t __attribute__((section(".progmem.data"))) GLASSFOUR_DATA [] = {23,
-40, -128, -66, 25, 71, 66, -68, -112, 55, 76, -36, -104, -35, 35, 111, 11,
-128, -98, 89, 103, -41, -88, -58, 40, 105, 23, -128, -59, 92, 93, -47, -70,
-64, 43, 109, 0, -128, -41, 92, 59, -16, -78, -47, 38, 109, -21, -101, -37, 84,
43, -9, -64, -48, 47, 97, -22, -99, -7, 54, 49, -11, -51, -56, 63, 73, -18, -90,
5, 45, 41, 0, -51, -51, 59, 75, -41, -57, -2, 41, 30, 16, -65, -30, 50, 67, -42,
-43, 1, 29, 28, 16, -54, -36, 66, 42, -34, -36, 11, 5, 45, 6, -49, -30, 67, 23,
-27, -21, 2, 5, 41, 9, -55, -8, 49, 21, -29, -4, -14, 14, 33, 9, -53, 2, 38, 14,
-17, -1, -10, 4, 33, -3, -39, -4, 43, 1, -1, 1, -10, -9, 40, -7, -31, 7, 27, -9,
7, 6, -25, 4, 34, -4, -27, 17, 2, -4, 14, 8, -31, 14, 23, -7, -11, 12, -7, 0,
21, -3, -22, 5, 22, -7, 2, 3, -9, -5, 28, -4, -20, 2, 17, -5, 7, 4, -19, 2, 29,
-3, -27, 9, 8, 0, 12, 2, -33, 11, 31, -8, -21, 10, -1, 5, 21, -14, -32, 18, 31,
-11, -12, -3, -3, 13, 24, -23, -28, 18, 29, -8, -11, -8, -6, 20, 21, -26, -29,
22, 26, -4, -12, -11, -7, 27, 20, -29, -28, 25, 23, -5, -10, -15, -6, 32, 18,
-37, -22, 24, 19, -2, -7, -23, -2, 37, 13, -38, -16, 21, 16, 2, -10, -27, 2, 40,
6, -37, -12, 20, 15, 6, -15, -29, 8, 40, -1, -37, -11, 19, 18, 8, -20, -30, 15,
40, -5, -36, -9, 17, 19, 8, -24, -30, 22, 39, -10, -33, -8, 13, 22, 9, -28, -25,
25, 34, -13, -30, -6, 11, 20, 9, -31, -24, 29, 28, -16, -23, -5, 10, 24, 6, -34,
-19, 29, 20, -17, -20, -7, 11, 28, 4, -34, -13, 28, 16, -14, -17, -9, 11, 27,
-2, -34, -9, 27, 13, -10, -14, -9, 10, 25, -6, -32, -4, 26, 11, -9, -13, -10,
11, 24, -7, -30, 2, 21, 5, -6, -11, -12, 14, 22, -12, -25, 5, 15, 4, -2, -11,
-11, 15, 18, -15, -18, 6, 10, 3, 0, -13, -8, 16, 14, -14, -13, 5, 7, 4, 1, -12,
-7, 15, 9, -12, -9, 5, 3, 5, 2, -10, -6, 15, 7, -12, -4, 4, -1, 6, 3, -13, -3,
13, 2, -10, 0, 1, -1, 6, 2, -12, -1, 11, -2, -6, 3, -2, -3, 9, 0, -9, 2, 7, -4,
-2, 2, -4, -2, 8, 1, -7, 2, 3, -3, 1, 3, -7, -3, 7, 0, -7, 4, 3, -2, 4, 1, -11,
-3, 8, 0, -3, 5, 0, -3, 5, -1, -10, 1, 9, -2, -2, 2, -4, -2, 8, -1, -8, 3, 5,
-3, 0, 1, -7, 1, 8, -2, -8, 2, 3, -1, 2, -1, -8, 3, 9, -4, -8, 1, 2, 1, 5, -3,
-8, 4, 9, -5, -7, 1, 2, 1, 4, -6, -8, 6, 8, -5, -5, 1, 0, 3, 4, -7, -8, 8, 7,
-6, -4, 1, -1, 4, 3, -9, -6, 10, 4, -6, -3, 1, 0, 6, 1, -10, -4, 10, 3, -7, -2,
-1, 1, 8, 0, -12, 0, 8, 1, -6, -2, -3, 5, 5, 0, -13, 7, 16, -29, -82, -55, 0,
47, 33, -33, -43, 5, 43, -22, -49, -34, 25, 46, 19, -64, -60, 28, 56, -5, -53,
-27, 11, 54, 10, -55, -55, 40, 47, -2, -48, -28, 12, 51, 10, -56, -34, 32, 47,
-7, -33, -34, 21, 43, 13, -54, -22, 27, 39, -6, -28, -28, 18, 46, 2, -43, -22,
32, 26, 5, -31, -19, 12, 48, -5, -34, -15, 29, 21, 4, -24, -24, 20, 37, -2, -37,
-2, 17, 26, 1, -17, -26, 26, 29, -4, -30, -1, 14, 20, 6, -21, -18, 19, 32, -11,
-17, -5, 16, 13, 12, -25, -12, 18, 26, -11, -12, -2, 8, 16, 7, -17, -14, 23, 15,
-5, -13, 3, 0, 19, 3, -14, -12, 21, 11, -4, -4, -2, 2, 12, 5, -19, -2, 14, 13,
-4, 3, -8, 1, 9, 6, -16, 1, 12, 6, -1, 1, -7, -3, 15, 2, -8, -2, 9, -3, 6, 0,
-6, -3, 14, 1, -5, 1, 3, -2, 5, 3, -11, 0, 10, 4, -5, 4, -5, -1, 7, 5, -12, 0,
7, 2, -1, 2, -6, -2, 12, 2, -10, -3, 7, 0, 5, -2, -9, -2, 16, 1, -10, -2, 4, 1,
5, -4, -14, 3, 15, 3, -10, -1, 0, 5, 5, -5, -15, 5, 15, 1, -10, -4, 0, 6, 8, -8,
-14, 5, 15, -2, -9, -5, 1, 7, 10, -11, -14, 6, 14, -2, -8, -6, -2, 10, 8, -12,
-14, 8, 12, -1, -8, -7, -2, 13, 8, -14, -13, 8, 10, -1, -7, -10, -1, 14, 6, -16,
-11, 8, 11, 0, -8, -12, 1, 16, 4, -18, -11, 8, 11, 1, -9, -12, 2, 17, 2, -18,
-9, 8, 8, 1, -10, -13, 6, 18, -1, -18, -9, 6, 9, 2, -11, -13, 7, 17, -3, -17,
-7, 6, 9, 2, -13, -13, 9, 16, -5, -16, -6, 5, 10, 2, -14, -13, 9, 12, -7, -15,
-4, 5, 11, 2, -14, -11, 10, 10, -7, -12, -5, 4, 9, 1, -15, -9, 9, 8, -6, -9, -5,
3, 9, 0, -15, -7, 9, 6, -5, -8, -6, 2, 10, -1, -14, -6, 8, 4, -4, -7, -6, 2, 9,
-2, -13, -4, 7, 3, -3, -6, -7, 2, 7, -4, -12, -1, 5, 2, -2, -6, -7, 3, 6, -5,
-10, -1, 3, 1, -1, -6, -6, 3, 5, -5, -7, -1, 2, 0, 0, -5, -6, 3, 4, -5, -6, 0,
-1, 0, 0, -5, -5, 4, 1, -5, -4, 0, -2, 1, 1, -5, -4, 3, 0, -5, -2, -2, -2, 1, 1,
-5, -3, 1, -1, -4, -1, -2, -3, 1, 1, -5, -3, 1, -1, -2, 0, -3, -5, 1, -1, -4,
-2, 2, -2, 0, 0, -5, -6, 1, 0, -2, -1, 0, -4, 10, -1, -65, -64, -15, 23, 31, 4,
-41, -21, 31, 6, -42, -36, -1, 29, 36, -23, -70, -13, 53, 15, -37, -32, -7, 26,
39, -24, -65, 0, 51, 11, -31, -30, -11, 30, 35, -28, -53, 8, 42, 10, -23, -28,
-9, 33, 31, -29, -43, 11, 35, 6, -17, -27, -8, 34, 27, -30, -33, 13, 27, 7, -13,
-26, -6, 35, 22, -30, -26, 15, 20, 8, -8, -27, -5, 37, 14, -30, -18, 12, 16, 11,
-7, -26, -1, 34, 10, -27, -12, 11, 12, 12, -5, -27, 2, 33, 4, -23, -5, 7, 9, 14,
-7, -26, 6, 30, -1, -18, -2, 3, 7, 15, -9, -22, 11, 25, -4, -12, -1, 0, 8, 14,
-10, -19, 12, 19, -4, -7, 1, -2, 7, 11, -12, -16, 13, 16, -5, -2, 2, -6, 7, 12,
-12, -11, 14, 8, -6, 2, -2, -8, 10, 10, -11, -5, 11, 0, -3, 6, -4, -6, 11, 6,
-10, 0, 7, -3, 1, 6, -7, -6, 9, 4, -6, 2, 3, -6, 3, 8, -6, -5, 8, 2, -4, 4, 1,
-8, 6, 9, -8, -6, 7, -1, -1, 8, -4, -9, 10, 8, -9, -2, 5, -3, 3, 7, -10, -8, 12,
6, -8, 0, 1, -2, 7, 5, -12, -6, 12, 5, -6, -1, -1, -2, 10, 4, -14, -5, 12, 3,
-6, -2, -3, 0, 12, 3, -15, -3, 12, 2, -6, -2, -6, 2, 14, -1, -17, 0, 11, 1, -2,
-3, -7, 4, 14, -4, -15, 1, 9, 1, 0, -5, -8, 7, 14, -7, -14, 2, 8, 3, 0, -7, -8,
10, 12, -9, -14, 3, 8, 4, -1, -10, -7, 12, 11, -11, -12, 3, 7, 4, -1, -12, -5,
15, 9, -12, -10, 2, 6, 6, -1, -13, -4, 14, 6, -12, -8, 3, 6, 8, -2, -14, -2, 14,
4, -10, -5, 1, 5, 8, -4, -14, 0, 13, 1, -9, -5, -1, 6, 9, -4, -13, 2, 12, 0, -7,
-4, -1, 6, 8, -8, -13, 3, 11, 0, -4, -5, -1, 6, 8, -8, -10, 5, 10, -1, -5, -5,
-4, 8, 6, -7, -10, 8, 4, 2, -6, 0, -8, 28, -10, -81, -47, 16, 33, 31, -13, -69,
18, 44, -6, -61, -19, 9, 52, 26, -61, -69, 33, 69, -18, -41, -31, 11, 43, 38,
-74, -52, 40, 60, -20, -32, -31, 5, 55, 19, -61, -42, 47, 34, -1, -37, -22, 2,
60, 5, -49, -34, 42, 26, -2, -24, -28, 11, 50, 9, -55, -10, 24, 29, -5, -13,
-38, 20, 42, 7, -49, -3, 22, 17, 7, -17, -32, 14, 50, -13, -29, -7, 21, 8, 20,
-26, -24, 14, 43, -14, -24, 0, 11, 13, 16, -16, -34, 26, 27, -9, -22, 12, -4,
20, 13, -17, -31, 29, 20, -12, -8, 3, -4, 14, 21, -26, -13, 20, 20, -17, 4, -7,
-1, 13, 19, -25, -9, 18, 10, -7, 3, -2, -10, 18, 9, -16, -13, 23, 0, 1, 5, -2,
-16, 20, 7, -16, -3, 16, -3, 1, 13, -14, -8, 17, 9, -18, 8, 2, -4, 7, 14, -19,
-1, 15, 2, -8, 5, -2, -5, 14, 4, -13, -6, 16, -1, 0, 1, -4, -7, 19, 4, -14, -4,
12, 1, 1, 4, -12, -3, 18, 7, -20, 1, 7, 1, 4, 5, -21, 1, 23, 1, -17, 3, 3, 0,
13, -5, -21, 5, 24, -4, -10, -2, 0, 4, 16, -9, -20, 7, 21, -3, -10, -3, -2, 9,
15, -10, -22, 10, 18, -2, -10, -3, -4, 13, 15, -13, -21, 12, 17, -4, -7, -6, -5,
14, 16, -19, -17, 13, 14, -4, -3, -11, -5, 18, 12, -21, -13, 13, 10, -1, -4,
-12, -4, 21, 7, -20, -11, 12, 7, 2, -5, -13, -2, 22, 3, -20, -9, 11, 6, 3, -7,
-15, 3, 22, 1, -20, -6, 12, 18, -41, -54, -29, 32, 41, 7, -55, -22, 40, 15, -24,
-42, -9, 26, 57, -25, -69, -17, 58, 18, -23, -37, -18, 31, 51, -21, -71, 4, 47,
21, -25, -29, -28, 41, 40, -26, -59, 11, 35, 19, -13, -36, -17, 38, 40, -34,
-40, 3, 36, 10, -3, -40, -11, 36, 37, -35, -30, 8, 24, 16, -6, -34, -15, 44, 22,
-25, -30, 15, 11, 22, -6, -31, -14, 46, 14, -26, -16, 6, 11, 20, -1, -38, 0, 34,
15, -27, -6, -3, 14, 17, 2, -36, 3, 32, 7, -19, -5, -1, 5, 25, -7, -28, 0, 33,
-5, -7, -6, -2, 3, 27, -10, -25, 6, 22, -3, -6, 0, -12, 11, 19, -6, -24, 14, 11,
1, -3, 0, -14, 11, 15, -9, -17, 10, 10, -3, 6, -4, -10, 6, 18, -14, -7, 6, 5,
-5, 11, -6, -11, 9, 13, -11, -4, 7, -6, 3, 11, -6, -14, 14, 4, -6, 0, 4, -10, 8,
10, -9, -10, 10, 5, -3, 4, -5, -10, 7, 13, -11, -5, 6, 4, -3, 7, -9, -9, 11, 13,
-12, -8, 5, 0, 3, 7, -10, -12, 17, 8, -11, -6, 4, -4, 10, 5, -16, -10, 19, 6,
-9, -4, -2, -2, 13, 4, -20, -5, 16, 6, -9, -3, -7, 2, 14, 14, -55, -40, 5, 12,
8, 14, -29, -22, 39, 4, -35, -24, 12, 5, 32, -9, -52, -16, 54, 6, -36, -11, -1,
6, 31, -4, -63, 5, 46, 4, -34, -2, -14, 16, 30, -14, -53, 15, 39, -3, -19, -12,
-8, 15, 33, -28, -35, 13, 37, -13, -9, -16, -7, 19, 30, -32, -30, 22, 22, -6,
-11, -11, -13, 31, 17, -27, -28, 30, 10, -2, -6, -13, -13, 35, 13, -35, -12, 22,
9, -4, 2, -24, -2, 29, 12, -38, -2, 17, 6, -1, 4, -26, -1, 34, 0, -31, 1, 16,
-5, 10, -4, -22, 1, 38, -10, -21, 4, 10, -6, 14, -5, -24, 10, 27, -11, -20, 10,
0, 2, 10, -4, -25, 16, 18, -11, -14, 12, -3, 0, 11, -10, -19, 14, 17, -17, -3,
8, -3, -2, 16, -16, -12, 16, 10, -18, 3, 6, -9, 5, 12, -16, -9, 20, -3, -11, 6,
3, -13, 13, 4, -14, -3, 15, -7, -6, 8, -3, -8, 10, 5, -15, 4, 8, -6, -6, 12, -9,
-4, 7, 9, -18, -22, -19, -15, 14, 26, -4, -37, 11, 11, -5, -11, -13, -18, 29,
30, -33, -36, 14, 22, -4, 0, -25, -16, 29, 31, -38, -28, 15, 18, 2, 0, -28, -17,
37, 19, -32, -22, 17, 8, 12, -4, -28, -13, 40, 11, -28, -16, 11, 6, 13, 0, -33,
-4, 35, 9, -32, -5, 2, 8, 16, 1, -36, 3, 32, 2, -24, -3, 0, 4, 22, -8, -32, 4,
34, -7, -13, -4, -3, 4, 26, -14, -28, 10, 26, -6, -10, -3, -10, 11, 21, -12,
-30, 16, 18, -4, -8, -1, -14, 16, 21, -16, -25, 16, 14, -6, 1, -7, -12, 15, 22,
-23, -15, 13, 11, -6, 6, -13, -10, 19, 17, -22, -12, 13, 2, 2, 4, -11, -12, 23,
7, -18, -9, 12, -2, 6, 4, -10, -11, 1, -14, -28, 9, 17, 2, -7, -1, -11, 0, 8,
-12, -17, 14, 15, -11, -12, -2, -2, 8, 9, -17, -13, 13, 11, -11, -7, -4, 0, 9,
6, -17, -9, 15, 6, -9, -4, -2, -2, 12, 3, -17, -5, 16, 1, -7, -1, -4, -2, 12, 1,
-17, 1, 13, -2, -6, 3, -6, 1, 13, -2, -15, 5, 10, -5, -2, 2, -6, 2, 12, -6, -11,
7, 7, -6, 1, 1, -6, 3, 9, -8, -8, 9, 4, -6, 1, 2, -6, 6, 6, -8, -5, 10, 0, -6,
2, 1, -5, 6, 4, -11, 0, 10, -2, -6, 6, -2, -2, 6, 1, -11, 9, 4, -26, -14, 4, 3,
1, 10, -12, -7, 11, 1, -15, -3, 4, 1, 10, -4, -22, -3, 20, -3, -12, 0, 2, 1, 14,
-7, -23, 2, 19, -3, -10, 0, -3, 5, 11, -8, -21, 8, 16, -2, -9, -2, -5, 8, 11,
-10, -16, 9, 13, -4, -5, -5, -3, 9, 11, -15, -12, 10, 11, -4, -2, -6, -3, 12, 8,
-15, -10, 11, 6, -1, -2, -7, -3, 16, 4, -14, -7, 11, 3, 0, -2, -9, -1, 16, 2,
-16, -2, 9, 2, 0, 0, -10, 2, 19, -7, -33, -5, 7, 5, 2, -1, -17, 6, 18, -12, -17,
3, 7, 1, 11, -13, -19, 10, 21, -15, -12, 5, 1, 1, 12, -12, -18, 15, 14, -13, -9,
6, -4, 6, 7, -12, -15, 17, 9, -10, -4, 3, -5, 8, 8, -15, -8, 15, 6, -11, 2, -2,
-3, 9, 7, -17, -2, 12, 1, -7, 4, -4, -3, 12, 1, -14, 1, 13, -4, -2, 2, -5, -3,
13, -3, -11, 4, 9, -5, 3, -5, -19, -2, 13, -3, -11, 10, 0, -3, 1, -2, -12, 6, 7,
-5, -3, 3, -6, -1, 9, -5, -7, 6, 4, -9, 4, 1, -7, 1, 10, -7, -5, 6, 0, -6, 5, 2,
-7, 4, 7, -5, -5, 6, -2, -2, 5, 2, -8, 4, 4, -5, -3, 5, -2, -1, 7, -2, -6, 4, 5,
-6, 1, 3, -3, 0, 8, -4, -3, 2, -6, -11, 1, 4, -3, 4, 3, -6, -3, 4, -4, -2, 3, 1,
-2, 4, -3, -6, 2, 4, -4, 0, 2, -4, 1, 5, -3, -6, 5, 2, -2, 0, 1, -5, 2, 5, -3,
-5, 4, 2, -2, 2, 0, -4, 3, 6, -5, -3, 3, 1, -2, 4, -2, -4, 3, 6, -4, -7, -1, -4,
-1, 3, -3, -5, 8, 3, -6, -3, 2, -2, 2, 2, -5, -4, 5, 2, -5, 0, 0, 0, 2, 2, -5,
-1, 4, 1, -4, 0, 0, 0, 4, 0, -5, -1, 5, 0, -1, 0, 0, 0, 4, -2, -5, 0, 6, 0, -5,
-4, -4, 0, 4, -2, -6, 5, 3, -2, -3, -1, -2, 3, 3, -4, -4, 3, 3, -2, 0, -1, -1,
3, 2, -6, -2, 3, 2, -1, 0, -3, 0, 4, 1, -4, -1, 3, 0, 0, -1, -5, -3, 4, 0, -4,
-1, 2, 2, 0, -3, -4, 1, 5, 0, -4, 0, 2, 1, 0, -2, -4, 2, 4, -1, -4, 0, 2, 2, 1,
-2, -3, 3, 4, -3, -5, -1, 1, 1, 0, -4, -2, 5, 4, -4, -3, 1, 2, 2, 0, -4, -1, 4,
2, -3, -2, 1, 1, 2, -1, -4, -1, 3, 0, -4, -2, 0, 1, 2, -1, -3, 1, 2, 0, -2, -1,
0, 1, 1, -1, -2, 1, 2, -1, -2, -1, -1, 0, 1, -2, -2, 2, 2, -1, -1, 0, 0, 1, 1,
-2, -1, 2, 1, -1, -1, -1, -1, 1, 0, -2, -1, 2, 1, -1, -1, -1, 0, 1, 0, -2, 0, 2,
0, -1, -1, -1, 0, 1, 0, -2, 0, 2, 0, -1, 0, -1, 0, 1, -1, -2, 1, 1, 0, 0, -1,
-1, 0, 1, -1, -1, 0, 1, 0, 0, -1, -1, 1, 1, -1, -1, 0, 0, 0, -1, -1, 0, 1, 1,
-1, -1, 0, 0, 0, 0, -1, 0, 1, 0, -1, -1, 0, 0, 0, 0, -1, 0, 1, -1, -1, 0, 0, 0,
0, -1, -1, 0, 1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 1, -1, 0, 0, -1, 0, 0, -1, -1, 0,
0, -1, 0, 0, -1, 0, 0, -1, 0, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, 0,
-1, 0, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, -1,
0, 0, -1, 0, 0, 0, 0, 0, -1, -1, 0, -1, -1, 0, 0, -1, 0, -1, -1, 0, 0, -1, -1,
0, -1, -1, 0, -1, -1, 0, 0, -1, -1, 0, -1, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0, 0,
0, -1, -1, 0, 0, -1, 0, -1, -1, -1, -1, -1, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1,
0, 0, -1, -1, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, -1, -1, -1, -1, -1,
-1, -1, 0, -1, -1, -1, -1, -1, 0, -1, -1, -1, 0, 0, -1, -1, -1, -1, 0, -1, -1,
-1, 0, -1, -1, -1, -1, 0, 0, -1, -1, -1, 0, 0, -1, -1, -1, 0, 0, -1, -1, -1, 0,
0, -1, -1, -1, -1, 0, -1, -1, -1, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0,
-1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1,
-1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, -1, -1, -1, -1, 0, -1, -1,
-1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1,
-1, 0, -1, -1, -1, 0, 0, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1,
0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0,
-1, -1, -1, -1, -1, 0, -1, -1, -1, 0, -1, -1, -1, -1, -1, 0, -1, -1, -1, 0, -1,
-1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1,
-1, -1, -1, 0, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1,
-1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, 0, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, -1, -1, -1, -1, 0, 0, -1, -1, 0, 0,
-1, -1, -1, -1, 0, -1, -1, -1, 0, 0, -1, -1, -1, 0, 0, -1, -1, -1, 0, 0, -1, -1,
-1, 0, 0, -1, -1, -1, 0, 0, -1, -1, -1, 0, 0, -1, -1, -1, 0, 0, -1, -1, 0, 0, 0,
-1, -1, -1, 0, 0, -1, -1, 0, 0, 0, -1, -1, 0, 0, 0, -1, -1, 0, 0, 0, -1, -1, -1,
0, 0, -1, -1, 0, 0, 0, -1, -1, 0, 0, 0, 0, -1, 0, 0, -1, -1, -1, 0, 0, 0, -1,
-1, -1, 0, -1, -1, -1, 0, 0, 0, -1, -1, -1, 0, -1, -1, -1, -1, 0, -1, -1, -1, 0,
0, -1, -1, -1, -1, 0, 0, -1, -1, -1, 0, -1, -1, -1, -1, 0, 0, -1, -1, -1, 0, -1,
-1, -1, -1, -1, 0, -1, -1, -1, 0, 0, -1, -1, -1, 0, 0, 0, -1, -1, 0, 0, 0, -1,
-1, -1, 0, 0, -1, -1, 0, 0, 0, -1, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0,
0, -1, -1, 0, 0, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0, 0, -1, 0, 0, -1, -1,
-1, 0, 0, 0, -1, 0, 0, 0, -1, -1, 0, -1, 0, -1, -1, 0, 0, 0, -1, -1, 0, 0, 0,
-1, -1, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0, 0, };

#endif /* GLASSFOUR_H_ */