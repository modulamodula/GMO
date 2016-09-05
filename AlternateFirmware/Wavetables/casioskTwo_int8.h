#ifndef CASIOSKTWO_H_
#define CASIOSKTWO_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define CASIOSKTWO_NUM_CELLS 1528
#define CASIOSKTWO_SAMPLERATE 16384
 
const int8_t __attribute__((section(".progmem.data"))) CASIOSKTWO_DATA [] = {0,
-2, 0, -2, 0, -2, 1, -2, 1, -2, 1, -2, 1, -2, 0, -2, 0, -1, -1, 0, -2, 1, -3, 3,
-6, -3, -102, -35, 2, 90, 74, 10, 112, 47, 6, -69, -96, 34, 22, -15, 66, -56,
39, -16, -15, 10, -111, -73, -107, -81, -100, -84, -95, -85, -91, -86, -88, -86,
-84, -84, -81, -83, -77, -81, -74, -78, -70, -75, -67, -71, -64, -67, -61, -63,
-58, -58, -56, -52, -55, -45, -56, -8, -5, -30, 27, 47, 96, 61, 1, 55, 37, 15,
-31, 28, 53, 2, 47, 20, -9, 6, 45, 66, 99, 53, 21, 44, 32, 0, -2, 47, 59, 33,
11, 35, 16, 25, 55, 45, 13, 7, 11, 8, 12, 9, 14, 11, 15, 13, 16, 15, 17, 16, 18,
18, 19, 19, 18, 19, 18, 19, 18, 20, 18, 20, 18, 21, 18, 21, 18, 22, 17, 23, 16,
31, 38, 22, 44, 20, 41, 47, 71, 57, 51, 72, 51, 45, 22, 40, 46, 69, 55, 45, 26,
21, 40, 48, 68, 49, 39, 21, 14, 37, 50, 35, 48, 61, 46, 35, 17, 12, 13, 11, 12,
10, 10, 9, 9, 8, 8, 8, 8, 7, 7, 6, 6, 5, 5, 5, 5, 4, 4, 4, 3, 3, 3, 3, 2, 3, 2,
3, 1, 3, 0, 3, -1, 7, 7, 30, 45, 26, 36, 43, 24, 22, 33, 12, 28, 21, -4, 8, 14,
31, 34, 20, 10, -4, 18, 1, 1, 14, 26, 33, 18, 37, 16, 34, 31, 16, 9, -10, 18,
17, -6, -6, -8, -8, -8, -9, -9, -10, -9, -10, -9, -11, -10, -11, -11, -12, -11,
-12, -12, -13, -12, -13, -13, -13, -13, -13, -14, -13, -13, -12, -14, -12, -14,
-12, -15, -9, -9, 7, 24, 20, 7, 6, 15, -6, -15, -4, 5, 17, 22, 6, 6, 13, -5,
-13, 4, 6, 26, 7, 15, 15, 7, 21, 2, 22, 3, 18, 8, 11, 15, 4, 19, 0, -7, -17,
-14, -17, -16, -18, -17, -18, -18, -17, -18, -17, -18, -18, -19, -18, -19, -18,
-19, -19, -20, -19, -20, -19, -20, -19, -20, -19, -19, -19, -19, -19, -19, -19,
-18, -20, -5, -15, -10, -2, 8, 10, -3, 15, 3, -8, -5, 6, 6, -4, -11, -19, -9,
-3, 8, 3, -5, -8, 8, 9, -2, 13, 4, -9, 2, 0, -11, -12, -5, 4, -9, -2, -6, -19,
-16, -19, -17, -19, -18, -19, -18, -18, -18, -18, -18, -18, -18, -18, -18, -18,
-18, -18, -18, -18, -18, -18, -19, -18, -18, -18, -18, -18, -18, -18, -18, -18,
-18, -17, -4, 9, -9, -7, -3, -11, 1, -5, -6, 12, 6, 1, -8, -13, -4, -16, -10,
-4, 6, 4, -4, -11, -14, -3, -15, -11, -2, -5, -12, -17, 0, -1, -8, -1, 6, 10,
-9, -13, -14, -14, -14, -14, -14, -15, -14, -15, -14, -15, -14, -15, -14, -15,
-14, -14, -14, -14, -14, -14, -13, -14, -13, -14, -13, -14, -13, -13, -13, -13,
-13, -13, -13, -12, -4, 14, -3, 0, 5, -1, 5, 13, 11, -2, -3, 6, 9, 4, 10, 6, -3,
0, 6, -9, -8, 1, -12, -3, 6, -4, 0, 2, -9, -10, -5, 4, 9, 7, -4, 0, 3, -9, -10,
-10, -10, -10, -10, -10, -11, -10, -11, -10, -11, -10, -11, -10, -10, -10, -10,
-10, -10, -10, -10, -10, -10, -10, -10, -10, -10, -10, -10, -9, -10, -9, -10,
-9, -7, -4, 8, 15, 7, 5, -6, -1, -2, -5, 3, -10, 0, 2, 13, 13, 0, 2, 8, 12, 5,
0, -8, -3, 4, 3, -1, 14, 13, 6, 15, 6, 13, 15, 0, 3, 2, -5, -6, -6, -6, -6, -6,
-6, -6, -7, -7, -7, -7, -7, -7, -7, -7, -7, -7, -7, -7, -7, -7, -7, -7, -7, -7,
-7, -7, -7, -7, -6, -7, -6, -7, -6, -3, 14, 7, 0, 10, 0, 3, 10, 11, 6, -1, 8, 4,
-7, 2, 0, -7, 6, 8, 4, 9, 16, 12, 2, 2, 10, 12, 6, -1, -5, -3, 6, 2, 2, 10, -3,
-6, -5, -6, -5, -6, -5, -6, -5, -6, -5, -6, -5, -6, -5, -6, -5, -5, -6, -5, -6,
-5, -6, -5, -6, -5, -6, -5, -6, -5, -5, -4, -5, -4, -5, -4, -5, -4, 4, -3, 4,
-1, 0, 7, 10, 1, -4, 6, -3, -1, 6, 6, -1, -4, 5, 11, 5, 10, 15, 12, 5, 1, -5, 6,
9, 3, 12, 7, 7, 16, 12, 9, 15, 6, 2, -2, -2, -2, -2, -2, -3, -2, -3, -2, -3, -2,
-3, -3, -3, -3, -3, -3, -4, -3, -4, -3, -4, -3, -4, -3, -4, -3, -4, -3, -3, -3,
-3, -3, -3, -3, 4, -1, 2, 7, 10, 1, 12, 13, 8, 3, 5, 10, -3, -1, 3, 8, 1, -2,
-1, 11, 2, 6, 8, 16, 8, 3, 11, 1, 11, 7, 3, -3, 3, 7, 2, -3, -2, -2, -2, -2, -3,
-2, -3, -2, -3, -2, -3, -2, -3, -2, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3,
-3, -3, -2, -3, -2, -3, -2, -3, -2, -3, -2, -1, 5, 5, 2, 10, 1, -2, 4, 8, 13,
13, 7, 5, -3, 5, 9, 3, 10, 7, 6, 14, 11, 9, 12, 8, 3, -1, 2, 8, 8, 2, -4, 4, 8,
2, 10, 2, -2, -1, -2, -1, -3, -1, -3, -2, -3, -2, -3, -2, -3, -2, -3, -2, -3,
-2, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -2, -3, 1, 2,
-2, 6, 2, 8, 10, 8, 2, 3, 9, 13, 5, 3, 8, 0, 9, 1, 6, 7, 3, 9, 0, -2, 2, 6, 10,
12, 5, 4, -4, 2, 7, 0, 7, 1, 1, -2, -3, -2, -3, -2, -3, -3, -3, -3, -3, -3, -4,
-3, -3, -3, -4, -3, -4, -3, -4, -3, -3, -3, -3, -3, -3, -3, -3, -4, -3, -4, -3,
-4, -2, -5, 2, 2, 2, 7, 2, 6, 4, -4, 1, 1, -2, 3, -3, 1, 6, 4, 4, 9, 7, 5, 9, 4,
2, -3, -2, 6, 2, 2, 5, 10, 6, 0, 7, 3, 4, 9, 7, -1, -2, -2, -2, -2, -3, -3, -3,
-3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3,
-3, -3, -4, -3, -3, -3, -4, -2, 1, 1, -5, 2, -3, 1, 0, -2, 2, -3, 3, -3, 2, -2,
0, 1, -2, 3, 4, 2, -4, -1, 2, 2, 0, 7, 8, 5, 2, -1, -2, 3, 2, 0, 7, 6, -1, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -1, 4, 8, 3, 6, 7, 4, 2, -1,
3, -1, 2, 0, -2, 3, 3, 9, 3, 2, 5, 3, 4, 7, 7, 4, 1, -1, 2, -1, -1, 3, 1, 1, 5,
0, 5, 6, 0, -1, -2, -1, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -3, -2, -3, -2, -3, -2, -3, -2, -3, -3, -3, -2, 2, -1,
3, 0, 1, 3, 0, 4, 0, 2, 5, 5, 0, 2, 3, 1, 4, 0, -2, -2, 3, 2, 1, 3, -1, -3, -1,
1, 3, 5, 2, 1, 3, 0, -3, -1, 0, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -1, 1, 2, -1, -1, 0, 2, 1, 0, 4, 3, 2, 1, 3, 4, 1, 4, 2, 3, 3,
1, -1, -1, 0, 2, 1, 0, 2, -1, 3, 3, 1, 0, -3, -1, -1, -1, -2, -1, -2, -1, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -1, 0, -2, -2, 0, -2, -1, 0, 1, 2, 0, -1, 1,
-1, 1, 0, 0, 1, -2, -2, 0, 1, 0, -2, -2, 0, 1, 3, 0, 0, -2, -1, 0, 2, 2, 0, 0,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 1, 0, 0,
2, 1, 1, 0, -1, 0, -1, -1, 0, 0, 0, 1, -1, -1, 0, 0, -1, 0, -1, 0, 0, -1, 1, -1,
0, 1, 1, -1, -1, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, };

#endif /* CASIOSKTWO_H_ */