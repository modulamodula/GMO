#ifndef MTFIVEHUNDREDNINE_H_
#define MTFIVEHUNDREDNINE_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define MTFIVEHUNDREDNINE_NUM_CELLS 2478
#define MTFIVEHUNDREDNINE_SAMPLERATE 16384
 
const int8_t __attribute__((section(".progmem.data"))) MTFIVEHUNDREDNINE_DATA []
= {0, 0, 0, 0, 0, 10, 0, 6, -1, 2, 0, 0, -1, 1, 0, 0, 0, -2, -1, 0, 0, -2, -1,
0, 0, -2, 0, 1, 0, -3, -1, 2, 0, -4, -1, 3, 0, -5, 0, 4, -1, -11, 0, 10, 0, -32,
-1, 16, 0, 67, -1, -27, 0, 17, 0, -55, -1, -42, 0, 74, -1, 15, 0, -102, 0, 29,
-1, 5, 0, -40, 0, 6, -1, 8, 0, 99, -1, -32, 0, -48, -1, -13, 0, 19, -1, -93, 0,
-12, -1, 8, 0, -31, -1, 97, 0, -58, 0, -78, -1, -20, 0, 78, -1, 23, 0, -5, -1,
9, 0, 36, -1, 21, 0, -44, 0, 18, -1, 35, 0, 51, 0, 24, -1, -20, 0, 33, -1, 33,
0, -18, -1, 47, 0, -35, -1, -93, 0, 9, 0, -7, -1, -68, 0, -8, -1, -67, 0, 3, -1,
25, 0, -4, 0, 44, 0, -12, 0, 42, -1, 17, 0, 3, -1, 14, 0, 61, -1, 41, 0, -20,
-1, -37, 0, -1, 0, -20, -1, -39, 0, -32, -1, 15, 0, -26, 0, -67, -1, 39, 0, -31,
-1, 16, 0, -9, -1, -46, 0, 68, -1, 25, 0, -48, -1, 10, 0, -31, -1, 14, 0, 24, 0,
5, 0, -9, 0, -37, 0, 34, -1, 20, 0, -23, -1, -2, 0, 41, 0, -18, -1, 41, 0, 26,
-1, -28, 0, -74, -1, 29, 0, -14, 0, -57, -1, 11, 0, 31, -1, 8, 0, -60, -1, 54,
0, 30, -1, -10, 0, 25, 0, 56, -1, -24, 0, -50, -1, 38, 0, 62, -1, -77, 0, -26,
-1, 55, 0, 9, -1, -17, 0, -23, -1, 6, 0, -43, -1, -25, 0, 77, 0, 10, -1, -34, 0,
39, -1, 39, 0, -20, -1, -66, 0, 67, -1, 63, 0, -69, -1, -40, 0, 69, -1, -14, 0,
-53, -1, 35, 0, 9, 0, -84, -1, -41, 0, 28, -1, 23, 0, -72, -1, -10, 0, 71, -1,
-54, 0, 1, 0, 57, -1, 43, 0, -39, 0, -45, 0, 43, 0, 17, -1, -10, 0, 38, 0, 0, 0,
-43, 0, -19, 0, 69, -1, 10, 0, -47, -1, -11, 0, 74, -1, -12, 0, -69, -1, 67, 0,
8, 0, 15, -1, -111, 0, 41, -1, 50, 0, -84, -1, -2, 0, 15, 0, 15, -1, -38, 0, 44,
-1, -43, 0, 18, -1, 8, 0, -30, -1, 78, 0, -8, 0, -21, -1, 19, 0, -21, -1, -45,
0, 10, -1, 65, 0, 15, -1, -37, 0, 31, -1, 7, 0, -25, -1, -21, 0, 17, -1, -33, 0,
-18, 0, 40, -1, -6, 0, -57, -1, -82, 0, 67, 0, 51, -1, -33, 0, 1, -1, 70, 0, 17,
-1, -33, 0, -27, 0, 29, 0, 37, -1, -34, 0, -10, -1, 44, 0, -21, -1, -33, 0, 9,
-1, -41, 0, 10, -1, -2, 0, 36, -1, -9, 0, -28, -1, -10, 0, 30, 0, 31, 0, -4, -1,
38, 0, -5, -1, 0, 0, -52, -1, -23, 0, 38, -1, 10, 0, 1, -1, -24, 0, 4, 0, 58,
-1, 5, 0, -48, -1, -8, 0, -6, 0, 7, -1, 28, 0, -30, 0, -1, 0, 14, 0, 39, 0, -7,
0, -24, -1, 7, 0, -57, 0, -41, -1, 48, 0, 20, -1, -94, 0, -20, -1, 46, 0, -26,
-1, -86, 0, 11, -1, 83, 0, -9, -1, 6, 0, 48, 0, 45, 0, 11, -1, 1, 0, 27, -1,
-36, 0, -2, 0, 22, -1, -23, 0, -46, 0, 35, 0, -19, 0, -14, 0, 43, 0, -18, 0, 7,
-1, -26, 0, -3, 0, 22, -1, -10, 0, 14, -1, 36, 0, 12, -1, 26, 0, -22, 0, 9, -1,
-9, 0, 5, -1, 4, 0, 1, -1, 8, 0, -15, -1, -4, 0, -47, -1, 46, 0, -49, -1, -52,
0, 15, -1, 53, 0, -13, -1, -90, 0, 30, -1, 38, 0, -23, -1, -66, 0, 16, 0, 5, -1,
-20, 0, 8, -1, 15, 0, -41, -1, 16, 0, 21, -1, -43, 0, 26, -1, 16, 0, 27, -1, -1,
0, 13, -1, 17, 0, 23, 0, -20, -1, 2, 0, 16, -1, -14, 0, 3, 0, -49, -1, 13, 0,
27, -1, 6, 0, 11, -1, -35, 0, -11, 0, 0, -1, -19, 0, -7, -1, -4, 0, 21, -1, 11,
0, 17, 0, -14, 0, -10, -1, -5, 0, 13, 0, 46, 0, -21, 0, 20, -1, 39, 0, 0, -1,
-46, 0, -12, -1, 18, 0, -37, 0, -19, -1, -7, 0, 5, -1, 7, 0, 0, 0, 0, -1, 29, 0,
-27, -1, 0, 0, 9, 0, -31, 0, 33, -1, 8, 0, 13, -1, -34, 0, 7, -1, 50, 0, -31,
-1, -36, 0, 15, -1, 23, 0, -22, 0, -34, -1, 21, 0, 41, 0, -50, -1, -9, 0, 9, -1,
-20, 0, 22, -1, -4, 0, -5, 0, -1, -1, -3, 0, 32, -1, 34, 0, -27, -1, 19, 0, 23,
-1, -51, 0, -10, -1, 59, 0, 13, -1, -37, 0, 10, -1, 4, 0, -32, -1, -8, 0, 11,
-1, 14, 0, -6, -1, -37, 0, -12, -1, 9, 0, -21, -1, 11, 0, 12, 0, -71, -1, 43, 0,
41, -1, -45, 0, -43, 0, 51, 0, 28, -1, -10, 0, 3, 0, 4, -1, 0, 0, -18, -1, 28,
0, -5, -1, 9, 0, -40, 0, 33, -1, -2, 0, -12, -1, 32, 0, 6, -1, -10, 0, 24, 0, 0,
0, -42, 0, 4, 0, -8, -1, 33, 0, 1, 0, -43, -1, 9, 0, 35, -1, -21, 0, -17, 0, 1,
0, 44, -1, -31, 0, 13, 0, 17, -1, -11, 0, 11, -1, -33, -1, 25, 0, -43, -1, -29,
0, 37, -1, 4, 0, -22, -1, 8, 0, 33, -1, 5, 0, -24, 0, 13, -1, 12, 0, -13, 0,
-22, -1, 2, 0, -4, -1, -20, 0, -13, -1, 3, 0, 22, -1, -4, 0, -5, -1, 13, 0, 24,
0, 7, -1, 54, 0, -32, -1, -10, 0, 32, -1, -4, -1, 22, 0, -70, -1, -3, 0, 20, 0,
4, -1, -34, 0, -18, -1, 43, -1, -4, 0, -40, -1, 4, 0, 38, 0, -42, -1, 1, 0, 38,
-1, -6, 0, -34, 0, 3, -1, 12, 0, -19, 0, -8, 0, 32, -1, -18, 0, -16, 0, 4, -1,
11, 0, 18, -1, -32, 0, 10, -1, -1, -1, 23, 0, -13, -1, -12, 0, 27, 0, 7, -1, 10,
0, 9, -1, -25, 0, -22, -1, 47, 0, 2, 0, -29, -1, -9, 0, 24, -1, 8, 0, -44, 0,
-21, -1, 17, 0, 24, -1, -7, 0, -6, 0, 17, -1, -3, 0, 17, -1, -20, 0, -26, 0, 11,
-1, 5, 0, -3, -1, -14, 0, -2, -1, 8, 0, 18, 0, -22, 0, -9, -1, 13, 0, 20, -1, 2,
0, -39, -1, 14, 0, 16, 0, -24, 0, -27, -1, 1, 0, 8, -1, -34, 0, -4, -1, 9, 0,
13, -1, -12, 0, -12, -1, 3, 0, -23, -1, 23, 0, 14, -1, -28, 0, 6, -1, 36, 0,
-19, -1, -5, 0, 4, -1, 2, 0, 18, -1, -9, 0, 10, -1, -1, 0, 7, 0, 9, -1, 5, 0,
13, -1, 3, 0, 2, -1, -17, 0, 22, -1, -19, 0, -13, -1, 14, 0, -14, 0, 23, -1,
-22, 0, -5, 0, 16, -1, -16, 0, -20, -1, 25, 0, 3, -1, -5, 0, 7, -1, 7, 0, -1, 0,
-5, -1, 13, 0, -22, 0, -2, -1, -15, 0, 3, 0, -1, -1, -4, 0, -1, -1, -5, 0, 0,
-1, -15, 0, 2, 0, -4, -1, -18, 0, -7, -1, -5, 0, -1, 0, 1, -1, -11, 0, -15, 0,
4, -1, -14, 0, -5, -1, 13, 0, -5, -1, 26, 0, 9, -1, 15, 0, 1, -1, 12, 0, -6, -1,
0, 0, -9, 0, -2, -1, 7, 0, 0, -1, 7, 0, -15, 0, 13, -1, -7, 0, -4, 0, 6, -1, 5,
0, -24, -1, -6, 0, 7, 0, 11, -1, -1, 0, -9, -1, 13, 0, 4, -1, -14, 0, -4, -1,
-11, 0, 5, -1, 13, 0, 19, -1, -6, 0, -28, -1, 14, 0, -2, 0, 6, -1, -13, 0, 10,
-1, 16, 0, -10, 0, -20, 0, 17, 0, 13, 0, -23, 0, -10, -1, -4, 0, -8, -1, -8, 0,
10, 0, -5, -1, -10, 0, -5, 0, 9, -1, 6, 0, -6, 0, -7, -1, 6, 0, 4, -1, -13, 0,
4, 0, 15, 0, -13, 0, -17, 0, 8, 0, 8, -1, -17, 0, 6, -1, -6, 0, 0, -1, 2, -1,
-4, 0, 16, -1, -21, 0, -8, -1, 12, 0, 1, -1, -43, 0, 15, -1, 30, 0, 1, -1, -4,
0, 2, 0, 58, 0, -2, 0, -16, -1, 18, 0, 6, -1, -4, 0, 5, 0, 6, -1, -27, 0, -16,
0, 3, -1, 0, 0, -18, -1, 1, 0, 1, -1, -38, 0, -2, -1, 21, 0, 7, -1, -25, 0, 5,
0, 19, -1, 0, 0, -24, 0, 0, -1, 23, 0, -18, -1, 3, 0, 2, -1, -22, 0, -13, -1, 9,
0, -5, -1, 1, 0, 7, 0, 3, 0, -3, 0, 18, -1, -1, 0, -11, -1, 7, 0, 7, 0, 1, -1,
-8, 0, 15, -1, 12, 0, -2, -1, -10, 0, 9, -1, 1, 0, 4, 0, 14, 0, 8, -1, -4, 0,
-10, -1, -4, 0, -13, -1, -1, 0, 0, 0, -9, -1, -11, 0, 0, -1, 7, 0, -5, -1, -7,
0, 3, -1, 8, 0, -9, -1, -5, 0, 11, -1, 0, 0, 5, 0, 7, -1, -18, 0, -12, -1, -4,
0, 7, -1, 16, 0, -8, -1, -5, 0, -1, 0, 3, -1, 3, 0, -3, -1, -14, 0, 5, -1, 20,
0, -3, 0, 0, -1, 0, 0, 2, -1, -5, 0, -10, 0, 5, 0, -4, 0, 3, -1, 6, 0, 0, -1, 0,
0, -1, -1, 0, 0, -5, -1, -12, 0, 4, 0, -3, -1, -12, 0, -1, 0, -4, -1, 5, 0, -17,
-1, 2, 0, 20, 0, -6, -1, -8, 0, 9, 0, 15, 0, 7, -1, -4, 0, 8, -1, -7, 0, -12,
-1, 14, 0, -2, 0, -7, -1, 0, 0, 8, -1, -9, 0, -14, -1, 0, 0, 8, -1, 3, 0, -13,
-1, -8, 0, 9, -1, -3, -1, -9, 0, 2, -1, -1, 0, 0, -1, 2, -1, 2, 0, -7, -1, -14,
0, 10, 0, 9, -1, -2, 0, 3, 0, 2, -1, 10, 0, -13, 0, -9, -1, 8, 0, 7, -1, -9, 0,
-3, -1, 12, 0, -9, -1, -5, 0, 2, -1, 3, 0, -3, -1, -1, 0, 1, 0, -2, 0, -3, 0, 3,
-1, 4, 0, -10, -1, -14, 0, 4, -1, 10, 0, -14, -1, -5, 0, -3, -1, 7, 0, 17, -1,
-8, 0, -7, -1, 13, 0, 12, -1, -1, 0, -1, 0, -2, -1, 5, 0, 0, -1, -8, 0, -7, 0,
-2, -1, 3, 0, -1, -1, -5, 0, -13, -1, 13, 0, 11, -1, -9, 0, 0, 0, 1, 0, 6, 0,
-8, -1, -5, 0, 14, -1, -1, 0, -10, 0, -5, -1, 13, 0, 2, 0, -11, 0, 2, -1, -1, 0,
4, -1, 1, 0, 4, -1, 9, 0, 1, 0, -2, 0, 0, 0, -10, 0, -7, -1, 3, 0, 2, -1, -7, 0,
-18, -1, -2, 0, -6, -1, -4, 0, 0, 0, 3, 0, 4, 0, -7, -1, 2, 0, 1, 0, 1, 0, -9,
-1, 13, 0, 21, -1, -16, 0, -7, -1, 9, 0, 0, -1, 0, 0, -1, -1, 1, 0, 7, 0, -3,
-1, 9, 0, 5, 0, -12, -1, -3, 0, 4, -1, -1, 0, 0, -1, -3, 0, -5, -1, 1, 0, -2,
-1, 0, 0, -1, -1, -7, 0, -1, -1, 8, 0, -3, 0, -10, 0, 2, -1, 6, 0, -1, -1, -5,
0, -3, -1, 8, 0, -6, 0, -1, -1, -4, 0, -2, -1, 2, 0, -9, -1, 1, 0, -1, 0, 6, -1,
-7, 0, -2, -1, 1, 0, -3, 0, 2, -1, 0, 0, 1, -1, -2, 0, -1, -1, 2, 0, 1, -1, 1,
0, 0, 0, 4, -1, -5, 0, -4, -1, 8, 0, -5, -1, -3, 0, 0, 0, 0, -1, 4, 0, -4, -1,
-7, 0, 1, 0, -2, -1, 3, 0, 3, -1, -2, 0, 1, 0, -1, -1, -2, 0, -1, -1, -8, 0, -4,
0, 6, -1, -7, 0, -7, -1, 7, 0, 3, 0, -8, -1, 1, 0, -3, -1, -6, 0, -3, -1, -2, 0,
1, 0, 0, -1, 1, 0, 0, -1, 1, 0, 1, -1, -2, 0, 0, -1, 2, 0, 0, -1, 6, -1, 1, 0,
-4, -1, 1, 0, 3, -1, 2, 0, 0, -1, 1, 0, 0, -1, 1, 0, 0, 0, 1, 0, -2, -1, -1, 0,
1, -1, 1, 0, -3, 0, -4, -1, 1, 0, -2, 0, -1, -1, -4, 0, -1, -1, 1, 0, 1, -1, -2,
0, -1, -1, 2, 0, 1, -1, 0, -1, 0, 0, -3, -1, -4, 0, 1, -1, 1, 0, -2, -1, 2, 0,
1, -1, -3, 0, 1, 0, 1, 0, 1, 0, 0, -1, 1, 0, 0, 0, 0, -1, 0, 0, 1, -1, -3, 0,
-4, -1, -1, -1, -2, 0, 0, -1, -2, 0, -1, 0, 1, -1, 0, 0, 1, -1, 0, 0, 1, -1, 0,
0, 0, -1, 0, -1, 1, 0, -1, -1, -2, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0, 0, -1, 0,
0, 0, 0, 0, -1, -3, 0, -1, 0, 0, -1, -3, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0, 0,
-1, 0, 0, -1, 0, 0, -1, 0, 0, 0, -1, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0,
0, -3, -1, -1, 0, -1, -1, -3, 0, 1, -1, 0, 0, 0, -1, -2, 0, -3, -1, 0, 0, 0, 0,
0, -1, 0, 0, -3, -1, -1, 0, 1, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0,
-1, -1, 0, 0, 0, 0, -1, -1, -1, 0, 0, -1, 0, 0, 0, 0, -1, -1, 0, 0, 0, -1, -1,
0, -1, -1, -1, 0, 0, -1, 0, 0, 0, -1, -1, 0, -1, -1, 0, 0, -1, -1, -1, 0, 0, -1,
-1, 0, -1, 0, -1, 0, -1, -1, -1, 0, 0, 0, -1, -1, -1, 0, 0, -1, -1, 0, -1, -1,
-1, 0, 0, 0, -1, -1, 0, 0, -1, -1, -1, 0, 0, -1, -1, 0, -1, -1, -1, 0, 0, 0, 0,
-1, -1, 0, -1, 0, -1, };

#endif /* MTFIVEHUNDREDNINE_H_ */
