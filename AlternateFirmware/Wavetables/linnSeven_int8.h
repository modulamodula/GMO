#ifndef LINNSEVEN_H_
#define LINNSEVEN_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define LINNSEVEN_NUM_CELLS 4504
#define LINNSEVEN_SAMPLERATE 16384
 
const int8_t __attribute__((section(".progmem.data"))) LINNSEVEN_DATA [] = {13,
8, -8, -4, 8, 24, 4, -13, -3, -7, 3, 9, 9, 25, 33, 33, 60, 71, 76, 109, 93, 89,
86, 63, 46, 37, 36, 34, 37, 34, 36, 31, 27, 23, 23, 23, 22, 13, 6, 1, -19, -37,
-41, -55, -65, -68, -75, -84, -95, -96, -95, -89, -82, -86, -87, -86, -87, -85,
-87, -86, -83, -80, -76, -73, -67, -61, -54, -50, -46, -35, -25, -24, -20, -13,
-7, -4, -3, 1, 11, 21, 36, 48, 54, 57, 61, 66, 71, 89, 107, 118, 120, 119, 117,
114, 112, 109, 105, 99, 95, 84, 68, 59, 56, 51, 47, 42, 35, 27, 15, 5, -5, -16,
-24, -30, -34, -41, -55, -64, -70, -81, -88, -91, -96, -100, -103, -105, -106,
-106, -103, -100, -97, -91, -83, -76, -72, -67, -62, -59, -55, -48, -43, -40,
-38, -35, -29, -18, -6, 6, 17, 24, 29, 31, 32, 33, 38, 43, 46, 46, 45, 44, 45,
48, 48, 48, 46, 42, 39, 35, 30, 28, 29, 30, 30, 32, 33, 30, 27, 22, 14, 5, -1,
-4, -6, -7, -10, -14, -20, -24, -26, -30, -34, -36, -37, -36, -39, -42, -43,
-44, -42, -39, -39, -39, -41, -48, -53, -54, -53, -51, -49, -46, -44, -42, -38,
-32, -26, -17, -9, -1, 2, 0, -4, -8, -13, -18, -21, -22, -22, -20, -16, -15,
-12, -7, -4, 0, 7, 14, 16, 17, 18, 19, 20, 23, 24, 25, 27, 28, 28, 28, 30, 32,
35, 40, 43, 43, 42, 39, 35, 30, 26, 20, 14, 11, 6, 0, -6, -11, -15, -18, -21,
-23, -27, -31, -37, -43, -50, -52, -51, -53, -56, -61, -66, -72, -75, -78, -77,
-76, -73, -72, -71, -67, -62, -57, -52, -43, -35, -26, -18, -10, -5, -1, 1, 3,
6, 8, 10, 13, 16, 18, 20, 23, 26, 29, 34, 38, 44, 49, 54, 56, 57, 57, 57, 54,
53, 50, 43, 39, 35, 32, 28, 26, 24, 23, 20, 17, 12, 6, -2, -11, -22, -34, -45,
-55, -64, -71, -75, -78, -80, -80, -79, -79, -77, -74, -71, -70, -67, -65, -65,
-62, -60, -58, -53, -49, -44, -38, -33, -27, -20, -13, -3, 6, 15, 23, 32, 41,
48, 55, 59, 63, 69, 71, 69, 67, 62, 58, 55, 53, 52, 49, 49, 47, 44, 42, 38, 35,
31, 27, 23, 19, 15, 10, 5, 1, -4, -10, -15, -19, -23, -28, -34, -39, -43, -47,
-50, -51, -52, -52, -52, -52, -53, -53, -52, -52, -53, -55, -56, -55, -53, -51,
-47, -41, -35, -29, -21, -14, -6, 1, 7, 12, 17, 19, 22, 25, 28, 32, 34, 37, 41,
44, 47, 50, 52, 53, 54, 53, 53, 51, 49, 46, 42, 38, 32, 26, 19, 12, 4, -3, -8,
-12, -15, -17, -18, -20, -21, -21, -21, -21, -22, -22, -22, -22, -23, -25, -26,
-27, -28, -28, -27, -25, -25, -24, -23, -24, -24, -24, -24, -24, -22, -20, -18,
-14, -11, -7, -5, -4, -4, -4, -4, -5, -5, -5, -6, -5, -2, 2, 6, 10, 14, 18, 21,
23, 23, 23, 25, 25, 23, 23, 22, 21, 20, 20, 21, 21, 22, 22, 22, 21, 19, 16, 13,
8, 3, -2, -9, -15, -21, -26, -30, -33, -35, -34, -32, -30, -28, -24, -22, -19,
-16, -14, -13, -13, -13, -14, -16, -18, -20, -21, -21, -21, -20, -20, -19, -19,
-18, -17, -17, -16, -17, -16, -16, -15, -13, -12, -10, -9, -7, -6, -5, -3, -1,
2, 5, 9, 13, 17, 21, 25, 28, 31, 34, 36, 37, 38, 38, 37, 36, 35, 33, 31, 29, 27,
24, 22, 20, 18, 15, 12, 8, 5, 0, -4, -10, -17, -23, -30, -36, -42, -48, -52,
-54, -55, -56, -53, -51, -48, -45, -40, -35, -32, -29, -26, -24, -23, -22, -21,
-20, -19, -17, -15, -12, -10, -6, -3, 1, 4, 8, 11, 15, 18, 21, 24, 26, 28, 30,
31, 32, 31, 32, 32, 32, 34, 35, 36, 38, 40, 42, 44, 45, 46, 45, 43, 41, 38, 35,
30, 25, 19, 13, 7, 2, -4, -10, -16, -22, -27, -33, -37, -41, -44, -48, -50, -52,
-53, -54, -55, -55, -54, -53, -52, -49, -46, -43, -38, -34, -28, -22, -16, -9,
-3, 3, 8, 13, 17, 21, 24, 26, 28, 29, 31, 33, 35, 37, 38, 40, 40, 41, 41, 40,
40, 39, 37, 36, 35, 33, 30, 27, 23, 20, 17, 13, 10, 7, 5, 3, 1, 0, 0, 0, 1, 0,
0, -2, -4, -6, -9, -13, -16, -19, -23, -27, -30, -33, -36, -38, -39, -39, -40,
-40, -40, -39, -38, -37, -35, -34, -31, -27, -22, -19, -14, -10, -4, 2, 7, 13,
18, 24, 28, 33, 36, 38, 39, 40, 40, 39, 38, 37, 34, 31, 29, 26, 24, 22, 19, 17,
15, 14, 12, 11, 10, 9, 7, 6, 4, 1, -1, -4, -7, -10, -13, -15, -17, -18, -19,
-19, -18, -17, -15, -13, -11, -9, -8, -8, -7, -8, -8, -9, -10, -12, -15, -17,
-19, -20, -21, -22, -23, -23, -23, -23, -22, -20, -19, -17, -15, -13, -11, -9,
-6, -4, -1, 2, 5, 9, 13, 17, 21, 26, 29, 32, 35, 36, 37, 36, 36, 35, 33, 31, 27,
24, 21, 18, 14, 11, 8, 5, 2, -1, -3, -5, -6, -7, -8, -10, -10, -11, -11, -12,
-13, -14, -15, -15, -16, -17, -18, -18, -17, -16, -15, -14, -13, -12, -12, -12,
-13, -13, -14, -16, -17, -19, -20, -21, -21, -20, -19, -18, -17, -15, -13, -11,
-9, -6, -3, -1, 2, 5, 8, 11, 14, 18, 21, 24, 27, 30, 33, 35, 37, 38, 39, 40, 41,
40, 38, 37, 35, 33, 30, 26, 22, 18, 13, 9, 4, 0, -4, -8, -12, -15, -19, -21,
-24, -26, -29, -31, -32, -33, -34, -34, -33, -32, -31, -28, -26, -24, -21, -18,
-15, -12, -9, -6, -3, -1, 1, 2, 3, 3, 3, 3, 2, 2, 1, 1, 2, 2, 3, 5, 7, 9, 12,
15, 19, 22, 25, 27, 30, 32, 32, 34, 34, 33, 33, 34, 32, 31, 29, 28, 25, 23, 21,
18, 15, 12, 9, 6, 2, -1, -4, -8, -11, -15, -19, -22, -25, -28, -30, -33, -34,
-35, -36, -36, -35, -35, -34, -33, -31, -28, -26, -24, -21, -18, -15, -12, -8,
-4, 0, 4, 8, 12, 15, 19, 22, 24, 26, 28, 28, 28, 28, 26, 25, 23, 21, 19, 17, 15,
13, 11, 10, 9, 9, 9, 9, 10, 11, 12, 13, 14, 15, 16, 16, 16, 15, 14, 13, 11, 9,
6, 4, 1, -2, -5, -8, -11, -14, -16, -19, -21, -23, -24, -26, -28, -28, -29, -29,
-29, -29, -27, -26, -25, -23, -21, -19, -16, -14, -11, -8, -6, -3, -1, 2, 4, 6,
8, 10, 12, 14, 16, 18, 19, 21, 22, 24, 25, 26, 26, 25, 24, 23, 21, 19, 17, 14,
11, 8, 6, 4, 2, 1, 0, 0, 0, 0, 1, 1, 2, 2, 1, 1, 1, 0, 0, -1, -2, -2, -2, -3,
-4, -4, -5, -6, -7, -8, -9, -10, -12, -14, -16, -18, -20, -21, -23, -24, -25,
-25, -25, -24, -22, -21, -18, -14, -11, -7, -3, 1, 5, 8, 11, 14, 16, 18, 20, 21,
22, 23, 23, 24, 24, 24, 24, 24, 23, 23, 21, 20, 19, 19, 17, 16, 15, 14, 12, 10,
9, 7, 5, 3, 2, 0, -1, -2, -3, -4, -4, -4, -5, -5, -6, -7, -7, -8, -9, -10, -11,
-12, -13, -13, -14, -14, -13, -13, -13, -12, -12, -11, -11, -10, -10, -10, -9,
-9, -9, -8, -8, -7, -6, -5, -3, -2, 1, 4, 7, 10, 13, 17, 20, 22, 25, 27, 29, 30,
32, 33, 33, 34, 34, 33, 32, 31, 28, 25, 22, 19, 15, 12, 8, 4, 1, -2, -5, -7,
-10, -11, -12, -13, -14, -14, -14, -14, -14, -14, -14, -14, -13, -13, -13, -13,
-13, -12, -12, -12, -11, -11, -11, -11, -10, -10, -10, -9, -8, -7, -6, -4, -2,
0, 3, 5, 7, 9, 10, 12, 13, 14, 14, 14, 15, 15, 15, 15, 16, 17, 18, 18, 19, 20,
21, 21, 21, 21, 21, 20, 19, 18, 16, 15, 14, 12, 9, 7, 5, 2, 0, -3, -6, -8, -11,
-14, -16, -18, -21, -23, -24, -25, -26, -26, -26, -25, -24, -22, -20, -18, -15,
-12, -10, -7, -4, -2, 0, 1, 3, 4, 5, 6, 6, 6, 6, 7, 7, 7, 7, 7, 7, 8, 8, 9, 10,
11, 12, 12, 13, 14, 14, 14, 14, 14, 14, 14, 13, 13, 12, 11, 11, 10, 9, 8, 7, 6,
5, 4, 2, 1, 0, -2, -3, -5, -6, -8, -9, -11, -12, -13, -15, -16, -16, -17, -17,
-18, -18, -18, -18, -17, -17, -16, -15, -15, -14, -13, -11, -10, -8, -6, -4, -2,
0, 2, 4, 6, 8, 9, 10, 11, 12, 13, 13, 13, 14, 14, 14, 13, 13, 13, 13, 12, 12,
11, 11, 10, 9, 9, 8, 7, 6, 6, 5, 5, 5, 5, 5, 6, 6, 6, 6, 6, 5, 4, 3, 2, 0, -1,
-3, -5, -6, -8, -9, -11, -12, -14, -15, -15, -16, -16, -17, -17, -17, -16, -15,
-14, -13, -12, -10, -8, -7, -5, -3, -1, 0, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12,
12, 13, 14, 14, 15, 16, 16, 16, 16, 16, 16, 15, 15, 15, 14, 13, 13, 12, 12, 11,
10, 9, 7, 6, 4, 2, 1, -1, -2, -4, -4, -5, -6, -6, -6, -6, -6, -6, -6, -6, -7,
-7, -8, -8, -9, -10, -10, -11, -12, -13, -13, -14, -14, -14, -14, -14, -13, -12,
-10, -8, -6, -3, -1, 2, 5, 8, 10, 13, 15, 16, 18, 18, 19, 20, 19, 19, 19, 18,
17, 17, 16, 15, 14, 14, 13, 12, 11, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 1, 0, -1,
-2, -3, -4, -5, -7, -8, -9, -10, -11, -12, -13, -14, -14, -14, -13, -13, -12,
-11, -10, -9, -8, -7, -6, -6, -5, -4, -4, -3, -2, -1, -1, 0, 1, 2, 3, 5, 6, 7,
8, 10, 11, 12, 13, 14, 15, 16, 17, 18, 18, 19, 19, 18, 18, 18, 17, 16, 14, 13,
11, 10, 8, 6, 4, 3, 1, -1, -3, -4, -6, -7, -8, -9, -10, -10, -10, -10, -10, -9,
-9, -8, -8, -8, -8, -8, -8, -7, -7, -7, -7, -7, -7, -7, -7, -6, -6, -5, -4, -3,
-3, -2, -1, 0, 1, 2, 3, 4, 5, 5, 6, 7, 8, 9, 10, 10, 11, 12, 12, 13, 13, 14, 14,
14, 14, 13, 12, 12, 11, 10, 9, 8, 7, 6, 5, 4, 2, 1, 0, -1, -2, -3, -4, -5, -6,
-7, -8, -8, -9, -9, -10, -10, -11, -11, -11, -11, -11, -10, -10, -9, -8, -7, -6,
-5, -4, -3, -2, -1, 0, 0, 1, 2, 3, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 6, 6,
6, 7, 8, 8, 9, 10, 10, 11, 11, 11, 11, 12, 11, 11, 11, 10, 10, 9, 8, 6, 5, 4, 2,
1, -1, -3, -4, -6, -7, -9, -10, -10, -11, -11, -11, -11, -11, -11, -11, -10,
-10, -10, -9, -9, -8, -7, -7, -6, -5, -5, -4, -3, -2, -2, -1, 0, 1, 2, 2, 3, 4,
5, 6, 6, 7, 8, 8, 9, 9, 9, 10, 10, 9, 9, 9, 9, 8, 8, 7, 7, 7, 6, 6, 6, 6, 6, 5,
5, 5, 5, 5, 5, 5, 4, 4, 3, 3, 2, 1, -1, -2, -3, -5, -6, -8, -9, -11, -12, -13,
-14, -15, -15, -15, -15, -15, -14, -13, -11, -10, -9, -8, -7, -5, -4, -3, -1, 0,
1, 3, 4, 5, 6, 7, 8, 9, 9, 10, 10, 10, 10, 10, 9, 9, 9, 9, 9, 9, 8, 8, 8, 8, 8,
7, 7, 6, 6, 5, 4, 4, 3, 3, 2, 2, 1, 1, 0, 0, -1, -1, -2, -2, -3, -3, -4, -4, -5,
-5, -6, -6, -7, -7, -8, -8, -8, -9, -9, -9, -9, -9, -9, -9, -8, -8, -7, -6, -6,
-5, -4, -2, -1, 1, 2, 4, 5, 6, 8, 9, 10, 11, 12, 13, 13, 13, 13, 13, 13, 13, 12,
11, 11, 10, 9, 7, 6, 5, 4, 3, 2, 2, 1, 0, -1, -1, -2, -3, -3, -3, -4, -4, -4,
-4, -4, -4, -4, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -4, -4, -4, -5, -5,
-5, -5, -5, -4, -4, -4, -3, -2, -2, -1, 0, 0, 1, 2, 3, 4, 5, 6, 7, 7, 8, 9, 10,
10, 11, 11, 11, 12, 12, 12, 11, 11, 11, 10, 10, 9, 8, 8, 7, 6, 5, 4, 3, 1, 0,
-1, -2, -3, -4, -5, -6, -6, -7, -7, -8, -8, -8, -7, -7, -6, -5, -5, -4, -3, -3,
-2, -1, -1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, 0, 0, 0, 1, 1,
2, 2, 3, 4, 5, 5, 6, 7, 8, 8, 9, 9, 10, 10, 10, 10, 10, 9, 8, 8, 7, 6, 6, 5, 4,
3, 2, 1, 0, -1, -2, -3, -4, -5, -5, -6, -7, -7, -8, -9, -9, -9, -9, -10, -10,
-9, -9, -9, -8, -7, -7, -6, -5, -4, -3, -2, -1, 0, 1, 2, 2, 3, 3, 3, 3, 3, 3, 3,
3, 3, 3, 3, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 4, 4, 5, 5, 6, 6, 6, 6, 6, 6, 6, 6, 6,
5, 5, 4, 3, 2, 1, 1, 0, -1, -2, -3, -4, -5, -6, -7, -8, -9, -9, -10, -10, -11,
-11, -11, -11, -10, -10, -9, -9, -8, -7, -6, -5, -3, -2, -1, 0, 1, 2, 3, 4, 4,
5, 6, 6, 7, 7, 7, 8, 7, 7, 7, 7, 6, 6, 5, 5, 4, 4, 3, 3, 2, 2, 2, 2, 2, 1, 1, 1,
1, 1, 1, 1, 1, 1, 0, 0, 0, 0, -1, -1, -1, -2, -2, -2, -3, -3, -4, -4, -5, -5,
-6, -6, -7, -7, -7, -7, -8, -8, -8, -7, -7, -7, -6, -5, -5, -4, -3, -2, -1, 0,
1, 2, 4, 5, 6, 7, 8, 8, 9, 10, 10, 10, 10, 10, 9, 9, 8, 8, 7, 6, 5, 5, 4, 3, 2,
1, 0, 0, -1, -1, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -3, -3, -3, -3, -3, -3, -3,
-2, -2, -2, -2, -1, -1, 0, 0, 1, 2, 2, 3, 4, 5, 6, 6, 7, 8, 8, 9, 9, 9, 9, 9, 9,
9, 9, 8, 8, 7, 6, 5, 4, 3, 2, 1, 0, -1, -2, -2, -3, -4, -4, -5, -5, -5, -5, -5,
-5, -5, -4, -4, -4, -3, -3, -3, -2, -2, -2, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 3, 3, 4, 4, 5,
6, 6, 7, 7, 7, 7, 7, 7, 7, 7, 6, 6, 5, 5, 4, 3, 2, 2, 1, 0, -1, -2, -3, -4, -5,
-5, -6, -7, -7, -8, -8, -8, -8, -8, -8, -7, -7, -6, -6, -5, -5, -4, -3, -3, -2,
-1, -1, 0, 0, 1, 1, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2, 3,
3, 3, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 5, 4, 4, 4, 3, 3, 2, 2, 1, 0, -1, -2, -2,
-3, -4, -5, -6, -6, -7, -7, -8, -8, -8, -8, -8, -8, -8, -7, -7, -6, -6, -5, -4,
-3, -3, -2, -1, 0, 0, 1, 1, 2, 2, 3, 3, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 4,
4, 4, 3, 3, 2, 2, 2, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1,
-1, -1, -1, -2, -2, -3, -3, -4, -4, -5, -5, -6, -6, -7, -7, -7, -7, -7, -6, -6,
-5, -5, -4, -3, -3, -2, -1, 0, 1, 2, 2, 3, 3, 4, 4, 5, 5, 5, 5, 5, 6, 6, 5, 5,
5, 5, 5, 4, 4, 4, 3, 3, 3, 2, 2, 1, 1, 0, 0, -1, -1, -1, -1, -2, -2, -2, -2, -2,
-3, -3, -3, -3, -3, -3, -3, -3, -3, -2, -2, -2, -2, -2, -2, -2, -2, -3, -3, -3,
-3, -3, -3, -4, -4, -4, -4, -4, -3, -3, -3, -2, -2, -1, -1, 0, 0, 1, 2, 2, 3, 3,
4, 4, 5, 5, 5, 5, 6, 6, 6, 5, 5, 5, 5, 4, 4, 3, 3, 2, 2, 1, 0, 0, -1, -1, -2,
-2, -3, -3, -3, -3, -3, -4, -4, -4, -4, -4, -4, -3, -3, -3, -3, -3, -3, -3, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0,
1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 3, 3, 3, 3, 2,
2, 1, 1, 0, -1, -1, -2, -2, -3, -4, -4, -4, -5, -5, -5, -5, -5, -5, -5, -5, -4,
-4, -4, -3, -3, -2, -2, -1, -1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2,
2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 3, 3, 3, 3, 2, 2, 2, 1, 1, 1,
0, 0, 0, -1, -1, -1, -2, -2, -2, -2, -2, -3, -3, -3, -3, -4, -4, -4, -4, -4, -5,
-5, -4, -4, -4, -4, -4, -3, -3, -3, -2, -1, -1, 0, 0, 1, 1, 2, 2, 3, 3, 3, 3, 4,
4, 4, 4, 4, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
0, 0, 0, 0, -1, -1, -2, -2, -2, -3, -3, -3, -3, -4, -4, -4, -4, -4, -4, -4, -4,
-4, -4, -4, -4, -3, -3, -3, -3, -2, -2, -2, -2, -1, -1, -1, 0, 0, 0, 1, 1, 1, 1,
2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 1, 1, 1, 0, 0, 0, -1, -1,
-1, -2, -2, -2, -2, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3,
-3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -2, -2, -2, -1, -1, -1, 0,
0, 0, 1, 1, 1, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 0,
0, 0, 0, 0, -1, -1, -1, -1, -1, -2, -2, -2, -2, -3, -3, -3, -3, -4, -4, -4, -4,
-4, -4, -4, -4, -4, -4, -4, -3, -3, -3, -2, -2, -2, -1, -1, -1, -1, -1, 0, 0, 0,
0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2,
2, 2, 1, 1, 0, 0, 0, -1, -1, -2, -2, -2, -2, -2, -3, -3, -3, -3, -3, -3, -3, -3,
-3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -2, -2, -2, -2, -1,
-1, -1, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2, 1,
1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, -1, -1, -1, -1, -2, -2, -2, -3, -3, -3,
-3, -4, -4, -4, -4, -4, -3, -3, -3, -3, -3, -3, -2, -2, -2, -2, -2, -1, -1, -1,
-1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3,
3, 3, 2, 2, 2, 1, 1, 1, 0, 0, 0, -1, -1, -1, -2, -2, -2, -3, -3, -3, -3, -3, -3,
-3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -2, -2, -2, -2, -2, -2, -2, -1,
-1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2,
2, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -2, -2, -2, -2,
-3, -3, -3, -3, -3, -4, -4, -4, -4, -4, -4, -4, -3, -3, -3, -3, -3, -2, -2, -2,
-1, -1, -1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0,
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, -1, -1, -1, -1, -2, -2, -2, -2,
-2, -2, -2, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -2,
-2, -2, -2, -2, -2, -1, -1, -1, -1, 0, 0, 0, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2,
2, 1, 1, 1, 1, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -2, -2, -2, -2, -2, -3, -3, -3, -3, -3, -3, -3,
-3, -3, -3, -3, -3, -2, -2, -2, -2, -2, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 1, 1,
1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 0, 0, 0, 0, -1, -1, -1, -2,
-2, -2, -2, -2, -3, -3, -3, -3, -3, -3, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -1, -1, -1, -1, -1,
-1, -1, -1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 0,
0, 0, 0, -1, -1, -1, -2, -2, -2, -2, -2, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3,
-3, -2, -2, -2, -2, -2, -2, -2, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1,
1, 1, 1, 1, 1, 0, 0, 0, -1, -1, -1, -2, -2, -2, -3, -3, -3, -3, -3, -3, -3, -3,
-3, -3, -3, -3, -2, -2, -2, -2, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -2,
-2, -2, -2, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -2, -2, -2, -1, -1,
-1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -1, -1, -1, -1, 0, 0, 0, 0, 1, 1, 1, 1, 1,
1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, -1, -1, -1, -1, -2, -2, -2, -2, -2, -3,
-3, -3, -3, -3, -3, -3, -3, -2, -2, -2, -2, -2, -2, -2, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0,
-1, -1, -1, -1, -2, -2, -2, -2, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -2,
-2, -2, -2, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1,
-1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -3, -3, -3, -3, -2, -2, -2, -2, -2, -2, -1, -1, -1, -1, 0, 0, 0, 0, 1, 1, 1,
1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0,
0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -2, -2, -2, -2, -2, -2, -2, -2, -2, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 1, 1,
1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, };

#endif /* LINNSEVEN_H_ */
