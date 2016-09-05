#ifndef ROLANDCRTWO_H_
#define ROLANDCRTWO_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define ROLANDCRTWO_NUM_CELLS 1139
#define ROLANDCRTWO_SAMPLERATE 16384
 
const int8_t __attribute__((section(".progmem.data"))) ROLANDCRTWO_DATA [] =
{-1, -6, -8, -16, -17, -26, -22, -31, -22, -30, -8, 33, 46, 43, 58, 27, 52, 77,
6, 52, 54, 61, 54, 34, 32, 30, 75, 55, 54, 26, 40, 53, 8, 51, 33, 33, 42, 35,
-7, 44, 24, -27, -7, -26, 21, -36, -12, -40, -5, -9, -65, -32, -30, -69, -74,
-36, -50, -42, -33, -57, -73, -48, -15, -28, -63, -31, -62, -1, -10, -17, -52,
-18, 7, 0, 0, -28, 11, 8, 27, 14, 46, -42, 16, 20, 44, -14, 9, 27, -15, 33, -4,
23, 15, -7, -32, 33, -58, 13, -14, 7, -11, -41, 2, -75, 4, -38, -14, -16, -29,
-22, -35, -29, -5, -39, -44, -8, 6, -15, -37, -2, -3, -37, -23, 15, -45, 4, 25,
-4, 13, 16, 32, 20, -3, -45, 41, 52, -6, -2, 14, 5, 0, 51, -74, 24, 71, -40, 11,
-5, 1, -40, 31, -7, -17, 10, -47, 3, 8, 35, -72, -20, -7, -50, 47, -43, -9, 10,
-49, 0, -9, -37, 10, -1, -20, 13, -15, 13, 11, 0, -5, 5, 2, 2, 33, 10, 4, -16,
29, 21, -28, 32, 8, -21, 14, 21, 12, -7, 22, -2, 4, -18, 4, 16, -25, 25, -3, -6,
-32, -16, 28, 4, -19, -43, -12, 42, 6, -41, 23, -25, -34, 55, -1, -47, 4, -23,
35, 4, -64, 73, -16, -7, 20, 5, 3, -4, -2, -1, -7, 1, 5, 0, 30, -3, 21, -37, 49,
4, 0, 38, -25, -9, 24, -21, 12, 0, -35, 44, -34, 12, 10, 28, -10, -15, -6, -17,
8, 6, -13, 6, -30, 26, 18, -43, 18, -26, 25, -17, 4, 1, -7, 19, -6, 30, -9, -23,
38, -13, -5, 12, -20, 17, 40, -50, 27, 25, -27, 26, -47, 27, 16, -9, -5, 15, 16,
2, 4, -12, 14, -22, -12, 14, 51, -16, -52, 45, -30, 14, -7, -7, 0, -5, -3, -10,
34, -11, 3, -2, 7, -14, 15, -36, 14, 33, 10, -6, -21, -8, -17, 33, 13, -17, 15,
-4, -4, 44, -17, -5, -7, 13, -5, 19, 1, -44, 32, -1, 12, 8, -14, 8, -14, 26, 17,
-33, 5, 3, 5, 2, 8, -13, -3, 26, -46, 15, 28, -26, -2, 9, -13, 21, 9, -12, -12,
3, 12, 3, 7, -39, 16, 26, -19, -13, 20, -5, 16, -27, 31, 9, -33, 20, -3, 34,
-44, 11, 31, 14, -14, -42, 1, 44, -18, -4, 0, -7, 20, -20, 32, -7, -9, 7, -1,
-8, 17, -16, 2, 10, 8, -6, -20, 40, -25, -14, 26, -13, 21, -8, -17, 5, 0, 4,
-14, 19, -2, 24, -36, 4, 25, -2, -6, -15, -2, 4, 23, -5, 4, 6, 13, -10, -4, -10,
14, -26, 12, 16, 4, -8, -6, 6, -32, 26, 7, 6, -13, -7, 27, -4, -15, 13, -22, 12,
3, -6, 23, -5, -5, -2, -22, 18, 27, -38, 28, -22, 5, 13, -23, 11, -5, 17, -4,
-18, 9, 19, -24, 12, -3, 0, 15, -6, -11, 17, 8, -31, 22, -17, 15, 13, -5, -3,
-15, -7, 5, 27, -15, 8, -11, 10, -4, 6, 7, 0, 7, -36, 9, 15, -13, 2, 4, -22, 14,
17, -11, -14, 20, -9, -4, 14, 3, -22, 17, 16, -19, -4, -16, 14, -4, 5, 12, -9,
11, 10, -23, -3, -14, 23, -1, -6, 12, -3, 12, -18, -17, 6, -4, -6, 20, -1, 9, 1,
13, -3, -21, 16, -8, -24, 10, 18, -10, 4, 23, -5, -37, 8, 16, -8, 6, -10, 10,
12, -20, -1, -3, -5, 19, -2, 0, 8, -8, -16, 5, 13, -6, 4, 1, -9, 12, -19, 2, 4,
3, 4, -8, 13, 2, -10, -1, 17, -28, 12, -12, -7, 8, 21, -21, -2, 18, -36, 21, 3,
-11, 10, 12, -27, 23, -5, -7, 2, -7, -8, 11, 24, -11, -9, -7, -2, -3, -1, 1, 15,
-16, -2, -1, 2, 3, 0, 13, 6, -17, -9, 1, 1, 25, -1, -32, -9, 15, 3, -1, 2, -8,
4, 16, -16, 11, -5, 1, -10, 0, 19, -29, -2, 26, -2, -22, -1, -4, 3, 6, 10, -13,
6, 4, -9, 8, -6, -1, 4, -4, 3, -12, -6, 15, -9, 3, 3, -6, 7, -4, -10, 9, -15,
10, 11, -16, 16, -7, -12, 11, -5, 8, -5, -7, 1, -15, 11, 5, -9, 11, -8, -10, 17,
-16, 2, 6, -1, 4, -7, 10, -8, 1, 0, -3, 7, -3, 2, -28, 7, 10, -3, 5, -13, 4, 3,
8, -10, 2, -3, -10, 12, -4, 17, -14, -19, 12, -4, 6, -4, -2, 1, -6, -6, 0, 1,
14, -8, -8, 12, -2, -5, -9, 11, -4, -10, 8, 0, -9, 0, 7, 2, -14, -4, 4, 5, -5,
-3, 4, 3, 2, -18, 7, 3, -7, 1, 9, -7, -2, 14, -16, -4, 1, 4, 7, 1, -11, -6, 3,
-9, 5, 0, 0, 4, -6, -2, -1, 6, -2, -7, 5, -7, -1, -5, 3, 3, -11, 12, -2, -1, 2,
-12, -6, 13, -3, -17, 8, -2, -1, -4, 2, 1, -8, -1, 6, 10, -12, -2, 0, 1, 2, 1,
-9, -1, 1, -9, 7, -12, 4, 11, -11, -3, 7, -12, 5, 7, -10, 2, -5, 5, -6, -4, 2,
6, -4, 0, 2, -11, 5, -5, 1, 3, -8, 0, 4, -4, -5, 4, 2, -7, 3, 2, -2, 2, -10, 1,
5, -3, 1, -5, -7, 7, -3, -2, -1, -4, 8, 0, 0, -6, -6, -1, -1, 1, 0, -6, 0, 3,
-1, -2, -2, 1, -5, 4, -4, -5, -1, 2, -2, -1, 2, -4, 0, 0, -1, -3, 1, 2, -2, -3,
-1, -2, 2, -3, 0, 1, -4, -1, 0, -2, -1, 0, -2, 0, 0, -4, 1, 2, -6, 2, -2, 0, -3,
-2, 0, -3, -1, 1, -1, -1, 1, -4, 1, -2, 0, -1, 3, -2, -5, -1, -2, 4, -2, -3, 0,
-2, -1, -1, -1, 0, -3, -1, 0, -1, -2, -1, -2, 0, -2, -3, 2, -2, -1, 0, -2, -2,
0, -1, -2, -1, -1, -1, 0, -2, 0, -2, -1, 0, -2, -1, 0, -2, -1, -1, -1, 0, -2,
-1, -1, 1, -1, -2, 0, -1, -2, -1, -1, -1, -1, -2, 0, -1, -1, -1, -2, -1, -1, -1,
-1, -1, -1, 0, -2, -1, 0, -1, -1, -1, -1, -2, -1, -1, -1, -1, 0, -2, -2, -1, -1,
-1, -2, -1, -1, -1, -2, -1, -1, -1, -1, 0, -1, -2, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, };

#endif /* ROLANDCRTWO_H_ */