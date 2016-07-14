#ifndef MARIMBAEIGHT_H_
#define MARIMBAEIGHT_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define MARIMBAEIGHT_NUM_CELLS 8170
#define MARIMBAEIGHT_SAMPLERATE 16384
 
const int8_t __attribute__((section(".progmem.data"))) MARIMBAEIGHT_DATA [] =
{0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -2, -2, -2, -2, -3,
-3, -3, -3, -3, -3, -3, -3, -3, -2, -2, -2, -1, -1, -1, 0, 0, 1, 2, 2, 2, 3, 3,
4, 5, 5, 6, 7, 8, 9, 10, 10, 10, 9, 7, 6, 4, 1, -2, -5, -8, -11, -13, -14, -15,
-14, -13, -14, -12, -8, -5, 1, 5, 10, 13, 15, 17, 14, 8, 6, 4, 3, 3, 4, 6, 9,
11, 11, 9, 3, -3, -7, -9, -11, -12, -13, -14, -15, -17, -22, -27, -31, -33, -34,
-33, -27, -22, -16, -12, -8, -4, -3, -3, -3, -2, 2, 8, 14, 21, 27, 32, 34, 33,
29, 25, 20, 15, 11, 9, 10, 10, 8, 6, 2, -1, -7, -13, -17, -19, -17, -15, -13,
-13, -14, -17, -20, -24, -28, -28, -26, -24, -19, -14, -8, -3, 1, 4, 7, 11, 14,
16, 18, 20, 24, 27, 27, 25, 24, 21, 20, 19, 19, 21, 23, 23, 19, 13, 5, -4, -12,
-19, -24, -24, -23, -21, -18, -19, -20, -26, -21, -18, -13, 12, 22, 33, 39, 41,
38, 29, 21, 14, 7, 2, 0, 2, 7, 10, 10, 3, -6, -16, -24, -28, -29, -25, -17, -12,
-6, -7, -14, -22, -32, -41, -46, -46, -42, -35, -27, -19, -16, -15, -16, -18,
-18, -15, -10, 1, 15, 26, 33, 37, 38, 34, 32, 28, 26, 30, 38, 48, 54, 54, 50,
40, 29, 16, 5, 1, -1, -1, -1, -2, -7, -17, -31, -48, -61, -68, -68, -63, -51,
-36, -23, -14, -10, -13, -19, -22, -22, -17, -3, 15, 34, 52, 64, 68, 67, 61, 54,
49, 50, 54, 61, 68, 71, 68, 58, 42, 21, 0, -19, -31, -36, -33, -28, -26, -28,
-36, -51, -68, -85, -98, -105, -105, -96, -83, -70, -60, -57, -58, -64, -68,
-70, -65, -53, -35, -12, 10, 29, 42, 48, 50, 50, 53, 57, 65, 76, 88, 99, 105,
104, 98, 86, 71, 58, 48, 41, 37, 32, 25, 12, -4, -25, -46, -68, -85, -95, -96,
-90, -82, -74, -68, -64, -64, -65, -64, -59, -46, -28, -8, 14, 32, 46, 54, 57,
58, 62, 68, 76, 86, 99, 109, 115, 115, 108, 96, 82, 67, 56, 48, 44, 42, 40, 34,
21, 3, -18, -41, -63, -80, -90, -95, -96, -96, -97, -101, -108, -117, -125,
-128, -125, -115, -98, -77, -55, -34, -16, -2, 8, 16, 23, 32, 45, 60, 75, 89,
98, 101, 97, 89, 78, 67, 57, 51, 46, 43, 38, 31, 19, 4, -13, -30, -45, -57, -64,
-67, -68, -68, -70, -74, -80, -86, -91, -92, -88, -78, -65, -51, -37, -25, -15,
-8, -1, 6, 17, 31, 48, 65, 82, 95, 104, 108, 108, 106, 103, 101, 102, 104, 107,
108, 104, 93, 77, 57, 36, 15, -3, -16, -26, -32, -39, -47, -57, -68, -80, -91,
-98, -98, -93, -83, -69, -55, -41, -30, -24, -19, -15, -10, -3, 7, 19, 33, 44,
51, 54, 53, 48, 41, 33, 28, 26, 27, 30, 31, 31, 27, 19, 8, -4, -16, -26, -32,
-36, -40, -43, -46, -52, -61, -71, -81, -87, -90, -89, -85, -78, -69, -60, -53,
-47, -41, -33, -23, -10, 5, 22, 38, 53, 63, 69, 70, 69, 67, 64, 62, 62, 62, 61,
57, 50, 41, 29, 16, 2, -8, -15, -17, -18, -17, -17, -19, -22, -26, -29, -30,
-28, -22, -12, -1, 10, 20, 25, 27, 26, 24, 22, 23, 27, 33, 40, 46, 49, 49, 45,
38, 30, 23, 18, 16, 17, 19, 20, 20, 16, 9, -1, -13, -25, -34, -39, -42, -42,
-41, -42, -45, -50, -57, -64, -69, -70, -68, -60, -50, -39, -28, -19, -13, -8,
-3, 2, 8, 17, 26, 35, 42, 45, 45, 41, 33, 24, 14, 6, 0, -5, -9, -12, -17, -24,
-32, -41, -49, -54, -56, -56, -52, -47, -42, -38, -35, -34, -33, -32, -29, -24,
-17, -8, 3, 12, 19, 24, 26, 29, 31, 34, 40, 47, 56, 64, 71, 75, 76, 74, 70, 66,
63, 61, 60, 60, 58, 55, 48, 38, 24, 10, -4, -17, -26, -33, -37, -40, -44, -48,
-53, -58, -62, -65, -64, -59, -49, -37, -24, -11, 0, 8, 15, 20, 25, 30, 37, 45,
54, 61, 65, 66, 64, 57, 49, 39, 29, 21, 15, 9, 4, -1, -8, -17, -27, -38, -47,
-56, -63, -68, -72, -75, -78, -82, -86, -90, -94, -96, -95, -92, -85, -77, -68,
-59, -50, -41, -33, -23, -12, 2, 17, 33, 49, 63, 75, 84, 90, 92, 94, 94, 94, 93,
91, 88, 82, 73, 61, 46, 30, 14, -1, -13, -23, -30, -36, -42, -47, -52, -57, -62,
-64, -64, -60, -52, -42, -30, -18, -8, 1, 8, 15, 21, 28, 37, 47, 57, 66, 74, 78,
81, 80, 78, 75, 72, 70, 69, 68, 65, 61, 54, 45, 33, 21, 9, -4, -15, -25, -34,
-42, -51, -60, -71, -81, -90, -97, -102, -103, -101, -97, -91, -83, -76, -68,
-59, -51, -41, -29, -16, -3, 9, 21, 30, 36, 40, 41, 41, 40, 39, 38, 36, 33, 29,
23, 15, 6, -3, -12, -20, -25, -28, -29, -29, -28, -29, -30, -32, -33, -35, -34,
-32, -27, -21, -14, -9, -5, -3, -3, -3, -3, -1, 4, 10, 18, 27, 34, 39, 42, 43,
44, 44, 46, 48, 53, 58, 63, 65, 65, 61, 55, 48, 39, 32, 26, 22, 19, 17, 14, 10,
3, -4, -12, -19, -23, -25, -24, -20, -16, -11, -7, -5, -5, -5, -6, -6, -5, -3,
0, 3, 5, 4, 2, -3, -8, -14, -19, -22, -24, -25, -25, -26, -27, -29, -32, -35,
-37, -37, -36, -33, -30, -27, -24, -23, -24, -27, -29, -32, -33, -33, -31, -29,
-27, -26, -26, -27, -28, -29, -29, -27, -22, -16, -9, -1, 5, 10, 14, 16, 17, 19,
22, 25, 28, 31, 33, 32, 30, 25, 20, 15, 10, 8, 6, 6, 8, 9, 10, 10, 10, 8, 8, 10,
13, 17, 23, 29, 35, 40, 43, 44, 45, 45, 44, 45, 46, 46, 47, 46, 44, 40, 36, 30,
25, 21, 17, 15, 14, 12, 11, 8, 4, 0, -5, -9, -13, -16, -19, -21, -24, -27, -31,
-36, -42, -46, -50, -52, -52, -51, -49, -46, -43, -41, -39, -37, -33, -29, -22,
-14, -5, 3, 11, 16, 20, 21, 20, 18, 16, 14, 11, 8, 5, 0, -8, -16, -26, -36, -45,
-53, -57, -60, -60, -58, -56, -54, -52, -51, -49, -46, -42, -36, -27, -17, -6,
5, 14, 22, 27, 32, 35, 39, 43, 49, 55, 60, 65, 69, 71, 72, 71, 69, 68, 67, 65,
64, 63, 61, 57, 51, 43, 34, 24, 14, 5, -3, -9, -14, -19, -24, -29, -34, -39,
-42, -43, -42, -38, -32, -24, -16, -8, 0, 8, 15, 22, 29, 37, 43, 50, 55, 58, 59,
57, 52, 47, 40, 32, 25, 17, 9, 0, -9, -20, -31, -42, -52, -61, -68, -74, -77,
-80, -82, -83, -84, -85, -86, -86, -85, -83, -78, -72, -66, -59, -52, -46, -41,
-36, -30, -23, -15, -6, 4, 15, 25, 34, 41, 46, 49, 51, 52, 53, 54, 56, 57, 56,
53, 48, 41, 32, 22, 13, 4, -3, -9, -13, -16, -20, -23, -26, -29, -29, -29, -26,
-21, -14, -5, 5, 14, 23, 30, 37, 42, 47, 53, 59, 65, 70, 74, 77, 77, 75, 72, 68,
64, 59, 55, 51, 47, 42, 37, 30, 23, 15, 7, 0, -7, -13, -18, -23, -28, -34, -40,
-47, -54, -60, -65, -68, -68, -67, -66, -63, -61, -59, -58, -56, -52, -47, -39,
-30, -20, -10, -1, 6, 10, 13, 14, 13, 14, 14, 15, 15, 14, 11, 6, -1, -9, -18,
-27, -34, -39, -42, -43, -44, -44, -45, -46, -48, -49, -49, -47, -43, -37, -30,
-21, -13, -6, 0, 5, 9, 14, 19, 24, 30, 37, 42, 47, 51, 53, 55, 56, 57, 59, 61,
63, 65, 66, 66, 64, 61, 56, 51, 46, 41, 37, 33, 28, 23, 18, 11, 5, -2, -8, -13,
-16, -17, -16, -14, -12, -10, -8, -6, -3, 0, 4, 9, 15, 20, 25, 29, 30, 30, 28,
26, 22, 19, 15, 12, 8, 3, -3, -10, -18, -26, -34, -40, -45, -49, -51, -53, -54,
-56, -58, -60, -62, -63, -63, -62, -59, -56, -52, -48, -44, -42, -40, -38, -36,
-33, -29, -24, -18, -12, -7, -2, 2, 5, 7, 10, 12, 16, 20, 23, 26, 27, 27, 25,
23, 19, 15, 11, 9, 7, 5, 3, 1, -1, -4, -7, -8, -8, -7, -4, 1, 7, 13, 19, 25, 30,
36, 41, 47, 52, 58, 64, 69, 72, 74, 73, 71, 67, 62, 57, 53, 49, 46, 41, 36, 30,
23, 15, 7, 0, -7, -12, -15, -18, -20, -22, -25, -28, -32, -36, -39, -40, -41,
-40, -38, -36, -34, -32, -30, -29, -27, -25, -22, -17, -12, -6, 0, 5, 8, 11, 11,
10, 9, 7, 5, 3, 0, -3, -7, -13, -20, -28, -37, -46, -54, -60, -64, -68, -70,
-71, -72, -73, -73, -71, -69, -64, -57, -48, -38, -27, -17, -7, 3, 12, 19, 27,
34, 41, 49, 56, 63, 68, 70, 71, 70, 69, 67, 64, 62, 60, 58, 55, 51, 47, 41, 34,
27, 20, 14, 10, 6, 2, -1, -5, -9, -13, -17, -21, -22, -22, -20, -17, -12, -6, 0,
6, 11, 16, 22, 28, 35, 42, 49, 56, 62, 66, 67, 67, 64, 61, 56, 50, 44, 38, 30,
22, 12, 1, -11, -24, -36, -47, -57, -65, -71, -76, -80, -84, -87, -90, -92, -93,
-93, -90, -85, -79, -71, -64, -57, -50, -44, -38, -32, -27, -20, -13, -5, 3, 11,
17, 22, 25, 28, 30, 31, 32, 33, 34, 35, 34, 33, 29, 24, 17, 10, 4, -2, -7, -11,
-15, -18, -21, -25, -29, -32, -35, -35, -34, -30, -24, -17, -8, 0, 7, 14, 20,
27, 35, 43, 53, 62, 72, 79, 85, 88, 88, 86, 83, 79, 75, 72, 69, 65, 61, 55, 47,
37, 28, 18, 10, 3, -2, -6, -9, -13, -17, -22, -28, -34, -40, -44, -47, -48, -48,
-47, -46, -45, -45, -45, -46, -45, -43, -40, -34, -27, -19, -12, -7, -2, 1, 2,
4, 5, 7, 9, 11, 12, 12, 10, 5, -1, -8, -16, -23, -29, -34, -39, -42, -46, -50,
-54, -58, -61, -62, -62, -59, -55, -49, -42, -36, -30, -25, -20, -15, -10, -4,
4, 12, 20, 27, 33, 37, 40, 41, 42, 43, 44, 46, 49, 52, 55, 56, 56, 54, 51, 47,
44, 41, 39, 38, 37, 36, 33, 29, 23, 16, 9, 4, 0, -2, -2, -1, 1, 2, 3, 3, 3, 3,
4, 7, 12, 17, 23, 28, 32, 34, 34, 33, 30, 28, 25, 24, 22, 20, 17, 12, 5, -4,
-12, -22, -30, -36, -41, -45, -47, -50, -52, -55, -58, -60, -61, -61, -59, -56,
-51, -46, -42, -38, -35, -33, -32, -30, -27, -24, -20, -15, -10, -6, -4, -4, -4,
-4, -4, -3, -1, 2, 5, 7, 8, 8, 6, 2, -1, -5, -8, -9, -9, -9, -8, -8, -8, -10,
-12, -13, -13, -11, -7, -2, 6, 13, 20, 26, 31, 35, 39, 44, 50, 56, 64, 70, 76,
79, 80, 79, 75, 70, 64, 58, 52, 47, 42, 37, 30, 23, 14, 6, -3, -10, -16, -20,
-22, -23, -24, -24, -25, -27, -28, -29, -29, -28, -26, -22, -19, -15, -12, -10,
-9, -8, -7, -6, -4, -1, 2, 5, 8, 9, 10, 9, 7, 5, 2, 0, -2, -5, -8, -12, -18,
-25, -32, -40, -47, -53, -58, -61, -64, -66, -68, -69, -71, -71, -71, -69, -65,
-59, -51, -42, -33, -24, -16, -8, 0, 7, 14, 22, 30, 38, 46, 52, 57, 59, 60, 58,
56, 54, 52, 49, 47, 46, 43, 40, 35, 30, 25, 20, 15, 12, 10, 8, 7, 6, 5, 2, 0,
-3, -5, -6, -5, -4, -2, 1, 5, 8, 10, 12, 14, 17, 20, 25, 30, 36, 41, 46, 49, 51,
52, 51, 50, 48, 46, 43, 40, 36, 30, 22, 14, 4, -6, -16, -26, -34, -41, -47, -53,
-58, -62, -67, -70, -73, -74, -74, -72, -68, -64, -59, -54, -50, -46, -42, -39,
-35, -31, -26, -20, -14, -9, -5, -2, 0, 1, 2, 3, 5, 7, 10, 13, 15, 15, 15, 13,
10, 7, 4, 2, 0, -1, -3, -5, -7, -10, -14, -18, -21, -23, -23, -21, -19, -15,
-11, -7, -2, 1, 5, 10, 16, 22, 29, 37, 44, 50, 55, 58, 60, 62, 63, 63, 63, 63,
62, 61, 58, 53, 48, 41, 35, 28, 22, 18, 14, 10, 7, 3, -1, -5, -10, -14, -17,
-18, -19, -18, -18, -17, -17, -18, -19, -21, -22, -23, -23, -21, -19, -16, -14,
-12, -10, -10, -10, -9, -9, -8, -6, -4, -2, -2, -3, -5, -8, -12, -17, -21, -24,
-27, -30, -32, -35, -38, -42, -47, -50, -53, -55, -54, -53, -49, -45, -40, -35,
-30, -25, -20, -15, -10, -4, 2, 8, 14, 19, 22, 25, 27, 27, 28, 28, 29, 29, 30,
30, 29, 27, 25, 22, 19, 17, 16, 15, 15, 15, 16, 16, 16, 15, 14, 13, 12, 13, 14,
16, 18, 19, 21, 22, 23, 23, 24, 25, 27, 29, 33, 36, 38, 40, 42, 42, 41, 39, 37,
35, 33, 30, 27, 23, 18, 12, 5, -2, -10, -17, -24, -29, -35, -39, -43, -47, -50,
-53, -55, -56, -55, -53, -49, -45, -40, -35, -31, -27, -23, -20, -16, -13, -9,
-5, -1, 2, 4, 5, 4, 3, 1, -1, -4, -6, -8, -9, -11, -14, -16, -19, -23, -26, -28,
-30, -31, -31, -31, -30, -30, -29, -29, -29, -27, -26, -23, -19, -14, -9, -3, 2,
7, 13, 18, 24, 30, 36, 43, 49, 55, 60, 63, 66, 67, 67, 66, 65, 63, 60, 57, 53,
48, 42, 35, 27, 19, 11, 4, -2, -7, -11, -15, -18, -21, -23, -24, -25, -25, -23,
-21, -17, -14, -10, -6, -3, 0, 2, 5, 8, 11, 15, 18, 21, 22, 23, 22, 20, 18, 16,
14, 12, 10, 8, 5, 2, -2, -6, -12, -18, -24, -29, -34, -38, -42, -46, -50, -54,
-58, -61, -64, -66, -66, -65, -63, -60, -55, -51, -46, -41, -36, -31, -24, -17,
-9, 0, 8, 16, 23, 29, 33, 35, 37, 39, 40, 41, 41, 41, 39, 37, 33, 29, 24, 19,
14, 10, 7, 5, 3, 1, -1, -3, -5, -8, -9, -10, -10, -9, -6, -4, -1, 1, 3, 5, 7,
10, 12, 16, 21, 26, 31, 36, 40, 44, 46, 48, 50, 51, 52, 53, 53, 52, 50, 47, 42,
37, 31, 23, 16, 9, 1, -5, -13, -20, -27, -34, -41, -47, -52, -57, -59, -61, -61,
-60, -59, -56, -54, -51, -47, -43, -38, -33, -27, -21, -16, -11, -6, -3, 0, 2,
4, 6, 7, 8, 9, 10, 9, 8, 6, 4, 2, 0, -3, -4, -6, -8, -11, -13, -16, -20, -23,
-26, -28, -29, -30, -29, -28, -27, -25, -23, -21, -19, -16, -11, -6, 0, 7, 15,
22, 29, 35, 41, 45, 49, 52, 56, 59, 61, 63, 63, 62, 60, 56, 51, 45, 39, 33, 28,
22, 17, 12, 7, 2, -3, -8, -13, -16, -18, -19, -19, -18, -16, -15, -14, -14, -13,
-12, -11, -9, -6, -3, 0, 3, 5, 7, 8, 8, 8, 7, 7, 7, 7, 7, 6, 5, 2, -1, -4, -8,
-12, -15, -18, -21, -24, -27, -31, -35, -38, -42, -46, -48, -50, -51, -51, -49,
-48, -45, -43, -40, -36, -32, -26, -20, -14, -7, -1, 5, 10, 14, 18, 21, 23, 25,
27, 28, 28, 28, 27, 24, 21, 17, 14, 11, 8, 6, 4, 3, 2, 1, 0, -1, -2, -3, -3, -2,
0, 3, 6, 9, 12, 14, 16, 18, 19, 21, 23, 26, 29, 32, 35, 37, 38, 38, 38, 37, 36,
35, 35, 34, 34, 32, 30, 26, 22, 17, 11, 5, -1, -6, -11, -15, -20, -24, -29, -33,
-38, -42, -44, -46, -46, -44, -42, -39, -36, -33, -30, -27, -24, -20, -16, -11,
-6, -1, 3, 6, 8, 8, 7, 6, 4, 3, 2, 0, -2, -4, -7, -10, -14, -18, -22, -25, -27,
-29, -29, -29, -29, -29, -30, -30, -30, -30, -29, -27, -24, -20, -15, -11, -7,
-3, 0, 4, 8, 12, 17, 22, 28, 33, 38, 43, 46, 49, 51, 52, 53, 54, 55, 54, 53, 51,
47, 43, 37, 31, 25, 19, 13, 7, 2, -3, -7, -11, -16, -20, -24, -26, -27, -27,
-25, -23, -20, -17, -13, -10, -7, -4, 0, 3, 6, 10, 14, 17, 20, 22, 22, 22, 21,
20, 18, 17, 16, 14, 12, 10, 7, 3, -2, -7, -12, -17, -22, -26, -30, -34, -38,
-42, -46, -51, -55, -58, -61, -62, -61, -60, -57, -54, -50, -47, -43, -38, -33,
-26, -19, -11, -3, 5, 13, 20, 25, 30, 34, 37, 39, 41, 43, 44, 44, 43, 40, 36,
31, 26, 20, 15, 10, 6, 2, -2, -5, -9, -12, -15, -18, -19, -20, -19, -17, -15,
-13, -10, -8, -6, -3, 0, 3, 8, 13, 18, 24, 30, 34, 38, 41, 43, 45, 47, 49, 50,
51, 52, 51, 50, 46, 42, 37, 30, 24, 18, 11, 5, -1, -9, -16, -24, -31, -38, -45,
-50, -53, -55, -56, -57, -57, -56, -55, -53, -51, -47, -43, -37, -30, -23, -17,
-10, -5, 0, 3, 6, 9, 11, 13, 15, 17, 17, 17, 15, 12, 9, 5, 2, -2, -5, -7, -9,
-11, -14, -17, -20, -23, -26, -29, -30, -30, -29, -27, -26, -24, -22, -20, -18,
-15, -12, -8, -3, 2, 9, 15, 20, 25, 30, 34, 37, 41, 44, 47, 49, 51, 52, 52, 50,
47, 43, 39, 34, 30, 25, 21, 17, 13, 8, 4, -1, -6, -10, -13, -15, -15, -15, -15,
-14, -13, -12, -11, -10, -8, -6, -4, -1, 3, 6, 8, 9, 9, 9, 8, 7, 6, 6, 6, 5, 5,
4, 2, 0, -3, -6, -9, -12, -14, -16, -18, -20, -21, -24, -27, -30, -33, -35, -36,
-37, -37, -36, -34, -33, -31, -30, -29, -27, -24, -21, -17, -13, -8, -3, 1, 5,
9, 11, 13, 15, 16, 18, 19, 20, 20, 20, 18, 16, 13, 10, 7, 4, 2, 1, 0, -1, -1,
-2, -3, -5, -5, -6, -5, -3, -1, 2, 5, 8, 10, 12, 14, 15, 17, 19, 21, 24, 27, 29,
31, 32, 32, 32, 31, 30, 29, 29, 29, 29, 28, 26, 23, 19, 15, 10, 6, 2, -2, -5,
-8, -11, -15, -19, -24, -28, -32, -35, -37, -38, -38, -38, -36, -35, -33, -31,
-29, -27, -23, -19, -15, -10, -5, -1, 3, 5, 7, 7, 8, 8, 9, 9, 10, 10, 9, 7, 4,
0, -5, -10, -14, -17, -20, -22, -23, -24, -26, -27, -29, -31, -32, -32, -32,
-30, -27, -24, -21, -18, -16, -14, -11, -8, -4, 1, 8, 15, 21, 28, 33, 36, 39,
41, 44, 46, 48, 51, 53, 54, 54, 53, 49, 44, 39, 32, 27, 21, 16, 11, 7, 1, -5,
-11, -18, -23, -28, -31, -33, -33, -32, -30, -28, -26, -24, -22, -20, -17, -13,
-8, -2, 5, 11, 15, 19, 22, 23, 24, 24, 25, 26, 27, 27, 27, 25, 22, 18, 13, 7, 1,
-4, -8, -12, -15, -19, -23, -28, -34, -39, -45, -49, -52, -53, -53, -53, -51,
-50, -48, -46, -44, -41, -37, -32, -25, -18, -10, -2, 5, 11, 16, 21, 25, 29, 33,
37, 40, 43, 44, 43, 41, 38, 33, 29, 24, 20, 16, 13, 9, 5, 1, -3, -8, -12, -16,
-18, -20, -20, -20, -19, -17, -16, -15, -13, -11, -8, -5, -1, 4, 9, 13, 17, 21,
24, 26, 27, 29, 31, 34, 36, 38, 39, 39, 38, 36, 33, 29, 25, 21, 17, 13, 9, 5, 0,
-6, -12, -19, -25, -30, -34, -37, -39, -40, -41, -42, -42, -42, -42, -41, -38,
-35, -31, -25, -20, -15, -11, -7, -5, -2, -1, 1, 3, 6, 8, 10, 11, 11, 11, 9, 6,
4, 1, -1, -2, -3, -4, -6, -7, -9, -12, -14, -15, -16, -16, -15, -14, -13, -11,
-11, -10, -10, -9, -8, -6, -4, 0, 3, 7, 11, 14, 16, 18, 20, 22, 24, 26, 29, 31,
33, 34, 35, 34, 32, 30, 27, 25, 23, 21, 18, 16, 12, 8, 4, -1, -5, -8, -10, -12,
-12, -12, -11, -11, -11, -11, -11, -11, -10, -9, -7, -4, -2, 1, 2, 3, 3, 3, 2,
1, 0, 0, 0, 1, 0, 0, -2, -4, -7, -9, -12, -13, -14, -15, -15, -16, -17, -18,
-20, -21, -23, -25, -25, -25, -25, -24, -23, -22, -22, -21, -20, -19, -18, -15,
-12, -8, -4, 0, 3, 6, 8, 10, 12, 14, 16, 18, 20, 22, 23, 23, 21, 19, 16, 14, 11,
9, 7, 6, 4, 2, 0, -2, -5, -7, -8, -9, -8, -7, -4, -2, 0, 2, 4, 5, 6, 7, 10, 12,
16, 19, 22, 25, 26, 27, 27, 26, 25, 25, 25, 25, 25, 24, 23, 21, 18, 15, 11, 8,
4, 1, -2, -5, -8, -11, -15, -19, -24, -28, -31, -34, -36, -37, -37, -37, -36,
-35, -34, -33, -31, -29, -26, -22, -17, -12, -7, -2, 2, 5, 8, 10, 11, 13, 14,
16, 16, 16, 15, 13, 10, 6, 3, -1, -5, -8, -10, -12, -14, -16, -19, -21, -24,
-26, -27, -27, -27, -25, -23, -20, -18, -15, -12, -10, -7, -3, 1, 5, 10, 16, 21,
26, 29, 33, 35, 38, 40, 43, 45, 47, 49, 49, 49, 47, 44, 40, 35, 31, 26, 22, 18,
13, 8, 2, -4, -10, -16, -21, -25, -28, -30, -31, -31, -31, -30, -30, -29, -27,
-24, -21, -17, -12, -7, -2, 3, 7, 10, 12, 13, 14, 15, 17, 18, 19, 19, 18, 17,
14, 10, 6, 2, -2, -6, -9, -12, -16, -19, -22, -26, -30, -34, -37, -39, -40, -40,
-40, -39, -39, -38, -37, -36, -34, -32, -28, -24, -19, -13, -7, -2, 3, 8, 12,
16, 20, 24, 27, 31, 34, 36, 37, 37, 36, 34, 31, 29, 26, 23, 20, 18, 14, 11, 7,
4, 0, -4, -6, -8, -9, -10, -9, -8, -7, -6, -5, -4, -3, -1, 1, 3, 6, 9, 12, 15,
17, 19, 20, 20, 21, 21, 22, 23, 23, 23, 23, 22, 20, 18, 16, 13, 11, 9, 7, 4, 2,
-1, -5, -9, -13, -17, -21, -24, -27, -29, -31, -32, -33, -34, -35, -36, -36,
-35, -34, -32, -29, -26, -23, -20, -17, -14, -12, -10, -7, -5, -3, -1, 1, 3, 3,
3, 3, 2, 0, -1, -2, -2, -3, -3, -4, -5, -5, -6, -7, -8, -8, -8, -7, -7, -6, -4,
-3, -2, -1, 0, 1, 2, 4, 6, 8, 9, 11, 13, 14, 15, 17, 19, 20, 22, 24, 26, 27, 28,
28, 28, 28, 27, 26, 25, 24, 22, 20, 18, 15, 12, 9, 5, 2, -1, -3, -5, -7, -9,
-10, -11, -12, -13, -13, -12, -12, -10, -9, -7, -5, -3, -2, -1, 0, 0, 0, 0, 0,
0, -1, -2, -3, -4, -6, -8, -11, -13, -15, -16, -18, -19, -20, -22, -23, -25,
-26, -27, -27, -27, -27, -27, -26, -25, -24, -23, -22, -20, -19, -17, -15, -12,
-10, -7, -3, -1, 2, 5, 8, 11, 13, 16, 18, 20, 22, 23, 23, 23, 22, 21, 19, 17,
15, 13, 10, 8, 5, 2, -1, -3, -5, -7, -8, -8, -8, -7, -6, -5, -3, -1, 1, 3, 6, 9,
13, 16, 20, 23, 25, 27, 29, 30, 30, 31, 31, 31, 30, 30, 28, 26, 24, 20, 17, 13,
10, 6, 3, -1, -4, -8, -12, -16, -20, -23, -27, -30, -32, -34, -35, -36, -37,
-37, -38, -37, -36, -34, -32, -29, -25, -22, -18, -14, -10, -7, -4, 0, 3, 6, 9,
11, 13, 14, 14, 14, 12, 11, 8, 5, 2, -1, -3, -7, -10, -13, -16, -19, -21, -24,
-25, -26, -26, -26, -24, -23, -21, -18, -16, -13, -10, -6, -2, 2, 6, 10, 14, 18,
22, 25, 28, 31, 33, 35, 37, 39, 39, 40, 40, 39, 38, 37, 35, 34, 31, 29, 27, 23,
19, 15, 11, 6, 2, -2, -6, -10, -13, -15, -18, -20, -21, -22, -23, -23, -22, -21,
-19, -16, -14, -11, -8, -5, -3, 0, 2, 4, 6, 8, 9, 10, 10, 10, 8, 7, 5, 2, 0, -2,
-4, -7, -9, -11, -14, -16, -19, -22, -24, -26, -28, -29, -29, -29, -30, -30,
-29, -29, -28, -27, -26, -24, -22, -19, -17, -14, -11, -8, -6, -3, 0, 3, 6, 9,
13, 16, 19, 21, 23, 24, 24, 25, 25, 24, 24, 24, 23, 22, 20, 17, 14, 12, 9, 6, 5,
3, 2, 2, 1, 0, 0, 0, -1, 0, 1, 2, 4, 6, 8, 10, 11, 13, 13, 14, 15, 15, 16, 17,
17, 17, 17, 17, 16, 14, 13, 11, 9, 8, 6, 5, 3, 2, 0, -2, -5, -7, -9, -11, -13,
-15, -16, -18, -19, -21, -23, -25, -26, -28, -28, -28, -27, -26, -25, -24, -23,
-22, -20, -19, -17, -15, -12, -10, -7, -5, -4, -2, -2, -2, -2, -2, -2, -2, -2,
-3, -4, -5, -6, -7, -8, -9, -10, -10, -10, -9, -8, -7, -6, -5, -4, -2, 0, 1, 3,
6, 8, 10, 12, 14, 16, 17, 18, 20, 21, 22, 23, 24, 25, 26, 26, 25, 25, 24, 23,
22, 21, 20, 19, 18, 17, 14, 12, 10, 7, 4, 2, 0, -2, -4, -5, -7, -9, -10, -11,
-11, -11, -10, -9, -8, -6, -4, -2, -1, 0, 1, 2, 3, 3, 4, 5, 5, 5, 4, 2, 0, -3,
-6, -8, -11, -13, -15, -18, -20, -23, -25, -28, -30, -32, -33, -33, -33, -32,
-31, -30, -29, -27, -26, -24, -23, -20, -17, -14, -10, -7, -4, -1, 2, 4, 6, 9,
11, 13, 16, 18, 20, 21, 22, 22, 21, 20, 19, 18, 16, 15, 14, 12, 10, 8, 5, 1, -2,
-4, -6, -7, -8, -8, -7, -7, -6, -5, -4, -2, 0, 3, 6, 10, 14, 17, 21, 24, 26, 28,
29, 30, 31, 32, 32, 32, 31, 30, 27, 24, 21, 17, 13, 9, 6, 2, -1, -4, -7, -11,
-14, -18, -21, -24, -26, -28, -29, -29, -30, -30, -31, -31, -31, -31, -30, -28,
-26, -24, -21, -18, -15, -13, -11, -9, -7, -4, -2, 1, 3, 5, 6, 7, 7, 6, 5, 3, 2,
1, -1, -2, -4, -6, -8, -10, -13, -15, -18, -19, -20, -20, -20, -19, -18, -17,
-16, -14, -13, -10, -7, -4, 0, 4, 8, 11, 14, 17, 19, 21, 23, 24, 26, 28, 30, 32,
33, 33, 32, 32, 31, 30, 28, 27, 26, 24, 23, 21, 19, 16, 13, 10, 7, 4, 1, -1, -3,
-4, -6, -8, -10, -12, -14, -15, -16, -16, -15, -14, -13, -11, -10, -8, -7, -6,
-4, -3, -1, 1, 2, 4, 4, 4, 4, 2, 1, 0, -2, -3, -5, -6, -8, -10, -12, -14, -16,
-18, -20, -21, -22, -23, -23, -23, -23, -24, -24, -24, -23, -23, -22, -20, -19,
-17, -14, -12, -11, -9, -7, -5, -3, -1, 1, 4, 6, 9, 11, 12, 14, 15, 16, 17, 18,
18, 19, 19, 19, 19, 18, 16, 15, 13, 11, 9, 8, 7, 6, 5, 4, 3, 3, 2, 2, 2, 3, 4,
5, 7, 9, 10, 11, 13, 14, 15, 15, 16, 17, 17, 18, 17, 17, 16, 14, 13, 11, 10, 8,
6, 5, 3, 1, -1, -3, -5, -7, -8, -10, -11, -12, -13, -14, -15, -16, -17, -18,
-19, -19, -19, -19, -18, -18, -17, -16, -16, -15, -15, -14, -13, -11, -10, -8,
-7, -5, -4, -4, -4, -4, -5, -5, -6, -6, -7, -7, -8, -9, -10, -12, -13, -14, -15,
-16, -15, -14, -13, -12, -10, -9, -7, -5, -4, -1, 1, 4, 7, 10, 13, 16, 18, 20,
21, 22, 22, 23, 23, 24, 24, 24, 23, 22, 21, 19, 18, 16, 14, 12, 11, 10, 9, 7, 6,
4, 3, 1, -1, -2, -3, -4, -5, -5, -5, -5, -5, -4, -4, -4, -3, -2, -1, 0, 2, 3, 4,
5, 6, 7, 8, 8, 8, 8, 7, 6, 5, 3, 1, -1, -4, -7, -10, -13, -16, -18, -20, -23,
-24, -26, -28, -29, -30, -31, -31, -30, -29, -27, -25, -23, -21, -19, -17, -14,
-12, -9, -6, -3, 0, 2, 5, 7, 8, 10, 11, 12, 13, 13, 14, 15, 15, 15, 14, 13, 12,
10, 9, 8, 7, 6, 4, 3, 2, 0, -1, -3, -4, -5, -6, -6, -6, -5, -5, -4, -3, -2, 0,
2, 4, 7, 9, 12, 14, 17, 19, 21, 22, 23, 24, 25, 25, 25, 25, 24, 22, 21, 18, 16,
13, 10, 7, 4, 2, -1, -4, -7, -9, -12, -15, -17, -18, -20, -20, -21, -21, -22,
-22, -22, -22, -22, -21, -20, -19, -17, -16, -14, -13, -11, -10, -9, -8, -6, -4,
-2, -1, 1, 2, 3, 4, 4, 3, 3, 2, 1, 1, 0, -1, -2, -4, -6, -8, -10, -12, -13, -14,
-15, -15, -15, -15, -14, -14, -13, -12, -10, -9, -7, -4, -2, 1, 4, 6, 9, 11, 13,
14, 16, 18, 20, 21, 22, 23, 24, 24, 23, 22, 22, 21, 20, 19, 18, 16, 15, 13, 12,
10, 8, 6, 4, 2, 1, -1, -2, -4, -5, -7, -8, -9, -10, -10, -10, -10, -9, -8, -8,
-7, -6, -5, -4, -3, -2, 0, 1, 2, 3, 4, 4, 3, 3, 2, 1, 0, -1, -2, -4, -5, -7, -9,
-12, -14, -15, -17, -18, -19, -19, -20, -20, -20, -20, -20, -19, -18, -17, -15,
-14, -12, -10, -8, -6, -5, -3, -2, -1, 1, 2, 4, 6, 7, 8, 9, 10, 10, 10, 10, 10,
11, 11, 11, 10, 10, 9, 8, 6, 5, 4, 3, 3, 2, 2, 1, 1, 0, 0, -1, 0, 0, 1, 2, 3, 5,
6, 8, 9, 10, 11, 12, 13, 15, 16, 16, 17, 17, 16, 16, 14, 13, 11, 9, 7, 6, 4, 2,
0, -3, -5, -7, -9, -11, -13, -14, -14, -15, -15, -16, -16, -16, -16, -16, -15,
-14, -13, -12, -11, -9, -8, -8, -7, -6, -5, -4, -4, -3, -2, -1, 0, 0, 0, -1, -1,
-2, -3, -3, -4, -5, -6, -7, -8, -9, -11, -12, -13, -14, -15, -15, -15, -14, -13,
-13, -12, -11, -9, -7, -5, -3, 0, 3, 6, 8, 11, 13, 15, 17, 19, 20, 22, 23, 23,
24, 23, 23, 22, 20, 19, 17, 16, 14, 12, 11, 9, 7, 5, 3, 1, -1, -2, -3, -4, -5,
-5, -5, -6, -6, -6, -6, -6, -6, -5, -4, -3, -2, -1, 1, 2, 3, 3, 4, 5, 6, 6, 7,
7, 7, 7, 6, 5, 4, 2, 0, -1, -3, -5, -7, -9, -11, -13, -16, -18, -20, -22, -23,
-24, -25, -25, -25, -24, -24, -23, -22, -21, -19, -17, -15, -12, -9, -7, -4, -2,
0, 2, 4, 6, 8, 9, 11, 12, 13, 14, 14, 14, 13, 13, 12, 12, 11, 10, 9, 8, 7, 6, 4,
2, 1, -1, -2, -3, -4, -4, -5, -5, -5, -5, -5, -5, -4, -3, -2, 0, 2, 4, 5, 7, 9,
10, 12, 13, 15, 17, 18, 19, 20, 20, 20, 19, 18, 17, 15, 14, 12, 10, 8, 5, 3, 0,
-3, -6, -9, -11, -13, -15, -16, -18, -19, -20, -20, -21, -21, -21, -21, -20,
-19, -18, -16, -15, -13, -12, -11, -9, -8, -6, -4, -3, -1, 0, 2, 3, 3, 3, 4, 4,
4, 4, 3, 3, 2, 1, 0, -2, -4, -5, -7, -8, -9, -10, -11, -12, -12, -13, -13, -13,
-13, -13, -11, -10, -8, -6, -4, -1, 1, 3, 5, 7, 9, 12, 14, 16, 18, 19, 21, 21,
21, 21, 21, 20, 19, 19, 18, 17, 16, 15, 13, 11, 9, 7, 5, 3, 1, 0, -1, -2, -3,
-4, -5, -6, -7, -8, -8, -8, -8, -7, -7, -6, -5, -5, -4, -3, -3, -2, 0, 1, 2, 2,
3, 3, 3, 3, 2, 2, 1, 0, -1, -2, -3, -5, -6, -8, -10, -12, -13, -14, -15, -16,
-17, -17, -18, -18, -18, -17, -17, -16, -15, -13, -12, -10, -8, -7, -5, -3, -2,
0, 1, 2, 4, 5, 6, 7, 8, 8, 8, 8, 8, 8, 7, 7, 7, 7, 6, 5, 5, 4, 3, 2, 2, 1, 1, 1,
1, 0, 0, 0, 0, 0, 0, 1, 2, 3, 4, 5, 6, 7, 8, 8, 9, 10, 11, 12, 12, 13, 13, 13,
13, 12, 11, 10, 9, 8, 6, 5, 3, 2, 0, -2, -4, -6, -7, -9, -10, -11, -12, -12,
-13, -13, -13, -13, -13, -12, -12, -11, -10, -9, -8, -7, -6, -5, -4, -3, -3, -2,
-1, -1, 0, 0, 0, 0, 0, -1, -1, -1, -2, -2, -3, -3, -4, -5, -6, -7, -8, -9, -9,
-10, -10, -10, -10, -10, -10, -10, -10, -9, -8, -7, -6, -4, -2, -1, 1, 3, 5, 6,
8, 10, 11, 13, 14, 15, 16, 17, 17, 17, 17, 16, 16, 15, 14, 13, 11, 10, 9, 7, 5,
4, 2, 0, -1, -2, -3, -3, -4, -5, -5, -6, -6, -6, -6, -6, -5, -5, -4, -3, -2, -2,
-1, -1, 0, 1, 1, 2, 3, 4, 4, 5, 5, 5, 4, 4, 3, 3, 2, 1, 0, -1, -2, -4, -6, -8,
-9, -11, -13, -14, -15, -16, -17, -17, -18, -18, -19, -18, -18, -17, -15, -14,
-12, -10, -9, -7, -5, -4, -2, 0, 2, 4, 6, 7, 8, 9, 10, 10, 10, 11, 11, 11, 11,
11, 10, 9, 9, 7, 6, 5, 3, 2, 1, 0, 0, -1, -2, -3, -4, -4, -5, -5, -5, -5, -4,
-4, -3, -2, -1, 0, 1, 2, 3, 4, 6, 7, 9, 10, 11, 12, 12, 12, 12, 12, 12, 11, 11,
10, 9, 7, 6, 4, 2, 0, -2, -4, -6, -7, -9, -10, -11, -13, -14, -15, -15, -16,
-16, -15, -15, -14, -13, -12, -12, -11, -10, -9, -8, -7, -5, -4, -3, -2, -1, -1,
0, 0, 0, 1, 1, 2, 2, 2, 2, 2, 1, 0, -1, -2, -2, -3, -4, -4, -5, -5, -6, -7, -7,
-8, -8, -8, -8, -7, -6, -5, -3, -2, -1, 0, 1, 2, 4, 6, 7, 9, 10, 11, 12, 12, 12,
12, 12, 12, 12, 12, 11, 11, 10, 9, 8, 7, 5, 4, 3, 2, 2, 1, 0, 0, -1, -2, -2, -3,
-3, -4, -4, -4, -3, -3, -3, -3, -3, -3, -3, -3, -3, -2, -2, -2, -1, -1, -1, -2,
-2, -2, -2, -2, -3, -3, -3, -4, -4, -5, -6, -7, -8, -8, -9, -9, -10, -10, -10,
-11, -11, -11, -11, -11, -10, -10, -9, -8, -7, -6, -5, -4, -3, -2, -1, 0, 1, 2,
3, 4, 4, 4, 4, 4, 4, 4, 3, 3, 3, 3, 3, 3, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2,
2, 2, 2, 2, 3, 3, 4, 5, 5, 5, 5, 6, 6, 6, 6, 7, 7, 7, 8, 8, 8, 7, 6, 6, 5, 4, 4,
3, 2, 1, 0, -1, -3, -4, -5, -6, -7, -8, -8, -9, -9, -10, -10, -10, -10, -10,
-10, -9, -9, -8, -7, -6, -5, -5, -4, -4, -3, -3, -2, -2, -1, -1, -1, -1, -1, -1,
-2, -2, -3, -3, -3, -3, -4, -4, -4, -5, -5, -6, -7, -7, -7, -7, -7, -7, -7, -7,
-7, -7, -7, -6, -6, -5, -4, -3, -2, 0, 1, 2, 3, 4, 5, 6, 8, 9, 10, 11, 12, 13,
13, 13, 13, 12, 12, 11, 11, 10, 9, 8, 7, 5, 4, 2, 1, 0, -1, -2, -3, -3, -4, -5,
-5, -6, -6, -6, -6, -5, -5, -4, -3, -3, -2, -2, -2, -1, -1, 0, 1, 1, 2, 2, 3, 3,
3, 3, 2, 2, 2, 1, 1, 1, 0, -1, -2, -4, -5, -7, -8, -9, -10, -11, -11, -12, -13,
-13, -14, -14, -15, -14, -14, -13, -12, -11, -9, -8, -7, -5, -4, -3, -1, 0, 2,
4, 5, 6, 7, 8, 8, 8, 8, 8, 8, 8, 8, 7, 7, 6, 5, 4, 3, 2, 1, 1, 0, 0, -1, -1, -2,
-2, -3, -3, -4, -4, -3, -3, -2, -2, -1, 0, 0, 1, 1, 2, 3, 4, 5, 6, 7, 8, 8, 8,
8, 8, 8, 8, 8, 7, 7, 6, 5, 4, 2, 1, -1, -2, -4, -5, -6, -7, -8, -9, -10, -10,
-11, -12, -12, -12, -11, -11, -10, -10, -9, -8, -8, -7, -6, -6, -5, -4, -3, -2,
-1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -2, -2, -3, -3, -3, -4, -4, -4,
-4, -4, -5, -5, -5, -5, -5, -5, -4, -3, -3, -2, -1, -1, 0, 1, 2, 2, 3, 4, 5, 6,
7, 8, 8, 8, 8, 8, 8, 8, 8, 8, 7, 7, 6, 5, 4, 3, 2, 2, 1, 1, 0, 0, -1, -1, -2,
-2, -2, -3, -3, -3, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -1, -1, -1, -1, -1,
-1, -1, -2, -2, -2, -3, -3, -3, -3, -3, -3, -4, -4, -5, -5, -6, -7, -7, -7, -7,
-7, -8, -8, -8, -8, -8, -8, -8, -8, -7, -6, -5, -5, -4, -3, -2, -2, -1, 0, 1, 1,
2, 3, 3, 4, 4, 4, 4, 4, 4, 3, 3, 3, 3, 3, 2, 2, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 1, 1, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 5, 5, 5, 6, 5, 5, 5, 4, 4, 4, 3,
3, 2, 2, 1, 0, -1, -2, -3, -4, -5, -6, -6, -7, -8, -8, -9, -9, -9, -9, -9, -9,
-8, -8, -7, -6, -6, -5, -4, -4, -3, -2, -2, -1, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0,
0, -1, -1, -2, -2, -3, -4, -4, -5, -5, -5, -6, -6, -6, -6, -6, -6, -6, -6, -5,
-5, -4, -3, -2, -1, 0, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 9, 10, 10, 10, 9, 9, 9, 8,
8, 7, 6, 5, 4, 3, 2, 1, 0, -1, -2, -3, -3, -4, -5, -5, -6, -6, -6, -6, -6, -5,
-5, -4, -3, -3, -2, -2, -1, -1, 0, 0, 1, 1, 2, 2, 2, 2, 2, 2, 1, 1, 1, 0, 0, -1,
-1, -2, -3, -4, -5, -6, -7, -7, -8, -8, -9, -9, -9, -10, -10, -10, -10, -9, -9,
-8, -7, -6, -5, -5, -4, -3, -2, -1, 0, 1, 3, 4, 5, 5, 6, 6, 6, 6, 6, 6, 6, 6, 6,
5, 5, 4, 3, 3, 2, 1, 1, 0, 0, -1, -1, -1, -1, -2, -2, -2, -2, -2, -2, -1, -1, 0,
0, 1, 1, 1, 1, 2, 2, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 3, 3, 3, 3, 2, 2, 1, 0, -1,
-2, -3, -3, -4, -4, -5, -5, -6, -6, -7, -7, -8, -8, -8, -7, -7, -7, -6, -6, -5,
-5, -5, -4, -4, -3, -3, -2, -2, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, -1,
-1, -1, -1, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -1, -1, -1, 0,
0, 0, 1, 1, 1, 2, 2, 3, 3, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 4, 4, 4, 3, 3, 2, 2,
1, 1, 1, 0, 0, 0, -1, -1, -1, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -1, -1, -1, -1, -2, -2, -2, -2, -3, -3, -3, -3, -3, -3, -4, -4,
-4, -5, -5, -5, -5, -5, -5, -5, -5, -5, -6, -6, -6, -5, -5, -5, -4, -4, -3, -3,
-2, -2, -1, -1, 0, 0, 1, 1, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 1, 1,
0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 0, 0, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3,
4, 4, 4, 4, 4, 4, 3, 3, 3, 2, 2, 1, 1, 1, 0, -1, -1, -2, -3, -4, -4, -5, -5, -6,
-6, -6, -7, -7, -7, -7, -7, -7, -7, -6, -6, -5, -5, -4, -4, -3, -3, -2, -1, -1,
0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, -1, -1, -2, -2, -3, -3, -4, -4, -4, -4,
-4, -4, -4, -4, -4, -4, -4, -4, -3, -2, -2, -1, 0, 0, 1, 1, 2, 2, 3, 4, 4, 5, 6,
6, 6, 6, 7, 6, 6, 6, 6, 6, 6, 5, 5, 4, 3, 3, 2, 1, 0, 0, -1, -1, -2, -2, -3, -3,
-4, -4, -4, -4, -4, -4, -3, -3, -3, -2, -2, -2, -1, -1, -1, 0, 0, 0, 1, 1, 1, 1,
1, 1, 0, 0, 0, 0, -1, -1, -1, -2, -2, -3, -3, -4, -4, -5, -5, -5, -5, -6, -6,
-6, -6, -6, -6, -6, -6, -5, -5, -5, -4, -4, -3, -3, -2, -1, -1, 0, 1, 1, 2, 2,
3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 3, 3, 3, 2, 2, 2, 1, 1, 1, 1, 0, 0, 0, 0, 0, -1,
-1, -1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1,
1, 1, 1, 0, 0, 0, -1, -1, -2, -2, -2, -3, -3, -4, -4, -4, -4, -4, -5, -5, -5,
-5, -4, -4, -4, -4, -4, -4, -3, -3, -3, -3, -2, -2, -2, -2, -2, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -2, -2, -2, -2, -1, -1, -1, -1,
-1, -1, -1, -1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3,
3, 3, 3, 2, 2, 2, 2, 1, 1, 1, 1, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -2, -2,
-2, -2, -3, -3, -3, -3, -4, -4, -4, -4, -4, -4, -4, -4, -5, -4, -4, -4, -4, -4,
-4, -3, -3, -3, -2, -2, -2, -1, -1, 0, 0, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
2, 2, 1, 1, 1, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0,
1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 1, 1, 0, 0, -1, -1,
-2, -2, -3, -3, -3, -4, -4, -4, -5, -5, -5, -5, -5, -5, -5, -4, -4, -4, -4, -3,
-3, -2, -2, -2, -1, -1, -1, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, -1, -1, -1,
-1, -2, -2, -2, -2, -3, -3, -3, -3, -3, -3, -3, -3, -2, -2, -2, -2, -1, -1, -1,
0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4, 3, 3, 3, 3, 3, 2, 2, 2, 1, 1,
1, 0, 0, -1, -1, -1, -1, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -1, -1,
-1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -2, -2, -2,
-2, -2, -3, -3, -3, -3, -3, -3, -3, -3, -4, -3, -3, -3, -3, -3, -3, -3, -3, -2,
-2, -2, -1, -1, -1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1,
1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1,
1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -2, -2, -2, -2,
-2, -2, -3, -3, -3, -3, -3, -3, -3, -3, -3, -2, -2, -2, -2, -2, -2, -2, -2, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 2, 2,
2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1,
-1, -1, -1, -2, -2, -2, -2, -2, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3,
-3, -3, -2, -2, -2, -2, -2, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1,
1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0,
0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0,
-1, -1, -1, -1, -1, -1, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0,
-1, 0, -1, 0, -1, 0, 0, 0, 0, 0, };

#endif /* MARIMBAEIGHT_H_ */
