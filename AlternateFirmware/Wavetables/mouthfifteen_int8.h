#ifndef MOUTHFIFTEEN_H_
#define MOUTHFIFTEEN_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define MOUTHFIFTEEN_NUM_CELLS 3983
#define MOUTHFIFTEEN_SAMPLERATE 16384
 
const int8_t __attribute__((section(".progmem.data"))) MOUTHFIFTEEN_DATA [] =
{-1, -2, -3, -3, -3, -4, -4, -4, -5, -5, -5, -5, -5, -5, -4, -4, -4, -5, -4, -4,
-4, -4, -4, -3, -2, -2, -1, -1, 0, 0, 1, 2, 2, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4,
3, 3, 3, 2, 2, 2, 2, 1, 1, 0, -1, -1, -1, -2, -2, -2, -2, -2, -2, -1, -1, -1,
-1, 0, -1, -1, -1, 0, -2, 1, -1, -3, -2, -2, -2, -2, -2, -2, -2, -2, 0, -1, 5,
29, 28, 11, 12, -11, -19, -42, 0, 45, -9, -42, -55, -76, -83, -19, 33, 48, 45,
24, -10, -47, -73, -78, -52, -12, 36, 76, 100, 100, 74, 35, 15, 10, 16, 27, 47,
69, 74, 67, 43, 11, -16, -24, -10, 12, 23, 11, -14, -42, -67, -76, -68, -50,
-31, -26, -44, -74, -85, -79, -69, -51, -34, -27, -30, -40, -42, -35, -28, -15,
2, 6, 7, 22, 29, 34, 30, 19, 21, 30, 53, 63, 62, 58, 41, 27, 29, 33, 47, 72, 70,
50, 43, 45, 36, 30, 32, 20, 11, 12, 5, -2, -2, 4, 5, -5, -34, -52, -44, -47,
-47, -48, -51, -61, -56, -43, -69, -86, -72, -52, -44, -45, -48, -49, -39, -42,
-41, -26, -12, 13, 22, 18, 10, 23, 43, 36, 42, 46, 50, 68, 86, 79, 53, 46, 53,
63, 60, 59, 69, 53, 24, 8, 21, 30, 19, 8, -12, -16, -20, -23, -28, -35, -44,
-48, -25, -17, -34, -55, -68, -70, -59, -48, -25, -2, -14, -29, -32, -11, -20,
-27, 56, 81, 5, -39, -44, -20, 56, 99, 47, -48, -59, 12, 42, 24, -33, -59, -9,
24, 6, -30, -72, -67, -17, -25, -53, -25, 25, 2, -61, -63, -28, 32, 75, 31, -15,
6, 49, 70, 38, 6, 40, 104, 101, 43, 9, 24, 58, 81, 62, 18, 30, 52, 27, -11, -24,
2, 21, 11, -17, -29, -18, -25, -38, -46, -37, -15, -8, -46, -72, -46, -27, -20,
-33, -41, -50, -27, -11, -28, -21, -15, -9, -16, -29, -35, -9, 25, 23, 20, 25,
8, 15, 23, 11, 6, 60, 110, 62, 22, -29, -25, 43, 86, 57, -25, -26, 4, 47, 28,
-40, -63, -30, 14, -3, -37, -83, -83, -35, -29, -51, -52, -31, -43, -67, -69,
-47, 1, 11, -22, -39, -6, 17, 12, -6, -10, 45, 87, 71, 15, 7, 37, 73, 84, 62,
48, 55, 65, 43, 29, 25, 41, 52, 36, 18, 26, 24, -11, -21, 3, 19, 24, -3, -43,
-49, -22, -8, -30, -37, -51, -44, -37, -38, -55, -51, -35, -49, -40, -32, -21,
-26, -22, -23, -25, -22, -9, 50, 86, 24, -29, -44, -23, 54, 109, 55, -40, -16,
40, 64, 19, -35, -38, 14, 45, 0, -40, -64, -40, 1, -2, -39, -41, -26, -46, -58,
-28, 2, 10, -5, -29, -17, 29, 33, 1, -5, 27, 82, 91, 38, -18, 2, 56, 79, 75, 50,
33, 26, 18, 8, 17, 33, 22, 7, 3, -6, -25, -31, -34, -23, 3, 3, -26, -66, -69,
-47, -21, -14, -29, -29, -36, -53, -48, -36, -23, -5, -3, 0, -13, -19, 2, -8,
14, 33, 25, 20, 53, 98, 38, -5, -19, 11, 86, 126, 63, -26, -15, 24, 62, 31, -22,
-21, 30, 40, -21, -59, -70, -53, -8, 1, -40, -56, -62, -82, -74, -44, -22, -26,
-52, -63, -41, -7, -29, -47, -18, 16, 46, 25, -17, -28, 8, 45, 47, 39, 45, 48,
47, 25, 18, 42, 45, 41, 39, 39, 27, 27, 15, 7, 27, 41, 23, -6, 4, 3, 10, 11, -8,
-2, 5, -10, -28, -25, -22, -21, -19, -24, -16, -18, -41, -57, -30, -7, 8, 10,
-47, -33, 48, 43, -20, -40, -31, 22, 89, 56, -35, -50, 8, 32, 24, -12, -41, 7,
36, -4, -37, -38, -38, -21, 2, -24, -39, -28, -37, -48, -21, 1, -9, -22, -41,
-19, 20, 16, -16, -9, 28, 42, 37, 12, -2, 33, 65, 48, 31, 25, 28, 44, 38, 25,
30, 35, 29, 15, 12, 5, -1, 4, -3, 15, 18, -20, -34, -19, -9, -7, -14, -22, -17,
-6, -18, -39, -39, -27, -12, -11, -26, -36, -20, -34, -50, -29, 3, 10, 1, -22,
-41, 8, 59, 39, -8, -15, -5, 41, 69, 35, -4, 6, 37, 50, 45, 7, -15, 11, 31, 18,
10, -8, -21, -13, -11, -31, -37, -29, -33, -26, -12, -22, -37, -41, -37, -14, 2,
-14, -30, -18, -1, 13, 8, -10, -13, 19, 38, 26, 9, 2, 12, 24, 24, 22, 23, 20,
13, 17, 19, 8, 1, 5, 12, 21, 19, -2, -2, 0, 15, 15, 6, 3, 4, -3, -7, -9, -6, 7,
5, -5, -19, -7, -20, -34, -33, -18, -3, 9, -18, -28, -31, -26, 17, 20, -4, -26,
-18, -8, 16, 29, 8, -22, -4, 13, 20, 12, -14, -9, 19, 22, 0, -14, -23, -10, 6,
6, -23, -21, -10, -16, -13, -6, -12, -11, -9, -4, 10, 8, -6, -12, 17, 34, 26,
11, -3, 11, 39, 34, 17, 17, 21, 25, 12, 0, 3, 22, 26, 1, -3, -4, -12, -22, -23,
-16, 3, 3, -21, -29, -20, -13, -15, -13, -6, 2, 11, -9, -29, -14, -3, 6, 5, -4,
-16, -18, -6, -10, -21, 2, 1, 2, 13, -5, -21, 7, 40, 11, 5, -5, -5, 31, 50, 8,
-18, 13, 30, 45, 23, -15, -9, 27, 25, 3, 3, -9, -12, 0, -13, -26, -10, -12, -30,
-18, -10, -17, -27, -34, -25, 1, -3, -38, -28, 4, 6, -6, -24, -26, 7, 26, 3,
-16, -1, 18, 17, -3, -16, 0, 28, 20, 3, 5, 8, 7, 2, 5, 16, 20, 19, 6, 7, 22, 17,
-1, -2, 24, 34, 26, -1, -5, 11, 26, 13, -3, -7, 0, 7, -18, -27, -19, -3, -3, -4,
-10, -26, -20, -25, -7, 24, 3, -19, -40, -27, 9, 26, -3, -28, 0, 24, 14, -19,
-31, -11, 33, 30, -8, -23, -20, -8, -2, -13, -21, -10, -4, -17, -18, -10, -8,
-4, 0, -3, 1, -7, -21, -8, 14, 22, 14, 4, 1, 12, 16, 9, 10, 31, 30, 25, 10, -8,
7, 13, 19, 12, 8, 8, -3, -3, -7, -4, 7, 3, 2, 4, -6, -11, -1, 6, 9, 8, 1, -11,
0, 7, -6, -3, 0, -2, -5, -14, -30, -23, -7, -7, -3, -11, -14, -17, -17, -19,
-10, 35, 14, -19, -28, -32, 4, 38, 28, -9, 0, 18, 18, 2, -10, -6, 32, 40, -4,
-14, -14, -3, 6, 2, -6, 0, 5, -22, -27, -9, 1, -4, -13, -19, -3, 9, -20, -27, 1,
23, 18, -6, -25, -13, 18, 20, -1, 4, 14, 12, 1, -12, 4, 18, 14, -3, -3, 9, -1,
-11, -11, 7, 26, 21, -11, -14, 11, 15, 6, -1, 5, 21, 23, -1, -21, 1, 23, 16, 2,
-17, -14, -1, -5, -11, -13, -14, -14, -17, -12, -15, -13, -12, -24, -18, -8, 17,
4, -27, -29, -18, 12, 35, 20, -13, -11, 14, 31, 18, 2, 5, 31, 37, 9, -6, -6, 7,
21, 17, -4, -10, -8, -15, -14, -5, -3, -12, -23, -23, -14, -9, -22, -24, -4, 4,
0, -11, -19, -2, 16, 18, 8, 3, 3, 5, 8, 4, 9, 21, 15, -2, -7, -9, -1, 12, 14, 5,
-3, -8, -7, 2, -2, -7, 4, 6, 4, 4, -8, -11, 1, 11, 9, -2, -6, -9, 0, 2, 0, 6, 6,
1, -9, -13, -16, -8, 5, 3, -1, -3, -18, -14, -11, 14, 18, -8, -20, -18, 14, 32,
16, -13, -10, 19, 35, 18, -5, -5, 28, 44, 19, -4, -5, 10, 21, 15, -5, -11, -11,
-19, -22, -19, -17, -22, -28, -28, -22, -25, -40, -40, -16, -2, -11, -24, -29,
-12, 1, -1, -6, 0, 11, 12, 6, 3, 8, 23, 16, 19, 19, 13, 14, 9, 19, 26, 24, 9,
10, 22, 26, 15, -1, 0, 21, 27, 10, -4, -7, 9, 13, 4, -6, -5, 3, 0, -4, -6, -9,
-14, -19, -15, -10, -17, -24, -30, -22, -15, -18, -30, -33, -17, 0, 12, -21,
-34, -23, -3, 23, 23, 2, -7, 12, 26, 27, 20, 17, 23, 38, 25, 13, 9, 5, 11, 12,
2, -8, -5, -15, -22, -15, -10, -14, -20, -27, -27, -13, -15, -19, -15, -9, -12,
-10, -8, -6, 9, 12, 8, 8, 11, 10, 15, 16, 12, 18, 20, 10, 11, 9, 13, 12, 9, 12,
5, 9, 3, 0, -3, -1, 4, 4, 0, -7, -9, -10, -3, -4, -4, -6, -11, -8, -6, -11, -7,
-2, -8, -9, -10, -16, -17, -18, -13, -11, -13, -16, -28, -8, -7, -5, -10, -11,
-9, 18, 34, -6, -6, -3, 21, 47, 50, 12, 12, 29, 33, 40, 28, 13, 22, 40, 16, 9,
3, -4, 4, 7, -16, -22, -16, -27, -25, -25, -37, -36, -32, -41, -34, -23, -31,
-34, -25, -27, -23, -12, -16, -8, 10, 4, -1, 1, -1, 13, 27, 20, 16, 24, 17, 14,
20, 18, 24, 30, 22, 14, 16, 16, 11, 10, 11, 9, 13, 2, -5, 0, 1, 1, 5, 1, -6, -8,
-16, -12, -2, 2, -12, -9, -15, -13, -7, -14, -14, -8, 1, -10, -13, -15, -9, -3,
-3, -11, -14, -13, -11, 3, 7, 1, -7, -10, 8, 30, 7, -10, -3, 15, 35, 30, -1,
-11, 17, 30, 29, 14, -2, 3, 18, 9, -3, -4, -6, -2, 0, -17, -26, -21, -20, -14,
-10, -19, -31, -31, -26, -12, -2, -10, -17, -14, -13, -5, 1, 3, 9, 17, 12, 6, 7,
7, 16, 23, 18, 12, 11, 2, 2, 7, 6, 6, 4, -1, -5, -3, -5, -4, 4, -2, 1, -3, -5,
-5, 6, 16, 7, 5, -1, 8, 17, 15, 4, 4, 11, 12, 9, -1, -7, 6, 12, 3, -4, -12, -9,
-1, -4, -10, -10, -8, -17, -18, -15, -12, -6, -13, -23, -24, -16, -16, -17, -14,
-8, -8, -7, -15, -9, -5, 9, 18, -6, -13, -5, 12, 23, 30, 14, 5, 9, 5, 18, 27,
18, 15, 20, 13, 13, 11, 7, 11, 23, 10, -6, -7, -13, 4, 12, 0, -10, -13, -23,
-20, -9, -12, -13, -12, -23, -27, -21, -27, -18, -11, -11, -13, -12, -22, -18,
0, 1, 5, 5, -1, 0, 8, 7, 12, 20, 18, 11, 13, 12, 15, 21, 16, 17, 19, 15, 8, 10,
14, 19, 16, 7, 2, 1, 0, 2, 6, 4, -1, -6, -12, -9, 4, -3, -12, -12, -9, -5, -7,
-17, -17, -7, -4, -7, -17, -22, -14, -4, -8, -9, -10, -10, -5, -10, -11, 0, 4,
-3, -8, -1, 2, 3, 0, 1, 7, 6, 4, -6, -1, 2, 12, 10, 0, -2, -7, 9, 22, 10, -11,
-10, 0, 11, 23, 10, -6, -6, -5, 7, 18, 4, -9, 0, 2, -3, 0, -5, -3, 4, -6, -7, 0,
-7, -14, -3, 5, 6, 2, -12, -13, 4, 6, 5, 8, -1, -5, 3, 5, 3, 6, -2, 0, 8, 1, -7,
-3, -1, -3, 4, -3, -8, -11, -14, -5, 6, -2, -11, -8, -5, 0, -1, -2, -2, 1, 1, 4,
8, 4, 6, 10, 13, 11, 8, 9, 13, 13, 8, 8, 9, 4, 4, 3, 1, 0, -5, -8, -3, -3, -10,
-9, -9, -10, -13, -13, -13, -5, -7, -13, -14, -15, -13, -8, -6, -11, -10, -11,
-9, -6, -6, -8, 0, 0, -7, -8, -2, 3, 6, 7, 5, 5, 3, 4, 11, 16, 11, 12, 11, 9,
10, 13, 16, 16, 15, 13, 14, 6, 0, 9, 15, 13, 2, -2, -2, -5, -5, -5, -4, 0, -3,
-12, -22, -6, 11, -7, -18, -27, -13, 0, 6, 0, -11, -15, -20, 5, 10, -3, -7, -5,
-8, -11, -2, 6, 0, -14, -15, 4, 3, -15, -11, -1, 2, -1, 0, -1, -9, -8, 5, 20, 7,
-8, 1, 10, 11, 10, 15, 15, 11, 5, 6, 13, 10, 5, 10, 6, 1, 0, 1, 2, 0, -1, 0, 0,
-11, -12, 2, 5, -7, -16, -15, -6, -5, -8, -3, 1, -6, -12, -5, -3, 0, 0, -3, -4,
-6, -6, -1, -1, -5, 0, 6, -5, -14, -5, 6, 9, 1, -3, 1, 3, -1, 2, 9, 9, 6, 5, 2,
2, 8, 12, 13, 7, 1, 2, 4, 1, 4, 9, 5, -4, -10, -7, 0, -1, -5, -3, -6, -10, -11,
-8, -6, -5, -3, -5, -8, -11, -10, -3, 0, -5, -7, -7, -8, -7, -2, 1, 0, 0, -1, 0,
0, 1, 7, 9, 6, 1, 3, 2, 1, 6, 10, 9, 3, 0, -1, 2, 6, 9, 8, 2, -3, 0, 3, 2, 3, 5,
3, -2, -2, 0, 1, 0, 0, 1, -1, -3, -5, -4, -3, -4, -2, -3, -6, -10, -6, -4, -3,
-5, -5, -8, -9, -5, -3, 2, -2, -4, -7, -3, -4, 2, 5, 0, -2, -3, 0, 3, 4, 5, 5,
2, 0, 1, 6, 4, 6, 5, 0, -1, 2, 5, 0, 1, -1, -2, -2, -2, -1, 2, 2, -2, -1, 1, 8,
9, 0, -5, 2, 6, 6, 6, -2, -3, 3, 7, 1, -8, -10, -2, 2, -5, -8, -4, -9, -14, -10,
-7, -9, -11, -8, -8, -13, -10, 1, 0, -11, -7, 1, -2, -2, 3, 6, 2, 1, 4, 7, 5, 6,
13, 7, 0, 6, 14, 6, 2, 8, 11, 5, 1, 4, 6, 4, 4, 7, 2, -2, 5, 8, 0, -4, 2, 3, -3,
-5, 0, 5, -1, -4, -3, -6, -6, -4, -4, -8, -9, -10, -11, -14, -12, -7, -8, -14,
-13, -9, -10, -8, -5, -4, -4, -2, -3, -3, 1, 4, 5, 4, 3, 7, 8, 4, 5, 11, 10, 6,
6, 6, 7, 7, 8, 6, 6, 4, 4, 4, 2, 5, 4, 2, -3, -2, -1, 0, -1, -1, 0, -3, -4, -5,
-4, -3, -1, -4, -6, -6, -4, -6, -6, -5, -4, -4, -7, -7, -5, -6, -7, -5, -4, -3,
-2, -2, -3, -1, 1, 2, 1, 1, 4, 5, 4, 4, 4, 5, 4, 3, 3, 6, 7, 3, 2, 2, 3, 3, 3,
1, 1, 0, -3, -2, 0, 0, -2, -3, -5, -4, -4, -3, -4, -4, -2, -4, -4, -7, -5, -1,
-1, -4, -4, -3, -2, -3, -3, -3, 1, 2, -1, -2, -1, 3, 2, 1, 1, 2, 2, 2, 1, 1, 2,
2, 1, 0, 2, 4, 6, 2, 2, 4, 7, 4, 1, 1, 3, 5, 2, 1, -1, -1, -4, -3, -4, -4, -4,
-5, -8, -7, -6, -5, -5, -6, -5, -6, -6, -9, -6, -4, -2, -1, -3, -2, 0, 2, -1, 2,
4, 6, 6, 2, 1, 2, 4, 4, 4, 3, 2, 1, -1, -2, 1, 3, 3, -1, -5, -2, 2, 1, -2, -1,
1, 2, 0, -2, 0, 3, 5, 5, 3, 0, 2, 5, 5, 3, 0, -1, 0, -3, -4, -3, -4, -4, -5, -7,
-7, -7, -7, -6, -5, -6, -6, -5, -5, -4, -2, -1, -2, -1, 1, 3, 4, 2, 2, 3, 3, 5,
4, 4, 5, 4, 3, 1, 3, 4, 3, 1, -2, -2, -2, -3, -3, -2, -2, -4, -6, -6, -3, 0, -1,
-2, -2, -1, 0, 0, 0, 1, 3, 4, 1, -1, -1, 3, 3, 0, 0, 1, 1, -3, -2, -2, 1, 0, -3,
-5, -4, -1, 0, -2, -6, -5, -1, 0, -3, -4, -2, 1, 0, -3, -5, -4, -3, -2, -1, -2,
-2, -3, -3, -3, -1, 0, -1, -1, -2, 0, 2, 1, 1, 3, 5, 5, 4, 4, 5, 7, 6, 6, 7, 6,
6, 7, 6, 4, 3, 2, 2, 2, 1, 0, -1, -4, -4, -5, -5, -6, -7, -7, -7, -8, -9, -8,
-6, -6, -6, -6, -6, -7, -5, -4, -3, -5, -5, -4, -3, -2, -2, -2, 0, 0, -1, 0, 1,
2, 3, 4, 4, 5, 4, 5, 5, 7, 6, 6, 5, 4, 4, 5, 6, 3, 2, 1, 2, 2, 2, 3, 0, -2, -4,
-4, -3, -3, -3, -3, -4, -6, -6, -6, -5, -4, -3, -4, -5, -5, -5, -3, -2, -1, -1,
0, -2, -2, -1, 0, 2, 3, 2, 0, 0, 0, 2, 4, 3, 3, 1, 0, 1, 4, 4, 3, 3, 2, 1, 2, 2,
2, 2, 0, -1, -1, -2, -2, -2, -2, -2, -1, -3, -3, -4, -3, -4, -3, -4, -5, -4, -3,
-3, -3, -1, -1, -2, -2, -1, 0, 0, -1, 0, 0, 1, 1, 0, 1, 2, 4, 3, 2, 1, 2, 3, 2,
1, 1, 1, -1, -1, 0, 1, 0, -1, -1, 0, 0, -1, -2, -2, -2, -1, 0, -2, -2, -2, -2,
-2, -2, -1, -1, -1, -1, -1, -1, -1, -2, -1, 0, 2, 1, -1, -1, 0, 2, 2, 2, 1, 1,
0, 0, 1, 0, 0, 2, 2, 0, 0, 0, -1, -1, 0, 1, -1, -3, -2, -1, -1, -2, -2, -1, -2,
-2, -2, -3, -3, -2, -1, -1, -3, -3, -1, -1, -2, -2, 0, 0, -1, 0, 1, 1, 0, 1, 2,
3, 2, 2, 1, 1, 2, 2, 1, 0, 0, 0, 0, -2, -3, -2, -2, -2, -3, -4, -4, -4, -4, -4,
-4, -4, -4, -4, -3, -2, -2, -1, 0, 1, 2, 2, 1, 1, 3, 4, 4, 3, 3, 4, 5, 4, 3, 3,
2, 2, 1, 0, 0, 0, 0, -1, -2, -2, -2, -1, -2, -2, -2, -2, -3, -2, -1, -1, -2, -2,
-2, -1, 0, 0, -1, -2, -2, -1, -1, -3, -4, -3, -3, -3, -3, -4, -5, -5, -3, -2,
-2, -2, -3, -2, -1, 0, 0, 1, 1, 1, 3, 4, 4, 4, 4, 4, 4, 4, 3, 3, 3, 2, 3, 3, 1,
1, 0, 1, 1, -1, -2, -2, -1, -2, -1, -2, -3, -2, -2, -2, -2, -1, 0, 0, -1, -3,
-4, -6, -5, -3, -2, -3, -5, -5, -4, -3, 0, 1, -1, -3, -4, -3, -1, 1, 2, 2, 1, 0,
0, 2, 4, 5, 3, 1, 0, 1, 3, 4, 4, 2, 0, -1, -1, 1, 1, 0, -1, -3, -4, -3, 0, 1, 1,
-1, -2, -3, -1, 1, 2, 1, -1, -2, -2, -1, 1, 2, 1, -1, -2, -3, -2, -1, 0, -1, -3,
-4, -4, -3, -2, -2, -2, -4, -5, -4, -3, -1, 0, 0, -1, -1, -1, 1, 2, 2, 2, 2, 1,
2, 2, 3, 4, 3, 1, 1, 2, 2, 2, 2, 1, 0, 0, 1, 1, 1, 0, 0, 0, -1, -2, -1, 0, 0,
-1, -2, -3, -2, -1, -1, -1, -2, -3, -4, -3, -2, -2, -2, -3, -4, -3, -3, -2, -1,
-1, -1, -2, -1, 0, 0, 1, 2, 1, 0, 0, 1, 2, 3, 2, 1, 0, 0, 1, 1, 1, 1, 0, -1, -1,
-1, -1, 0, -1, -2, -2, -2, -2, -2, -1, -1, -1, -1, -1, -2, -2, -1, 0, 0, 0, 0,
0, 0, 0, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1,
-1, -2, -1, -1, -1, -1, -2, -1, -1, -1, -1, -1, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0,
0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, -1, -1, -2, -2, -1, -2, -2,
-3, -3, -2, -2, -2, -1, -1, -2, -2, -1, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 1, 0, 0, 0, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, -1, -1, -1,
-1, -1, -2, -2, -2, -2, -2, -3, -3, -3, -3, -3, -2, -2, -2, -2, -2, -1, -1, -1,
-1, -1, 0, 0, 0, 0, 0, 1, 1, 1, 0, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -1, -1, -1, -1, -1, 0, -1, -1, 0, 0, 0, 0, 1, 1, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0,
0, 1, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0,
-1, -1, -1, -1, -1, -1, -2, -2, -2, -2, -2, -1, -1, -1, -1, -1, -1, -1, -1, -1,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1,
-1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, -1, -1, -1, -1, -1,
-1, -1, 0, -1, -1, -1, 0, 0, 0, 0, -1, -1, -1, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0,
0, -1, -1, 0, 0, 0, 0, 0, -1, -1, -1, 0, 0, -1, -1, -1, -1, 0, 0, 0, 0, -1, -1,
-1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, -1, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1,
-1, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, 0, 0, 0, 0, -1, -1, 0, 0, 0, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1,
0, 0, -1, 0, 0, 0, -1, -1, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, -1, -1, -1, 0, 0, 0,
0, -1, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0,
0, -1, 0, 0, -1, -1, -1, 0, 0, 0, -1, -1, 0, 0, -1, 0, -1, -1, -1, -1, -1, 0,
-1, 0, -1, 0, 0, -1, 0, 0, 0, 0, -1, 0, -1, 0, -1, 0, -1, };

#endif /* MOUTHFIFTEEN_H_ */
