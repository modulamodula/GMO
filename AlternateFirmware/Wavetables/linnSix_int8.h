#ifndef LINNSIX_H_
#define LINNSIX_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define LINNSIX_NUM_CELLS 3130
#define LINNSIX_SAMPLERATE 16384
 
const int8_t __attribute__((section(".progmem.data"))) LINNSIX_DATA [] = {9, 20,
9, -11, 22, 37, 28, 21, -7, 2, 5, -13, -38, -57, -81, -88, -90, -82, -62, -29,
5, 69, 118, 118, 117, 108, 75, 29, 6, -25, -65, -83, -76, -73, -48, -16, -20,
-47, -67, -49, -9, 40, 94, 113, 97, 49, 8, -14, -20, -22, -35, -52, -58, -34,
-6, 15, 10, -12, -33, -34, -15, -14, -19, -3, 13, 14, -2, -21, -32, -22, -2, 18,
23, 15, 6, -4, -8, -19, -19, -17, -15, -15, -12, -19, -26, -43, -38, -7, -5,
-21, -39, -59, -72, -73, -62, -41, -31, -9, 20, 77, 111, 112, 86, 38, 9, -24,
-31, -41, -35, -36, -34, -30, -58, -51, -35, -29, -44, -66, -75, -54, -6, 40,
98, 109, 59, 6, -42, -64, -39, 3, 35, 38, 23, 2, -18, -25, -34, -37, -20, -1,
18, 38, 16, -5, 4, 26, 30, 1, -24, -51, -51, -18, -1, -19, -30, -6, -27, -73,
-86, -81, -58, -35, -7, 33, 68, 48, -6, -33, -27, 13, 49, 47, 40, 20, -7, -23,
-39, -66, -86, -56, -13, -24, -70, -69, -39, -7, 16, 62, 102, 71, 23, -15, -31,
-31, -18, -15, -47, -67, -72, -52, 19, 54, 22, -12, -22, -51, -81, -79, -51, 5,
11, -37, -90, -108, -97, -60, -13, 42, 102, 119, 105, 61, 22, -12, -47, -46,
-11, 22, 2, -45, -25, 31, 52, 24, -36, -73, -54, -33, -56, -74, -52, -45, -34,
15, 70, 95, 54, 17, -18, -35, -22, 5, 4, -59, -107, -114, -89, -81, -91, -84,
-43, 4, 51, 108, 122, 117, 112, 71, 18, -30, -73, -110, -106, -66, -33, -27,
-50, -57, -64, -77, -57, -5, 71, 119, 115, 115, 94, 48, -12, -41, -41, -85,
-114, -99, -48, 17, 48, 46, 29, -10, -59, -82, -82, -51, -26, 0, 38, 66, 89, 51,
18, 29, 38, -2, -53, -82, -107, -86, -63, -43, -15, 10, 33, 46, 36, -11, -69,
-111, -92, -41, -24, -52, -60, -46, -18, 1, -45, -68, -47, -10, 47, 84, 56, 61,
61, 26, -34, -69, -13, -22, -80, -109, -104, -73, -28, 14, 50, 88, 108, 86, 43,
29, 45, 84, 88, 60, -2, -59, -49, -19, -30, -44, -78, -116, -104, -63, -11, 28,
45, 53, 43, 2, -38, -54, -39, -45, -64, -89, -102, -78, -43, 0, 14, 18, 14, 19,
50, 57, 14, -43, -67, -80, -81, -49, 10, 37, 32, 28, 39, 60, 63, 44, 9, 1, -18,
-35, -49, -52, -28, -11, 5, -5, -42, -52, -59, -68, -66, -51, -9, 5, 10, 10, 22,
36, 35, 0, -27, -58, -61, -34, -50, -67, -52, -8, 33, 58, 50, 45, 22, 16, 12, 5,
-12, -39, -65, -86, -72, -39, 7, 59, 89, 62, 17, -26, -59, -55, -15, 38, 53, 9,
-59, -107, -112, -97, -82, -63, -9, 38, 96, 106, 60, 26, -17, -37, -42, -29, -3,
16, 30, 28, -2, -42, -67, -62, -47, -22, -2, -7, -21, -5, 31, 87, 119, 110, 78,
22, -22, -39, -29, -26, -50, -95, -95, -63, -37, -19, 2, 9, -1, 1, -13, -43,
-55, -39, -6, 22, 53, 56, 28, 10, -31, -25, -3, 23, 39, 70, 92, 50, 17, -10, 8,
4, -26, -61, -54, -18, 2, 19, 7, -10, -48, -85, -100, -93, -68, -32, 13, 60,
105, 99, 65, 43, 10, -39, -83, -100, -75, -34, -5, 0, -22, -47, -54, -13, 5, -7,
1, 24, 44, 41, 9, -10, 16, 37, 25, 0, -10, -7, 8, -16, -45, -47, -31, -11, -4,
17, 25, 12, -16, -43, -64, -44, -29, -40, -47, -66, -49, -5, 37, 72, 76, 49, 26,
8, -12, -35, -62, -73, -64, -39, -1, 30, 55, 62, 47, 60, 66, 44, 4, -33, -65,
-80, -72, -47, -3, 27, 54, 57, 47, 26, -9, -45, -77, -72, -33, 0, 1, -14, 1, 33,
51, 41, 11, -26, -46, -33, -15, 6, -6, -31, -15, 20, 36, 25, -1, -13, -16, -25,
-35, -25, 0, 24, 29, 23, 37, 51, 47, 9, -32, -67, -63, -54, -46, -12, 20, 52,
47, 31, 16, -23, -66, -62, -19, 15, 23, 18, 37, 54, 49, 16, -35, -66, -75, -47,
8, 43, 45, 29, -6, -24, -4, 5, -29, -64, -57, -25, 8, 15, -2, 0, 28, 46, 34, 6,
-30, -28, 5, 23, 32, 41, 36, 19, 27, 31, 24, 14, 3, 2, -13, -49, -76, -84, -76,
-72, -39, 12, 63, 75, 45, 15, -26, -24, 3, 25, 27, 32, 32, 24, 8, -9, 3, -1,
-14, -29, -31, -26, -2, 14, 2, -17, -37, -49, -47, -28, -20, -8, -2, 7, 14, 11,
-14, -19, 13, 61, 108, 76, 31, -2, -42, -71, -74, -53, -19, 15, 26, 27, 28, 37,
47, 46, 24, 3, -18, -26, -27, -35, -36, -23, -5, 5, 14, 14, 15, 18, 16, 6, -10,
-23, -12, 17, 36, 27, -1, -22, -40, -34, -12, 2, -9, -18, -19, -18, -5, 12, 41,
54, 43, 15, -9, -10, 1, -2, -9, -7, -10, -12, -10, 7, 14, -3, -13, -13, -13,
-22, -11, 8, 5, 2, -1, -4, -6, -6, -3, 2, 10, 17, 18, 8, -4, -5, -3, -5, -6,
-13, -10, 9, 30, 46, 32, 1, -27, -45, -49, -35, -8, 5, 5, -8, -12, -7, -4, -2,
-7, -1, 13, 25, 26, 18, 10, -4, -15, -17, -3, 12, 13, 10, 6, 8, 20, 27, 16, 5,
-5, -13, -24, -27, -25, -31, -16, -4, -6, -12, -21, -26, -25, -27, -27, -12, 14,
37, 50, 48, 44, 29, 16, 5, -16, -18, -9, -1, -8, -13, -4, 3, 9, 15, 12, 14, 5,
-12, -17, -21, -16, -6, 8, 12, 6, 5, 8, 10, 15, 6, -16, -34, -33, -27, -23, -3,
20, 33, 30, 20, 7, 4, -1, -5, -16, -30, -33, -23, -7, 8, 22, 17, 23, 33, 31, 5,
-16, -24, -14, -3, -11, -17, -27, -21, 1, 23, 30, 17, 1, -5, -4, -5, -1, 6, 11,
22, 24, 15, 8, -2, -5, 2, 0, -10, -13, -7, 7, 11, 8, 6, 9, 8, 1, -6, -21, -29,
-21, -1, 18, 26, 25, 9, -13, -26, -22, -12, -5, 6, 5, -5, -11, -5, 14, 26, 22,
8, 0, -1, 4, -4, -16, -18, -4, 7, 6, 7, 4, 5, 2, 5, 8, 5, 6, 10, 17, 21, 16, 6,
3, 5, 8, 9, 7, 4, 5, 5, 1, -6, -15, -24, -32, -27, -7, 11, 11, 5, 6, 8, 9, 7,
-1, -6, 2, 8, 11, 16, 17, 13, 15, 23, 15, 10, 4, -3, -6, -11, -12, -14, -17,
-13, -9, -5, -3, 3, 8, 7, 3, 4, 11, 15, 18, 16, 8, -6, -13, -9, 0, 7, 6, 7, 10,
13, 16, 19, 15, 12, 8, -1, -10, -19, -12, 1, 5, -2, -5, -8, -4, -1, 2, 7, 11,
19, 33, 42, 27, 9, -3, -12, -15, -15, -15, -14, -10, -9, -7, -6, -1, 11, 17, 17,
7, 0, 6, 12, 14, 10, 7, 9, 5, -7, -16, -18, -16, -9, 4, 19, 23, 20, 13, 13, 18,
20, 16, 2, -13, -19, -16, -12, -8, -2, 3, 6, 7, 10, 10, 15, 23, 27, 25, 15, 2,
-11, -19, -16, -7, 2, 5, 4, 3, 7, 11, 16, 16, 11, 0, -9, -8, -3, 3, 4, 0, -3,
-2, 1, 5, 7, 9, 8, 6, 7, 5, 4, 5, 7, 9, 2, -5, -8, -8, -3, 5, 15, 18, 18, 15,
13, 13, 13, 10, 4, -2, -8, -11, -9, -4, -1, -2, -7, -9, -9, 2, 15, 22, 22, 18,
8, 0, -3, -5, -3, -2, 1, 4, 1, -2, -5, -5, 3, 16, 24, 21, 12, 2, -1, 0, 0, -3,
-5, -8, -8, -12, -13, -9, -4, 6, 12, 20, 23, 21, 16, 10, 7, 2, 0, 1, 1, 2, 7,
13, 20, 23, 20, 12, 2, -3, 1, 4, 1, -8, -8, -1, 4, 7, 5, 3, -3, -8, -12, -9, -1,
8, 15, 15, 12, 11, 7, 3, 2, -2, -3, 1, 2, 4, 9, 15, 15, 8, 1, -2, -4, -6, -6,
-4, -2, -3, -5, -4, 0, 6, 11, 16, 14, 7, 0, -5, -6, -8, -7, -1, 10, 16, 19, 16,
10, 9, 11, 11, 6, 1, 5, 12, 17, 18, 9, -4, -16, -23, -25, -19, -3, 12, 15, 13,
8, 5, 4, 3, 1, -5, -7, -4, 2, 10, 16, 17, 18, 13, 4, -5, -9, -8, -4, 5, 10, 10,
3, -9, -13, -11, -3, 6, 11, 11, 10, 12, 11, 8, 6, 8, 9, 7, 6, 7, 8, 5, 0, 1, 7,
12, 13, 11, 7, 3, -2, -5, -3, -2, 0, 1, 2, 1, -1, -2, -3, 0, 6, 8, 7, 8, 8, 7,
2, -9, -14, -13, -6, 1, 8, 10, 11, 12, 9, 4, -3, -8, -10, -10, -2, 8, 17, 20,
19, 17, 14, 12, 11, 9, 4, -2, -6, -3, 1, 5, 7, 6, 5, 3, 3, 4, 4, 4, 5, 5, 3, -1,
-1, 2, 6, 7, 7, 6, 6, 6, 5, 4, 4, 2, -1, -2, -3, 2, 7, 10, 9, 8, 6, 4, 3, 3, 3,
3, 2, 0, -1, -2, -3, -1, 1, 1, -2, -3, -2, 1, 4, 4, 6, 9, 13, 14, 11, 6, 3, 0,
2, 6, 7, 4, 1, 0, 3, 6, 7, 5, 3, 3, 4, 6, 7, 9, 9, 7, 6, 8, 11, 9, 6, 1, -3, -3,
0, 4, 5, 6, 5, 2, -2, -5, -6, -6, -5, -2, 1, 3, 3, 2, 3, 5, 7, 5, 1, -2, -1, 3,
6, 6, 6, 8, 8, 8, 7, 7, 6, 7, 7, 9, 11, 8, 4, 0, 0, -1, 0, 2, 1, -2, -3, -4, 0,
6, 11, 13, 11, 7, 3, -3, -6, -7, -6, -1, 1, 3, 5, 5, 7, 9, 8, 7, 6, 7, 8, 8, 8,
7, 8, 9, 7, 4, 2, 0, -1, 1, 4, 4, 2, -2, -4, -3, -2, -1, 0, 3, 6, 4, 0, 1, 3, 6,
9, 9, 9, 9, 10, 10, 8, 8, 7, 3, -1, -3, -2, 0, 3, 8, 9, 7, 3, 0, 0, 2, 4, 3, 1,
0, 0, 2, 5, 6, 9, 10, 10, 10, 9, 9, 5, -1, -4, -4, -5, -4, -1, 3, 7, 7, 6, 7, 6,
3, -1, -2, -1, 1, 2, 3, 6, 10, 10, 8, 6, 5, 2, 0, 0, -1, 1, 4, 6, 8, 6, 5, 5, 4,
4, 4, 3, 1, 1, 2, 3, 3, 1, 1, 3, 4, 4, 2, 1, 2, 4, 5, 4, 4, 3, 3, 4, 2, 2, 2, 1,
2, 4, 6, 6, 7, 9, 8, 5, 2, 0, 0, 0, -1, 0, 0, 2, 3, 3, 4, 5, 5, 5, 3, 1, 0, -2,
-3, -2, 1, 3, 5, 5, 5, 7, 6, 4, 3, 2, 2, 5, 9, 8, 7, 5, 4, 3, 2, 2, 4, 6, 6, 5,
2, 1, 2, 3, 3, 3, 1, 1, 2, 4, 5, 6, 5, 3, 2, 1, 2, 2, 2, 2, 2, 2, 1, 0, 1, 2, 3,
5, 6, 6, 3, -1, -3, -1, 1, 4, 6, 5, 5, 6, 6, 7, 6, 5, 5, 4, 3, 2, 2, 4, 6, 7, 6,
3, -1, -3, -4, -3, 0, 2, 4, 6, 5, 4, 4, 4, 3, 2, 4, 5, 5, 4, 2, 0, 0, 1, 1, 1,
0, 1, 3, 4, 4, 5, 5, 4, 3, 2, 3, 5, 6, 5, 4, 4, 2, 0, 0, 1, 3, 4, 2, 1, 1, 3, 5,
5, 4, 4, 3, 3, 4, 4, 4, 5, 4, 3, 1, 1, 2, 2, 3, 2, 1, 2, 3, 1, 0, -1, -1, 3, 5,
6, 6, 5, 4, 3, 3, 2, 3, 4, 7, 9, 8, 6, 4, 3, 3, 2, 2, 2, 1, -1, -2, -2, -2, -2,
-1, 0, 0, 1, 2, 3, 4, 6, 7, 6, 4, 1, 1, 4, 7, 8, 8, 7, 6, 5, 5, 4, 3, 2, 2, 2,
3, 4, 4, 2, 1, 0, 0, 0, 1, 2, 3, 3, 1, 0, 0, 1, 3, 4, 5, 5, 6, 7, 6, 4, 3, 2, 0,
0, 1, 2, 3, 4, 4, 4, 4, 3, 3, 3, 4, 4, 2, 2, 2, 3, 4, 4, 4, 3, 3, 3, 2, 2, 2, 2,
4, 4, 4, 3, 2, 2, 3, 3, 3, 2, 1, 1, 1, 2, 2, 2, 2, 3, 4, 5, 5, 5, 4, 2, 0, 0, 0,
2, 3, 4, 5, 6, 6, 7, 6, 5, 4, 3, 2, 1, 1, 1, 3, 3, 3, 2, 2, 2, 2, 2, 2, 3, 4, 4,
3, 2, 2, 2, 1, 0, 0, 2, 3, 4, 4, 3, 2, 2, 2, 2, 3, 3, 2, 2, 3, 3, 3, 4, 4, 5, 6,
5, 3, 2, 1, 0, 0, 0, -1, 0, 1, 2, 4, 5, 5, 4, 3, 1, 0, -1, -1, 0, 0, 1, 2, 3, 3,
3, 3, 2, 1, 0, 0, 0, 1, 2, 3, 3, 3, 3, 2, 1, 1, 0, 1, 1, 1, 2, 2, 3, 3, 3, 3, 2,
2, 0, -1, -1, 1, 2, 2, 2, 2, 3, 3, 2, 2, 2, 2, 2, 3, 3, 3, 2, 2, 2, 2, 2, 3, 2,
2, 3, 3, 3, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 2, 2, 1, 0, -1,
-1, -1, 0, 1, 2, 2, 3, 2, 2, 2, 3, 3, 3, 4, 3, 3, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1,
1, 1, 1, 1, 2, 3, 3, 2, 3, 2, 2, 2, 2, 2, 2, 3, 3, 3, 2, 3, 2, 2, 3, 3, 2, 2, 1,
1, 2, 2, 2, 2, 1, 1, 2, 2, 1, 0, 0, 1, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 2, 2, 3,
3, 2, 2, 1, 1, 2, 3, 3, 2, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 0, 0, 0,
1, 2, 3, 3, 3, 2, 2, 1, 0, 0, 0, 1, 1, 0, -1, -1, -1, 0, 2, 2, 2, 2, 2, 2, 2, 2,
2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 3, 3, 3, 2, 2, 2, 2, 1,
0, 0, 1, 2, 2, 2, 2, 2, 1, 2, 2, 2, 1, 1, 2, 2, 2, 2, 1, 1, 0, 1, 1, 1, 2, 2, 1,
1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 1, 1, 0, -1, -1,
0, 1, 2, 3, 3, 3, 3, 3, 3, 3, 3, 2, 1, 1, 1, 1, 0, 0, 1, 1, 1, 2, 2, 2, 2, 1, 0,
-1, -1, 0, 0, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 1, 1, 1, 1, 1,
1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1,
1, 1, 1, 1, 1, 0, 0, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 0,
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
0, 0, 0, 0, 0, 0, };

#endif /* LINNSIX_H_ */
