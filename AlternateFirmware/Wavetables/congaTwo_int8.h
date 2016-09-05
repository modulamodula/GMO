#ifndef CONGATWO_H_
#define CONGATWO_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define CONGATWO_NUM_CELLS 1132
#define CONGATWO_SAMPLERATE 16384
 
const int8_t __attribute__((section(".progmem.data"))) CONGATWO_DATA [] = {-23,
-37, -64, -75, -49, -81, -79, -67, -73, -83, -64, -52, -37, -11, -8, 0, 33, 46,
49, 69, 107, 121, 102, 99, 101, 103, 83, 64, 47, 25, 3, 2, 2, 4, 13, 22, 26, 33,
51, 65, 78, 77, 72, 66, 59, 42, 16, -4, -19, -37, -46, -45, -41, -26, -4, 20,
32, 33, 36, 42, 43, 34, 27, 21, 9, -7, -20, -29, -33, -34, -38, -41, -43, -38,
-28, -13, -3, 5, 11, 15, 15, 5, -7, -14, -22, -29, -35, -39, -41, -43, -43, -46,
-48, -52, -55, -59, -65, -69, -69, -65, -54, -39, -22, -7, 7, 21, 34, 43, 48,
49, 49, 50, 49, 46, 41, 35, 28, 21, 15, 10, 7, 7, 8, 9, 12, 13, 11, 10, 10, 10,
11, 10, 9, 8, 7, 7, 7, 7, 7, 10, 16, 21, 25, 25, 24, 23, 17, 8, -1, -11, -21,
-27, -29, -29, -29, -31, -28, -26, -28, -30, -30, -31, -30, -22, -16, -10, 0,
10, 17, 22, 26, 28, 27, 24, 24, 27, 29, 28, 26, 25, 23, 19, 15, 11, 6, 2, -5,
-13, -19, -24, -28, -30, -32, -32, -28, -23, -18, -10, -2, 4, 9, 14, 16, 18, 17,
18, 19, 17, 14, 9, 5, 0, -4, -8, -12, -16, -20, -24, -27, -25, -24, -23, -20,
-18, -14, -10, -4, 2, 7, 10, 13, 13, 12, 11, 9, 6, 3, 1, 0, -2, -3, -3, -5, -7,
-11, -17, -20, -21, -21, -19, -15, -11, -8, -4, -1, 1, 6, 11, 12, 13, 15, 17,
17, 17, 18, 17, 15, 13, 11, 10, 8, 6, 4, 2, 0, -3, -7, -12, -15, -18, -22, -27,
-32, -35, -35, -34, -32, -29, -25, -18, -9, -1, 7, 15, 20, 23, 24, 24, 23, 20,
17, 14, 8, 4, 0, -5, -10, -14, -17, -20, -22, -20, -19, -19, -17, -14, -10, -6,
-2, 3, 5, 8, 10, 11, 12, 12, 12, 12, 12, 11, 11, 11, 12, 10, 9, 8, 6, 3, 0, -3,
-7, -9, -12, -13, -15, -15, -14, -14, -14, -13, -9, -8, -6, -2, 2, 3, 5, 6, 8,
9, 8, 7, 7, 6, 5, 5, 3, 0, -4, -7, -10, -15, -18, -19, -19, -19, -20, -18, -14,
-10, -7, -4, 1, 3, 5, 7, 10, 11, 12, 12, 11, 9, 8, 8, 7, 5, 4, 1, -2, -3, -4,
-6, -7, -8, -10, -11, -11, -10, -10, -9, -7, -7, -6, -5, -3, -2, -1, 1, 2, 4, 5,
6, 9, 10, 9, 9, 6, 4, 2, -1, -4, -7, -10, -14, -14, -15, -15, -14, -11, -8, -5,
-2, 1, 2, 3, 3, 3, 3, 3, 2, 1, 0, 0, -1, -1, 0, -1, -1, 0, 1, 2, 3, 2, 1, 0, -1,
-4, -6, -8, -9, -9, -8, -7, -5, -3, 0, 1, 3, 4, 5, 6, 6, 6, 7, 7, 6, 5, 4, 4, 3,
2, 1, 1, 1, 0, -1, -2, -2, -2, -3, -3, -3, -3, -2, -1, 0, 1, 3, 4, 4, 6, 7, 6,
6, 7, 8, 7, 6, 6, 6, 4, 3, 2, 0, -2, -5, -7, -9, -10, -9, -8, -6, -5, -3, 0, 2,
4, 5, 6, 7, 7, 5, 4, 3, 2, -1, -3, -3, -4, -5, -5, -4, -4, -4, -4, -4, -3, -3,
-1, -1, 0, 1, 2, 2, 3, 3, 4, 5, 4, 3, 3, 3, 3, 2, 2, 2, 1, 1, 0, -1, -2, -4, -4,
-5, -5, -5, -5, -6, -6, -6, -6, -6, -6, -6, -5, -4, -2, 0, 2, 4, 6, 7, 9, 9, 10,
10, 10, 9, 8, 6, 4, 1, -1, -2, -4, -5, -7, -8, -8, -7, -7, -6, -4, -3, 0, 1, 2,
4, 5, 5, 5, 5, 4, 3, 3, 2, 0, 0, 0, -1, -1, -1, -1, -1, -2, -2, -3, -4, -4, -3,
-3, -3, -3, -2, -1, -1, 0, 0, 0, 0, 1, 1, 2, 3, 2, 2, 1, 0, -1, -2, -2, -3, -3,
-3, -2, -2, -1, 0, 2, 2, 3, 4, 5, 6, 6, 7, 6, 6, 5, 5, 4, 3, 4, 3, 3, 4, 3, 2,
2, 2, 1, 0, -1, -2, -3, -3, -3, -4, -4, -4, -3, -3, -2, -2, 1, 2, 4, 6, 8, 9, 9,
8, 7, 6, 5, 3, 1, -1, -2, -3, -4, -4, -4, -4, -4, -3, -3, -3, -2, -2, -3, -3,
-3, -3, -4, -3, -3, -2, -1, 1, 3, 5, 6, 8, 9, 9, 8, 8, 7, 5, 3, 1, -1, -3, -6,
-7, -6, -7, -7, -6, -4, -2, 0, 2, 3, 3, 4, 4, 4, 4, 3, 3, 2, 1, 1, 1, 0, 0, 0,
0, 0, 1, 1, 1, 1, 1, 0, -1, -2, -3, -4, -4, -4, -4, -5, -5, -5, -4, -3, -3, -2,
-2, -1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0,
0, -1, -1, -1, -1, -2, -2, -1, -1, 0, 1, 1, 2, 2, 3, 3, 2, 1, 1, 0, -1, -2, -3,
-4, -4, -4, -4, -3, -3, -2, 0, 1, 1, 2, 2, 2, 2, 1, 1, 0, 0, -1, -2, -3, -3, -3,
-3, -2, -1, -1, -1, 0, 1, 1, 2, 2, 2, 1, 1, 0, 0, -1, -1, -1, -2, -2, -2, -1,
-1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, -1, -1, -2, -2, -2, -3, -2, -2, -2, -2,
-1, -1, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, -1, -1, -1, -1, -2, -2, -2, -1, -1, -2,
-2, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -2, -2, -2, -2, -1, -1, -1, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -2, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -2, -2, -2, -2, -1, -1, -1, -1, -1,
-1, -1, -1, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0,
0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, 0, };

#endif /* CONGATWO_H_ */