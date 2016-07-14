#ifndef DTSEVEN_H_
#define DTSEVEN_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define DTSEVEN_NUM_CELLS 5372
#define DTSEVEN_SAMPLERATE 16384
 
const int8_t __attribute__((section(".progmem.data"))) DTSEVEN_DATA [] = {0, -1,
-2, -1, 0, -1, -1, 0, 0, -1, -1, -2, 0, -1, 0, -1, -2, -1, -1, -2, 0, -1, -1,
-1, 0, -1, -1, -2, -1, 0, -1, -1, -1, -1, -2, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -2, -1, -1, -2, 0, 0, -4, -1, 0, -3, -2, 0, -3,
-2, 0, -2, -1, -2, -1, -1, -2, -1, -1, -2, -2, -2, -2, -2, -1, -1, 0, 0, -2, -3,
-2, -2, -2, 0, 0, -1, 0, -4, -1, 3, -2, -6, -3, 1, -2, -1, 2, -3, -2, -2, -4,
-3, -1, -1, 0, 1, -2, -3, -3, 0, -3, -1, 1, -2, -3, 0, 3, -5, -2, -1, -4, -2, 3,
2, -5, -4, -2, -1, -1, -1, -1, -1, -1, 0, 1, -2, -3, -6, -2, -1, 0, 6, -1, -2,
-3, -1, -3, -7, 2, 6, 2, -1, -6, -3, 1, -2, 0, -2, -2, 2, 1, -6, -2, -1, 2, 3,
0, 0, -3, -2, 1, 3, 1, -4, -8, 2, 2, 1, 4, -3, -5, -1, 0, -1, 1, 2, -3, 0, 11,
-1, -11, 5, 0, -9, 7, 5, -2, 4, -5, -5, 3, 4, 2, -8, -4, 6, 1, -4, -6, 6, 9, 1,
1, -12, -4, 4, -3, 6, 11, 0, -10, -9, 0, -3, 5, 15, 4, -5, -11, -8, -6, 1, 9,
16, 4, -9, -15, -9, 5, -12, 4, 29, -10, -7, -4, 6, 17, -2, -11, -12, 0, 5, 12,
-3, 18, -14, -18, -16, -13, 18, 14, 31, -8, -20, 1, -9, -11, 5, 19, 22, -6, -25,
-15, 9, 31, 7, -11, -4, -14, 6, 5, -3, 15, 6, -18, -8, 10, -13, -5, 1, 6, 24,
-10, -5, 19, -9, -5, 0, 10, 0, -23, -5, 14, 13, -6, 8, -3, -19, 10, 18, 2, -7,
-2, 2, 7, 16, 5, -11, -15, -5, 7, 10, 8, -6, -10, 6, 8, -9, 3, 7, -15, 11, 0,
-1, 17, -7, 2, 13, -1, -8, 8, 3, -8, 2, 7, 6, 4, -11, 3, 6, 11, -6, 7, -11, -6,
8, 4, 17, -18, 8, -22, 24, 9, -5, 12, -4, -6, -5, 12, -14, 24, 20, 8, 2, -6, -9,
-20, -4, 19, 6, 6, 8, -14, -10, 13, 0, -3, 19, 7, -15, -27, -2, 16, -5, 5, 1,
-4, 6, -5, 1, -4, 0, -17, 1, 32, 0, -2, -7, 0, -11, -12, 30, -12, -8, 19, 10,
-17, -3, 9, -5, -13, 4, 0, -14, 3, -16, -8, -8, 33, 7, -11, 3, -31, -5, 17, 0,
5, 29, -4, -58, -10, 24, 20, 16, 14, -9, -24, -16, -5, -8, 8, 25, -19, 45, -22,
-59, 0, 17, 23, 13, 1, 11, -3, -10, 12, -30, 16, 9, 8, -22, -13, 22, 5, -12,
-16, 23, 4, -4, -2, 6, 11, 8, -20, -10, 5, -3, 0, 19, 11, -14, -28, 1, 24, -13,
16, 27, 4, -50, -11, 17, 23, 19, -24, -5, -13, 5, 12, -8, -26, -3, 2, 26, 15,
-25, 27, 2, -27, 31, -6, -25, -40, -36, 39, 43, 5, 0, -7, -12, -20, 10, 0, -20,
6, -11, 10, -32, 25, -4, -17, 27, 42, 15, -47, -14, -22, 28, -25, -37, 58, 18,
-9, 10, -24, -1, 0, -24, 17, 35, 14, -28, -36, 1, 17, 18, -30, 8, 1, -20, -9, 6,
1, -37, 24, 32, 43, -28, -12, 38, -9, -27, -51, 48, -18, -27, 50, -22, 11, 4,
29, -14, -43, 6, 45, -12, -46, 43, 32, -11, -24, 23, -31, -16, 57, -12, -16,
-48, -31, 31, 38, 27, -48, -33, -19, 6, 18, -5, 10, 23, -27, -34, -36, 27, 25,
-26, 39, -37, -25, 1, -6, 50, 15, -4, -2, -19, -47, -49, 41, 51, 39, 4, -49, -8,
7, -30, 15, 19, -21, -30, 12, 64, 30, 9, 0, -72, -105, 37, 49, 6, -20, 58, -1,
-53, 34, -31, -8, -4, 34, -29, 2, 51, -29, -25, 14, 49, 4, -46, 2, -44, -33, 38,
4, 50, 51, 44, -73, 4, -20, -46, 42, 39, 17, -38, 47, -19, 23, 15, 5, 30, -34,
-30, 11, 14, 10, 48, -5, -51, -26, 4, 3, 63, 83, -19, -18, -28, -76, 38, 98, 35,
0, 9, -38, -25, 0, -43, 24, 31, 7, 16, -38, -6, 2, -32, 37, 65, 13, -47, -44,
22, -6, -8, 47, 66, -28, -70, -25, 35, 76, -18, -55, -11, 49, 0, -18, 40, -9,
-42, -89, -17, 83, 13, -10, 14, 33, -28, 34, -17, -89, -16, 36, 31, 33, 53, -10,
-50, -97, -13, -8, 47, 87, 12, -47, -70, -10, -40, 0, 60, 13, -22, 15, 63, -58,
-36, 4, 27, 34, 13, -15, -54, -21, -45, 61, -2, -15, -21, 3, 11, 1, 41, 3, -15,
-57, -27, 9, 47, 11, 22, 3, -23, -66, -13, 42, 9, 29, 20, -70, -44, -6, -40, 69,
54, 2, -70, 18, 15, -19, -2, 11, 47, -39, -58, -50, 41, 33, 47, -22, -39, -47,
-43, 15, 21, 109, 40, -39, -20, 10, 16, -13, -33, 5, 17, 32, -63, -79, 8, 95,
65, -31, 54, -4, -85, -14, 63, 29, -36, -47, -38, 27, 44, -3, 26, -1, -67, 0, 7,
0, 80, 43, -32, -29, -46, 1, 36, -24, -36, -4, 23, -15, -17, -2, -36, -6, 12,
59, 41, -37, -83, -60, 76, 39, 25, -41, -128, -32, -27, 67, 29, -4, 48, -50, 5,
-8, -22, 14, 23, 34, 36, 9, -66, -8, -5, 23, 24, -24, 23, -39, -13, 54, 18, -19,
-2, -30, -47, 45, 33, 9, 12, 0, -12, -34, -26, 24, 19, -19, 64, -21, -22, 39,
-41, -41, 15, 58, 2, 55, -30, -87, 13, -34, -1, -15, 15, 46, -23, 15, 31, -24,
-50, 38, 5, -61, 10, -26, -38, 18, -3, 53, 11, -46, 18, 3, 44, -23, -49, 44,
-38, 10, 28, 3, 24, -15, -31, -62, 5, 36, 49, -9, -69, -44, 46, 32, 13, 35, -15,
-18, -52, -31, 1, 47, 56, 12, -31, -45, -54, 2, 65, -28, -49, 45, 37, 3, -24,
13, 27, -58, 2, 30, -55, 22, 22, -40, 51, 28, -20, -19, -64, -9, 62, 0, 30, 31,
-9, 2, -80, -53, 32, 31, 46, 19, -43, -31, -30, -11, 38, 19, 8, -29, -2, 15,
-63, 11, 40, -4, 5, 19, -3, -57, 15, -28, -67, 18, 43, 44, -25, -21, -8, 10,
-33, -40, 47, 16, 52, 40, -50, -4, 22, -6, 0, 35, 6, -36, 0, 44, 48, -50, -47,
-37, -21, 79, 67, -26, -66, 32, -41, -84, 81, 14, -18, -22, -11, 50, -9, 9, -15,
17, 16, -40, 2, 36, -34, 21, 68, -33, -18, 4, -36, -45, 17, 46, 36, -14, 3, 10,
1, -43, -6, 47, -6, 1, 3, -5, -20, -1, -4, 39, 32, -38, -2, 49, -11, -33, -34,
-18, 84, 43, -50, -17, 50, -10, -64, 23, 63, 26, 5, 16, -8, -65, -11, 56, 34,
-28, -47, -6, 40, 9, -11, 11, -3, -23, -7, 51, 9, -28, 26, 22, -28, 2, 14, -33,
-23, -6, 37, 51, -30, -23, 2, -33, -4, -1, -9, 38, 34, -8, -44, -1, 23, -17, 9,
11, 27, 13, -42, -42, -40, 22, 48, -16, -7, 28, -11, -49, -12, 49, 48, 0, -13,
-62, -23, 52, 23, -6, -23, -1, 16, -16, -25, 19, 16, 7, 12, -20, -49, -39, 3,
40, 53, -4, -37, 10, 15, -8, -9, -21, -23, 26, 52, 19, -41, -52, 26, -14, -25,
33, -6, -4, 7, 18, 3, -17, 0, -20, -9, 27, 32, -2, -30, -3, -17, -37, 18, 43,
-22, 20, 2, -32, 25, -18, 0, 0, 8, 10, 0, -6, -6, -13, -28, -5, 6, 14, 23, 6,
-44, -7, 2, 10, -10, -16, -8, 14, 23, 17, 17, -15, -54, -33, 41, -10, 22, 2, -7,
3, -14, -9, -23, 16, 28, -18, -21, 27, -29, -9, 25, -2, -17, -1, -7, -4, 13,
-10, -7, 1, -2, -9, 3, 6, 4, -6, -3, 5, 18, 6, -19, -13, 3, -4, -11, 11, 2, -2,
8, -17, -3, 19, 6, -1, -30, 5, 38, -7, -13, 6, -18, -18, 25, 5, -16, 13, -14,
-13, 12, -2, 1, -9, 3, 6, 5, -14, 8, 7, -8, 12, -8, -5, -2, -4, -7, 14, 17, -17,
-12, 10, 3, 3, 1, 0, -2, -17, -3, 10, 3, 4, -3, -3, -3, -2, 6, 1, -5, -7, -4, 2,
5, -4, -2, 1, 2, -5, -2, 1, -6, -5, -3, 3, 5, 4, -5, -6, -3, -7, -4, 1, 0, 0, 2,
3, 3, 2, -3, -9, -8, -2, 4, 7, -7, -3, 7, -1, -5, -3, 0, -5, 0, 7, 0, -2, 4, -2,
-6, -7, -2, 2, -2, -1, 3, 5, 2, 1, -6, -6, -5, 1, 1, 3, 2, -5, -2, -1, 1, -3,
-1, -2, -4, 2, 2, 2, -1, -8, -6, 0, 2, 3, 2, -5, -5, -1, 3, -1, -4, -3, -2, 2,
-2, 0, -2, -4, -3, -2, 7, 0, -7, -1, -2, 0, 2, 1, -2, -2, 1, -4, -1, 1, -1, -3,
-3, 1, 0, -3, 0, -1, 1, 3, 4, 1, -8, -6, 1, -3, 2, 3, 2, 1, -5, 0, 2, 1, 3, 1,
-2, -3, -3, 1, 1, 1, 0, -1, 0, 2, 1, -3, 0, 4, 4, 3, -1, -5, -2, 2, 2, 2, 2, 1,
-2, 0, 0, 2, 1, -1, -2, -2, 4, 4, 1, 0, 0, 0, -2, 2, 1, -4, -2, 0, -1, 4, 5, 0,
-3, -3, 1, 3, 3, 2, -2, -3, -3, 2, 4, 0, -3, -1, 0, 1, 4, -1, -2, -2, -1, -1, 0,
1, -1, -2, 0, 1, -1, -2, -4, -2, 1, 3, 1, -1, -1, -4, -2, 0, -1, -1, -2, -2, 0,
-3, -2, -1, 0, 0, -3, -1, 1, -2, -1, -1, -2, 0, -2, -2, -4, -1, 0, 1, -1, -2,
-3, -4, -2, 0, 2, -1, -2, -2, -2, -1, -1, -3, -3, 0, 1, 1, -4, -4, -1, -2, 1,
-2, -1, 0, -3, -3, -1, 1, -1, -2, -2, -2, -1, -2, -1, 0, 0, -3, -4, -2, 2, 2,
-1, -3, -3, -1, -2, 1, -1, -2, -1, -1, 1, 0, -1, -2, -2, 0, 1, 0, -1, -1, 0, 0,
-1, -1, 0, -2, 0, 1, 0, -2, 0, 1, -2, 1, 1, 0, -1, -1, 1, 1, 1, 2, -1, -1, -2,
-1, 1, 0, 0, 3, 1, -1, 0, -1, -1, 0, 1, 1, 1, 0, 2, 1, 0, -1, 0, -1, 1, 3, 0, 0,
0, -1, -2, 0, 1, 2, 2, 1, -1, -1, 1, 1, 0, -2, 0, 1, 1, -1, 0, 1, 0, -2, -1, 2,
0, 0, 1, 2, 1, -1, -2, -1, 1, 1, -1, 0, 0, -1, -1, 0, 0, 0, -1, 0, 1, -1, -2, 0,
0, 0, 0, -2, -1, -2, -1, 0, 1, 1, -2, -2, -2, -2, -1, 0, 2, -1, -2, -1, -1, -1,
-1, 0, -1, -2, -2, -1, 0, -1, -1, 0, -2, -2, -2, -2, -1, 1, -1, -2, 0, -2, -3,
-1, 0, 0, -1, 0, -2, -3, -2, -1, 0, 0, 0, -1, -1, -1, -2, -2, -1, 0, 0, -1, 0,
-1, -2, -2, -1, 1, 0, -1, -1, 0, -2, -2, -1, 0, 1, 0, -2, -1, 0, 0, 1, -1, -1,
-2, -1, -1, -1, -1, 1, 1, -2, 0, 0, 0, -1, 1, 0, 0, -2, -1, 0, 0, 1, -1, -1, 0,
0, 1, 1, 1, 0, 0, -1, 0, 1, 1, 0, 0, 0, -1, 0, -1, 1, 0, 0, 0, 1, 1, 1, 0, -2,
0, -1, -1, 2, 2, 1, -1, -1, -1, 1, 1, 0, 0, 0, 0, -1, -1, 0, 0, 0, -1, 0, 1, 0,
-1, 0, 0, -1, -2, -2, 1, 0, 0, -1, -2, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0, 0, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -2, 0, 0, -1, -2, -2, 0, 1, -1, 0, 1, -1,
-2, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 0, 0, 1, -1, -1, -1, -2, -1,
0, 1, 0, -1, 0, 0, -1, 1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, -1, -1, 0, -1,
0, 1, 1, 1, 1, 0, -1, -1, 0, 1, 0, -1, 0, 0, 0, 0, 0, 0, 1, 1, 0, 1, 1, 1, 0,
-1, -2, 1, 1, 0, 1, 0, -1, 0, 1, 1, 1, -1, -1, -1, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0,
0, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, -1, -1, 0, 1, 1, 0, -1, 0, 0, 0, 1, 0, -1,
-1, -1, -1, -1, 0, -1, -1, 0, 0, -1, -1, -1, 0, 0, 0, 0, -1, -2, -1, -1, -1, -1,
0, 0, -1, -2, -2, -1, -1, -2, -1, -1, -1, -1, -2, -1, 0, -1, -1, -2, -2, -1, -1,
-2, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, -1, -1, -1, -1, -1,
-1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, 0, -1, -1, -1, 0, -1, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1,
-1, -1, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, -1, 0, -1, -1, -1, -1,
-1, -1, -1, -1, 0, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, -1,
-1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0,
-1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, -1,
0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, 0, -1, 0, 0,
0, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, -1, -1, -1, 0, -1, 0, -1, 0, -1, -1,
-1, -1, -1, -1, -1, -1, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, 0,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0,
-1, 0, -1, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, 0, -1, 0, -1, 0, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, 0, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, 0, -1, -1,
-1, -1, -1, -1, -1, -1, -1, 0, -1, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, 0,
-1, 0, -1, 0, 0, -1, 0, -1, 0, -1, -1, 0, 0, -1, 0, -1, -1, 0, -1, -1, -1, -1,
0, -1, 0, -1, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, 0,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, -1, -1,
-1, -1, -1, -1, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, 0,
-1, 0, -1, -1, 0, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, 0, -1, 0, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, 0, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0,
-1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, -1, -1,
-1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, 0, -1, 0, -1, 0, -1, -1, 0, -1, 0, -1, 0, -1, -1, 0, -1, 0, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0,
-1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
0, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, 0, -1, 0, -1, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1,
0, -1, -1, -1, -1, -1, -1, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1,
0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, };

#endif /* DTSEVEN_H_ */
