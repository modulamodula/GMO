#ifndef DUTWENTYFOUR_H_
#define DUTWENTYFOUR_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define DUTWENTYFOUR_NUM_CELLS 6301
#define DUTWENTYFOUR_SAMPLERATE 16384
 
const int8_t __attribute__((section(".progmem.data"))) DUTWENTYFOUR_DATA [] =
{-17, -32, -52, -42, -35, -24, -43, -33, 54, 2, -24, -70, 4, 27, -53, 44, 34,
-23, 61, -14, -30, -25, -9, 28, 43, 107, -11, 39, 27, -15, -21, -17, 47, 20, 44,
23, 0, -17, -20, -23, -10, 7, 5, 34, -1, 2, 25, -28, -30, 2, 33, 11, 8, 92, 29,
-13, -19, -13, 40, -13, 1, 24, 8, -5, -32, -20, -22, -25, -46, -58, 52, 73, -14,
-3, 48, -3, 0, -13, 18, 66, 43, 42, 2, 30, -7, 32, -32, -40, 23, -6, -31, -4,
-32, -59, -3, -46, -50, -45, 16, 6, 28, 19, -19, -29, 42, 25, -36, 22, 20, -24,
23, 21, -38, -17, -20, -13, -5, -6, -30, -18, -20, -35, -48, -10, -30, -15, -15,
-14, 15, 29, -33, 16, 20, -40, 55, 34, 23, -18, -11, 31, 25, -63, -16, 43, -71,
-31, 13, -69, -12, -1, -35, -14, 4, -20, -12, 28, 41, -4, -9, 43, 16, -13, 5,
63, 16, 37, 19, 14, -30, -24, -12, -46, -6, 16, -7, -16, 6, 38, 12, -60, -1, 32,
57, 32, -10, -12, 50, -25, -51, -8, -3, -11, 30, 62, 18, -19, -42, -35, 6, 11,
-38, -2, -9, 18, -47, -22, 7, 1, -2, -23, 18, 47, 35, -21, 6, 34, 15, 0, -27,
-2, 21, -48, -54, -4, 50, -8, -84, 9, 21, -59, -13, -10, 10, 6, -20, -17, 11,
-31, 8, 13, -60, 33, 51, -55, -52, 42, -34, 4, -33, -49, 25, -4, -10, -22, -24,
-26, -67, -27, 2, 41, -3, -41, -8, 15, 29, -61, 23, 49, -24, -76, -4, 65, -22,
-74, 8, 30, 33, -1, -11, 16, 21, -36, -14, 5, -36, -1, -97, 7, 14, -4, -9, -30,
43, 11, 1, 21, 43, 31, 20, 10, 9, 29, -26, 5, -32, 2, 33, -54, -30, 5, 30, -107,
-25, 47, 21, 22, 1, 34, 36, 18, 2, -28, -25, 19, 26, 35, 38, 6, -51, -2, 13, 25,
-58, -42, 12, -44, -23, -53, 5, 16, -29, 15, 43, 54, -59, 2, 99, -17, -23, -4,
46, -14, 8, 29, -37, -15, -45, -85, -68, 20, 6, -35, -43, 32, 52, -84, -25, 35,
37, 23, -51, 28, 54, 1, -26, 6, -16, -6, -5, 12, 5, -7, 6, -69, 13, -6, -104,
-44, 6, 66, 29, -46, 14, -24, 22, -2, -13, 9, 33, 21, -5, 35, 18, -34, -48, 8,
-10, 30, -54, -10, 50, -14, -61, -50, 41, 10, -49, 45, 69, 38, -35, -7, 66, -40,
30, 0, -1, 101, -3, -3, -31, -50, 22, -46, 15, -6, 7, 34, 24, 16, -16, -29, 6,
19, 8, 90, -14, 15, 26, 41, 22, -42, -9, 8, 88, 32, -57, 10, -21, -61, -31, -33,
2, 13, 19, 4, 44, -7, 2, 23, -17, -6, 2, 78, 54, 31, -6, 9, 3, -15, 19, 30, 7,
-49, -14, -77, 2, -42, -98, -5, -11, -3, 4, -25, -18, -18, -1, 43, -30, 39, 23,
-3, -17, 14, 12, -54, -41, -23, 36, -14, -64, -30, 40, 75, -14, -51, -12, -9,
-38, -27, -15, -24, 13, 11, 7, 6, 40, -27, -19, 65, 25, 37, 32, -46, 0, -55,
-36, -41, -1, 25, -34, -6, -22, 81, -35, -21, 17, 33, 12, -4, 22, 17, 20, -32,
-40, 23, -7, 2, 44, -3, 10, -27, 3, -43, -10, -9, 47, -3, -3, 9, -33, 26, -14,
16, -2, -4, 45, 76, 9, -10, 15, 34, 60, -30, -46, 92, 6, -23, 40, -23, -30, 3,
-27, -33, -9, -23, 1, 38, 29, 1, -51, 5, 75, -3, -19, 2, 13, -33, -46, -41, 24,
-30, -11, -7, -29, 11, -45, 3, -24, -34, 1, 28, 12, 25, 5, 41, -13, -7, -4, -17,
8, 15, 89, -8, -19, -32, -74, -71, -52, -49, 21, 5, 2, 10, -21, -9, -95, 10, 19,
29, 74, 22, 31, -17, -76, -26, 37, -74, -37, 39, 29, 27, 48, -63, -17, -31, -42,
106, -9, 35, 20, -22, -14, 26, 40, -11, -26, 54, 45, 17, -10, -42, -9, -40, -3,
5, 10, 1, -47, -6, 42, -22, -5, 2, 38, 36, 51, 2, 20, 102, -12, -19, 38, 53, 2,
41, 22, 19, -29, -45, 39, -35, -25, -31, -4, -9, -35, -6, -61, -9, 10, -16, 28,
-35, 12, 91, 21, 33, 63, 31, -21, -46, 52, 0, -95, -15, -27, 21, -9, -51, -43,
-3, -15, -80, -11, 56, -5, -56, -18, 17, 31, -54, 23, 58, 6, 8, -3, 20, -15,
-83, -4, 13, -10, 30, 12, -35, -52, -46, -11, -37, -25, 59, 8, 28, 14, -33, -7,
-50, -69, 22, 27, 45, 17, -33, -18, -63, -19, 38, 2, 6, 54, 20, 41, 11, -60,
-11, -46, -20, 4, 16, 13, -39, -29, 17, 40, -56, -18, 34, -11, 11, 40, -8, -12,
-79, 9, 53, 9, 115, 47, 16, 23, 36, -2, -32, -19, -30, 15, 21, -11, 10, -16, 5,
72, -31, -51, 27, 40, 36, -22, -15, -31, 8, 39, 7, 12, -6, 35, 49, 11, -5, 27,
-80, -24, 16, 13, 43, -16, 29, 21, -64, -42, 27, -28, -13, 41, 19, -4, -28, -7,
11, -36, 27, 31, -31, -28, 37, -2, -50, -41, 10, -10, -52, 79, -10, -64, 4, -31,
-66, -5, 38, -6, 30, 51, -20, -14, -13, 6, 42, -29, 16, 62, -8, 19, -32, -86,
-2, 4, -57, 48, 32, -5, 35, 24, -35, -47, 37, -63, -8, -5, -8, 3, 6, 12, -19, 8,
4, -27, 15, 28, -24, 30, -14, 8, -2, -9, -8, 2, 46, 38, 6, 30, -13, -36, 13, 9,
53, -8, -18, -10, -23, 31, 3, -32, 3, 15, -2, -2, 19, -16, -40, 3, -10, 24, 9,
-74, 19, 32, 20, 33, -43, 2, 1, -53, 6, 29, 4, -13, 19, 56, 0, 21, -1, -45, 7,
50, 42, -24, 19, -25, -65, -9, 19, -11, -16, 24, -9, 1, -25, -35, -46, -27, -44,
-16, 32, 26, 17, -18, 16, 30, -3, -48, -42, 47, 25, -6, 1, -39, 43, -44, -51, 8,
9, 14, -34, 63, -1, -39, 16, -62, -12, -11, -50, 9, 40, -26, -64, -34, -58, 23,
64, -28, 24, 85, -3, -26, 8, 22, -61, -83, 0, 64, -12, 40, 32, -50, 55, 15, 21,
-6, 77, 28, -59, 68, 10, -35, -66, -19, 42, 46, 28, -3, 41, 11, -35, -26, -24,
24, -19, -56, 31, -20, 20, 23, -78, 3, 62, 19, 72, 47, 15, 71, 16, -20, 11, 22,
-29, -22, 53, 40, -33, -30, -35, -15, -20, 55, -36, -4, 39, -51, 23, 14, -24,
-53, 6, 8, 54, 8, 9, 10, -2, 2, 115, 44, -79, 31, -58, -57, -4, -9, -45, 1, 2,
-13, 22, -37, -33, 10, -21, 23, 42, 37, 10, 8, -18, -12, 27, -4, 18, -10, -15,
40, 34, -26, -18, 0, -38, -3, 15, -87, -21, -20, -25, -9, -24, 74, 6, 32, 46,
27, 37, -38, 20, -17, 23, 4, 19, 43, -66, -54, -27, -6, -20, 34, 4, -5, -8, -4,
-77, -16, 10, -83, 7, 5, 4, 35, 30, -8, 55, -18, -17, 65, 6, 1, 53, 6, -79, 15,
-76, -46, 29, -39, 35, 46, 12, -33, 38, 40, -6, 4, -5, 0, -8, 25, -4, 11, -5,
14, -19, 14, 78, -34, -44, 24, 44, -35, -18, -52, -39, 54, 7, -34, -22, -18, 26,
-20, 23, 55, -45, 46, 48, 3, 53, 9, -39, 44, -5, -91, 15, 33, -57, 14, -7, -38,
45, 6, -55, 39, 1, -35, -4, -56, 8, -36, 25, 5, -13, 3, -76, 6, 3, 7, 38, -40,
20, 62, -54, -51, 9, -14, 11, -39, 22, 56, -55, 37, 2, -49, 26, 14, -42, 40, 39,
14, 6, 4, -70, -17, -1, -10, 42, -73, 57, 29, 31, 19, -39, 7, 15, 23, 77, 1,
-32, -2, -47, 16, -35, -21, 30, 31, 15, -7, 45, 6, -38, 4, -15, 49, 15, -41, 14,
28, -74, 54, 8, -53, 74, 32, 32, 6, 8, -56, 4, -36, -50, 24, -8, 1, -3, -44, 12,
-21, 15, 25, 41, 50, -47, 69, -22, -71, 21, 24, 1, 18, 40, 31, -31, 7, -5, -50,
-24, -25, 19, 37, 8, -54, -70, 20, 44, -19, 39, 36, 85, 25, -18, 2, -62, 32,
-24, -23, 45, -30, -7, -39, -29, 55, -42, -21, 8, 2, 95, -39, -3, -10, -10, 6,
-25, 53, -57, 16, 19, -14, -5, 7, -60, 23, 32, -19, 17, -36, -18, -49, 8, -49,
-8, 51, -6, 4, 30, 17, 2, -12, 47, 28, 11, -8, -20, 42, -21, -50, 4, -8, 39, 26,
-10, -10, -66, 85, -36, -40, 13, 6, 77, 10, -34, 6, 39, -30, 33, 42, 37, -5, 9,
20, -1, 0, -5, 47, -50, 33, 1, -74, 47, -49, 4, 3, -12, 34, -6, 4, 3, -9, 4,
-22, 35, 47, -7, 46, -54, 35, 31, -45, -35, -57, -16, 19, 25, 14, 42, -27, -61,
9, -2, 0, 13, -12, 51, 41, -20, 18, 3, -70, 29, 4, -28, 31, -17, -14, 4, -15,
-29, -32, 57, 16, -36, 32, -5, -18, -71, 4, -6, 26, 78, -8, 53, 28, -67, -28,
31, -49, 9, 41, 9, 12, 26, -31, -93, -5, -55, 16, 30, -1, 27, 28, 47, -13, -46,
4, -3, -10, 90, -38, 36, 7, -82, -3, -41, 24, -28, 36, 49, -36, 8, -18, -39, 3,
-10, 27, -8, -52, 18, -18, -3, 24, -9, -23, 46, 78, 28, 26, 33, -34, -18, -72,
-11, 35, -52, 48, -2, -31, -18, 0, 22, -4, 6, 55, -41, 16, 30, -46, 19, 9, 3,
-3, 71, -18, -4, 47, -26, -6, 23, -27, -21, -6, -61, -7, -42, -39, 45, -8, -34,
68, 5, -52, 43, -13, -5, 18, -14, 35, -2, -36, 43, -11, -44, 9, 14, 4, -26, -40,
1, -1, -30, -22, -8, 16, -17, 48, -57, -30, 60, -58, 20, 25, -29, 33, 21, 9, -4,
4, 6, -30, 24, 4, 15, -25, -28, 23, 5, 4, 19, -29, 46, 28, -26, 48, -40, -5,
-11, 2, 0, -7, 49, 16, -33, 0, 1, -26, -6, -19, -2, 1, 22, 3, -13, 37, 15, 2, 0,
-9, 30, 9, 24, 8, -6, -40, -21, 49, -9, -33, 39, 3, -53, 12, -46, -17, 12, 18,
-10, -8, 49, -38, -11, 1, 42, 33, 12, 24, 17, 29, -42, -22, 4, -42, -59, 17, 14,
67, 42, -36, -1, -41, 7, -11, -7, -13, 21, 13, -29, 41, -22, 22, 18, -4, 53, 38,
-39, 28, -13, -34, 20, -68, 18, -15, 30, 8, -31, -1, -24, -26, 12, 1, 11, 27, 1,
4, -50, 50, -66, -16, 72, 41, 32, -37, 38, -23, -52, -25, -23, 25, 24, -4, 32,
-18, -46, 29, -25, -42, 39, 6, -20, -8, 40, 24, -32, -6, -8, 17, 13, 11, 2, 15,
17, -48, -26, 25, 35, 20, -29, 9, 35, -33, -6, -34, 7, 48, 0, 27, 30, 1, -19,
31, 8, 17, -20, -26, 24, 0, 38, 23, 21, -20, -5, -12, -11, 15, -50, -10, -19,
-31, 36, -8, -20, 15, -16, 43, 33, -6, -22, 38, 8, -72, 34, 26, -27, -9, 45, 12,
2, -12, -26, -6, 20, -8, 22, -11, -34, 55, -44, -44, 1, 8, 31, -15, -11, 36,
-25, -2, -4, -6, 31, 12, -4, 6, -5, 12, -23, -28, 40, 3, 3, -16, 33, 2, -11, 2,
-18, 28, 14, -12, 25, 23, -30, -40, 3, -25, -45, 18, 14, -10, 11, 19, 19, -8,
-13, 32, -29, 27, 19, -22, -26, 6, 39, -54, 19, 38, -26, -16, -8, -5, 0, -24,
-7, -11, -15, 26, -17, 11, -22, -15, 59, -19, 11, 21, -4, 14, 25, 3, -37, 10, 0,
-38, 37, -16, -8, 10, -48, 14, -21, 8, 10, 7, 22, -38, -22, 47, 9, 33, 53, -17,
-1, 15, -15, -26, 64, -1, -6, 40, -14, 10, -12, -34, -39, -8, -20, 13, 29, 19,
11, -22, -10, -32, 22, -2, -8, -15, -26, 45, -21, -44, 26, -11, 11, 26, 36, 1,
-34, -38, -34, 38, 7, -7, -23, -2, 37, 35, -25, -20, -34, -5, 10, 33, 11, -32,
-21, -32, 9, -30, 9, -24, -11, 33, 55, -21, -7, -8, -31, 32, -39, 64, 8, -18,
40, -24, 31, 12, 0, 1, -14, -8, 3, -2, 15, -4, -40, 51, 36, -8, -15, 20, -23, 4,
21, -24, 18, -27, -15, 3, -3, 30, -15, -6, 6, -33, 41, -4, -20, 19, -32, 28, 46,
-24, 22, -8, -26, -3, 19, 11, 20, 8, -1, 36, -27, -15, -4, -15, -6, 32, -26,
-28, -20, -23, -21, -9, 33, -14, 50, 12, -26, 35, 22, 6, -25, -14, -9, 0, 34, 4,
-17, 15, 15, 15, -7, -17, 11, -27, -3, 11, 16, -1, -38, 19, 17, -33, 18, 28, 15,
7, -16, 11, 6, 24, -44, -57, 39, 10, 9, -30, -29, 36, -27, -11, -29, 12, 22,
-44, 8, 11, -8, -12, 27, 9, 14, -22, 4, -14, -20, 30, -48, 12, 11, 11, 1, -12,
-12, 12, 11, -47, -31, 0, 9, -9, 0, 7, 15, 4, 22, -25, 16, 4, 17, 20, -34, 6,
-7, 54, -19, -21, 3, 9, 28, 10, -2, -32, 20, -20, -27, 25, 11, 1, -13, -6, 15,
-8, 26, 4, 6, 28, 13, 24, 4, -39, -41, 11, -15, 46, 12, -22, 6, -20, 19, -21,
-30, 1, 9, 25, 23, -33, 1, 16, -4, -12, 7, -13, -8, 17, -20, 19, 10, 32, -10,
-12, -2, -2, 21, 8, -34, -22, -15, -29, 34, -6, -17, -20, 12, 15, -9, 1, -10, 8,
-12, 24, 0, -30, 15, -19, 0, 1, -5, 29, 19, -29, -9, -6, 25, -5, -28, 10, -1,
50, -7, -10, 8, 24, -29, 8, -21, -10, 6, -17, 4, -38, 15, -29, 41, -14, 6, 17,
-28, 5, -16, 14, 13, -23, 31, 10, -25, -20, -11, 47, -10, 28, -22, -7, 45, -16,
-43, 13, 12, 1, -3, -18, 3, 5, 9, -29, -9, 16, 10, 3, 12, -20, -3, -12, 20, 26,
-4, 21, -2, 17, -10, -1, -10, -13, 16, -5, 15, -3, 27, -2, -13, 5, -19, 2, 19,
13, -20, 11, 5, 3, -12, 27, -29, -26, 12, 2, 25, -17, 21, 8, 3, -2, 0, -19, 27,
-29, -17, 17, -24, 10, -34, 4, 6, 26, -17, -5, 8, -25, 2, 8, 7, -26, 11, -17,
-24, 9, 27, -11, 5, 17, -5, 24, -1, 0, -15, -9, -14, -24, 12, 13, -58, 7, 16,
10, 13, -14, 0, -24, 11, 6, 1, -14, 5, 6, 25, 7, 10, -10, -13, 18, 2, 21, -7,
-5, 12, -28, 9, 27, -44, 21, -3, -8, -13, -9, 13, -18, 1, -8, 16, 3, -4, -22, 4,
42, -5, 15, 9, -13, 9, 9, -23, 8, 26, -3, 10, -3, -12, -14, 8, -11, 2, -13, 3,
-2, -5, -9, -4, 29, 0, 42, -22, 16, -15, -17, 5, -1, 15, -5, 22, -5, 2, -10, -6,
-1, 2, -16, -16, 16, 28, -12, -10, -19, 20, 2, 10, 19, -31, 8, -9, 26, 17, 5,
-18, 7, -10, -16, 22, -7, -1, -4, -12, -31, -12, -14, -16, 3, 13, 3, 11, -19,
-24, 16, -12, 16, 26, -4, -28, 20, 5, -3, 13, -8, 6, -7, 28, -16, 3, -15, -24,
19, -11, -14, -7, 13, -22, -15, 6, -5, 3, 12, -2, -5, 25, 12, -24, 4, -4, -9, 7,
13, 6, -18, 32, 5, 7, 10, -22, -7, -11, 8, -9, 22, 15, -1, -1, -10, -20, -4, 6,
-21, 2, 11, 7, -6, 11, -22, -15, 14, 7, 9, -6, -17, -2, 6, 6, 0, 3, 16, -18, -3,
11, -12, 9, 17, -15, -21, 26, 19, -47, 17, 9, -26, 14, 10, -22, 0, -10, 1, 25,
-6, 9, -21, 7, 6, -22, -23, 5, 0, 9, 30, -21, -12, -2, -17, 12, -6, -9, 0, 1, 5,
-15, 14, 3, 1, 0, -1, -13, 8, -3, -20, 0, 5, 2, 10, -3, -22, -2, 9, -7, -10, 30,
-7, 8, 8, 1, 2, 13, 28, -24, 8, -24, -10, 8, -17, 21, -17, -2, 5, 13, -11, -12,
8, -10, 5, -10, -2, 10, -8, -9, 14, -2, 21, 11, 3, -5, -7, -15, 8, 10, -13, -7,
-13, 8, -20, 14, -12, -7, 8, -3, 4, -17, -1, 10, 7, 11, -2, 16, 13, -3, 9, -10,
21, -2, -7, -8, 4, 0, -11, 2, 2, -11, 5, 17, -3, -5, -8, 9, -12, 22, -7, -11, 4,
-9, -13, -5, 25, -6, 9, 15, -20, -6, 3, -18, -2, 0, -3, 25, 11, -10, -4, -12,
-13, 6, 22, -3, -17, 8, 23, -7, -11, -7, -9, -13, 10, -5, -7, 25, -19, -3, 1, 6,
-9, -2, 11, -23, 4, 9, 3, 8, -21, -13, -7, 16, 10, -17, 19, -2, -6, 3, -17, -13,
17, 8, 17, 16, -14, -3, 4, -10, 3, 20, 24, -14, -7, 12, -18, -12, -11, 4, -25,
6, 12, -14, 6, -19, -4, 7, 15, 8, -22, 14, 16, 0, 6, -7, 2, 12, 10, 7, -1, -8,
2, -4, -15, -2, -8, -5, 0, -2, 1, 3, 0, -4, 5, -21, 18, 0, 7, 27, -18, 8, 14, 4,
-16, 1, -2, -6, 8, 2, -10, -20, -11, 2, -17, 4, 3, -12, 6, -10, -7, 4, 5, 4, 8,
-4, 10, 8, 5, -8, 6, 3, -22, 18, -7, -25, 11, 7, -21, -15, 9, -12, -10, 18, -26,
6, -1, -7, 13, -9, -7, -1, 23, 15, -4, -10, 7, -1, 5, -5, -9, -12, 1, 10, -10,
-2, -10, -3, 8, -12, -3, 7, -9, 5, 8, -1, 5, 5, -7, -2, 17, 3, -15, 11, -13, 2,
-4, -2, 3, -15, 17, -13, -2, -8, 11, 14, 1, -7, -21, -3, -9, 8, 8, 8, 3, 10, 7,
-12, -4, -13, -3, 11, 9, 0, -17, -6, -4, -2, 3, 7, -10, 3, 15, -2, -3, 5, -4,
-8, 1, -5, 16, 0, 4, -10, -4, 14, -9, 9, 4, -13, -5, 13, -6, -18, -5, 2, -5, 4,
13, 0, 1, -6, 2, 3, -8, 0, 1, 3, 8, 10, -9, -5, -1, -15, 1, 10, 21, -5, -10, 8,
-8, -3, 5, -9, -2, 18, 2, 6, -7, -14, -1, -9, 6, 9, 13, 1, -11, 1, -15, -17, 0,
-10, 3, 18, -7, 10, 12, -12, -6, 3, 6, 15, 9, -7, 1, -10, 12, 4, -8, 2, 4, -3,
10, 14, -18, -8, 1, 5, -6, -1, -21, 11, 0, -10, 14, -8, 5, 14, -3, -1, 20, -5,
-3, -8, -2, 3, -3, -1, -2, 5, -2, -3, -8, -8, -5, -5, -1, 9, 6, -16, 7, 9, -8,
-1, 8, 5, 11, 10, -14, 5, -1, 4, -6, -3, -3, -12, 10, -1, -16, -10, -9, -4, -4,
-16, 8, 6, 2, 3, 16, 16, 1, 2, -5, -3, -1, -7, 3, -7, -1, -4, -15, 2, 7, -11,
-15, 13, -13, 8, 9, -9, 7, 9, -7, -6, 6, -4, 0, -5, 9, 4, 8, 5, -7, 10, -3, -7,
-6, -20, -4, -6, -2, 7, 1, -4, -7, 1, 18, -6, -5, -3, -8, 8, 1, 4, -3, 5, -10,
-6, -18, -10, -6, 3, -4, 5, 8, -5, 17, -23, -5, -12, -5, 0, 4, 6, 2, 17, 9, -4,
-8, -11, 2, -3, 1, 10, -13, 8, -3, -10, -2, 2, -16, 0, -6, 4, 2, -7, 10, -3, 1,
-3, 12, -4, -2, -6, -1, 1, 11, -4, -9, -1, -1, 3, -10, -2, -14, 9, -3, 4, 11, 1,
4, -3, 3, -8, -3, 9, -1, 6, 5, -4, 10, 5, -14, -2, 7, -4, -4, -2, -8, -9, 14,
-8, -5, 7, -4, 5, 0, 0, 4, -9, 11, 11, -4, 5, -6, 1, -5, 4, -15, -5, 3, 3, 5,
-11, -5, -1, 2, -6, -4, -7, 7, -10, -2, 7, 2, 3, -4, -4, -7, -3, 3, -1, 8, 8,
-9, 9, -4, 1, 1, -5, 1, -6, 6, -9, -5, 5, -10, 3, 0, -8, 6, 0, -5, -4, 10, 8, 2,
4, -2, -7, 4, 0, -16, 5, 4, 6, -3, -3, -6, -4, 4, -17, 3, -9, 0, 3, -2, 4, -10,
-3, 3, 2, 4, 0, -16, 5, 10, 3, -2, 9, 2, -13, 5, -14, 3, 4, -11, -8, 4, 9, -5,
1, 1, -8, -8, 15, -6, -1, 9, 3, 7, 8, 8, -15, 2, 3, -5, -14, -1, 13, 4, -5, -4,
3, 0, -2, -5, 1, -2, 2, 3, 0, 4, -15, -8, 3, 1, 3, -19, -2, 10, 5, 3, -8, 4, 7,
-2, -15, -3, 2, -8, 1, 1, 0, 11, 7, -12, -5, -1, 2, 2, -5, 6, 1, -4, 5, -3, 1,
-6, -13, 8, 6, 1, -7, 0, -8, -7, 3, -8, -3, 3, 0, -11, 0, 1, -6, -4, -2, 2, 12,
5, -10, 3, 2, 4, 1, -9, -2, -4, -1, 2, -2, -1, 1, -1, 8, -4, 2, -2, -11, 4, -10,
-9, -4, 4, 3, 3, 2, 2, 0, 1, 2, -5, 0, 3, 6, -7, -3, 0, -5, 3, -2, -13, 5, 6, 6,
10, -9, -4, 7, 0, 2, -3, -1, 2, 2, 1, 0, 1, -1, 7, -4, 4, -1, -4, -1, 0, -7, -8,
6, 0, -4, -1, 9, 3, 3, -4, -1, 7, -1, 0, 0, -7, -12, -4, 1, -4, -1, 4, 7, 1, 0,
-3, 1, 3, -2, -1, -1, 12, 2, 6, 0, -2, 3, -1, 0, -5, -5, -3, 6, 0, -9, -2, 2,
-4, -1, -8, -4, -5, 3, 10, 0, 7, 3, 1, 2, -7, -8, 3, -2, -8, 2, 4, -1, 2, 1, -6,
-3, -1, 0, 2, -12, -10, 5, 9, 4, -3, 4, -1, 0, 0, -9, 3, 5, -2, -5, -6, 6, -6,
-4, -1, -11, 0, 1, 2, 1, 5, 1, 0, 8, 6, -2, -3, -2, 0, 0, -13, 5, 7, 8, 5, -6,
8, -2, -3, -3, -13, -6, 2, -6, -6, -2, -4, -1, 6, 4, 2, 3, 1, 1, 6, -4, -7, -1,
6, 0, -10, 4, -2, -6, -9, -10, 2, 14, 0, -12, 2, 1, -7, -6, -9, -7, 8, -1, 4, 0,
-6, -4, -3, 7, -6, 2, 1, -4, -2, -4, -7, 0, 5, -3, -5, -6, 5, 1, 4, 0, -12, 2,
5, 2, -5, -9, -2, 3, 4, 0, 0, 0, 6, 8, 1, -3, 4, -7, 3, -1, -10, 5, 0, -3, -7,
2, 5, 4, -3, 1, 1, -2, 0, 0, -2, -7, 4, 1, 6, -3, -7, 2, -1, 3, 1, -2, 0, 1, 1,
-2, 2, -2, -3, 0, 3, -1, 2, 10, -6, -6, -4, 2, 3, -3, -8, -7, 0, 5, 0, -10, 0,
-2, 4, 1, -2, -1, -1, 3, -1, -4, -1, -2, 0, 6, 1, 6, 0, 4, -3, -3, -3, -5, 4,
-6, -13, -3, 2, 0, 2, -11, -5, 3, -2, -2, 2, 3, 4, 3, -2, -3, 1, -3, 0, -4, 3,
4, -2, 4, 1, 2, -4, -5, -4, -3, -4, -6, -5, 5, 5, 0, 4, 8, -4, -1, -1, -8, 1,
-1, -3, -6, 8, 6, -3, -1, -3, -8, -1, 4, -4, 2, 2, 1, 2, -4, -11, -5, 9, 1, -8,
-1, 3, 8, 2, -1, -1, -1, 6, -7, -6, -1, -3, 1, 1, -1, -2, -6, -5, -2, -1, -3,
-3, -1, -1, 8, 0, 6, 4, -2, 5, -2, -5, 7, 6, -3, -2, -1, 3, -11, -9, -7, -1, 2,
-3, -2, -4, 2, 2, 3, 5, 6, 0, 0, 0, -2, -4, -2, 6, -4, -3, 2, 1, 6, -6, -2, -1,
5, 3, -9, -3, -4, 0, -4, -4, -5, 0, 1, 6, 7, 1, -1, 3, 4, 4, 0, -7, -2, -6, -2,
0, -3, -1, 1, -4, 0, 3, -1, -3, -7, -5, -2, 4, -4, -1, 5, -4, 0, -2, -3, 3, -2,
7, 5, -4, -2, -4, 5, -7, -2, -5, -8, 0, 3, 2, -5, 1, 2, 1, -3, -1, -3, 2, 0, -4,
-3, -3, 3, 0, -2, 2, 3, 2, -4, -8, -2, -3, 4, -3, -4, 3, -3, 1, -2, 2, 6, 0, -3,
1, -2, -6, -2, -2, -4, -4, 4, -6, -5, 2, -2, -6, 3, 7, -4, -3, -5, -5, -2, 6,
-3, -5, -2, 1, -3, 1, 1, -8, 6, -5, -2, 1, -3, -4, -4, 0, 2, 6, 1, -6, -5, 2, 3,
5, -2, -7, 2, -3, -3, 0, 1, 2, -5, 4, 0, -3, -2, -2, 0, -3, 3, 1, 1, 3, 1, -9,
-4, 3, 2, 0, -1, 0, 2, 14, 1, 2, -2, -8, 2, -2, 2, -2, -4, -1, 2, 4, 0, -5, -1,
-5, -2, 3, -1, 5, -9, 0, -3, -2, 4, -4, 4, 1, 5, 0, 5, 1, -5, -3, -1, -5, -4, 1,
-3, 3, -3, 4, 4, 1, 8, -1, -8, 1, 0, -2, 3, 4, -1, 1, 5, -6, -4, 3, 3, 0, 1, 0,
-6, -5, -2, 1, 5, 3, -2, -4, 0, 1, -3, 2, 6, 5, -2, -1, -2, -1, -4, -4, -2, -4,
0, -6, 3, 0, 4, 4, -4, -1, 4, 4, -4, 2, 4, 2, 1, 0, -3, -2, 2, 2, 3, 6, 2, -5,
-4, -1, -1, -6, -3, -5, -5, 0, 0, 1, 5, 4, -4, -2, 1, 4, 1, -6, 2, -4, 0, 7, 2,
-3, -7, -5, -7, -3, 0, -1, -5, 0, -1, -6, -8, -7, -11, -7, 6, 4, 0, 6, 4, -4, 0,
3, 6, -6, -3, -2, -2, 2, -1, 0, -5, -2, 2, 0, -2, -4, -9, 1, 5, -3, -3, -1, 2,
-1, -6, -1, 0, 2, 1, -3, 1, 2, 5, -9, -3, 0, -2, -4, -6, 1, -4, 3, 3, 1, 4, 0,
-4, -2, 4, 4, -2, -2, 3, 3, 0, 1, 4, 1, -3, -1, -2, -8, 3, -5, -7, 4, 2, 2, -6,
-3, -6, -1, 10, 0, 2, 3, 0, -6, -1, 5, -6, -4, 2, 0, -2, 2, 3, -1, -4, -2, -4,
-7, -6, -4, 1, -2, -3, 3, -6, 0, 2, -2, 5, -2, 5, 3, -1, 3, -5, -3, 2, -3, -3,
0, 0, -9, 1, 6, -7, 1, 4, -1, 1, 4, -4, -2, 0, 2, -1, 0, 9, 0, 1, -2, -4, -6,
-3, 3, -5, -4, -1, -1, 1, -3, 3, -1, -2, 5, 0, 1, 3, 5, 1, 1, 4, -2, 1, -1, -1,
-1, 0, 2, -5, -4, -2, 1, -1, 4, 1, 0, 0, -2, 5, -2, 5, 3, 4, 6, 2, -2, -7, 1,
-1, -6, -2, -2, 0, 2, 0, -4, -7, 2, 5, 3, -1, 1, 0, -2, 3, -4, -2, 8, 7, -2, -1,
3, 1, -1, 1, 4, -2, 2, 2, -5, -2, -1, 0, -4, -5, -1, -2, -1, 2, 4, 4, 4, 4, 1,
-2, -3, -2, -4, 7, -1, -5, 6, -1, -1, 1, -4, -4, 2, 4, -8, -9, 1, 1, -4, -4, 1,
-3, 3, 3, 1, 2, 1, 5, 0, -2, -5, 2, -3, -8, -3, -6, -4, -2, 4, -5, -3, 3, -5, 1,
-3, -1, -2, 0, 1, -7, 2, 2, 0, -2, -2, -2, -5, -1, -1, -4, 3, 1, -7, -4, -7, -7,
-4, 1, 0, -4, -2, 2, -2, 3, 3, -2, 4, 0, 3, -6, -6, -2, -2, 0, -5, 5, 0, -2, -4,
-11, -4, 2, 2, -7, -6, 1, 1, 2, 3, 1, -2, 1, 1, 3, -3, -1, -1, -2, 1, -7, 2, 0,
-5, -1, -4, 3, 2, -2, 0, -4, 3, -3, -2, 1, -5, 0, 1, 0, 1, 4, 3, 2, 4, 1, -1,
-4, -6, -4, -3, 2, -2, -2, -3, 1, -9, -3, 3, -3, 2, -1, 2, -1, 5, -1, -5, 2, -5,
2, 2, -9, 1, -7, -1, -1, 2, -3, -4, 5, -7, -3, -2, -1, -6, 2, 3, 3, 3, 1, 2, -1,
4, 2, -3, -2, -10, -7, 4, -1, -2, -3, 1, -5, -3, 1, -1, -1, 3, 2, -4, 6, -4, -1,
4, 0, 2, -1, -1, 4, 6, -3, -4, -6, -5, 0, -1, -3, -5, -4, 2, 3, 0, -3, -6, -9,
-3, 3, 2, 7, 0, -5, 4, 1, 1, 1, -5, 5, 1, -1, -8, -3, -1, 2, 1, -2, -6, -5, 4,
-10, 0, 2, 3, -6, 2, 1, 3, 11, -1, 1, 2, -1, -4, 5, 2, -6, -4, -3, -3, -1, -1,
3, 2, 1, -3, 1, 3, -2, 1, 2, 4, 2, 2, 5, 1, 2, 0, 0, 2, 3, 1, -8, -2, -3, -2, 2,
-4, -3, 5, -2, 0, 5, 5, 0, -2, 3, 1, 3, 3, -1, 4, 4, -1, 1, -3, 4, -1, -3, -1,
-3, -4, -4, -1, -1, -3, -2, 3, 2, 0, 2, 4, 1, 6, -4, -4, 0, 1, 3, -8, 2, -1, -1,
2, 1, -5, -2, 2, -4, 0, -1, 1, -3, 0, 3, 1, -1, -1, 5, 2, 0, 4, -4, -2, 4, -2,
1, 2, 2, -1, -2, -5, -3, 1, 0, 0, -2, -2, 1, 4, -2, 2, 3, 4, 9, -1, 3, -1, 1,
-2, -7, 0, -4, 0, -2, 1, 2, -2, -1, -2, -1, 1, -2, 1, -1, 2, 4, -2, 2, -2, -1,
0, -3, -3, 1, 0, 1, -2, -1, -1, -3, -4, 1, 4, -2, -4, -3, -5, -1, 0, -5, 3, 4,
4, -1, 1, 3, 1, -1, -3, 2, -2, -1, 3, -2, -4, -2, -4, -5, -1, -6, -6, -3, 0, 4,
-1, 1, -3, -1, 0, -3, -1, -4, 1, -3, 0, 5, -4, 2, 1, -1, 0, -4, 1, -5, -3, -6,
-4, 2, 0, 0, -2, 0, -3, 0, 1, 2, -1, -3, -1, -2, 1, -6, -3, 1, 1, 1, -3, -2, -3,
-4, -4, -5, 2, -4, -8, -3, -2, 1, 1, 7, 1, -2, 3, 0, -1, -1, 0, -6, -2, 2, -1,
-2, -3, -4, -3, 0, -4, -3, -3, 1, 3, -3, 2, 2, -1, 1, -3, 0, 2, 5, 2, -1, -1,
-2, 2, -5, -2, -1, -3, -4, -3, -1, -1, 1, -2, 0, 0, 2, -1, -5, -1, 2, 5, 4, 2,
-1, -3, 1, -2, -4, -2, -3, 0, -2, 2, -1, -3, -3, -5, -1, 2, 5, -2, -3, 1, 0, 3,
0, -1, -4, -1, 6, 2, 0, -2, -4, -5, -2, 0, -3, -2, -4, 0, 0, 0, 2, -2, 0, 0, -2,
-3, 1, 3, 1, 3, -1, 1, 0, -4, -3, -2, 3, 3, 3, -1, -2, -3, -3, 3, -2, -7, -4, 0,
3, 3, -3, -2, 8, 4, 1, 0, -2, 0, -1, -1, 0, 3, 2, -3, -2, 0, 2, -3, 2, 6, 2, 1,
-6, -2, 0, 6, 0, 0, 1, -3, 4, 0, 4, 1, 2, 0, -3, -2, -5, -3, 0, -1, 2, 0, 4, -1,
-1, 1, -5, -3, -4, 3, 2, 2, -1, -1, 3, 4, 3, -4, 0, -1, -1, -3, -7, -3, -3, 3,
-1, -1, 4, -1, 0, -4, -2, 3, 1, -4, -3, -1, -3, -1, -2, -4, 3, 2, -6, -5, -1,
-2, -1, 2, 1, 1, -3, -4, -4, 0, 2, 3, 6, 4, -4, -9, -6, 0, 0, 5, -1, 2, 0, -2,
3, -4, 0, -3, -1, 0, 3, -1, -3, -5, -2, 1, -2, -4, -3, 2, 0, -2, -1, 0, 1, 0,
-1, 4, 1, -2, -5, -5, 3, 3, 0, 0, 2, -1, -3, 2, 0, -3, 0, 1, -1, -1, -3, -1, -1,
0, 3, 1, 3, -3, -3, -3, -1, 2, -2, -1, -5, -2, 3, 0, 1, 3, -1, -3, -2, 0, -2, 0,
0, 1, 3, 0, -2, -1, 1, -1, 0, 2, 0, -5, -4, 1, 0, -2, 0, -4, -3, -1, -2, -3, 7,
6, -5, -5, -3, 0, 1, 4, -1, -5, -1, 1, -3, -1, 1, -1, -3, -1, -2, -3, 0, 2, 0,
4, 1, -3, -5, -4, 6, 5, 0, -3, -2, -3, 3, 4, 1, 0, -4, -1, 1, -3, -2, -1, 1, 5,
1, -1, -4, 2, 2, -1, -2, -4, -2, -1, 3, 0, -1, 3, -4, -3, 2, -2, 0, 1, 0, 1, -3,
-5, 1, 1, 0, 3, 3, 0, -4, 3, 4, -3, -3, 0, 1, -3, -2, -5, -3, 3, 2, 2, 0, 0, -2,
-3, 0, 1, -1, -2, -4, -3, -2, -2, 1, 7, 2, -2, -2, -2, -3, -2, -1, -1, 3, -1,
-2, 0, 4, 2, -3, -1, -2, -2, -1, -1, -2, 0, 0, -2, 0, -3, -4, 1, 3, 2, -2, -3,
-2, 1, 1, -1, 0, -2, -1, -1, 0, -2, -2, 2, 1, 2, -1, -5, -3, -1, 0, -3, -2, -2,
-3, -1, 0, 2, 1, 1, 1, 1, 2, 0, -3, -2, 1, 1, 1, -4, -2, 0, 0, 0, 0, 0, 0, -2,
-3, 0, 1, -2, -2, 1, 1, 0, -4, 0, 1, 0, 1, -1, 0, -1, 0, 0, -2, -1, -3, -3, -2,
0, 3, 3, 2, 0, 0, -3, -4, 0, 1, 1, -2, 0, 0, 0, -2, -1, 2, -1, 0, -2, -5, -4,
-2, 0, -1, -1, -1, -2, 0, 1, 0, -1, 0, 2, 0, 1, 1, 0, -1, -2, -1, 0, 1, 0, 0,
-1, 0, -1, -1, -2, -2, 0, -2, 1, -1, -2, -1, 0, 0, 1, 0, -3, -2, 2, 1, -2, 0,
-1, 0, 0, -1, -1, -1, 1, 1, -1, 0, 0, -1, 0, -3, 0, 1, 2, 1, 0, 0, -3, -1, 1, 2,
-1, -1, 1, 1, 1, -1, -2, -2, 1, 1, -1, -2, -1, 0, 1, 1, 0, -1, 0, 1, 2, 0, -1,
0, -3, -1, -1, 1, -1, 0, 1, 1, 1, -2, -3, -3, -1, 1, 2, 1, 0, -2, 1, -1, -1, 0,
-1, -2, -1, -1, 0, -1, -1, 1, -1, -1, -2, -2, -1, 0, 0, -2, -1, -1, -2, 0, 0, 2,
0, -1, -2, -3, -2, -3, -1, 1, 1, 0, -2, -1, -1, -1, 0, -1, 0, 0, 0, -1, -1, -2,
-2, -2, -3, -3, 0, 1, -3, 0, -1, -1, 0, 0, 0, -2, -1, 0, -1, -1, -2, -1, 0, 0,
1, 1, 0, -2, -2, 0, 0, -2, -2, -2, 0, 0, 0, 0, -1, -1, -2, -1, 0, -1, -1, -1, 0,
1, 0, -1, -1, 1, -1, 0, 1, -1, 0, -1, -1, 0, 0, 1, 0, 0, -1, -1, -2, -1, -1, 0,
0, -1, -1, -1, 0, -1, 0, -1, -1, 0, -1, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, -1, 0,
-1, 0, 0, 0, 0, 0, -2, 0, 1, 1, 0, -1, -1, -1, 0, -1, 0, 0, 0, 0, -2, 0, 0, -1,
-2, 0, 1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 1, 1, 0, 0, 0, 0, -1, 0, 0, -1,
1, 0, 0, 0, -1, -1, -1, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0,
0, -1, -1, -2, -1, -2, 0, 0, 0, 0, 0, 1, -1, -1, -1, -1, 0, 0, 0, -1, 0, 0, -1,
0, 0, 0, -1, -1, 0, -1, -1, -1, 0, 0, 0, 0, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0,
-1, 0, 0, -1, 0, 0, 0, -1, 0, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, -1, -1, -1, -1,
-1, -1, 0, 0, -1, 0, 0, -1, -1, 0, 0, -1, -1, 0, -1, 0, -1, -1, -1, -1, -1, 0,
0, 0, -1, -1, -1, -1, -1, -2, -1, -1, 0, 0, -1, -1, -1, -1, -1, 0, -1, -1, -1,
0, 0, 0, 0, -1, -1, -1, 0, -1, -1, -2, -2, 0, 1, 0, -1, -1, -1, -1, -1, -1, -1,
-1, -1, 0, -1, 0, -1, -1, 0, 0, -1, -1, 0, 0, 0, -1, 0, -1, -1, -1, 0, 0, -1,
-1, -1, 0, -1, -1, -1, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 0, 0, 0, 0, 0, -1, -1,
-1, 0, -1, 0, 0, 0, 0, 0, -1, -1, -1, 0, 0, -1, -1, 0, 0, -1, 0, -1, 0, 0, 0, 0,
0, 0, 0, 0, -1, 0, 0, -1, 0, 0, 0, -1, -1, 0, 0, 0, -1, 0, 0, 0, 0, -1, -1, -1,
-1, -1, -1, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0,
0, -1, -1, 0, 0, 0, 0, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, 0, 0, 0, -1, 0,
-1, -1, -1, -1, 0, -1, -1, -1, 0, 0, -1, -1, -1, 0, -1, -1, -1, 0, 0, -1, -1, 0,
0, 0, -1, 0, -1, 0, -1, -1, -1, -1, 0, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1,
-1, -1, 0, 0, -1, 0, 0, -1, 0, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, 0, 0, 0, -1, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, 0,
-1, 0, 0, 0, -1, -1, -1, 0, -1, };

#endif /* DUTWENTYFOUR_H_ */
