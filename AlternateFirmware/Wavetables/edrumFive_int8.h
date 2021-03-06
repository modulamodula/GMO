#ifndef EDRUMFIVE_H_
#define EDRUMFIVE_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define EDRUMFIVE_NUM_CELLS 3472
#define EDRUMFIVE_SAMPLERATE 16384
 
const int8_t __attribute__((section(".progmem.data"))) EDRUMFIVE_DATA [] = {-1,
-1, -1, 0, 0, -1, -6, -17, -20, -19, -19, -18, -15, -13, -13, -11, -11, -8, 0,
2, -9, -5, 15, 29, 28, 6, -9, 7, 23, 33, 39, 39, 40, 40, 38, 38, 37, 36, 35, 34,
33, 32, 30, 22, 2, -34, -7, 15, -39, -46, -33, -63, -43, -7, -30, -53, -67, -79,
-75, -75, -73, -69, -69, -67, -65, -64, -64, -62, -62, -40, -36, -50, -24, -1,
-28, -58, -51, -54, -49, -49, -17, 29, 1, -38, -52, -52, -48, -49, -42, -1, 9,
-9, 1, 33, 77, 44, -25, -7, 62, 102, 113, 119, 118, 113, 108, 103, 84, 80, 100,
101, 96, 91, 89, 86, 84, 82, 79, 77, 75, 72, 70, 65, 52, 16, 2, 33, 14, -25,
-14, 1, -10, -12, -20, -52, -78, -93, -58, -38, -73, -89, -82, -64, -68, -85,
-86, -82, -79, -76, -76, -75, -73, -71, -71, -69, -67, -66, -64, -63, -61, -58,
-52, -49, -29, -28, -55, -55, -22, 9, 47, 58, 40, 36, 56, 81, 93, 106, 76, 54,
37, 55, 80, 61, 30, 15, 56, 85, 79, 82, 80, 71, 57, 20, 22, 22, 41, 75, 75, 62,
36, 2, 6, 49, 55, 59, 18, -5, -4, -33, -11, 29, 7, -15, -19, -51, -49, -30, 8,
4, -45, -76, -93, -90, -85, -80, -60, -50, -58, -63, -70, -70, -71, -67, -52,
-52, -58, -63, -64, -56, -37, -25, -47, -57, -33, 7, -2, -34, -11, 24, 23, -5,
7, 24, 24, 43, 74, 60, 29, 47, 56, 46, 55, 76, 65, 45, 65, 97, 76, 27, 31, 24,
12, 42, 62, 70, 77, 72, 70, 49, 34, 67, 61, 30, 32, 27, -3, -3, 12, -4, -10,
-40, -17, 16, -2, -4, -35, -44, -23, -44, -59, -20, -40, -53, -39, -70, -43,
-32, -64, -66, -72, -79, -78, -79, -76, -75, -72, -68, -68, -61, -37, -17, -14,
-12, -29, -62, -66, -51, -33, -15, -14, 9, 42, 56, 37, 30, 48, 35, 33, 31, 33,
56, 55, 53, 66, 45, 46, 45, 43, 62, 70, 76, 77, 82, 68, 52, 57, 43, 22, 44, 38,
37, 52, 25, 16, 12, 6, -1, -13, -27, -31, -6, -15, -37, -12, 11, -6, -31, -44,
-29, -4, -21, -45, -61, -71, -59, -44, -25, -22, -44, -51, -57, -44, -21, -9,
-12, -11, -35, -68, -40, -45, -59, -36, -29, -13, -11, -37, -29, -47, -22, -6,
-33, -18, -8, 10, 4, 25, 35, 20, 28, 26, 26, 36, 42, 34, 47, 55, 54, 54, 66, 47,
48, 62, 21, 28, 57, 45, 29, 39, 27, 25, 37, 41, 58, 56, 45, 27, 11, 22, 42, 30,
15, -3, -35, -29, 5, -1, -19, -29, -33, -36, -31, -20, -29, -26, -25, -46, -69,
-52, -34, -27, -14, 0, -20, -10, -14, -42, -42, -44, -32, -30, -3, -7, -13, -7,
-22, -52, -43, -18, -28, -22, -5, -1, -11, -10, -27, -22, 4, 20, 7, -5, 12, 15,
16, 37, 44, 32, 35, 28, 13, 18, 39, 35, 26, 47, 49, 46, 45, 38, 37, 42, 52, 41,
41, 34, 6, 4, 42, 56, 18, 11, 10, -6, 4, 17, 33, 0, -22, -18, -16, 21, 13, 3,
-12, -20, -6, 12, -8, -25, -20, -42, -53, -51, -55, -26, -2, -34, -33, -19, -13,
-30, -31, -16, -34, -37, -24, -19, -23, -26, -26, -22, -33, -29, -24, -24, 8, 8,
-1, -4, -21, -11, -9, -6, 19, 31, 2, -6, 23, 25, 29, 16, -6, 9, 23, 10, 18, 29,
27, 40, 35, 37, 38, 28, 19, 32, 22, 1, 26, 18, 5, 21, 19, 21, 27, 3, 8, 33, 34,
6, 10, 18, 2, -1, -5, 5, 10, 4, -14, -18, -23, -26, -23, -3, -7, -30, -21, -21,
-39, -38, -24, -30, -22, -27, -38, -29, -26, -26, -21, -31, -38, -38, -23, -8,
-24, -28, -13, -3, -24, -21, -2, -10, -22, -19, -22, -14, -6, -6, 13, 8, 13, 8,
6, 23, 19, 17, 27, 25, 26, 30, 22, 37, 47, 31, 24, 35, 46, 34, 18, 17, 19, 23,
9, 17, 24, 15, 17, 10, 7, 18, 13, 10, 29, 16, 1, -2, -15, -8, 7, 5, 10, -3, -3,
20, 7, 12, 15, -2, -11, -23, -30, -26, -19, -14, -18, -16, -20, -24, -30, -28,
-13, -34, -27, -16, -26, -25, -31, -13, 0, -16, -12, -12, -8, 3, -15, -9, -11,
-12, -15, -14, 8, -5, -10, 2, 1, 3, 7, 6, 12, 5, 4, 10, 14, 16, 19, 26, 22, 18,
27, 29, 19, 18, 28, 31, 22, 25, 23, 21, 18, 16, 22, 21, 19, 14, 10, 11, 24, 24,
11, 1, -3, -3, -2, 14, 11, -7, -4, -1, -8, -12, -13, 1, -7, -18, -20, -18, -8,
-8, -18, -16, -4, -22, -22, -6, -15, -24, -19, -21, -10, -21, -34, -25, -19,
-20, -18, -15, -14, -11, -10, 3, -3, -14, -16, -9, 0, 5, -10, -10, 12, 14, 6, 5,
7, 5, 14, 3, 2, 6, 9, 11, 24, 26, 12, 7, 12, 28, 22, 16, 11, 12, 16, 20, 21, 9,
6, 3, 5, 19, 14, 8, 20, 13, 7, 12, 6, 4, 2, -2, -2, -2, -1, 5, 9, 0, -5, -2, 7,
1, -5, -5, -4, 0, -3, -11, -18, -9, -18, -18, 2, 6, -7, -24, -13, -6, -8, -22,
-23, -16, -24, -13, -4, -7, -11, -11, -13, -5, -8, -11, -12, -19, -12, -17, -13,
2, 1, -4, -2, -1, -1, 8, 8, 1, 13, 12, 14, 6, 5, 17, 16, 14, 14, 19, 12, 15, 16,
14, 12, 13, 3, 3, 12, 15, 24, 15, 7, 10, 14, 6, 8, 10, 0, 2, 10, 3, -1, -2, 3,
2, 2, 0, -6, 3, -5, -5, -5, -5, -6, -6, -10, -5, -7, -13, -11, -16, -15, -13,
-12, -9, -6, -19, -16, -12, -14, -19, -16, -15, -24, -15, -16, -11, -9, -14,
-19, -14, -6, -10, -10, -6, -1, 3, 2, 6, 8, 6, 2, -4, 2, 5, 4, 12, 4, -1, 15,
14, 9, 7, 8, 13, 8, 10, 8, 6, 12, 8, -2, -1, 14, 14, 12, 12, 11, 9, 4, 9, 16,
14, 13, 6, -1, 2, 7, 10, 8, -1, -4, -1, -9, -6, -1, -6, -10, -5, -3, -12, -9,
-5, -13, -14, -11, -14, -15, -9, -8, -8, -13, -20, -15, -13, -11, -10, -7, -8,
-13, -9, -2, -6, -11, -10, -9, -5, -6, -5, -11, -11, -2, -8, -13, -5, -2, 2, -2,
2, 2, 1, 3, 2, -1, 4, 12, 3, 8, 9, 5, 6, 8, 8, 5, 5, 5, 8, 7, 9, 10, 5, 3, 10,
12, 9, 12, 6, 2, 3, 4, 5, 10, 8, 2, 1, -3, 5, 7, 3, 5, 0, -6, -11, -8, -6, -6,
-14, -17, -10, -11, -3, -1, -7, -12, -11, -6, -9, -14, -14, -12, -11, -10, -13,
-15, -9, -4, -7, -9, -16, -15, -10, -8, -2, -4, -11, -14, -6, -4, -6, 0, 2, -7,
-3, 2, 0, -1, -1, -3, -4, -1, 7, 8, 8, 14, 13, 7, -2, 3, 6, 4, 6, 14, 14, 9, 10,
7, 3, 6, 12, 5, 0, 3, 6, 3, 6, 8, 1, -4, -2, 0, -1, 7, 4, -9, -13, -7, -6, -6,
-7, -11, -5, -4, -13, -8, -7, -5, -3, -10, -15, -11, -9, -9, -5, -10, -11, -11,
-8, -6, -2, -6, -10, -7, -8, -9, -7, -5, -7, -1, -1, -7, -5, -4, -5, -3, -6, -4,
-2, -5, -5, -1, -1, -2, -1, -1, 1, 3, 5, 4, 2, 5, 4, 2, 6, 7, 6, 6, 5, 4, 3, 4,
6, 6, 2, 5, 3, 4, 3, -1, 1, 3, 2, 0, 2, 3, 1, -2, -5, -9, -2, 0, -5, -4, -4, -7,
-5, -6, -9, -6, -4, -4, -7, -6, -6, -5, -7, -3, -5, -10, -12, -9, -4, -9, -11,
-6, -6, -8, -9, -9, -1, -6, -9, -8, -4, -2, -4, -2, -1, -1, -6, -6, -2, -1, -2,
-1, 0, 0, 0, 1, -1, 0, 2, 2, 5, 3, 2, 1, 0, 2, 2, 3, 1, 2, 3, 4, 6, 4, 1, 5, 4,
0, -1, 3, 5, -1, 0, -2, -4, 0, 1, 0, -3, -3, -3, -1, 0, -4, -3, 2, -4, -7, -3,
-5, -5, -4, -6, -3, -3, -8, -5, -3, -3, -7, -8, -3, -5, -3, -2, -6, -8, -6, -5,
-9, -8, -4, -2, -3, -4, -4, -4, -6, -4, -3, -2, -3, -5, -4, -3, -2, -5, -4, -1,
-1, 0, 0, -4, -3, 1, -3, -1, 0, -3, 1, 2, -1, 0, 1, 3, 3, 0, 2, 3, 0, 3, 4, 1,
3, 6, 5, 2, 2, 2, 1, 0, -1, -1, 1, -2, -5, -2, -1, -2, -5, -6, -2, 1, -4, -3,
-2, -2, -1, -2, -3, -5, -3, -1, -3, -4, -4, -5, -4, 0, -1, -6, -7, -6, -4, -4,
-6, -6, -5, -4, -5, -7, -6, -5, -6, -7, -7, -6, -5, -3, -2, -5, -4, -2, 0, 0, 1,
-1, -4, -2, 1, 0, -1, 0, -1, 0, 2, 3, 0, 2, 1, 2, 3, 0, 0, 1, 0, 3, 4, 1, -2, 0,
1, 2, 1, 0, 1, -1, 0, 2, 0, -1, 1, 1, 2, -1, -2, -2, -1, -2, -4, -5, -3, -1, -4,
-5, -4, -4, -3, -2, -6, -6, -6, -4, -3, -4, -5, -8, -6, -1, -3, -5, -5, -5, -5,
-5, -3, -4, -4, -5, -4, -2, -4, -5, -3, -1, -3, -3, -2, -3, -1, -1, -4, -3, -1,
-2, -2, 0, 2, 0, -1, 2, 1, 0, 1, 2, 3, 4, 4, 2, 1, 2, 3, 2, 0, 0, 1, 2, 0, -1,
1, 0, -1, 0, 0, -1, -2, 0, -1, -3, -1, -1, -2, -2, -1, -2, -2, -1, -3, -3, -3,
-1, -1, -2, -3, -2, -3, -3, -4, -5, -6, -4, -2, -4, -4, -5, -6, -7, -5, -4, -3,
-2, -4, -5, -3, -3, -4, -3, -3, -2, -4, -3, 0, -2, -4, -1, 1, -2, -1, 0, 1, 0,
1, 2, 1, 0, 0, 0, 0, 2, 1, 0, 1, 1, -1, 1, 2, 2, 2, -1, -1, 0, -1, 0, 3, 4, 2,
0, -1, -1, 2, 0, -1, -1, -1, 0, -1, -2, 0, 0, -3, -2, -1, -3, -3, -3, -3, -2,
-4, -3, -3, -4, -1, -2, -3, -4, -3, -2, -4, -2, 0, -3, -4, -3, -3, -1, -2, -1,
-2, -3, -3, -2, -1, -2, -3, -2, -2, -3, 0, 0, -2, -2, -1, -1, 0, 1, 0, 0, -1,
-1, 0, -1, 1, 1, -1, 1, 1, 0, 1, 1, 2, 2, 2, 1, -1, 0, -1, -1, 0, 0, 0, -1, -2,
-1, 1, 0, -2, -2, -1, -1, -2, -2, 0, -2, -1, -1, 1, -1, -3, -1, 0, 0, -2, -2,
-1, -1, -1, -2, -2, -2, -1, 0, -2, -3, -3, -3, -1, -3, -2, 0, -1, -3, -2, -3,
-2, 0, -1, -1, -1, -2, -3, 0, -1, -1, -3, -2, -1, -1, -1, 0, -1, -1, -1, -1, 1,
-1, -2, -1, 0, 0, 1, 2, 1, 0, -1, 1, 1, 0, 1, 2, 0, 0, 0, 1, 4, 1, -2, 0, 1, 1,
-1, -2, -1, 1, -1, 0, 0, -2, 0, 0, 0, 0, -2, -4, -1, 0, 0, -2, -1, 0, -1, -2,
-3, -1, -1, -1, 0, -1, -1, -2, -1, 0, -2, -2, -2, -3, -1, 0, -2, -2, -2, -2, -1,
-1, -2, -3, -1, 0, 0, 0, 0, -1, -1, 0, -1, -1, 1, 0, -1, 0, 1, 0, 1, 1, 0, 0, 1,
1, 0, 0, 0, -1, -1, 0, 0, 0, -1, -2, 0, 1, -1, 0, 1, 0, 1, 0, 0, 0, 0, 1, 0, 1,
0, 1, 1, 1, 1, 0, 0, -1, -1, 0, 1, -1, -1, 0, 0, -2, -1, -1, -2, -2, -1, -2, -2,
0, -1, -2, -2, -2, 0, -1, -2, -1, -1, -1, 0, -1, -1, -1, -1, -1, 0, 0, -1, -1,
0, 0, -1, -2, -1, 0, -1, -1, -1, -1, -1, 0, 1, 0, -1, 0, 0, 0, 1, 1, 1, 1, 0, 0,
1, 0, 1, 1, 0, 1, 1, 1, 1, 0, 0, 1, 0, 1, 1, 0, 0, 0, -1, 0, 0, 0, -1, -1, -1,
-1, 0, 0, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -2, -1, -1, -1,
-1, -1, 0, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, -1, 0, 1, 1, 0, 0, 1, 1, 0, 0,
0, 0, 1, 1, 2, 0, 0, 1, 1, 0, -1, 0, 1, 1, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, -1, 0, 0,
-1, -1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1,
1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 0, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1,
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1,
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
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
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
-1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
-1, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, -1, 0, 0, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0,
-1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0,
-1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, -1, 0, -1, 0, -1,
-1, -1, -1, -1, -1, 0, 0, -1, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, -1, 0, -1, -1, 0, -1, 0, 0,
0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1,
-1, 0, -1, -1, -1, -1, 0, 0, -1, -1, 0, -1, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0,
-1, -1, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, };

#endif /* EDRUMFIVE_H_ */
