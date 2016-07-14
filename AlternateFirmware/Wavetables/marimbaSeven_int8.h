#ifndef MARIMBASEVEN_H_
#define MARIMBASEVEN_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define MARIMBASEVEN_NUM_CELLS 8525
#define MARIMBASEVEN_SAMPLERATE 16384
 
const int8_t __attribute__((section(".progmem.data"))) MARIMBASEVEN_DATA [] =
{-5, -8, -7, -8, -8, -8, -8, -8, -7, -7, -7, -7, -7, -6, -6, -6, -5, -5, -5, -4,
-4, -3, -3, -3, -2, -2, -1, -1, -1, -1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1,
1, 1, 1, 0, 0, 0, -1, -1, -1, -1, -2, -2, -2, -3, -3, -3, -3, -3, -4, -4, -4,
-5, -5, -5, -5, -5, -5, -6, -6, -6, -6, -6, -6, -6, -5, -5, -5, -5, -5, -5, -4,
-4, -4, -3, -3, -3, -2, -2, -2, -1, -1, 0, 0, 1, 1, 2, 2, 2, 3, 3, 4, 4, 4, 5,
5, 5, 5, 5, 5, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 5, 5, 5, 5, 5, 4, 4, 4, 3, 3,
3, 3, 2, 2, 2, 2, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1,
-1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3,
3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2, 1, 1, 0, 0, 0, -1, -1, -1, -2, -2, -3, -3, -4,
-4, -5, -6, -6, -7, -7, -8, -8, -9, -9, -10, -10, -10, -11, -11, -11, -11, -12,
-12, -12, -12, -12, -12, -12, -12, -12, -11, -11, -11, -10, -10, -10, -9, -8,
-8, -7, -6, -6, -5, -4, -3, -2, -1, -1, 0, 1, 2, 3, 4, 4, 5, 6, 7, 8, 8, 9, 10,
10, 11, 12, 12, 13, 13, 13, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 13, 13,
12, 12, 11, 11, 10, 10, 9, 8, 7, 6, 5, 4, 3, 2, 2, 1, 0, -1, -2, -3, -4, -5, -6,
-7, -8, -8, -9, -10, -10, -11, -12, -12, -12, -13, -13, -14, -14, -14, -14, -14,
-14, -14, -13, -13, -13, -12, -12, -12, -12, -11, -11, -10, -10, -9, -9, -8, -7,
-6, -5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5, 5, 6, 6, 6, 7, 7, 8, 8, 9, 9, 10, 10,
11, 11, 11, 11, 11, 11, 11, 10, 9, 9, 8, 8, 7, 6, 6, 5, 4, 3, 3, 2, 1, 1, 0, -1,
-1, -2, -3, -4, -5, -5, -6, -6, -6, -7, -7, -7, -8, -8, -8, -8, -9, -9, -9, -9,
-9, -9, -9, -9, -8, -8, -8, -7, -6, -6, -5, -5, -4, -3, -2, -1, 0, 1, 1, 2, 3,
4, 4, 5, 6, 6, 7, 7, 8, 9, 9, 10, 10, 11, 12, 12, 12, 12, 12, 13, 13, 13, 13,
13, 12, 12, 11, 11, 11, 11, 11, 11, 11, 11, 11, 10, 9, 9, 7, 6, 5, 3, 1, -1, -2,
-4, -6, -7, -7, -7, -8, -6, -5, -5, -4, -3, -3, -4, -5, -7, -10, -13, -16, -19,
-22, -26, -30, -33, -35, -35, -35, -33, -31, -30, -28, -26, -25, -23, -21, -21,
-20, -18, -17, -15, -14, -13, -11, -8, -8, -6, -5, -4, 0, 2, 4, 7, 9, 12, 14,
16, 18, 19, 20, 20, 20, 20, 19, 17, 15, 13, 10, 9, 7, 7, 7, 8, 9, 10, 10, 9, 8,
7, 8, 9, 9, 10, 10, 10, 10, 9, 9, 9, 10, 9, 8, 7, 6, 4, 2, 1, 0, -1, -1, -2, -2,
-2, -2, 0, 2, 4, 6, 6, 6, 6, 5, 4, 3, 1, -1, -3, -7, -10, -14, -17, -19, -21,
-21, -21, -21, -21, -19, -18, -16, -12, -9, -5, -2, 1, 3, 4, 4, 4, 4, 5, 5, 6,
5, 5, 4, 4, 4, 5, 6, 7, 7, 6, 5, 2, 0, -1, -1, 0, 1, 3, 5, 8, 11, 15, 19, 22,
23, 23, 22, 18, 14, 7, 0, -6, -12, -17, -20, -24, -25, -26, -25, -22, -17, -12,
-7, -2, 3, 6, 9, 11, 12, 13, 13, 12, 10, 7, 2, -1, -3, -5, -2, 2, 8, 14, 19, 20,
20, 19, 15, 11, 7, 2, -2, -6, -11, -14, -16, -17, -16, -13, -10, -8, -9, -10,
-12, -12, -11, -11, -12, -14, -16, -18, -19, -18, -16, -15, -16, -19, -21, -21,
-18, -13, -8, -4, 0, 3, 6, 8, 9, 7, 3, -2, -8, -14, -21, -27, -31, -35, -37,
-38, -36, -34, -31, -25, -18, -9, 0, 7, 15, 21, 27, 30, 33, 34, 32, 25, 17, 8,
3, -1, -3, -4, -7, -9, -9, -5, 4, 14, 25, 37, 45, 51, 53, 55, 59, 63, 61, 54,
45, 32, 19, 8, 0, -3, -3, -5, -7, -7, -4, 4, 15, 27, 34, 39, 39, 39, 39, 38, 34,
26, 13, -3, -18, -30, -36, -38, -39, -41, -41, -38, -30, -19, -7, 6, 13, 15, 13,
10, 6, 1, -7, -17, -30, -45, -59, -69, -73, -71, -65, -57, -49, -42, -35, -26,
-14, -2, 7, 12, 12, 10, 4, -2, -6, -11, -18, -29, -43, -54, -60, -62, -59, -54,
-46, -37, -26, -9, 10, 30, 49, 64, 74, 79, 81, 80, 78, 73, 64, 51, 38, 24, 11,
3, -1, -1, 0, 4, 9, 18, 28, 40, 53, 65, 73, 75, 71, 65, 58, 50, 40, 28, 13, -4,
-18, -27, -31, -32, -30, -27, -21, -16, -8, 2, 13, 21, 24, 22, 17, 11, 3, -6,
-17, -29, -43, -55, -65, -70, -72, -71, -65, -59, -53, -48, -41, -31, -22, -13,
-9, -8, -13, -21, -30, -37, -43, -48, -56, -64, -72, -77, -77, -71, -60, -48,
-37, -27, -17, -6, 6, 18, 27, 33, 33, 29, 22, 13, 4, -5, -14, -22, -29, -35,
-37, -34, -26, -17, -6, 6, 18, 31, 43, 53, 63, 68, 70, 68, 63, 57, 50, 43, 36,
28, 18, 9, 2, -1, 2, 6, 12, 18, 24, 31, 38, 46, 53, 58, 58, 53, 46, 37, 27, 18,
9, 0, -8, -17, -22, -24, -23, -20, -16, -11, -6, 0, 5, 11, 16, 19, 20, 18, 15,
10, 5, 1, -2, -6, -11, -16, -20, -21, -19, -14, -7, -1, 3, 8, 11, 16, 21, 26,
28, 26, 19, 10, 0, -8, -14, -20, -24, -28, -30, -29, -25, -18, -8, 3, 14, 22,
29, 33, 36, 37, 36, 32, 24, 15, 3, -8, -18, -27, -34, -39, -43, -43, -40, -34,
-24, -12, 1, 12, 20, 27, 32, 34, 34, 30, 22, 11, -1, -14, -25, -34, -41, -47,
-50, -51, -49, -44, -36, -25, -14, -4, 5, 11, 15, 18, 19, 16, 11, 5, -4, -13,
-21, -28, -34, -37, -39, -38, -36, -31, -25, -18, -9, -2, 4, 9, 12, 15, 16, 16,
14, 10, 3, -3, -8, -10, -11, -10, -9, -7, -4, 1, 8, 16, 25, 31, 35, 36, 34, 29,
23, 16, 9, 0, -10, -20, -28, -35, -38, -38, -35, -30, -24, -16, -8, 1, 9, 18,
25, 29, 30, 27, 21, 13, 4, -6, -17, -28, -37, -45, -50, -52, -51, -47, -43, -36,
-29, -20, -10, 0, 8, 14, 16, 16, 15, 12, 8, 3, -2, -8, -13, -18, -21, -21, -18,
-14, -9, -3, 3, 9, 15, 21, 26, 31, 34, 35, 33, 30, 26, 21, 16, 12, 7, 4, 3, 3,
5, 8, 13, 18, 23, 30, 37, 44, 49, 52, 53, 52, 49, 45, 41, 36, 31, 25, 19, 15,
11, 10, 11, 14, 18, 21, 25, 28, 30, 32, 33, 32, 30, 24, 17, 7, -4, -14, -23,
-32, -39, -44, -47, -48, -45, -40, -33, -25, -16, -8, 0, 6, 11, 14, 14, 11, 5,
-2, -11, -21, -30, -39, -47, -53, -57, -59, -57, -51, -43, -33, -23, -12, -2, 7,
15, 22, 27, 28, 27, 22, 16, 9, 1, -5, -11, -15, -17, -16, -14, -8, 0, 10, 22,
34, 45, 55, 62, 67, 68, 67, 63, 57, 49, 40, 30, 21, 13, 6, 1, -1, 0, 3, 8, 14,
21, 27, 33, 38, 41, 42, 41, 36, 29, 19, 7, -5, -17, -27, -37, -44, -50, -52,
-53, -52, -48, -42, -35, -29, -24, -21, -21, -23, -28, -35, -44, -55, -68, -80,
-91, -101, -107, -110, -110, -107, -101, -92, -80, -67, -54, -41, -28, -19, -11,
-7, -6, -7, -12, -19, -27, -36, -45, -53, -58, -61, -60, -56, -49, -40, -28,
-14, 2, 18, 33, 46, 56, 64, 68, 69, 68, 64, 59, 53, 45, 38, 32, 29, 28, 29, 32,
38, 45, 53, 61, 70, 79, 86, 92, 95, 96, 94, 89, 81, 72, 62, 52, 42, 33, 25, 19,
16, 15, 16, 20, 24, 29, 33, 37, 39, 40, 38, 35, 28, 21, 12, 2, -8, -17, -26,
-32, -36, -38, -37, -34, -30, -25, -19, -12, -6, -1, 3, 5, 5, 2, -2, -8, -16,
-25, -33, -41, -48, -52, -55, -54, -50, -45, -36, -27, -16, -5, 5, 15, 23, 28,
31, 32, 30, 26, 20, 13, 5, -3, -11, -18, -23, -26, -27, -24, -20, -14, -7, 1,
10, 19, 27, 34, 38, 39, 38, 33, 27, 19, 10, 0, -9, -19, -26, -31, -34, -34, -31,
-26, -19, -12, -5, 2, 8, 13, 15, 15, 13, 8, 1, -8, -17, -27, -36, -43, -48, -52,
-53, -51, -46, -40, -33, -25, -16, -8, -1, 5, 8, 9, 8, 5, 2, -3, -8, -12, -17,
-20, -22, -22, -19, -13, -6, 3, 12, 22, 30, 37, 41, 43, 42, 39, 33, 25, 16, 7,
-3, -11, -18, -23, -26, -26, -24, -19, -13, -6, 2, 11, 19, 25, 30, 32, 32, 28,
22, 14, 4, -6, -17, -27, -35, -43, -48, -51, -51, -49, -44, -38, -31, -23, -17,
-11, -6, -4, -3, -5, -8, -14, -20, -27, -34, -39, -44, -46, -47, -45, -40, -34,
-26, -17, -7, 3, 12, 21, 28, 33, 37, 38, 37, 35, 31, 28, 24, 21, 19, 18, 18, 21,
25, 30, 37, 45, 52, 59, 65, 70, 72, 73, 72, 69, 64, 58, 52, 46, 41, 37, 34, 33,
33, 35, 38, 43, 48, 52, 55, 56, 56, 54, 50, 44, 36, 27, 16, 3, -9, -21, -31,
-39, -47, -52, -55, -56, -55, -51, -46, -40, -34, -29, -26, -23, -22, -23, -25,
-28, -33, -40, -48, -56, -63, -69, -73, -74, -74, -71, -67, -60, -52, -43, -33,
-23, -14, -7, -1, 4, 8, 10, 10, 10, 8, 6, 3, 1, 1, 3, 6, 10, 16, 24, 33, 43, 53,
63, 71, 76, 80, 82, 82, 80, 77, 72, 66, 59, 52, 46, 42, 38, 36, 35, 36, 37, 38,
40, 43, 45, 45, 44, 41, 36, 29, 20, 11, 1, -9, -20, -30, -38, -45, -50, -53,
-55, -55, -55, -52, -49, -45, -43, -42, -43, -47, -52, -59, -68, -77, -87, -97,
-108, -117, -124, -128, -128, -126, -120, -113, -105, -95, -84, -72, -61, -50,
-41, -34, -31, -31, -32, -34, -36, -39, -41, -43, -43, -42, -38, -32, -23, -13,
-2, 11, 22, 35, 46, 56, 64, 70, 73, 74, 74, 71, 67, 61, 56, 51, 47, 45, 45, 48,
52, 58, 66, 73, 80, 87, 93, 97, 99, 98, 95, 90, 82, 72, 62, 53, 43, 34, 27, 21,
17, 15, 15, 17, 19, 22, 24, 26, 26, 25, 23, 19, 12, 5, -4, -14, -23, -31, -38,
-44, -47, -47, -46, -41, -35, -27, -19, -11, -3, 3, 8, 10, 11, 9, 5, 0, -7, -15,
-23, -29, -35, -39, -41, -41, -39, -33, -26, -16, -6, 5, 15, 24, 31, 36, 40, 41,
40, 37, 32, 26, 19, 13, 7, 2, -2, -4, -5, -3, 1, 6, 13, 19, 25, 29, 32, 34, 33,
30, 25, 18, 10, 1, -8, -17, -25, -31, -36, -39, -40, -40, -38, -34, -30, -24,
-20, -16, -13, -12, -12, -14, -17, -22, -27, -34, -40, -45, -50, -53, -54, -54,
-53, -50, -46, -40, -33, -26, -19, -13, -9, -6, -5, -5, -7, -10, -14, -18, -21,
-23, -24, -23, -19, -13, -6, 2, 11, 21, 31, 40, 49, 56, 61, 63, 62, 59, 55, 48,
40, 32, 23, 14, 6, 0, -3, -4, -3, 0, 5, 12, 19, 26, 32, 37, 41, 42, 41, 39, 33,
26, 18, 7, -3, -14, -23, -31, -38, -42, -43, -43, -40, -36, -31, -25, -19, -14,
-11, -9, -10, -12, -16, -22, -28, -35, -43, -50, -56, -60, -62, -60, -57, -51,
-43, -35, -25, -15, -5, 4, 11, 16, 18, 19, 18, 15, 12, 8, 4, 0, -2, -3, -1, 2,
8, 15, 23, 32, 42, 50, 58, 65, 69, 72, 72, 70, 66, 61, 55, 49, 43, 37, 33, 30,
30, 31, 35, 40, 47, 55, 62, 67, 71, 73, 73, 70, 64, 56, 46, 34, 21, 9, -4, -15,
-25, -32, -37, -40, -40, -38, -33, -28, -22, -16, -11, -8, -6, -7, -9, -14, -19,
-26, -33, -41, -49, -56, -62, -66, -68, -68, -66, -62, -56, -48, -40, -31, -23,
-16, -9, -6, -3, -3, -5, -7, -11, -15, -18, -21, -23, -24, -23, -19, -13, -5, 4,
14, 24, 34, 43, 50, 55, 59, 60, 59, 57, 54, 49, 44, 39, 34, 31, 28, 27, 27, 29,
31, 35, 39, 44, 48, 50, 51, 51, 48, 43, 36, 28, 19, 10, 0, -9, -17, -23, -28,
-30, -31, -30, -27, -23, -19, -15, -13, -11, -11, -13, -17, -23, -31, -40, -51,
-61, -72, -82, -90, -96, -100, -102, -101, -98, -93, -87, -80, -71, -63, -56,
-49, -44, -41, -40, -40, -41, -44, -47, -51, -55, -57, -58, -57, -55, -50, -44,
-36, -27, -17, -7, 3, 12, 20, 27, 32, 35, 37, 37, 36, 34, 32, 29, 28, 27, 28,
30, 34, 39, 45, 51, 58, 65, 71, 77, 81, 84, 85, 83, 80, 76, 71, 65, 58, 52, 47,
42, 39, 37, 38, 39, 42, 45, 49, 52, 53, 54, 53, 50, 46, 40, 33, 25, 17, 8, 1,
-6, -12, -15, -16, -15, -13, -8, -3, 3, 9, 14, 19, 22, 23, 22, 19, 13, 7, 0, -9,
-17, -25, -32, -37, -41, -43, -42, -39, -34, -27, -20, -12, -4, 3, 8, 12, 14,
14, 12, 9, 4, 0, -5, -11, -15, -19, -22, -23, -22, -20, -16, -11, -6, 0, 5, 9,
13, 14, 15, 12, 9, 4, -2, -9, -16, -22, -28, -32, -35, -37, -37, -35, -32, -27,
-22, -16, -10, -5, -2, 0, 1, 0, -3, -7, -12, -18, -24, -29, -33, -36, -38, -38,
-36, -32, -28, -22, -16, -10, -4, 0, 3, 5, 6, 4, 1, -3, -7, -12, -16, -20, -22,
-24, -23, -20, -16, -9, -2, 7, 16, 25, 33, 39, 44, 46, 47, 45, 42, 36, 29, 21,
13, 5, -1, -6, -9, -10, -9, -6, -2, 4, 9, 15, 21, 26, 30, 32, 31, 29, 24, 19,
12, 4, -4, -12, -19, -26, -31, -34, -34, -33, -30, -26, -21, -16, -11, -7, -4,
-2, -3, -5, -8, -13, -20, -26, -33, -39, -45, -49, -50, -50, -48, -44, -39, -32,
-25, -17, -10, -3, 3, 7, 10, 11, 10, 9, 6, 3, 0, -2, -4, -5, -4, -1, 4, 10, 18,
27, 35, 43, 50, 56, 61, 63, 64, 63, 60, 56, 51, 45, 39, 34, 30, 27, 26, 28, 31,
36, 43, 50, 57, 64, 70, 74, 76, 76, 73, 68, 61, 52, 42, 32, 21, 11, 2, -7, -13,
-17, -19, -18, -16, -12, -7, -3, 0, 3, 5, 5, 4, 0, -5, -11, -18, -26, -34, -40,
-47, -51, -55, -56, -56, -53, -49, -43, -37, -30, -24, -19, -15, -12, -11, -11,
-13, -15, -19, -23, -26, -30, -32, -33, -32, -30, -25, -19, -11, -2, 7, 16, 24,
32, 37, 42, 44, 44, 42, 39, 35, 31, 27, 23, 20, 19, 19, 20, 23, 26, 31, 36, 41,
45, 48, 50, 50, 48, 43, 38, 31, 22, 13, 3, -5, -13, -19, -24, -28, -29, -28,
-27, -23, -19, -15, -12, -10, -10, -11, -13, -18, -24, -31, -40, -50, -61, -70,
-78, -85, -90, -93, -95, -94, -92, -89, -84, -79, -73, -68, -63, -59, -56, -55,
-54, -55, -56, -59, -61, -63, -64, -65, -63, -61, -56, -50, -42, -33, -24, -15,
-5, 4, 12, 18, 24, 28, 30, 31, 31, 29, 28, 26, 24, 24, 24, 26, 30, 35, 41, 47,
55, 62, 69, 75, 79, 82, 84, 84, 83, 80, 76, 71, 65, 59, 54, 49, 46, 44, 43, 44,
46, 49, 52, 54, 56, 58, 57, 55, 52, 47, 41, 34, 26, 17, 7, -1, -9, -15, -19,
-20, -20, -18, -15, -10, -4, 2, 7, 12, 15, 16, 15, 13, 9, 5, -1, -7, -14, -21,
-27, -32, -35, -36, -35, -32, -27, -21, -14, -6, 1, 7, 13, 16, 18, 18, 17, 14,
11, 7, 3, -2, -5, -8, -9, -9, -7, -4, 0, 5, 11, 16, 21, 26, 28, 29, 28, 25, 21,
16, 11, 4, -2, -9, -15, -20, -23, -25, -26, -24, -22, -19, -16, -13, -10, -8,
-7, -7, -9, -13, -18, -24, -31, -37, -42, -48, -52, -54, -56, -55, -52, -48,
-43, -37, -31, -26, -20, -16, -13, -12, -12, -15, -19, -23, -28, -32, -36, -39,
-41, -42, -40, -36, -31, -23, -15, -5, 4, 13, 21, 28, 34, 38, 40, 39, 36, 32,
27, 21, 16, 12, 8, 6, 4, 4, 6, 10, 15, 21, 26, 31, 36, 40, 42, 43, 42, 39, 35,
29, 22, 16, 9, 2, -3, -8, -11, -13, -13, -11, -9, -6, -4, -1, 0, 2, 2, 0, -2,
-6, -11, -17, -25, -31, -38, -44, -49, -52, -54, -54, -52, -48, -43, -37, -31,
-26, -20, -16, -13, -11, -10, -10, -12, -14, -16, -19, -21, -23, -24, -23, -21,
-17, -11, -3, 5, 14, 22, 30, 37, 43, 48, 51, 52, 51, 49, 45, 41, 36, 32, 28, 25,
24, 24, 26, 30, 35, 42, 50, 57, 64, 70, 75, 77, 78, 76, 73, 68, 61, 53, 43, 34,
25, 17, 11, 6, 3, 2, 2, 4, 8, 12, 15, 18, 20, 21, 20, 17, 13, 8, 1, -6, -14,
-21, -29, -35, -40, -43, -44, -43, -41, -37, -32, -26, -19, -14, -10, -7, -5,
-5, -6, -9, -12, -17, -22, -26, -30, -32, -32, -31, -28, -24, -18, -10, -2, 6,
14, 21, 26, 30, 33, 33, 32, 30, 27, 24, 19, 16, 13, 11, 10, 11, 13, 16, 21, 26,
32, 37, 42, 46, 48, 47, 45, 41, 35, 27, 18, 9, -1, -11, -19, -25, -30, -33, -33,
-33, -31, -27, -24, -19, -16, -12, -10, -11, -13, -17, -23, -30, -38, -46, -55,
-64, -72, -78, -82, -85, -85, -84, -81, -76, -71, -66, -60, -54, -50, -46, -44,
-44, -45, -46, -49, -52, -55, -59, -61, -62, -61, -59, -54, -48, -40, -32, -23,
-14, -5, 3, 9, 14, 18, 19, 19, 19, 18, 16, 14, 12, 10, 10, 11, 14, 18, 23, 29,
36, 42, 48, 54, 59, 63, 65, 66, 65, 63, 60, 56, 52, 47, 42, 38, 34, 32, 32, 33,
35, 39, 43, 47, 50, 53, 55, 56, 54, 51, 46, 40, 33, 25, 17, 10, 3, -3, -7, -10,
-10, -9, -6, -2, 3, 9, 15, 20, 24, 27, 29, 29, 27, 24, 20, 15, 9, 3, -3, -7,
-11, -13, -14, -13, -10, -6, 0, 5, 11, 16, 20, 23, 25, 25, 23, 20, 16, 11, 6, 1,
-4, -8, -10, -12, -12, -10, -8, -4, 0, 5, 8, 12, 14, 14, 14, 12, 9, 4, -2, -9,
-16, -22, -29, -34, -37, -40, -40, -39, -37, -33, -29, -24, -20, -16, -13, -12,
-13, -14, -18, -23, -28, -34, -40, -45, -49, -52, -53, -53, -50, -46, -40, -33,
-26, -19, -13, -7, -3, 0, 1, 0, -2, -5, -9, -14, -19, -22, -25, -27, -27, -25,
-22, -17, -11, -3, 5, 13, 21, 28, 34, 38, 40, 40, 39, 35, 31, 25, 19, 13, 8, 4,
1, 0, 0, 2, 5, 9, 13, 17, 21, 24, 26, 27, 26, 23, 20, 15, 8, 1, -6, -13, -19,
-24, -27, -29, -30, -29, -27, -23, -19, -15, -11, -7, -5, -4, -5, -7, -10, -14,
-19, -25, -30, -36, -40, -43, -44, -43, -40, -36, -31, -25, -18, -12, -6, -1, 3,
5, 7, 7, 6, 4, 2, 0, -2, -4, -4, -4, -2, 1, 5, 10, 16, 22, 29, 35, 41, 46, 49,
52, 52, 51, 49, 46, 42, 37, 32, 28, 24, 21, 19, 19, 20, 22, 26, 30, 34, 38, 42,
45, 47, 47, 46, 44, 40, 36, 30, 24, 17, 10, 5, -1, -5, -7, -9, -10, -10, -8, -6,
-4, -2, 0, 1, 1, -1, -3, -5, -9, -13, -18, -23, -27, -31, -33, -35, -34, -33,
-29, -25, -20, -15, -10, -5, -1, 3, 5, 6, 6, 5, 3, 1, -1, -3, -5, -6, -6, -5,
-3, -1, 3, 8, 12, 18, 23, 28, 32, 35, 36, 36, 35, 33, 30, 26, 23, 19, 15, 12,
11, 10, 11, 13, 16, 19, 22, 25, 28, 30, 30, 29, 28, 24, 19, 12, 5, -3, -10, -18,
-25, -32, -37, -40, -42, -42, -41, -39, -37, -34, -32, -29, -28, -27, -27, -29,
-32, -37, -42, -48, -53, -59, -64, -68, -71, -72, -72, -71, -68, -64, -59, -55,
-50, -46, -42, -40, -38, -37, -38, -39, -41, -43, -46, -47, -48, -47, -46, -43,
-39, -33, -27, -19, -12, -4, 3, 9, 14, 18, 21, 23, 23, 22, 20, 18, 16, 14, 13,
12, 13, 14, 18, 21, 26, 31, 37, 41, 45, 48, 51, 52, 52, 50, 48, 44, 40, 35, 30,
26, 23, 21, 20, 20, 21, 23, 26, 30, 34, 37, 40, 41, 41, 41, 39, 36, 33, 28, 22,
16, 10, 4, 0, -4, -6, -7, -7, -5, -2, 2, 7, 11, 15, 18, 20, 22, 22, 22, 20, 18,
14, 11, 7, 3, 0, -2, -4, -4, -3, -2, 1, 4, 8, 13, 17, 20, 22, 23, 23, 22, 20,
17, 14, 10, 5, 1, -3, -5, -7, -7, -7, -6, -4, -1, 2, 5, 9, 11, 12, 13, 12, 10,
8, 4, 0, -5, -10, -14, -19, -22, -25, -27, -27, -27, -26, -25, -23, -20, -18,
-17, -15, -15, -16, -17, -19, -22, -25, -29, -33, -36, -39, -41, -42, -41, -39,
-37, -33, -29, -24, -20, -15, -11, -8, -7, -6, -7, -8, -11, -14, -17, -20, -23,
-25, -26, -26, -25, -22, -19, -15, -10, -5, 1, 6, 10, 14, 17, 18, 19, 18, 17,
14, 11, 8, 5, 2, 0, -1, 0, 1, 3, 5, 8, 11, 14, 17, 19, 21, 21, 21, 19, 16, 13,
9, 5, 1, -3, -6, -9, -10, -11, -10, -9, -7, -5, -2, 0, 2, 4, 5, 6, 5, 4, 2, 0,
-3, -6, -9, -12, -15, -17, -18, -17, -16, -15, -12, -10, -7, -5, -3, -1, 0, 0,
0, -1, -2, -4, -5, -7, -8, -9, -9, -8, -7, -5, -2, 1, 5, 9, 13, 17, 20, 22, 24,
24, 24, 23, 22, 20, 17, 14, 11, 8, 6, 4, 4, 4, 6, 8, 10, 13, 16, 19, 21, 24, 25,
26, 26, 25, 23, 20, 18, 15, 12, 9, 6, 4, 3, 2, 2, 3, 4, 5, 6, 8, 9, 10, 10, 10,
9, 8, 6, 3, 0, -2, -5, -8, -10, -12, -13, -13, -13, -11, -9, -6, -3, 0, 3, 6, 8,
10, 11, 11, 10, 9, 8, 6, 4, 3, 2, 1, 1, 1, 2, 3, 5, 7, 9, 11, 13, 15, 17, 17,
17, 17, 16, 14, 12, 10, 7, 5, 4, 2, 2, 1, 2, 3, 4, 5, 7, 8, 9, 10, 10, 9, 8, 5,
1, -3, -7, -12, -17, -21, -26, -29, -32, -34, -35, -36, -35, -34, -33, -32, -31,
-30, -30, -29, -30, -31, -33, -35, -38, -41, -44, -47, -49, -51, -53, -53, -53,
-52, -50, -48, -46, -43, -40, -37, -35, -33, -32, -31, -31, -32, -33, -34, -35,
-36, -36, -36, -34, -32, -29, -26, -22, -17, -13, -8, -4, 0, 4, 7, 10, 12, 13,
14, 14, 14, 14, 14, 14, 15, 16, 18, 20, 22, 25, 28, 31, 34, 36, 38, 39, 40, 40,
39, 38, 36, 34, 32, 31, 29, 28, 27, 27, 28, 29, 32, 34, 36, 38, 39, 40, 41, 41,
40, 38, 36, 33, 29, 25, 21, 17, 14, 11, 9, 8, 7, 7, 9, 10, 13, 15, 17, 19, 21,
21, 22, 21, 20, 19, 16, 13, 11, 8, 6, 5, 4, 3, 4, 5, 7, 9, 11, 12, 14, 15, 16,
16, 15, 14, 12, 10, 7, 4, 1, -2, -4, -6, -8, -9, -9, -9, -9, -8, -6, -4, -3, -2,
-1, -2, -2, -4, -5, -8, -10, -13, -16, -19, -21, -23, -25, -26, -27, -27, -26,
-26, -25, -24, -23, -23, -23, -23, -24, -25, -27, -29, -31, -33, -34, -35, -36,
-36, -36, -35, -33, -31, -29, -26, -22, -19, -16, -13, -10, -8, -7, -6, -7, -7,
-8, -9, -10, -11, -12, -12, -12, -11, -10, -8, -5, -2, 1, 4, 7, 10, 13, 15, 17,
18, 18, 17, 16, 15, 13, 12, 10, 9, 8, 8, 7, 7, 7, 8, 8, 9, 9, 10, 10, 10, 9, 8,
6, 3, 1, -2, -5, -8, -11, -13, -15, -17, -18, -18, -18, -18, -18, -17, -16, -15,
-14, -14, -13, -13, -13, -14, -15, -15, -16, -17, -18, -18, -17, -17, -16, -14,
-13, -11, -9, -7, -5, -3, -1, 0, 2, 2, 3, 3, 4, 4, 5, 6, 7, 8, 10, 13, 16, 19,
22, 26, 29, 32, 34, 37, 38, 39, 39, 39, 38, 36, 34, 32, 30, 28, 26, 24, 23, 22,
22, 23, 23, 24, 24, 25, 25, 24, 23, 22, 20, 17, 15, 12, 8, 5, 2, -1, -4, -6, -8,
-9, -9, -10, -10, -9, -9, -9, -10, -10, -11, -12, -14, -16, -18, -21, -23, -25,
-26, -27, -27, -27, -26, -25, -24, -21, -19, -16, -13, -10, -7, -5, -2, 0, 1, 3,
4, 4, 5, 5, 6, 7, 8, 10, 12, 14, 17, 20, 23, 26, 28, 31, 33, 34, 35, 34, 34, 32,
31, 29, 27, 25, 23, 22, 22, 21, 21, 22, 22, 22, 23, 24, 24, 24, 23, 21, 19, 16,
12, 8, 3, -3, -9, -15, -20, -25, -30, -34, -37, -39, -42, -43, -44, -45, -45,
-45, -46, -47, -49, -51, -52, -55, -57, -60, -63, -66, -68, -70, -71, -71, -71,
-70, -69, -67, -65, -62, -59, -55, -53, -50, -48, -46, -44, -43, -42, -41, -40,
-40, -39, -37, -35, -33, -29, -26, -21, -17, -12, -7, -2, 3, 7, 11, 15, 18, 20,
22, 23, 24, 25, 26, 27, 28, 29, 30, 32, 35, 37, 39, 41, 43, 45, 46, 47, 48, 47,
46, 45, 43, 40, 37, 34, 31, 28, 26, 24, 23, 22, 22, 23, 24, 25, 26, 27, 28, 28,
28, 26, 25, 22, 19, 16, 13, 10, 7, 4, 2, 0, -1, -2, -1, -1, 1, 2, 4, 6, 8, 9,
10, 11, 11, 11, 11, 10, 10, 9, 8, 8, 7, 8, 8, 10, 12, 14, 16, 18, 20, 22, 24,
26, 26, 26, 25, 24, 22, 20, 18, 16, 14, 12, 11, 9, 9, 8, 9, 9, 9, 10, 10, 10, 9,
9, 8, 6, 4, 2, -2, -5, -8, -11, -14, -17, -19, -21, -22, -23, -24, -24, -24,
-24, -24, -25, -25, -25, -26, -27, -29, -31, -34, -36, -39, -41, -42, -43, -43,
-43, -42, -40, -38, -35, -32, -29, -26, -23, -20, -17, -15, -13, -12, -12, -12,
-12, -13, -14, -14, -15, -15, -14, -14, -12, -11, -8, -6, -3, -1, 2, 5, 7, 9,
11, 12, 12, 12, 12, 11, 9, 8, 7, 6, 5, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 4, 3, 1,
-1, -3, -6, -8, -11, -13, -16, -18, -19, -20, -21, -21, -21, -20, -19, -18, -17,
-16, -15, -14, -14, -13, -13, -12, -13, -12, -12, -12, -12, -11, -10, -8, -7,
-5, -2, 0, 2, 5, 7, 9, 11, 13, 14, 15, 15, 16, 16, 17, 17, 18, 19, 20, 21, 23,
25, 27, 30, 32, 34, 36, 38, 39, 40, 40, 39, 38, 37, 35, 32, 30, 27, 25, 23, 20,
18, 17, 16, 15, 14, 14, 13, 13, 12, 11, 9, 7, 5, 2, 0, -3, -6, -8, -11, -13,
-15, -17, -18, -19, -19, -18, -18, -17, -17, -17, -16, -16, -17, -17, -18, -19,
-21, -22, -22, -23, -23, -23, -22, -21, -20, -18, -15, -12, -10, -7, -3, -1, 3,
5, 8, 10, 11, 12, 13, 13, 14, 15, 17, 18, 20, 22, 24, 27, 30, 32, 35, 37, 39,
40, 41, 41, 41, 39, 37, 35, 32, 29, 25, 22, 20, 17, 16, 14, 13, 13, 13, 13, 13,
13, 12, 11, 10, 8, 5, 2, -2, -7, -12, -17, -22, -26, -31, -34, -37, -40, -42,
-44, -45, -46, -47, -47, -47, -48, -49, -50, -51, -53, -55, -57, -59, -61, -62,
-64, -64, -64, -63, -62, -60, -58, -55, -52, -48, -45, -42, -39, -37, -35, -34,
-32, -31, -31, -30, -29, -29, -27, -26, -24, -22, -19, -16, -13, -10, -6, -2, 1,
5, 8, 10, 12, 14, 15, 16, 16, 16, 16, 17, 17, 17, 19, 20, 22, 23, 25, 26, 28,
29, 30, 30, 30, 29, 28, 26, 24, 22, 19, 17, 14, 12, 10, 9, 8, 8, 8, 8, 9, 10,
12, 13, 14, 15, 16, 16, 16, 16, 15, 14, 13, 11, 10, 9, 8, 7, 8, 8, 8, 9, 11, 12,
14, 15, 17, 18, 19, 20, 21, 21, 21, 21, 22, 22, 22, 23, 23, 23, 24, 25, 26, 27,
28, 29, 30, 31, 32, 32, 31, 31, 30, 28, 26, 24, 22, 19, 17, 15, 14, 12, 10, 9,
8, 7, 6, 5, 3, 2, 0, -2, -4, -7, -9, -12, -15, -18, -21, -24, -26, -27, -28,
-29, -30, -30, -30, -29, -29, -29, -29, -29, -29, -30, -32, -33, -35, -37, -39,
-41, -42, -43, -44, -43, -42, -41, -39, -37, -34, -32, -29, -26, -23, -20, -17,
-15, -13, -12, -11, -10, -9, -8, -8, -7, -6, -5, -3, -2, 0, 2, 4, 6, 7, 9, 10,
12, 13, 14, 14, 14, 14, 14, 13, 12, 11, 10, 9, 8, 7, 7, 7, 8, 8, 9, 9, 9, 9, 9,
8, 7, 6, 4, 1, -1, -4, -7, -10, -13, -16, -18, -20, -22, -22, -23, -23, -23,
-23, -22, -22, -22, -22, -22, -22, -23, -23, -24, -25, -26, -26, -26, -26, -25,
-24, -22, -20, -17, -14, -11, -7, -4, -2, 1, 3, 4, 5, 6, 7, 7, 7, 7, 8, 9, 10,
11, 13, 15, 17, 19, 22, 24, 27, 29, 32, 33, 35, 36, 37, 38, 38, 38, 37, 36, 36,
34, 34, 33, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 20, 18, 16, 14, 12, 9, 6, 3,
1, -2, -4, -6, -7, -9, -10, -11, -12, -12, -12, -13, -13, -13, -14, -15, -16,
-17, -18, -19, -21, -22, -23, -24, -24, -24, -24, -23, -23, -22, -20, -18, -16,
-14, -12, -11, -9, -8, -7, -5, -4, -4, -3, -2, -1, 1, 3, 6, 8, 11, 14, 17, 20,
23, 26, 29, 31, 32, 33, 33, 32, 32, 31, 30, 28, 27, 25, 24, 23, 22, 21, 21, 21,
21, 21, 21, 21, 21, 21, 20, 18, 16, 14, 11, 8, 5, 1, -2, -6, -10, -13, -16, -18,
-21, -23, -25, -27, -28, -30, -31, -33, -35, -37, -40, -43, -45, -48, -51, -53,
-56, -58, -60, -62, -63, -63, -63, -62, -61, -59, -57, -55, -52, -49, -47, -45,
-44, -43, -42, -41, -40, -40, -40, -39, -38, -37, -35, -33, -31, -28, -24, -21,
-17, -13, -9, -6, -2, 1, 4, 6, 8, 9, 11, 12, 13, 14, 15, 16, 17, 19, 22, 24, 27,
30, 32, 35, 37, 39, 40, 41, 41, 41, 40, 39, 37, 35, 33, 30, 28, 26, 24, 23, 22,
21, 21, 21, 21, 22, 22, 23, 23, 23, 22, 22, 20, 19, 18, 16, 14, 13, 11, 9, 7, 6,
5, 5, 5, 5, 5, 6, 7, 8, 9, 9, 10, 10, 9, 9, 8, 8, 7, 7, 6, 6, 6, 6, 7, 8, 9, 11,
13, 15, 16, 18, 20, 21, 22, 23, 22, 22, 21, 20, 19, 18, 17, 16, 14, 13, 12, 12,
11, 11, 11, 10, 10, 9, 8, 7, 6, 4, 1, -1, -4, -6, -9, -11, -13, -15, -17, -18,
-19, -20, -20, -20, -21, -21, -22, -22, -23, -24, -26, -27, -29, -32, -34, -36,
-39, -40, -42, -43, -43, -43, -43, -43, -41, -40, -38, -36, -34, -33, -31, -29,
-28, -27, -26, -25, -25, -24, -23, -22, -21, -19, -18, -15, -13, -11, -8, -5,
-3, 0, 2, 3, 5, 6, 6, 6, 6, 6, 5, 4, 4, 3, 3, 4, 5, 6, 7, 8, 10, 12, 13, 14, 15,
16, 16, 15, 14, 12, 11, 8, 6, 3, 1, -1, -3, -5, -6, -6, -6, -7, -6, -6, -6, -6,
-6, -6, -7, -8, -10, -11, -13, -14, -16, -17, -19, -20, -20, -20, -19, -17, -15,
-13, -10, -8, -5, -2, 0, 2, 4, 5, 5, 5, 6, 5, 5, 5, 5, 5, 5, 6, 7, 9, 12, 14,
17, 19, 22, 24, 27, 29, 31, 31, 32, 32, 32, 32, 31, 31, 30, 29, 28, 27, 27, 27,
27, 27, 27, 27, 26, 26, 26, 25, 24, 22, 19, 17, 14, 11, 7, 4, 1, -2, -5, -7,
-10, -11, -12, -13, -13, -13, -13, -13, -13, -13, -13, -14, -15, -16, -17, -19,
-20, -21, -23, -24, -25, -26, -26, -26, -25, -23, -22, -20, -18, -15, -13, -11,
-9, -7, -6, -5, -4, -3, -3, -2, -1, 0, 2, 3, 5, 8, 11, 14, 17, 21, 24, 26, 29,
31, 33, 35, 35, 35, 34, 33, 32, 31, 29, 28, 26, 25, 23, 22, 21, 21, 21, 20, 20,
19, 18, 17, 15, 14, 11, 8, 5, 1, -2, -6, -9, -12, -15, -18, -21, -23, -25, -27,
-29, -31, -33, -35, -37, -39, -41, -44, -46, -49, -52, -54, -57, -59, -61, -62,
-63, -63, -63, -63, -62, -60, -59, -56, -54, -52, -50, -48, -45, -43, -41, -40,
-38, -37, -36, -34, -33, -30, -28, -25, -22, -19, -16, -12, -8, -4, 0, 3, 6, 9,
11, 13, 15, 16, 17, 17, 18, 18, 19, 20, 21, 22, 24, 26, 28, 30, 33, 35, 37, 39,
39, 39, 39, 37, 36, 34, 32, 29, 26, 23, 21, 18, 17, 15, 14, 14, 13, 13, 13, 13,
12, 12, 11, 10, 9, 7, 5, 4, 2, 1, -1, -2, -3, -4, -3, -3, -2, -1, 1, 2, 4, 6, 8,
10, 11, 11, 12, 12, 12, 11, 11, 11, 11, 11, 11, 12, 13, 15, 17, 19, 22, 24, 27,
29, 32, 34, 36, 37, 37, 37, 37, 36, 35, 34, 32, 31, 30, 28, 27, 26, 25, 25, 24,
23, 23, 22, 21, 20, 19, 17, 14, 11, 8, 4, -1, -5, -9, -13, -16, -20, -23, -25,
-26, -28, -28, -29, -29, -30, -30, -31, -32, -33, -35, -37, -39, -42, -44, -47,
-49, -51, -53, -54, -55, -55, -54, -53, -51, -50, -47, -45, -43, -40, -38, -36,
-34, -32, -30, -29, -28, -27, -25, -24, -22, -20, -18, -15, -12, -8, -5, -2, 2,
5, 8, 10, 12, 14, 16, 16, 17, 17, 17, 16, 16, 16, 15, 15, 15, 15, 16, 17, 17,
18, 19, 19, 20, 20, 20, 19, 18, 16, 14, 12, 9, 6, 3, 0, -2, -4, -6, -8, -9, -9,
-10, -10, -10, -10, -11, -11, -12, -13, -15, -17, -19, -21, -23, -25, -26, -28,
-28, -28, -28, -27, -25, -23, -20, -17, -14, -11, -8, -6, -3, -1, 0, 1, 2, 2, 3,
3, 4, 4, 5, 6, 8, 11, 13, 16, 20, 23, 26, 29, 31, 33, 35, 36, 37, 37, 36, 36,
35, 34, 34, 33, 33, 32, 32, 32, 32, 33, 33, 32, 33, 33, 32, 31, 29, 27, 24, 21,
18, 15, 11, 7, 4, 1, -2, -5, -7, -9, -10, -11, -11, -12, -12, -13, -13, -14,
-15, -16, -18, -19, -21, -23, -25, -26, -28, -29, -29, -29, -29, -28, -27, -25,
-23, -20, -18, -15, -13, -11, -9, -8, -7, -7, -7, -6, -6, -6, -5, -4, -3, -1, 2,
4, 7, 11, 14, 17, 21, 24, 26, 28, 30, 31, 31, 31, 30, 29, 28, 27, 25, 24, 23,
22, 22, 21, 21, 21, 20, 20, 19, 18, 17, 15, 13, 11, 9, 6, 2, -1, -4, -7, -11,
-14, -16, -18, -21, -22, -24, -25, -27, -28, -29, -31, -33, -34, -37, -39, -41,
-44, -46, -49, -51, -53, -55, -56, -57, -57, -57, -56, -55, -54, -52, -50, -49,
-47, -45, -43, -41, -40, -39, -37, -36, -35, -34, -32, -31, -29, -26, -24, -21,
-18, -14, -11, -7, -4, 0, 2, 5, 7, 9, 10, 11, 11, 12, 12, 13, 13, 14, 15, 16,
18, 20, 22, 24, 27, 29, 31, 32, 34, 34, 35, 34, 34, 32, 31, 29, 27, 25, 23, 21,
19, 18, 17, 17, 17, 17, 17, 17, 17, 17, 16, 16, 15, 14, 12, 10, 8, 6, 4, 2, 1,
1, 0, 0, 1, 2, 3, 4, 6, 8, 9, 11, 12, 12, 13, 13, 12, 12, 11, 10, 10, 9, 9, 9,
9, 10, 11, 13, 15, 17, 19, 22, 24, 26, 27, 28, 29, 28, 28, 27, 26, 24, 23, 21,
20, 19, 19, 18, 19, 19, 19, 20, 20, 21, 21, 21, 20, 18, 16, 14, 11, 7, 3, 0, -4,
-7, -10, -13, -15, -17, -18, -19, -19, -19, -19, -19, -19, -19, -19, -20, -21,
-23, -24, -26, -29, -31, -33, -35, -37, -38, -39, -39, -39, -38, -37, -36, -35,
-34, -32, -31, -30, -29, -28, -28, -27, -27, -26, -26, -26, -25, -25, -25, -23,
-22, -20, -18, -16, -13, -11, -9, -6, -4, -2, -1, 0, 1, 2, 2, 1, 1, 0, 0, -1,
-1, -2, -1, -1, 0, 1, 2, 3, 4, 5, 6, 6, 6, 6, 5, 4, 3, 1, 0, -2, -3, -4, -5, -6,
-6, -6, -6, -6, -5, -5, -5, -4, -4, -4, -4, -5, -6, -7, -8, -9, -10, -11, -12,
-13, -13, -13, -12, -11, -9, -8, -6, -4, -2, 0, 2, 3, 5, 6, 7, 8, 9, 9, 10, 10,
11, 11, 12, 12, 13, 14, 15, 17, 18, 19, 21, 22, 23, 24, 24, 25, 24, 24, 23, 22,
22, 21, 20, 19, 19, 18, 18, 18, 18, 19, 19, 19, 19, 19, 18, 17, 16, 15, 13, 11,
9, 7, 4, 2, 0, -2, -3, -4, -5, -6, -6, -6, -6, -6, -6, -6, -7, -7, -8, -9, -10,
-11, -12, -13, -14, -15, -15, -15, -15, -14, -12, -11, -9, -7, -5, -3, -1, 0, 1,
2, 2, 3, 3, 3, 3, 2, 2, 3, 3, 4, 6, 7, 9, 11, 13, 15, 18, 20, 22, 23, 25, 25,
26, 26, 26, 25, 25, 23, 22, 21, 20, 18, 18, 17, 16, 16, 15, 15, 14, 13, 12, 11,
9, 7, 5, 3, 0, -3, -5, -8, -11, -14, -16, -18, -20, -22, -23, -24, -25, -26,
-27, -28, -29, -30, -31, -33, -34, -36, -38, -40, -42, -43, -45, -47, -48, -49,
-49, -49, -49, -48, -47, -46, -45, -43, -42, -40, -39, -38, -37, -36, -35, -34,
-33, -32, -31, -30, -28, -26, -24, -22, -19, -17, -14, -11, -8, -5, -2, 0, 2, 4,
5, 6, 7, 8, 8, 9, 9, 10, 10, 11, 12, 13, 15, 16, 18, 19, 21, 22, 23, 24, 25, 26,
25, 25, 25, 24, 23, 22, 21, 20, 19, 18, 17, 17, 16, 16, 15, 14, 14, 14, 13, 12,
11, 11, 10, 8, 7, 6, 4, 3, 3, 2, 1, 1, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 11,
11, 11, 10, 11, 10, 10, 10, 11, 12, 12, 14, 15, 17, 18, 20, 21, 23, 24, 25, 26,
27, 27, 27, 27, 27, 26, 26, 25, 25, 24, 24, 24, 24, 25, 25, 25, 26, 26, 26, 25,
24, 23, 21, 19, 17, 15, 12, 9, 6, 3, 0, -2, -5, -7, -9, -10, -12, -13, -14, -15,
-16, -17, -18, -19, -21, -22, -24, -26, -28, -30, -32, -34, -35, -37, -38, -39,
-40, -41, -40, -40, -40, -39, -39, -38, -37, -37, -36, -36, -36, -36, -36, -35,
-35, -35, -34, -34, -32, -31, -29, -27, -24, -21, -18, -16, -13, -10, -8, -5,
-3, -2, -1, 0, 1, 1, 2, 2, 2, 3, 3, 3, 4, 5, 7, 8, 9, 10, 12, 13, 13, 14, 14,
14, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 4, 4, 3, 3, 3, 3, 3, 3, 2, 1, 0, -1,
-2, -4, -5, -7, -8, -10, -11, -12, -13, -13, -13, -12, -12, -11, -10, -8, -7,
-6, -4, -3, -2, -2, -1, -1, 0, 0, 1, 1, 2, 3, 4, 4, 6, 7, 8, 9, 10, 12, 13, 14,
15, 16, 17, 18, 18, 18, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 20, 20, 20, 20,
20, 20, 20, 20, 19, 18, 17, 16, 14, 13, 11, 10, 8, 6, 5, 3, 2, 0, -1, -2, -3,
-4, -4, -5, -6, -6, -7, -8, -9, -10, -10, -11, -12, -12, -13, -13, -13, -13,
-13, -12, -12, -11, -10, -9, -8, -7, -6, -5, -4, -4, -3, -3, -2, -2, -1, -1, 0,
1, 2, 3, 5, 7, 8, 10, 12, 13, 15, 16, 18, 19, 20, 21, 21, 22, 22, 22, 22, 22,
21, 21, 21, 20, 20, 20, 19, 19, 18, 17, 16, 15, 13, 12, 10, 8, 6, 4, 1, -1, -4,
-6, -8, -10, -12, -14, -15, -17, -18, -20, -21, -23, -24, -26, -27, -29, -31,
-32, -34, -36, -38, -40, -42, -44, -45, -46, -47, -48, -48, -48, -47, -47, -46,
-45, -44, -42, -41, -40, -39, -38, -37, -37, -35, -34, -33, -32, -31, -29, -27,
-25, -22, -20, -17, -14, -11, -8, -5, -2, 0, 2, 4, 5, 6, 8, 8, 9, 10, 10, 11,
12, 13, 14, 15, 17, 18, 20, 22, 23, 24, 25, 26, 27, 28, 27, 27, 26, 26, 25, 24,
23, 21, 20, 20, 19, 18, 17, 17, 17, 16, 16, 16, 15, 14, 14, 13, 12, 11, 9, 8, 7,
6, 5, 4, 3, 3, 3, 3, 4, 4, 5, 6, 8, 9, 10, 11, 11, 12, 13, 13, 13, 13, 14, 13,
14, 14, 14, 15, 16, 16, 18, 19, 20, 21, 22, 23, 24, 25, 26, 26, 26, 26, 26, 26,
25, 24, 24, 23, 23, 22, 22, 22, 22, 21, 21, 20, 20, 19, 18, 17, 16, 14, 12, 10,
8, 5, 3, 0, -2, -5, -7, -9, -10, -12, -14, -15, -16, -18, -19, -20, -21, -22,
-24, -25, -26, -28, -29, -30, -31, -32, -33, -34, -34, -35, -34, -34, -34, -33,
-33, -32, -32, -31, -31, -31, -30, -30, -30, -30, -29, -29, -28, -27, -26, -25,
-23, -22, -20, -18, -16, -14, -12, -10, -9, -7, -6, -5, -4, -3, -3, -2, -2, -1,
-1, -1, 0, 0, 1, 1, 2, 2, 3, 3, 4, 4, 4, 4, 3, 3, 3, 2, 1, 0, -1, -1, -2, -3,
-4, -4, -4, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5, -6, -6, -6, -7, -7, -8,
-8, -8, -8, -8, -7, -7, -6, -5, -4, -2, -1, 0, 1, 2, 3, 5, 5, 6, 8, 9, 10, 11,
12, 13, 14, 16, 17, 18, 20, 21, 22, 23, 24, 24, 25, 25, 25, 25, 25, 25, 24, 24,
23, 22, 22, 21, 20, 20, 19, 18, 18, 17, 16, 15, 15, 14, 13, 12, 11, 9, 8, 7, 5,
4, 2, 0, -2, -4, -5, -7, -8, -9, -10, -11, -12, -13, -14, -15, -16, -16, -17,
-17, -17, -17, -17, -17, -17, -17, -17, -16, -16, -15, -14, -13, -12, -10, -9,
-7, -6, -4, -2, -1, 1, 2, 4, 5, 7, 8, 9, 10, 11, 12, 14, 15, 16, 18, 19, 20, 21,
23, 23, 24, 25, 26, 26, 26, 26, 26, 26, 26, 25, 25, 24, 23, 23, 22, 21, 20, 19,
18, 16, 15, 13, 11, 9, 7, 5, 2, -1, -3, -6, -9, -12, -15, -17, -20, -22, -24,
-26, -28, -30, -31, -33, -34, -35, -37, -38, -39, -41, -42, -43, -44, -45, -46,
-46, -47, -47, -48, -48, -47, -47, -46, -45, -44, -43, -41, -40, -39, -37, -36,
-34, -33, -31, -30, -28, -26, -25, -23, -21, -18, -16, -14, -11, -8, -6, -3, -1,
2, 4, 6, 8, 10, 12, 13, 14, 15, 16, 16, 17, 17, 18, 18, 18, 19, 19, 20, 20, 20,
21, 21, 21, 21, 21, 21, 20, 20, 19, 18, 17, 16, 15, 13, 12, 11, 11, 10, 9, 9, 8,
8, 8, 7, 7, 6, 5, 5, 4, 3, 2, 2, 1, 0, 0, -1, -1, -1, -1, 0, 0, 1, 2, 3, 4, 5,
6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 15, 16, 17, 18, 19, 19, 20, 21, 22, 22, 24,
24, 25, 26, 26, 26, 27, 27, 27, 26, 26, 26, 25, 25, 24, 23, 23, 22, 21, 20, 20,
19, 18, 17, 16, 15, 13, 12, 11, 9, 8, 6, 4, 2, 0, -2, -4, -6, -8, -10, -11, -13,
-15, -16, -18, -19, -20, -21, -23, -24, -25, -26, -27, -27, -28, -28, -29, -29,
-30, -30, -30, -30, -29, -29, -29, -29, -29, -28, -28, -27, -27, -26, -25, -25,
-24, -23, -23, -22, -21, -20, -19, -18, -17, -16, -15, -14, -12, -11, -11, -10,
-9, -8, -7, -6, -5, -4, -3, -2, -2, -1, 0, 0, 1, 1, 1, 2, 2, 2, 2, 2, 1, 1, 1,
0, 0, 0, 0, -1, -1, -1, -2, -2, -2, -2, -3, -3, -3, -3, -3, -4, -4, -4, -4, -4,
-4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -3, -3, -2, -2, -2, -1, -1, 0, 0, 1,
1, 1, 2, 3, 3, 4, 5, 5, 6, 7, 7, 8, 9, 10, 10, 11, 12, 12, 13, 13, 14, 14, 14,
14, 14, 14, 14, 14, 14, 14, 13, 13, 13, 12, 12, 12, 11, 11, 10, 10, 9, 9, 8, 7,
6, 6, 5, 4, 4, 3, 2, 1, 1, 0, 0, -1, -1, -2, -3, -3, -4, -4, -5, -5, -6, -6, -7,
-7, -7, -8, -8, -8, -8, -8, -8, -8, -7, -7, -7, -6, -6, -5, -4, -4, -3, -3, -2,
-1, -1, 0, 1, 1, 2, 3, 4, 5, 5, 6, 7, 7, 8, 9, 9, 10, 10, 10, 11, 11, 11, 11,
12, 12, 12, 12, 12, 11, 11, 11, 11, 11, 10, 10, 9, 9, 9, 8, 8, 7, 6, 6, 5, 4, 3,
2, 0, -1, -2, -3, -4, -6, -7, -8, -9, -10, -11, -12, -13, -13, -14, -15, -16,
-17, -18, -18, -19, -20, -21, -21, -22, -22, -23, -23, -23, -23, -23, -23, -23,
-23, -23, -23, -22, -22, -22, -21, -21, -20, -20, -20, -19, -19, -18, -18, -17,
-16, -16, -15, -14, -13, -12, -11, -11, -10, -9, -8, -7, -6, -5, -4, -3, -3, -2,
-1, 0, 0, 1, 1, 2, 2, 3, 3, 4, 4, 4, 5, 5, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 5, 5, 5, 5, 5, 5, 5,
5, 5, 5, 5, 6, 6, 6, 6, 7, 7, 7, 8, 8, 8, 8, 8, 8, 9, 9, 9, 9, 10, 10, 10, 10,
10, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 10, 10, 10, 10, 9, 9, 9, 8, 8, 8, 7,
7, 7, 6, 6, 5, 5, 4, 4, 3, 3, 2, 2, 1, 0, 0, -1, -2, -3, -3, -4, -5, -5, -6, -6,
-7, -7, -8, -8, -9, -9, -10, -10, -11, -11, -11, -12, -12, -12, -12, -12, -12,
-13, -13, -12, -12, -12, -12, -12, -12, -12, -11, -11, -11, -11, -11, -10, -10,
-10, -9, -9, -9, -9, -8, -8, -8, -7, -7, -6, -6, -6, -5, -5, -4, -4, -4, -3, -3,
-3, -2, -2, -2, -2, -2, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -2, -2, -2, -2, -2, -2, -2, -3, -3, -3, -3, -3, -3, -3, -3, -3,
-3, -3, -3, -3, -3, -3, -3, -2, -2, -2, -2, -2, -2, -1, -1, -1, -1, -1, 0, 0, 0,
0, 1, 1, 1, 1, 2, 2, 2, 3, 3, 3, 3, 4, 4, 4, 5, 5, 5, 5, 5, 6, 6, 6, 6, 6, 6, 6,
6, 6, 5, 5, 5, 5, 5, 5, 4, 4, 4, 4, 4, 3, 3, 3, 2, 2, 2, 2, 1, 1, 0, 0, 0, -1,
-1, -1, -1, -2, -2, -2, -2, -3, -3, -3, -3, -3, -3, -4, -4, -4, -4, -4, -4, -4,
-4, -4, -4, -4, -4, -4, -3, -3, -3, -3, -3, -2, -2, -2, -1, -1, -1, -1, 0, 0, 0,
1, 1, 1, 2, 2, 2, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 4, 4, 4, 4,
4, 4, 4, 4, 3, 3, 3, 3, 2, 2, 2, 2, 1, 1, 1, 0, 0, -1, -1, -1, -2, -2, -3, -3,
-3, -4, -4, -4, -5, -5, -5, -5, -6, -6, -6, -6, -6, -6, -7, -7, -7, -7, -7, -7,
-7, -7, -7, -7, -7, -7, -7, -6, -6, -6, -6, -6, -6, -5, -5, -5, -5, -5, -4, -4,
-4, -4, -3, -3, -3, -3, -2, -2, -2, -2, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 1,
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, };

#endif /* MARIMBASEVEN_H_ */