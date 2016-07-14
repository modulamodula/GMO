#ifndef MTFIVEHUNDREDTWO_H_
#define MTFIVEHUNDREDTWO_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define MTFIVEHUNDREDTWO_NUM_CELLS 3248
#define MTFIVEHUNDREDTWO_SAMPLERATE 16384
 
const int8_t __attribute__((section(".progmem.data"))) MTFIVEHUNDREDTWO_DATA []
= {-1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, -1, -1, 0, -3, -1, -2, 0, -2, -1, -1, 0,
-2, -1, -2, 0, -2, -1, -2, 0, -1, -1, 0, 0, -2, -1, -2, 0, -2, -1, -2, 0, -2,
-1, -2, 0, -2, -1, -2, 0, -1, 0, -2, -1, -1, 0, 0, 0, -1, -1, -2, 0, -1, -1, -1,
0, -1, 0, -2, 0, -1, 0, -1, -1, -1, 0, -2, -1, -1, 0, 0, 0, -1, -1, -2, 0, -1,
-1, -1, 0, -1, -1, 0, -1, 4, 0, 5, -1, 3, 0, 2, 0, 3, 0, -3, 0, 6, -1, 61, 0,
40, 0, -2, 0, 17, 0, 33, -1, 32, 0, 16, 0, -7, -1, -16, 0, 19, -1, 20, 0, -21,
-1, -6, 0, -5, 0, -29, -1, -17, 0, -19, -1, -25, 0, -29, -1, -44, 0, -39, 0,
-38, -1, -51, 0, -19, -1, -50, 0, -86, 0, -20, -1, -25, 0, -73, -1, -48, 0, -31,
-1, -34, 0, -40, -1, -36, 0, -36, 0, -39, 0, -29, -1, -29, 0, -26, -1, -20, 0,
-25, -1, -27, 0, -3, 0, -13, 0, -12, -1, 10, 0, -1, -1, 2, 0, 28, -1, 19, 0, 13,
-1, 34, 0, 28, 0, 35, -1, 43, 0, 46, -1, 61, 0, 47, -1, 42, 0, 77, 0, 88, -1,
49, 0, 37, -1, 89, 0, 109, 0, 54, 0, 41, -1, 90, 0, 103, -1, 71, 0, 57, 0, 78,
-1, 89, 0, 78, -1, 63, 0, 71, -1, 79, 0, 66, -1, 58, 0, 57, -1, 59, 0, 59, 0,
47, 0, 40, -1, 48, 0, 42, -1, 28, 0, 27, -1, 30, 0, 18, 0, 10, -1, 8, 0, 2, -1,
-1, 0, -6, 0, -12, -1, -28, 0, -28, -1, -19, 0, -41, -1, -50, 0, -45, -1, -43,
0, -46, 0, -77, -1, -78, 0, -47, -1, -74, 0, -96, 0, -75, 0, -80, -1, -92, 0,
-91, -1, -94, 0, -95, 0, -97, -1, -96, 0, -92, -1, -90, 0, -89, -1, -86, 0, -84,
-1, -82, 0, -80, -1, -78, 0, -75, -1, -73, 0, -71, -1, -69, 0, -68, -1, -66, 0,
-64, 0, -62, -1, -60, 0, -58, -1, -57, 0, -55, -1, -53, 0, -51, -1, -49, 0, -47,
0, -46, -1, -39, 0, -29, -1, -25, 0, -20, -1, -12, 0, -5, -1, 5, 0, 11, -1, 14,
0, 26, -1, 33, 0, 30, 0, 40, -1, 56, 0, 58, 0, 54, -1, 63, 0, 83, -1, 88, 0, 76,
-1, 78, 0, 94, 0, 102, 0, 100, -1, 94, 0, 99, -1, 114, 0, 109, -1, 101, -1, 105,
0, 103, -1, 99, 0, 96, 0, 94, 0, 91, 0, 89, 0, 86, 0, 84, -1, 82, 0, 79, -1, 77,
0, 75, 0, 73, -1, 71, 0, 69, -1, 66, 0, 64, -1, 59, 0, 51, 0, 45, 0, 37, 0, 32,
-1, 33, 0, 18, 0, 12, 0, 9, 0, -7, 0, 1, -1, -9, 0, -35, 0, -22, 0, -22, 0, -44,
0, -46, -1, -48, 0, -50, -1, -51, -1, -65, 0, -71, -1, -63, 0, -69, -1, -82, -1,
-83, 0, -85, 0, -90, 0, -81, 0, -83, 0, -102, -1, -95, 0, -87, 0, -96, 0, -92,
0, -88, 0, -91, -1, -87, 0, -85, -1, -83, 0, -81, 0, -80, -1, -77, 0, -74, 0,
-74, -1, -70, 0, -68, -1, -66, 0, -64, 0, -62, 0, -61, 0, -57, -1, -41, 0, -46,
-1, -58, 0, -31, -1, -21, 0, -41, 0, -27, -1, -14, 0, -18, -1, -11, 0, -1, 0,
-1, 0, -2, 0, 18, 0, 17, 0, 7, -1, 25, 0, 34, -1, 32, 0, 38, -1, 37, 0, 46, 0,
52, -1, 47, 0, 57, 0, 62, -1, 60, 0, 68, -1, 68, 0, 71, 0, 76, -1, 64, 0, 80,
-1, 80, 0, 67, 0, 90, -1, 74, 0, 71, -1, 87, 0, 71, 0, 77, -1, 79, 0, 68, -1,
73, 0, 71, -1, 66, 0, 63, -1, 64, 0, 62, -1, 50, 0, 49, 0, 49, -1, 45, 0, 46,
-1, 35, 0, 28, -1, 33, 0, 22, -1, 18, 0, 23, -1, 13, 0, 8, -1, 8, 0, -7, -1, -3,
0, 0, -1, -22, 0, -13, -1, -14, 0, -36, -1, -26, 0, -24, -1, -35, 0, -41, 0,
-46, 0, -40, -1, -44, 0, -52, -1, -52, 0, -58, 0, -57, 0, -55, 0, -65, 0, -66,
0, -60, -1, -61, 0, -80, 0, -73, -1, -59, 0, -69, -1, -69, 0, -72, 0, -69, -1,
-67, 0, -66, 0, -61, 0, -65, 0, -67, 0, -60, -1, -57, 0, -56, -1, -53, 0, -55,
-1, -50, 0, -36, -1, -41, 0, -50, -1, -32, 0, -23, -1, -30, 0, -27, 0, -24, 0,
-8, 0, -5, -1, -17, 0, -1, 0, 6, -1, 4, 0, 8, -1, 13, -1, 20, 0, 22, -1, 24, 0,
31, -1, 29, 0, 29, -1, 47, 0, 47, -1, 33, 0, 38, -1, 56, 0, 62, -1, 52, 0, 46,
0, 54, -1, 57, 0, 57, -1, 65, 0, 61, -1, 56, 0, 52, -1, 66, 0, 66, 0, 51, 0, 54,
-1, 63, 0, 56, -1, 44, 0, 57, -1, 54, 0, 41, -1, 51, 0, 49, -1, 35, 0, 39, -1,
44, 0, 30, -1, 27, 0, 32, 0, 15, -1, 26, 0, 30, -1, 6, 0, 5, -1, 10, 0, 16, 0,
-4, -1, -13, 0, 2, -1, -8, 0, -14, 0, -14, -1, -17, 0, -25, -1, -32, 0, -29, -1,
-22, 0, -32, -1, -45, 0, -36, 0, -43, 0, -43, -1, -43, 0, -55, -1, -53, 0, -42,
-1, -49, 0, -71, -1, -50, 0, -43, 0, -67, -1, -58, 0, -46, -1, -48, 0, -58, 0,
-56, -1, -54, 0, -45, -1, -38, 0, -50, 0, -53, -1, -41, 0, -30, -1, -41, 0, -39,
-1, -26, 0, -25, -1, -26, 0, -33, -1, -16, -1, -4, 0, -24, -1, -18, 0, 2, -1,
-3, 0, -2, 0, 4, -1, 7, 0, 11, 0, 7, -1, 18, 0, 12, 0, 19, -1, 34, 0, 11, -1,
29, 0, 42, -1, 21, 0, 31, 0, 44, -1, 46, 0, 37, 0, 36, -1, 45, 0, 43, -1, 58, 0,
41, -1, 42, 0, 65, -1, 45, 0, 48, 0, 60, -1, 52, 0, 51, -1, 50, 0, 57, 0, 62,
-1, 46, 0, 49, 0, 59, -1, 45, 0, 46, -1, 54, 0, 44, -1, 45, 0, 43, 0, 40, -1,
37, 0, 38, -1, 35, 0, 22, -1, 27, 0, 27, 0, 26, -1, 15, 0, 13, -1, 22, 0, 4, 0,
-3, -1, 6, 0, 2, -1, -6, 0, -11, -1, -15, 0, -15, -1, -20, 0, -22, 0, -31, -1,
-31, 0, -22, 0, -41, -1, -45, 0, -39, -1, -38, 0, -44, 0, -57, -1, -46, 0, -56,
-1, -60, 0, -53, -1, -61, 0, -55, -1, -63, 0, -61, -1, -57, 0, -63, 0, -61, -1,
-68, 0, -61, 0, -54, 0, -61, -1, -60, 0, -58, -1, -60, 0, -48, -1, -50, 0, -57,
-1, -49, 0, -45, 0, -38, -1, -38, 0, -42, -1, -28, 0, -26, 0, -34, -1, -16, 0,
-14, 0, -24, -1, -15, 0, 0, -1, 2, 0, -8, -1, 8, 0, 17, -1, 11, 0, 18, -1, 13,
0, 24, -1, 35, 0, 23, -1, 35, 0, 37, -1, 37, 0, 49, -1, 39, 0, 46, 0, 47, -1,
52, 0, 57, -1, 49, 0, 55, -1, 53, -1, 60, 0, 53, -1, 50, 0, 64, 0, 53, 0, 58, 0,
56, 0, 48, 0, 56, 0, 49, -1, 48, 0, 57, -1, 42, 0, 36, -1, 48, 0, 40, -1, 38, 0,
31, -1, 33, 0, 35, 0, 20, -1, 24, 0, 25, 0, 20, -1, 7, 0, 13, -1, 13, 0, -5, 0,
10, -1, 6, 0, -14, -1, -6, 0, -7, 0, -25, -1, -12, 0, -11, -1, -34, 0, -26, 0,
-21, -1, -30, 0, -38, -1, -47, 0, -29, 0, -34, -1, -60, 0, -43, -1, -39, 0, -52,
0, -54, 0, -48, 0, -47, 0, -62, -1, -55, 0, -41, -1, -60, 0, -64, -1, -46, 0,
-52, 0, -54, -1, -47, 0, -52, -1, -48, 0, -46, -1, -43, 0, -42, -1, -50, 0, -29,
-1, -32, 0, -42, 0, -20, 0, -21, -1, -35, 0, -17, 0, -10, 0, -26, -1, -7, 0, -3,
-1, -9, 0, 3, 0, -1, -1, 11, 0, 14, -1, 4, 0, 17, 0, 19, 0, 25, 0, 16, 0, 23, 0,
42, -1, 24, 0, 29, -1, 40, 0, 35, -1, 39, 0, 41, 0, 44, 0, 41, 0, 41, -1, 49, 0,
49, -1, 41, 0, 44, -1, 53, 0, 45, 0, 42, -1, 48, 0, 46, -1, 44, 0, 45, -1, 41,
0, 35, -1, 45, 0, 42, -1, 32, 0, 36, 0, 33, 0, 37, 0, 33, -1, 21, 0, 22, -1, 30,
0, 23, -1, 16, 0, 18, 0, 16, -1, 7, 0, 4, -1, 13, 0, 5, -1, -1, 0, 2, 0, -3, -1,
-11, 0, -7, 0, -12, -1, -13, 0, -13, -1, -23, 0, -13, -1, -25, 0, -32, -1, -17,
0, -30, -1, -36, 0, -27, -1, -33, 0, -38, 0, -30, 0, -38, -1, -45, 0, -35, -1,
-36, 0, -50, 0, -40, 0, -35, -1, -51, 0, -38, -1, -43, 0, -47, -1, -33, 0, -43,
-1, -44, 0, -38, -1, -40, 0, -37, -1, -39, 0, -36, -1, -26, 0, -35, -1, -33, 0,
-29, -1, -21, 0, -20, -1, -28, 0, -17, -1, -17, 0, -17, 0, -8, -1, -7, 0, -16,
-1, -6, 0, 5, 0, -4, -1, 5, 0, 7, -1, -6, 0, 11, -1, 19, 0, 9, 0, 14, -1, 20, 0,
19, -1, 19, 0, 24, -1, 17, 0, 27, -1, 38, 0, 15, -1, 25, 0, 38, -1, 24, 0, 36,
-1, 36, 0, 24, 0, 34, -1, 33, 0, 36, 0, 33, -1, 31, 0, 37, 0, 34, -1, 29, 0, 35,
-1, 33, 0, 25, 0, 31, -1, 33, 0, 24, -1, 28, 0, 28, -1, 18, 0, 31, -1, 20, 0,
18, 0, 27, -1, 15, 0, 17, 0, 18, 0, 10, 0, 15, 0, 13, 0, 9, -1, 9, 0, -1, -1, 6,
0, 13, 0, -1, -1, -10, 0, -2, 0, -2, 0, -6, 0, -8, 0, -13, 0, -9, 0, -7, 0, -20,
0, -17, 0, -12, 0, -19, 0, -21, 0, -18, 0, -20, 0, -29, 0, -25, -1, -22, 0, -24,
-1, -28, 0, -32, -1, -24, 0, -27, -1, -35, 0, -28, -1, -32, 0, -26, 0, -33, -1,
-37, 0, -20, -1, -35, -1, -32, 0, -26, 0, -37, -1, -24, 0, -19, -1, -35, 0, -33,
-1, -16, 0, -24, -1, -27, 0, -18, -1, -24, 0, -17, -1, -20, 0, -21, -1, -9, 0,
-15, -1, -14, 0, -7, -1, -10, 0, -8, 0, 3, -1, -2, 0, -10, -1, 1, 0, 3, -1, 3,
-1, 10, 0, 3, -1, 7, 0, 13, 0, 9, -1, 15, 0, 14, -1, 12, 0, 23, -1, 19, 0, 15,
-1, 24, 0, 20, -1, 24, 0, 23, -1, 23, 0, 30, -1, 30, 0, 18, -1, 29, -1, 41, 0,
20, -1, 26, 0, 37, -1, 30, 0, 30, 0, 31, -1, 36, 0, 25, -1, 23, 0, 37, -1, 32,
0, 25, -1, 25, 0, 32, 0, 27, -1, 18, 0, 25, -1, 23, 0, 23, -1, 19, 0, 12, -1,
20, 0, 21, 0, 11, -1, 11, 0, 10, -1, 6, 0, 11, -1, 0, -1, -2, 0, 7, -1, -2, 0,
-6, 0, -8, -1, -4, 0, -10, -1, -15, 0, -9, 0, -16, -1, -20, 0, -15, -1, -22, 0,
-24, -1, -17, 0, -28, -1, -30, 0, -23, -1, -30, 0, -31, 0, -30, -1, -30, 0, -34,
-1, -33, 0, -33, -1, -37, 0, -29, -1, -35, 0, -39, -1, -31, 0, -34, -1, -29, 0,
-35, -1, -37, 0, -25, 0, -31, 0, -34, -1, -25, 0, -22, -1, -29, 0, -26, 0, -18,
0, -27, -1, -17, 0, -13, -1, -28, 0, -13, -1, -8, 0, -16, -1, -8, 0, -11, -1,
-4, 0, 4, -1, -12, 0, -5, -1, 9, 0, 8, -1, 3, 0, 2, -1, 14, -1, 8, 0, 9, -1, 18,
0, 12, -1, 18, 0, 17, -1, 18, 0, 24, -1, 21, 0, 18, -1, 23, 0, 30, 0, 27, -1,
23, 0, 25, 0, 29, 0, 30, -1, 30, 0, 26, 0, 28, -1, 37, 0, 31, -1, 22, 0, 34, 0,
27, 0, 25, -1, 35, 0, 23, -1, 24, 0, 31, -1, 24, 0, 23, 0, 25, -1, 22, 0, 18,
-1, 20, 0, 22, -1, 14, 0, 16, 0, 16, -1, 3, 0, 15, 0, 16, 0, -2, 0, 6, -1, 6, 0,
3, -1, 1, 0, -2, -1, -4, 0, -3, -1, 0, 0, -16, -1, -11, 0, -4, -1, -14, 0, -13,
0, -16, -1, -12, 0, -15, -1, -22, 0, -17, 0, -21, -1, -21, 0, -15, -1, -23, 0,
-25, 0, -25, -1, -20, 0, -21, -1, -28, 0, -27, -1, -21, 0, -23, -1, -31, 0, -21,
-1, -25, 0, -27, 0, -23, -1, -24, 0, -25, -1, -22, 0, -22, -1, -27, 0, -17, -1,
-15, 0, -22, 0, -21, 0, -14, 0, -10, -1, -21, 0, -20, 0, -7, 0, -9, -1, -9, 0,
-12, 0, -10, -1, -1, 0, -3, -1, -8, 0, -3, 0, 2, -1, 0, 0, 4, -1, -1, 0, -1, -1,
14, 0, 3, -1, 3, 0, 15, -1, 8, 0, 8, -1, 13, 0, 12, 0, 15, 0, 11, -1, 9, 0, 24,
-1, 17, 0, 8, -1, 16, 0, 21, 0, 13, -1, 16, 0, 24, 0, 13, 0, 15, 0, 19, 0, 19,
0, 17, 0, 16, 0, 17, 0, 16, 0, 18, 0, 15, 0, 11, 0, 14, 0, 15, 0, 16, 0, 8, -1,
10, 0, 16, 0, 8, 0, 7, 0, 9, -1, 7, 0, 8, 0, 6, 0, 3, -1, 6, 0, 4, -1, 4, 0, -1,
-1, 0, 0, 4, -1, 0, 0, -3, -1, -3, 0, -1, 0, -1, -1, -7, 0, -10, -1, -3, 0, -4,
0, -10, -1, -7, 0, -11, -1, -9, 0, -3, 0, -15, 0, -17, 0, -5, -1, -10, 0, -16,
-1, -13, 0, -9, -1, -11, 0, -20, 0, -13, 0, -13, 0, -12, 0, -10, -1, -18, 0,
-14, 0, -12, 0, -16, 0, -12, 0, -10, -1, -15, 0, -14, -1, -14, -1, -7, 0, -8,
-1, -14, 0, -9, 0, -11, -1, -8, 0, -7, -1, -12, 0, -3, 0, -7, 0, -11, 0, -2, -1,
-5, 0, -5, -1, -1, 0, -6, -1, -4, 0, 1, -1, 2, 0, -5, -1, -2, 0, 7, 0, -2, 0, 1,
-1, 4, 0, -1, -1, 4, 0, 7, -1, 2, 0, 3, 0, 5, 0, 8, 0, 6, 0, 0, -1, 7, 0, 10, 0,
2, -1, 7, 0, 10, -1, 4, -1, 10, 0, 8, -1, 6, 0, 8, -1, 6, -1, 12, 0, 7, -1, 5,
0, 12, -1, 7, 0, 6, 0, 13, -1, 8, 0, 3, -1, 11, 0, 13, 0, 4, -1, 8, 0, 9, -1, 6,
0, 9, -1, 6, 0, 8, -1, 9, 0, 5, -1, 6, 0, 9, -1, 5, 0, 7, -1, 8, 0, 3, 0, 6, -1,
2, 0, 5, -1, 6, 0, 2, -1, 4, 0, 2, -1, 1, 0, 3, 0, 2, 0, 0, -1, 0, 0, 1, -1, 1,
0, -5, -1, 1, 0, 1, -1, -9, 0, 1, -1, 0, -1, -7, 0, -3, -1, -3, 0, -8, -1, -3,
0, -4, 0, -11, 0, -5, 0, -5, -1, -9, 0, -8, -1, -10, 0, -9, -1, -6, 0, -10, 0,
-13, -1, -8, 0, -11, -1, -12, 0, -9, -1, -9, 0, -13, 0, -11, -1, -10, 0, -11,
-1, -11, 0, -15, -1, -9, 0, -7, 0, -14, -1, -14, 0, -9, -1, -10, 0, -11, -1,
-10, 0, -10, -1, -7, 0, -7, -1, -8, 0, -7, -1, -7, 0, -6, -1, -1, 0, -8, 0, -8,
-1, 0, 0, -3, -1, 0, 0, -2, -1, -4, 0, 4, -1, -1, 0, 0, -1, 5, 0, 1, -1, 4, 0,
5, 0, 6, -1, 5, 0, 5, -1, 8, 0, 6, -1, 6, 0, 7, 0, 9, -1, 11, 0, 5, -1, 6, 0,
14, -1, 8, 0, 7, 0, 12, -1, 8, 0, 9, -1, 11, 0, 10, 0, 6, -1, 8, 0, 13, -1, 11,
0, 5, -1, 8, 0, 12, -1, 7, 0, 7, 0, 9, 0, 6, 0, 6, 0, 5, 0, 6, 0, 10, -1, 5, 0,
0, -1, 6, 0, 6, -1, 2, 0, 3, -1, 0, 0, 1, -1, 4, 0, 0, -1, -3, 0, -1, -1, 2, -1,
-4, 0, -3, 0, -2, -1, -6, 0, -3, -1, -7, 0, -7, 0, -3, -1, -7, 0, -5, -1, -10,
0, -10, 0, -4, -1, -10, 0, -11, 0, -7, -1, -9, 0, -9, -1, -12, 0, -9, 0, -8, -1,
-12, 0, -10, -1, -9, 0, -11, 0, -11, -1, -8, 0, -7, 0, -10, -1, -10, 0, -8, 0,
-8, -1, -6, 0, -6, -1, -9, 0, -6, -1, -3, 0, -6, -1, -6, 0, -3, -1, -3, 0, -3,
-1, -3, 0, -2, -1, -2, 0, 0, 0, 2, -1, 2, 0, -1, -1, 3, 0, 5, -1, 2, 0, 4, -1,
4, 0, 3, -1, 3, 0, 3, -1, 3, 0, 3, -1, 3, 0, 3, 0, 3, -1, 3, 0, 3, -1, 3, 0, 3,
0, 3, -1, 3, 0, 2, -1, 2, 0, 2, -1, 2, 0, 2, -1, 2, 0, 2, 0, 2, -1, 2, 0, 2, -1,
2, 0, 2, 0, 2, -1, 2, 0, 2, -1, 2, 0, 2, 0, 1, 0, 2, 0, 1, 0, 1, 0, 1, -1, 1, 0,
1, -1, 1, 0, 1, 0, 1, 0, 1, -1, 1, 0, 1, -1, 1, 0, 1, -1, 1, 0, 1, 0, 1, 0, 1,
-1, 1, 0, 1, -1, 1, 0, 1, -1, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, -1, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, -1, 0,
0, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, -1, 0, 0, 0, -1, 0, 0,
0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0,
0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, 0, -1, -1, -1, 0, -1, -1, -1,
0, -1, 0, -1, -1, -1, 0, -1, -1, -1, 0, -1, 0, -1, -1, -1, 0, -1, 0, -1, 0, -1,
0, -1, -1, -1, 0, -1, 0, -1, 0, -1, -1, -1, 0, -1, -1, -1, 0, -1, -1, -1, 0, -1,
-1, -1, 0, -1, 0, -1, 0, -1, -1, -1, 0, -1, -1, -1, 0, -1, -1, };

#endif /* MTFIVEHUNDREDTWO_H_ */
