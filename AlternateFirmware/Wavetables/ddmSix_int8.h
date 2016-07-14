#ifndef DDMSIX_H_
#define DDMSIX_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define DDMSIX_NUM_CELLS 6168
#define DDMSIX_SAMPLERATE 16384
 
const int8_t __attribute__((section(".progmem.data"))) DDMSIX_DATA [] = {-1, 5,
5, 41, 9, -52, 24, -27, -26, -29, -44, 39, 38, -18, -6, 11, 26, 24, -21, 33, 25,
29, -2, -9, -24, -85, -10, -14, -63, -63, -15, 62, 4, -52, 55, 93, 83, -2, -18,
74, 64, -1, -97, -12, 15, -89, -107, -71, -20, -35, -66, -21, 68, 67, 57, 76,
54, 53, 21, 30, 63, -29, -27, -12, -35, -90, -118, -64, -33, -27, -87, -2, 64,
40, 34, 48, 96, 85, 28, 27, 46, 2, -42, -55, -65, -87, -66, -83, -26, -50, -91,
16, 55, 44, 29, 62, 90, 73, -27, 3, 78, 32, -59, -96, -18, -12, -84, -115, -35,
6, -27, -33, 16, 66, 58, 15, 51, 77, 44, 31, 10, -12, -40, -52, -53, -20, -95,
-71, 18, -3, -33, -51, 31, 75, 37, 0, 50, 87, 7, -58, -14, 26, 0, -82, -79, -11,
-36, -62, -38, 28, 7, 1, 15, 64, 59, -5, 31, 34, 12, -48, -26, 30, -21, -105,
-86, 0, 12, -46, -34, 45, 72, 6, -33, 59, 76, 22, -13, 8, 19, -15, -72, -55,
-12, -73, -53, -7, -2, -10, 3, 42, 70, 12, -3, 67, 80, -5, -54, -5, 14, -30,
-111, -46, 27, -34, -98, -51, 32, 60, -1, -1, 75, 63, 37, 12, 35, 27, -20, -44,
-5, -31, -97, -52, -31, -52, -69, -17, 58, 70, -20, 5, 89, 63, 6, -7, 44, 64,
-15, -111, -32, -7, -77, -100, -52, 13, 2, -39, -8, 59, 38, 39, 66, 68, 37, 10,
20, 29, -50, -81, -27, -10, -66, -97, -35, 14, -5, -67, 20, 96, 62, 13, 16, 62,
66, -18, -37, 38, -4, -64, -78, -40, -41, -58, -52, 10, 36, -11, 17, 68, 50, 5,
34, 63, 68, -21, -59, 12, 1, -78, -94, -29, 13, -25, -71, 2, 54, 23, -5, 41, 79,
62, 16, 4, 25, -19, -45, -18, -15, -56, -62, -38, 7, -29, -52, 34, 81, 28, 0,
47, 79, 56, -53, -23, 59, 14, -75, -76, -26, -14, -57, -79, 12, 44, 10, 5, 49,
54, 46, 25, 36, 48, -8, -8, 1, -38, -86, -64, -23, -1, -60, -51, 42, 43, 6, 5,
59, 92, 48, -15, 36, 58, -8, -65, -51, -21, -31, -70, -64, -5, -25, -32, 23, 49,
39, 47, 53, 80, 37, -12, 23, 35, -20, -73, -44, -11, -37, -105, -66, 14, 24,
-14, 2, 64, 76, 36, 13, 62, 60, 15, -8, -2, -19, -45, -74, -52, -38, -69, -24,
22, 13, -13, 15, 60, 85, 37, 16, 72, 62, -16, -52, -17, -2, -37, -94, -59, 0,
-22, -55, -13, 23, 46, 44, 41, 72, 46, 24, 31, 24, -16, -19, -16, -16, -60, -92,
-37, -1, -29, -44, 22, 67, 63, -2, 10, 82, 66, 7, 5, 24, 14, -30, -90, -41, -16,
-52, -44, -12, -4, 16, 16, 24, 51, 30, 47, 74, 43, -12, -7, 2, -9, -50, -69,
-13, -4, -63, -60, 0, 34, 28, -3, 41, 85, 55, 14, 22, 25, 21, -12, -29, -3, -47,
-66, -45, -29, -34, -14, 13, 43, 32, 9, 50, 78, 38, -3, 29, 40, 24, -45, -68,
-20, -26, -68, -51, -9, 7, -1, -15, 30, 53, 48, 46, 54, 44, 23, 18, 11, -19,
-54, -42, -15, -30, -71, -46, -1, 16, -13, -3, 62, 86, 35, 16, 46, 58, 31, -35,
-19, 10, -18, -63, -55, -44, -33, -23, -14, 21, 26, 30, 44, 56, 29, 39, 55, 38,
2, -30, -11, 4, -50, -94, -41, -8, -5, -35, -19, 45, 43, 13, 28, 68, 72, 42, 0,
14, 16, -24, -37, -33, -45, -41, -30, -27, -12, -23, -3, 53, 48, 24, 55, 59, 50,
13, -17, 25, 28, -42, -60, -32, -30, -35, -63, -31, 21, 24, 13, 41, 46, 39, 40,
34, 45, 24, 3, 2, -12, -62, -56, -34, -21, -31, -51, 1, 43, 16, -6, 34, 63, 73,
30, 15, 47, 23, -31, -42, -24, -22, -31, -56, -43, -18, -16, -3, 29, 23, 36, 63,
59, 40, 14, 11, 34, 10, -45, -31, -13, -30, -75, -73, -13, 25, -2, -15, 34, 62,
50, 21, 31, 53, 46, 3, 0, -7, -33, -43, -58, -45, -34, -26, -4, 9, -14, 14, 54,
56, 45, 26, 47, 61, 16, -40, -15, -4, -32, -57, -55, -19, -11, -46, -31, 28, 35,
40, 39, 45, 55, 39, 22, 30, 1, -21, -14, -22, -37, -64, -58, -19, -11, -31, 6,
43, 50, 26, 17, 53, 72, 29, -3, 16, 7, -13, -48, -58, -35, -36, -50, -13, -2,
-2, 22, 24, 38, 40, 43, 61, 53, 2, -8, 9, 2, -38, -71, -42, -9, -30, -60, -23,
18, 27, 9, 21, 65, 74, 31, 16, 23, 21, 9, -23, -28, -30, -45, -45, -32, -45,
-27, 8, 26, 29, 21, 39, 62, 47, 4, 21, 48, 26, -28, -52, -31, -15, -51, -73,
-22, 5, 3, -7, 10, 41, 46, 30, 42, 53, 37, 22, -1, -14, -33, -35, -26, -24, -49,
-49, -11, 3, -5, -3, 29, 66, 55, 17, 40, 48, 20, -9, -21, -1, 5, -49, -62, -36,
-39, -25, -10, 4, 22, 29, 27, 51, 39, 18, 38, 41, 15, -9, -20, -15, -22, -76,
-61, -9, -1, -17, -23, 6, 46, 32, 13, 46, 56, 48, 20, -1, 4, -5, -36, -33, -33,
-42, -26, -23, -28, -20, -1, 32, 55, 26, 23, 56, 53, 16, -6, -3, 23, -5, -63,
-46, -21, -30, -53, -44, 2, 37, 18, 11, 33, 47, 43, 31, 31, 22, 14, -5, -15,
-37, -51, -39, -29, -35, -37, -10, 21, 23, -5, 19, 58, 64, 37, 13, 27, 31, -6,
-45, -27, -19, -34, -54, -45, -20, -7, -13, -1, 29, 33, 43, 53, 41, 23, 18, 14,
16, -15, -42, -26, -23, -50, -60, -39, -3, 5, -12, 13, 49, 52, 29, 23, 35, 47,
22, -4, -5, -19, -38, -43, -47, -45, -29, -24, 5, 6, -3, 30, 49, 38, 30, 35, 50,
46, -17, -35, -8, -11, -42, -58, -45, -12, -16, -42, -10, 27, 34, 34, 35, 44,
56, 29, 11, 6, -12, -6, -9, -38, -53, -53, -38, -14, -29, -17, 30, 45, 29, 19,
32, 59, 46, 0, 4, 25, 5, -37, -61, -52, -25, -34, -41, -9, 5, 7, 14, 22, 35, 51,
43, 44, 28, 3, 2, -3, -29, -52, -42, -23, -19, -46, -41, -5, 20, 14, 19, 44, 59,
48, 15, 18, 27, 9, -14, -24, -29, -29, -46, -49, -35, -32, -10, 20, 28, 21, 28,
39, 49, 34, 13, 26, 33, -8, -40, -38, -31, -28, -56, -54, -8, 9, -3, 3, 15, 40,
48, 36, 41, 39, 21, 8, -8, -29, -27, -30, -31, -43, -52, -26, 5, -3, -10, 16,
47, 62, 32, 16, 40, 39, 1, -16, -18, -4, -18, -65, -55, -26, -22, -20, -12, 3,
34, 36, 32, 36, 29, 31, 35, 18, -7, -11, -17, -26, -50, -61, -31, -8, -22, -24,
1, 32, 40, 12, 23, 50, 50, 28, 6, 0, 2, -25, -45, -33, -32, -33, -32, -29, -17,
2, 12, 30, 34, 27, 40, 51, 30, 1, -6, -2, 1, -28, -48, -33, -27, -45, -42, -17,
13, 25, 12, 22, 39, 42, 30, 23, 16, 13, 6, -7, -25, -46, -51, -36, -26, -34,
-18, 4, 19, 12, 1, 30, 60, 42, 18, 15, 22, 18, -26, -49, -29, -21, -36, -39,
-35, -18, -4, -9, 5, 33, 39, 44, 40, 16, 18, 21, 6, -9, -30, -32, -11, -34, -63,
-47, -20, 4, 0, -3, 30, 50, 26, 16, 26, 41, 36, -1, -18, -9, -21, -42, -46, -48,
-28, -15, -14, 0, 6, 9, 31, 36, 27, 41, 39, 30, 6, -25, -18, -4, -31, -51, -43,
-28, -16, -28, -24, 8, 29, 25, 31, 41, 42, 34, 12, 5, 4, -6, -16, -25, -45, -48,
-40, -25, -16, -20, -2, 29, 35, 23, 23, 37, 45, 24, 3, 7, 10, -18, -46, -49,
-36, -27, -33, -34, -12, 7, 12, 23, 23, 30, 41, 42, 31, 16, 1, -2, -12, -41,
-46, -30, -22, -37, -46, -24, 15, 19, 5, 17, 45, 55, 35, 13, 16, 21, -5, -23,
-27, -27, -27, -46, -52, -31, -15, 3, 16, 10, 25, 42, 42, 35, 19, 15, 28, 12,
-24, -31, -27, -34, -49, -56, -29, 7, -3, -10, 9, 28, 41, 34, 26, 40, 36, 13, 2,
-18, -26, -31, -40, -36, -33, -34, -17, -9, -12, 7, 29, 46, 45, 26, 24, 38, 18,
-10, -14, -16, -16, -33, -52, -42, -28, -33, -16, 2, 18, 35, 30, 27, 30, 28, 30,
30, 6, -12, -17, -21, -35, -54, -53, -26, -9, -18, -11, 13, 28, 25, 16, 31, 55,
42, 11, -4, -8, -9, -26, -44, -39, -32, -31, -27, -24, -13, 9, 24, 26, 32, 37,
43, 38, 5, -9, 6, 4, -20, -42, -49, -27, -28, -47, -30, 2, 17, 17, 14, 27, 47,
32, 17, 18, 19, 12, -6, -30, -37, -36, -39, -31, -31, -26, -5, 8, 9, 14, 21, 38,
42, 21, 19, 23, 10, -12, -35, -35, -18, -30, -45, -35, -24, -10, -3, 2, 20, 33,
31, 34, 32, 21, 15, 7, -8, -18, -28, -27, -24, -44, -50, -29, -7, 4, 2, 9, 35,
38, 25, 22, 25, 28, 12, -9, -13, -13, -30, -42, -47, -39, -19, -8, -5, 1, 8, 21,
37, 28, 23, 33, 33, 18, -8, -23, -14, -17, -44, -48, -29, -12, -16, -28, -13,
21, 31, 25, 26, 36, 39, 23, 3, -3, -2, -12, -24, -34, -40, -33, -29, -32, -22,
-4, 21, 35, 21, 16, 32, 37, 26, 10, 3, 12, -3, -36, -45, -33, -31, -34, -33,
-16, 12, 11, 4, 16, 27, 35, 42, 30, 21, 12, -8, -13, -24, -38, -31, -26, -33,
-31, -26, -7, 11, 7, 14, 36, 45, 38, 22, 9, 15, 7, -13, -17, -23, -33, -36, -44,
-38, -17, -9, 6, 19, 16, 28, 39, 30, 24, 17, 18, 23, -3, -31, -32, -29, -35,
-41, -38, -14, 2, -6, -4, 18, 33, 35, 29, 25, 34, 27, 6, -11, -23, -25, -23,
-32, -38, -34, -25, -11, -8, -3, 17, 35, 34, 23, 22, 31, 28, 2, -17, -11, -7,
-21, -39, -44, -28, -20, -23, -12, 9, 21, 23, 21, 23, 32, 30, 19, 8, -1, -7,
-12, -27, -41, -41, -30, -19, -17, -14, 3, 19, 18, 18, 25, 37, 37, 19, 5, 5, -3,
-21, -34, -39, -29, -28, -30, -21, -12, -5, 10, 19, 27, 34, 33, 32, 23, 6, -1,
0, -14, -28, -37, -35, -26, -33, -39, -20, 4, 16, 22, 20, 31, 35, 24, 19, 16,
10, 3, -15, -33, -35, -38, -35, -33, -33, -16, 9, 13, 10, 12, 23, 41, 36, 18,
20, 19, -2, -25, -39, -29, -18, -36, -45, -28, -12, -3, -3, 1, 25, 40, 36, 30,
22, 16, 11, -5, -18, -19, -20, -28, -40, -49, -35, -10, -5, -3, 8, 27, 39, 27,
14, 24, 29, 17, 1, -12, -12, -23, -44, -48, -32, -21, -15, -11, -6, 11, 21, 22,
27, 29, 27, 32, 20, -1, -11, -21, -24, -29, -38, -32, -20, -23, -23, -10, 8, 26,
27, 22, 30, 34, 24, 13, 1, -6, -9, -19, -27, -31, -39, -34, -25, -20, -6, 10,
21, 26, 17, 19, 36, 32, 16, 3, -2, 1, -14, -39, -40, -30, -29, -26, -22, -5, 13,
12, 9, 20, 32, 36, 32, 14, 8, 7, -4, -18, -33, -38, -24, -23, -31, -26, -11, 7,
8, 7, 23, 42, 39, 21, 10, 15, 16, -5, -26, -25, -21, -25, -35, -38, -24, -8, -3,
6, 19, 28, 34, 26, 19, 21, 22, 16, 1, -19, -24, -21, -30, -40, -38, -21, -5, -1,
-1, 13, 25, 24, 23, 27, 34, 30, 11, -9, -14, -20, -26, -30, -34, -29, -23, -18,
-8, -1, 4, 22, 32, 32, 31, 27, 23, 11, -7, -13, -7, -16, -30, -39, -38, -25,
-18, -17, -1, 16, 23, 30, 24, 22, 28, 22, 15, 8, -4, -9, -19, -40, -45, -35,
-21, -13, -16, -11, 13, 24, 18, 19, 28, 39, 35, 11, 1, 2, -13, -29, -38, -33,
-19, -23, -34, -24, -8, 9, 21, 18, 25, 37, 34, 25, 12, 1, 3, -5, -25, -31, -28,
-28, -35, -41, -26, 6, 15, 11, 15, 25, 35, 31, 17, 18, 19, 5, -10, -25, -29,
-30, -38, -39, -28, -15, -2, 4, 5, 13, 25, 33, 33, 27, 18, 17, 7, -14, -24, -27,
-29, -32, -37, -30, -15, -10, -6, 5, 18, 31, 35, 29, 25, 21, 13, 6, -6, -19,
-25, -27, -31, -34, -36, -25, -9, -3, 3, 19, 32, 33, 24, 17, 26, 25, 9, -8, -17,
-18, -24, -39, -41, -30, -20, -10, -5, 4, 18, 26, 22, 22, 26, 31, 29, 7, -13,
-16, -17, -25, -35, -40, -24, -13, -20, -15, 0, 18, 25, 19, 24, 38, 34, 15, -2,
-7, -3, -11, -27, -32, -31, -29, -27, -25, -13, 8, 17, 21, 23, 24, 31, 27, 11,
6, 8, 4, -9, -31, -40, -29, -28, -29, -20, -6, 7, 12, 9, 18, 29, 28, 26, 22, 17,
10, -4, -21, -27, -29, -27, -21, -23, -24, -15, -4, 7, 15, 18, 30, 35, 26, 19,
12, 7, 0, -14, -22, -19, -22, -29, -33, -30, -16, 1, 9, 14, 20, 23, 27, 25, 16,
17, 17, 5, -8, -23, -24, -21, -31, -37, -24, -7, 3, 1, 0, 15, 29, 26, 22, 24,
24, 19, -2, -17, -15, -17, -24, -31, -31, -21, -9, -12, -9, 3, 18, 31, 27, 19,
24, 25, 13, 1, -10, -7, -9, -27, -37, -29, -19, -17, -19, -11, 12, 24, 20, 19,
22, 26, 25, 13, 5, 3, -8, -19, -28, -33, -27, -23, -22, -16, -7, 8, 17, 16, 16,
23, 29, 28, 18, 7, 2, -7, -21, -28, -27, -25, -23, -26, -19, -6, 1, 9, 15, 20,
27, 32, 26, 17, 5, -2, -4, -12, -22, -27, -26, -27, -28, -27, -11, 6, 12, 13,
19, 28, 29, 20, 11, 11, 10, 2, -12, -25, -29, -28, -30, -29, -20, -8, 5, 6, 6,
17, 27, 28, 22, 16, 18, 16, -2, -23, -27, -22, -22, -28, -31, -19, -6, -8, -4,
10, 25, 33, 26, 19, 22, 20, 8, -6, -16, -15, -14, -25, -33, -31, -25, -14, -6,
1, 17, 27, 23, 19, 17, 23, 25, 10, -4, -6, -11, -20, -32, -38, -27, -17, -15,
-6, 3, 10, 17, 16, 21, 30, 28, 22, 12, -3, -9, -13, -23, -28, -29, -27, -18,
-15, -15, -4, 8, 17, 24, 24, 27, 28, 17, 7, 2, -3, -8, -18, -28, -29, -27, -23,
-18, -14, -3, 13, 21, 22, 21, 22, 25, 22, 9, 5, 4, -7, -21, -32, -31, -20, -20,
-24, -15, 0, 12, 15, 12, 20, 29, 27, 20, 14, 9, 3, -10, -25, -26, -21, -20, -24,
-26, -17, 1, 8, 8, 12, 23, 32, 28, 17, 13, 13, 3, -11, -20, -17, -14, -25, -32,
-25, -11, -2, 2, 6, 17, 27, 26, 21, 17, 15, 13, 4, -7, -11, -16, -23, -29, -31,
-22, -8, -3, 0, 5, 15, 24, 22, 18, 21, 21, 17, 6, -7, -14, -19, -25, -26, -21,
-18, -12, -10, -7, 3, 13, 22, 26, 22, 20, 21, 14, 5, -7, -14, -12, -15, -24,
-25, -22, -19, -13, -9, 5, 20, 22, 18, 16, 18, 21, 17, 5, -1, -4, -10, -19, -29,
-30, -21, -15, -12, -5, 3, 14, 15, 9, 16, 27, 28, 18, 4, -1, -1, -12, -25, -26,
-20, -16, -17, -20, -11, 3, 7, 9, 17, 24, 29, 22, 8, 5, 5, 0, -9, -20, -23, -18,
-21, -26, -22, -10, 3, 8, 9, 16, 25, 22, 14, 11, 12, 14, 3, -13, -20, -21, -23,
-24, -25, -17, -7, -3, 3, 9, 14, 20, 21, 18, 19, 17, 10, 1, -13, -19, -16, -18,
-22, -23, -21, -12, -3, -1, 8, 16, 20, 23, 22, 18, 17, 9, -2, -8, -13, -14, -17,
-25, -27, -22, -13, -4, 0, 5, 16, 23, 22, 18, 16, 17, 14, 1, -6, -7, -13, -21,
-30, -29, -16, -10, -9, -4, 5, 16, 20, 16, 18, 22, 21, 14, 3, -4, -7, -15, -26,
-28, -21, -12, -12, -16, -10, 6, 16, 17, 17, 22, 28, 22, 9, 2, 0, -5, -15, -23,
-21, -17, -20, -23, -18, -5, 10, 16, 16, 19, 22, 22, 18, 11, 7, 5, -3, -15, -22,
-23, -23, -23, -23, -13, 2, 8, 9, 10, 15, 23, 24, 20, 17, 11, 3, -7, -16, -20,
-21, -21, -20, -17, -13, -6, 1, 4, 11, 19, 26, 28, 19, 10, 8, 3, -4, -11, -18,
-17, -19, -25, -23, -16, -8, 2, 7, 12, 22, 24, 19, 15, 11, 13, 12, -1, -12, -17,
-20, -21, -24, -24, -11, -2, -1, 2, 9, 18, 23, 16, 15, 21, 19, 8, -7, -15, -14,
-15, -22, -23, -19, -12, -8, -8, 0, 13, 20, 19, 18, 18, 21, 16, 3, -6, -7, -8,
-13, -22, -25, -18, -15, -14, -8, 3, 14, 17, 14, 16, 21, 20, 12, 5, 1, -1, -7,
-18, -23, -23, -20, -16, -12, -6, 3, 9, 12, 14, 17, 20, 20, 14, 7, 4, -1, -9,
-18, -23, -21, -16, -15, -13, -9, -3, 5, 10, 14, 19, 21, 19, 14, 8, 3, -1, -9,
-15, -20, -18, -15, -17, -20, -14, -3, 8, 12, 12, 17, 20, 17, 11, 8, 8, 5, -5,
-15, -17, -17, -19, -22, -21, -9, 2, 5, 6, 8, 14, 19, 17, 14, 14, 12, 5, -8,
-17, -16, -14, -19, -21, -16, -7, -1, -4, -2, 10, 19, 21, 18, 15, 15, 10, -1,
-7, -8, -9, -13, -21, -23, -16, -11, -9, -4, 4, 15, 20, 17, 14, 14, 13, 12, 5,
-1, -3, -10, -19, -24, -22, -15, -9, -9, -4, 5, 10, 13, 13, 14, 18, 19, 14, 8,
0, -8, -13, -17, -18, -16, -14, -13, -12, -8, 0, 10, 14, 15, 17, 19, 19, 13, 4,
0, -3, -8, -13, -18, -19, -17, -17, -15, -7, 3, 10, 14, 12, 15, 20, 18, 13, 6,
3, 2, -5, -16, -20, -19, -17, -16, -15, -6, 5, 7, 7, 11, 18, 23, 19, 11, 10, 9,
2, -8, -17, -18, -14, -16, -18, -14, -7, 0, 3, 5, 14, 22, 21, 16, 12, 11, 10, 0,
-10, -14, -13, -14, -18, -21, -15, -8, -4, 1, 9, 17, 20, 17, 13, 14, 14, 9, 2,
-7, -10, -12, -18, -21, -20, -15, -8, -3, 2, 9, 13, 15, 14, 15, 17, 17, 10, 1,
-6, -11, -14, -18, -20, -18, -13, -8, -5, -2, 4, 10, 15, 18, 18, 18, 15, 7, -2,
-7, -8, -10, -15, -20, -20, -14, -10, -9, -4, 5, 15, 18, 16, 15, 15, 13, 7, 2,
0, -2, -10, -20, -24, -19, -13, -10, -9, -3, 7, 11, 12, 11, 14, 18, 17, 9, 4, 1,
-5, -15, -22, -19, -12, -11, -14, -12, -5, 4, 8, 9, 14, 19, 18, 14, 7, 3, 2, -5,
-13, -14, -13, -14, -17, -20, -13, -2, 3, 7, 9, 13, 18, 15, 10, 9, 7, 4, -3,
-10, -13, -14, -18, -20, -16, -8, -1, 2, 3, 8, 12, 15, 16, 13, 11, 9, 4, -3, -9,
-14, -15, -15, -16, -14, -9, -5, -2, 0, 6, 14, 18, 16, 13, 10, 9, 6, -2, -8,
-10, -12, -14, -16, -16, -11, -7, -4, 0, 8, 15, 17, 13, 10, 12, 12, 7, -1, -6,
-7, -9, -16, -19, -16, -10, -7, -5, 0, 8, 13, 11, 9, 12, 16, 15, 7, -1, -3, -6,
-11, -17, -18, -13, -9, -9, -7, -1, 6, 9, 9, 12, 18, 18, 12, 4, 0, 0, -4, -11,
-14, -14, -12, -13, -13, -9, -1, 5, 8, 12, 15, 17, 13, 8, 6, 6, 4, -1, -9, -14,
-15, -15, -14, -12, -6, 0, 4, 6, 9, 12, 14, 14, 12, 11, 9, 4, -5, -11, -15, -14,
-12, -12, -11, -8, -4, 1, 4, 8, 13, 16, 16, 13, 9, 7, 3, -4, -9, -10, -10, -11,
-15, -17, -11, -4, 1, 5, 9, 14, 16, 12, 10, 10, 9, 6, -1, -7, -9, -11, -16, -19,
-15, -8, -1, 0, 1, 7, 12, 14, 12, 12, 14, 13, 4, -3, -6, -8, -12, -17, -17, -11,
-6, -7, -6, -1, 7, 14, 14, 13, 14, 14, 9, 3, -1, -2, -6, -13, -16, -15, -12,
-10, -11, -8, 2, 9, 11, 12, 12, 13, 14, 9, 5, 3, -1, -7, -13, -16, -14, -13,
-13, -10, -5, 2, 7, 9, 10, 12, 13, 14, 12, 6, 2, -1, -8, -12, -15, -15, -13,
-12, -10, -5, 0, 4, 7, 8, 13, 16, 15, 11, 6, 1, -1, -6, -11, -14, -13, -13, -13,
-13, -8, -1, 4, 6, 10, 14, 17, 13, 7, 4, 5, 3, -4, -10, -13, -13, -15, -16, -12,
-5, 1, 3, 4, 9, 14, 14, 10, 8, 10, 9, 3, -6, -11, -12, -12, -14, -14, -9, -4,
-3, -2, 2, 9, 14, 13, 11, 11, 12, 7, -1, -7, -8, -7, -10, -13, -14, -11, -8, -6,
-2, 5, 11, 13, 11, 10, 11, 10, 6, 1, -2, -3, -7, -12, -16, -15, -12, -8, -4, 0,
4, 8, 9, 9, 11, 12, 12, 8, 3, -1, -5, -9, -12, -14, -13, -9, -6, -6, -3, 0, 6,
10, 11, 12, 14, 11, 7, 2, -1, -2, -5, -11, -13, -12, -10, -9, -9, -5, 2, 7, 10,
10, 10, 12, 10, 6, 4, 3, 1, -5, -12, -13, -10, -10, -11, -9, -4, 3, 6, 5, 7, 11,
13, 11, 8, 6, 5, -1, -8, -10, -10, -9, -10, -12, -9, -3, 1, 1, 3, 8, 13, 13, 10,
9, 8, 4, -1, -6, -8, -7, -10, -13, -13, -9, -4, -2, 0, 4, 10, 12, 11, 10, 8, 7,
4, 0, -2, -5, -8, -12, -14, -13, -8, -5, -3, 0, 4, 8, 10, 10, 9, 9, 9, 7, 3, -2,
-6, -10, -12, -12, -11, -8, -6, -5, -2, 2, 7, 10, 10, 10, 11, 10, 6, 1, -4, -6,
-7, -10, -11, -11, -10, -9, -7, -4, 3, 9, 10, 9, 9, 10, 10, 5, 1, 0, -1, -5,
-11, -14, -13, -11, -9, -6, -1, 4, 6, 5, 6, 10, 12, 10, 6, 3, 2, -2, -8, -13,
-13, -10, -9, -10, -7, -3, 0, 2, 4, 9, 14, 13, 8, 5, 3, 2, -2, -8, -10, -9, -10,
-11, -11, -8, -3, 0, 3, 7, 11, 11, 9, 7, 6, 7, 4, -1, -6, -9, -11, -12, -12,
-10, -7, -3, 0, 3, 6, 8, 9, 9, 9, 9, 7, 3, -2, -7, -9, -10, -10, -11, -11, -8,
-4, -1, 1, 5, 8, 11, 11, 10, 9, 7, 3, -2, -5, -6, -7, -10, -12, -12, -8, -4, -2,
0, 5, 9, 10, 10, 8, 8, 7, 3, -1, -3, -4, -7, -11, -13, -10, -6, -4, -3, 0, 5, 9,
8, 7, 9, 9, 7, 3, 0, -1, -4, -9, -13, -11, -8, -6, -6, -5, 0, 4, 6, 7, 8, 11,
11, 7, 3, 1, -1, -5, -9, -10, -8, -7, -8, -9, -5, 0, 4, 6, 8, 10, 10, 9, 6, 4,
2, 0, -3, -6, -8, -9, -10, -10, -8, -3, 1, 4, 5, 6, 7, 9, 9, 8, 6, 4, 1, -3, -7,
-9, -10, -9, -8, -6, -4, -1, 0, 2, 5, 8, 11, 11, 8, 5, 3, 1, -2, -6, -7, -7, -8,
-9, -9, -6, -2, 0, 2, 6, 10, 10, 8, 5, 5, 6, 3, -1, -4, -6, -7, -10, -11, -8,
-4, -2, -1, 1, 5, 8, 7, 6, 7, 9, 8, 3, -2, -4, -5, -8, -9, -9, -6, -5, -5, -4,
1, 5, 7, 7, 7, 9, 9, 5, 1, -1, -2, -4, -7, -10, -9, -8, -8, -6, -3, 1, 4, 5, 6,
8, 9, 8, 5, 2, 1, 0, -4, -8, -10, -10, -9, -8, -6, -3, 0, 2, 5, 6, 8, 8, 7, 6,
4, 2, 0, -4, -8, -10, -10, -8, -7, -7, -5, -1, 2, 4, 6, 7, 9, 9, 6, 4, 2, 0, -4,
-8, -9, -8, -7, -8, -9, -6, -1, 2, 3, 5, 9, 10, 8, 5, 4, 3, 1, -3, -6, -7, -7,
-9, -11, -9, -4, 0, 1, 3, 5, 8, 8, 7, 6, 7, 5, 1, -3, -6, -6, -9, -10, -10, -6,
-3, -2, -2, 1, 5, 8, 9, 8, 8, 7, 3, -1, -3, -4, -5, -8, -10, -9, -7, -6, -5, -2,
2, 7, 8, 8, 8, 7, 6, 4, 1, 0, -2, -6, -9, -10, -10, -8, -6, -4, -1, 3, 5, 6, 6,
7, 8, 8, 6, 3, -1, -3, -7, -9, -9, -8, -7, -5, -4, -2, 1, 4, 6, 7, 8, 9, 8, 5,
1, -1, -2, -4, -7, -8, -8, -8, -7, -6, -2, 2, 5, 5, 6, 8, 9, 7, 4, 2, 1, 0, -4,
-7, -9, -8, -8, -8, -5, -1, 2, 2, 3, 5, 9, 9, 6, 4, 4, 3, -1, -5, -8, -7, -8,
-8, -7, -5, -2, 0, 0, 3, 7, 8, 8, 6, 5, 5, 2, -2, -5, -6, -6, -7, -8, -8, -5,
-4, -2, 1, 4, 7, 8, 6, 6, 5, 4, 2, -1, -3, -4, -6, -8, -8, -8, -6, -4, -1, 1, 4,
5, 6, 6, 6, 6, 5, 3, 0, -2, -4, -6, -8, -9, -8, -5, -3, -1, -1, 1, 4, 5, 6, 7,
7, 6, 3, -1, -3, -3, -5, -7, -8, -7, -5, -4, -4, -2, 2, 5, 6, 6, 6, 6, 4, 2, 0,
0, -1, -4, -8, -9, -7, -6, -6, -4, -1, 3, 4, 3, 4, 6, 6, 5, 3, 2, 1, -2, -6, -8,
-7, -6, -6, -6, -4, -1, 1, 1, 3, 5, 7, 7, 5, 3, 2, 0, -3, -5, -5, -5, -6, -7,
-7, -5, -2, 0, 2, 4, 6, 6, 6, 5, 4, 3, 1, -1, -3, -4, -6, -8, -8, -7, -4, -1, 0,
1, 2, 4, 6, 6, 5, 5, 4, 2, 0, -3, -5, -6, -7, -7, -6, -4, -2, -2, -1, 2, 5, 7,
6, 5, 5, 4, 2, -1, -3, -4, -5, -6, -7, -7, -5, -4, -2, 0, 3, 6, 6, 5, 5, 6, 5,
2, -1, -2, -2, -5, -7, -8, -6, -5, -4, -3, 0, 3, 4, 4, 4, 6, 7, 5, 2, 0, -1, -2,
-5, -7, -7, -6, -5, -5, -3, 0, 2, 3, 3, 5, 7, 7, 4, 2, 1, 0, -3, -5, -6, -6, -5,
-5, -5, -3, -1, 1, 3, 5, 7, 7, 5, 3, 2, 1, 0, -2, -4, -5, -6, -7, -6, -5, -3,
-1, 1, 3, 4, 5, 5, 5, 4, 4, 3, 1, -2, -5, -6, -6, -6, -6, -5, -3, -1, 0, 1, 3,
5, 6, 6, 5, 4, 2, 0, -3, -4, -5, -4, -5, -7, -6, -4, -2, 0, 1, 4, 6, 6, 5, 4, 3,
3, 0, -2, -3, -3, -5, -7, -8, -6, -3, -1, -1, 1, 3, 4, 4, 4, 4, 5, 3, 0, -1, -2,
-4, -6, -7, -6, -4, -3, -3, -2, 0, 3, 4, 4, 5, 5, 4, 2, 0, -1, -2, -3, -5, -6,
-5, -4, -4, -4, -2, 1, 3, 4, 4, 4, 4, 3, 2, 1, 0, -1, -3, -5, -6, -6, -6, -5,
-4, -2, 1, 2, 3, 3, 3, 4, 4, 3, 1, 0, -1, -3, -4, -5, -6, -5, -5, -4, -2, 0, 1,
2, 2, 4, 5, 5, 3, 1, 0, 0, -2, -4, -5, -5, -4, -5, -4, -2, -1, 0, 1, 3, 5, 5, 4,
2, 1, 1, 0, -2, -3, -4, -4, -5, -6, -4, -2, -1, 0, 1, 3, 4, 4, 3, 2, 3, 2, 0,
-2, -3, -4, -5, -6, -5, -3, -2, -1, -1, 1, 3, 3, 3, 4, 4, 4, 2, -1, -2, -3, -3,
-4, -5, -4, -4, -3, -3, -1, 1, 3, 3, 3, 4, 4, 3, 1, 0, 0, -1, -2, -4, -5, -5,
-5, -3, -2, 0, 1, 2, 2, 3, 4, 4, 3, 3, 1, 0, -1, -3, -5, -5, -5, -4, -3, -2, -2,
0, 1, 2, 3, 4, 4, 4, 2, 0, 0, -1, -2, -4, -4, -4, -4, -4, -4, -2, 0, 2, 2, 3, 4,
4, 3, 2, 1, 1, 0, -3, -4, -4, -4, -4, -5, -3, -1, 0, 1, 1, 2, 4, 4, 3, 2, 2, 1,
-1, -3, -4, -4, -4, -5, -5, -3, -1, -1, 0, 1, 3, 4, 4, 3, 3, 2, 1, -1, -2, -3,
-3, -4, -5, -4, -3, -2, -1, 0, 1, 3, 4, 3, 3, 3, 2, 0, 0, -1, -2, -3, -5, -5,
-4, -4, -2, -1, 0, 1, 3, 3, 3, 3, 2, 2, 1, 0, -1, -3, -4, -4, -5, -4, -3, -2,
-2, -1, 1, 2, 3, 3, 3, 3, 3, 1, -1, -2, -2, -3, -4, -4, -4, -3, -3, -3, -1, 1,
2, 3, 3, 3, 3, 2, 0, 0, -1, -1, -3, -4, -4, -4, -4, -4, -2, 0, 1, 1, 1, 2, 3, 3,
2, 1, 1, 0, -2, -3, -4, -4, -4, -3, -3, -2, 0, 0, 0, 1, 3, 4, 3, 2, 1, 1, 0, -2,
-3, -3, -3, -3, -4, -3, -2, -1, 0, 1, 2, 3, 3, 2, 2, 2, 1, 0, -1, -2, -3, -3,
-4, -4, -3, -2, -1, 0, 1, 2, 2, 2, 2, 2, 2, 1, 0, -1, -2, -3, -3, -3, -4, -3,
-2, -1, 0, 0, 1, 2, 3, 2, 2, 2, 1, 0, -1, -2, -2, -2, -3, -4, -3, -2, -1, -1, 0,
1, 2, 2, 2, 2, 2, 1, 0, -1, -1, -1, -3, -4, -4, -3, -2, -2, -1, 0, 1, 2, 2, 2,
2, 2, 1, 1, 0, 0, -2, -3, -3, -3, -2, -2, -2, -1, 0, 1, 1, 1, 2, 3, 2, 2, 1, 0,
-1, -2, -3, -3, -3, -3, -3, -2, -2, -1, 0, 1, 2, 2, 2, 2, 1, 1, 0, -1, -1, -2,
-2, -3, -3, -3, -3, -2, -1, 0, 1, 1, 2, 2, 2, 2, 1, 1, 0, -1, -2, -3, -3, -3,
-3, -2, -1, -1, 0, 0, 1, 2, 2, 2, 2, 1, 1, 0, -1, -2, -2, -2, -3, -3, -3, -2,
-1, -1, 0, 1, 2, 2, 1, 1, 1, 1, 0, -1, -1, -2, -2, -3, -3, -3, -2, -1, -1, 0, 1,
2, 1, 1, 2, 2, 1, 0, -1, -1, -2, -3, -3, -3, -2, -2, -2, -1, 0, 1, 1, 1, 2, 2,
2, 1, 0, -1, -1, -2, -3, -3, -3, -3, -2, -2, -1, 0, 0, 1, 1, 2, 2, 1, 0, 0, 0,
-1, -1, -2, -3, -3, -3, -2, -2, -1, 0, 0, 1, 1, 2, 2, 1, 1, 0, 0, -1, -1, -2,
-3, -3, -2, -2, -2, -1, 0, 0, 1, 1, 2, 2, 1, 1, 1, 0, -1, -2, -2, -2, -2, -2,
-2, -2, -1, -1, 0, 0, 1, 2, 2, 1, 1, 1, 0, -1, -2, -2, -2, -2, -3, -3, -2, -1,
0, 0, 0, 1, 1, 1, 1, 1, 1, 0, -1, -1, -1, -2, -3, -3, -2, -2, -1, -1, 0, 0, 1,
1, 1, 1, 1, 1, 0, -1, -1, -1, -2, -2, -2, -2, -2, -1, -1, -1, 0, 1, 1, 1, 1, 1,
1, 0, 0, 0, -1, -1, -2, -2, -2, -2, -2, -1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, -1,
-2, -2, -2, -2, -2, -1, -1, -1, 0, 0, 0, 1, 1, 1, 1, 0, 0, -1, -1, -1, -2, -2,
-2, -2, -2, -2, -1, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, -1, -1, -2, -2, -2, -2, -2,
-1, -1, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, -1, -1, -2, -2, -2, -2, -2, -1, -1, -1, 0,
0, 1, 1, 1, 1, 1, 1, 0, -1, -1, -1, -2, -2, -2, -2, -1, -1, -1, 0, 0, 1, 1, 1,
1, 1, 0, 0, 0, -1, -1, -1, -2, -2, -2, -2, -1, -1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0,
-1, -1, -1, -2, -2, -2, -1, -1, -1, -1, 0, 0, 0, 1, 1, 1, 1, 0, 0, -1, -1, -1,
-2, -2, -1, -1, -1, -1, -1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, -1, -1, -2, -2, -2,
-2, -2, -1, -1, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, -1, -1, -2, -2, -1, -2, -2, -1,
-1, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, -1, -1, -1, -1, -1, -2, -2, -1, -1, -1, 0, 0,
0, 1, 0, 0, 0, 0, 0, -1, -1, -1, -1, -2, -2, -2, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, -1, -1, -1, -1, -1, -2, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1,
-1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1,
-1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
-1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1,
-1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1,
0, -1, 0, -1, -1, -1, -1, -1, 0, 0, -1, 0, -1, 0, 0, 0, -1, 0, 0, 0, 0, -1, -1,
-1, -1, -1, -1, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0,
0, 0, 0, 0, 0, -1, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1,
0, 0, 0, 0, 0, 0, 0, };

#endif /* DDMSIX_H_ */
