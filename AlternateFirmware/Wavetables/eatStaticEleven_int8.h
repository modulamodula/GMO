#ifndef EATSTATICELEVEN_H_
#define EATSTATICELEVEN_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define EATSTATICELEVEN_NUM_CELLS 8350
#define EATSTATICELEVEN_SAMPLERATE 16384
 
const int8_t __attribute__((section(".progmem.data"))) EATSTATICELEVEN_DATA [] =
{2, 1, 4, 27, 37, 20, -16, 26, -12, 43, -60, -15, 47, -55, 72, -77, 11, 36, -24,
58, -37, -23, 15, 5, 51, 56, -46, 16, 3, 50, -46, -20, -21, 11, 14, 0, 49, -48,
14, -6, 64, -30, -25, 16, 56, 35, -46, 21, 8, -12, 22, -14, 26, -38, 0, 55, -56,
24, -72, 65, 53, -35, -28, -12, 64, -63, -2, -28, 42, -9, 3, 38, 23, -16, -10,
76, -12, -3, -16, 58, 12, -27, -39, 24, -24, 19, 6, 38, 26, -6, 34, 36, 35, -67,
60, -1, 9, -38, -17, 20, -21, 0, -24, -1, 21, -17, 48, 37, -32, 35, -10, 50,
-15, -43, 8, 2, -1, -5, 6, -3, -14, -7, 13, 1, 11, -26, 67, -14, 8, -2, 20, 13,
-25, 43, -49, 51, -34, 16, 9, -34, 29, -15, 6, 10, -17, 57, -9, 4, 11, 5, 21,
-33, 27, -40, 33, -15, 32, -10, -25, 6, -17, 21, -53, 25, -7, -10, 36, 4, 10,
29, -18, 18, -31, 32, 14, -21, 53, -39, 13, -9, -11, -1, -16, -27, 3, -1, 8, 39,
-5, 6, 12, 18, 15, -15, 44, 23, 2, 31, -29, 7, -38, -13, -49, -31, -1, -15, 27,
18, 2, -29, 27, 39, -8, 8, -4, 46, 33, -18, 45, -47, -13, -41, -3, 10, -27, -21,
-13, 36, -23, -6, -10, 13, -19, -9, 29, 5, 8, -3, 15, 9, -24, -1, 9, 11, -18, 4,
-7, -2, 35, -30, 24, -3, 26, 7, -2, 51, -29, -4, 15, -14, 0, -1, -48, 12, -27,
-20, 6, -13, 7, -9, -22, 57, -29, 34, 7, 7, 62, -46, 60, -29, 18, -23, 8, 9, 5,
-19, 20, 7, -12, 15, -32, 29, -14, -12, 8, 25, -24, 30, -29, 47, -23, -9, 39,
-7, 42, -39, 53, 10, 9, -17, 24, 20, -23, 21, -6, 26, -19, -3, 23, -11, -25,
-21, -8, 27, -39, 2, -13, 27, -12, -20, 51, -30, 18, -31, 70, -16, -17, 34, 19,
44, -62, 24, -4, 4, -6, -31, 82, -32, 5, 16, 7, 17, -67, 33, 12, 31, -24, 27,
48, -58, 19, 5, 12, -25, -38, 55, -1, 13, -6, 3, 31, -41, 12, 18, 17, -29, -11,
32, 30, -28, -29, 36, -12, -40, -13, 31, -3, 0, 18, 26, 1, -39, 14, 45, -20,
-14, 8, 34, 28, -8, -12, 17, -14, -29, 41, -10, -22, -42, 9, 38, -27, -37, 12,
13, -14, 8, 19, -5, -1, 10, 46, -7, -24, -8, -18, 52, -55, 1, 9, 9, -10, -38,
47, -20, -13, 11, 16, -8, -8, 5, 13, -4, -38, 24, -1, -23, 27, -36, 17, -16,
-12, 55, -59, 44, -20, 43, 40, -55, 52, -15, 29, -14, 2, 2, -7, -5, -5, 29, -20,
-13, 38, -29, -1, -30, 5, 14, -36, 47, -24, 34, -30, 19, 4, -23, -9, -27, 26,
-14, 26, -4, 31, 9, -38, 20, 5, 7, -30, 34, 49, -24, 37, 15, -15, -11, -25, 4,
0, -16, -20, 17, 18, -17, 6, -35, 17, -6, 11, 22, -11, 10, -2, 46, -4, -32, -11,
-1, -3, 12, -6, 17, 16, -30, 47, -8, -29, 21, -20, 30, 3, -23, 4, -26, 30, -38,
-7, 35, -31, 45, 6, 1, 13, -16, 30, 12, -22, 8, -14, 20, 13, -4, 11, -15, 12, 2,
-8, 21, -6, -20, 3, 3, -29, 10, 19, -13, 8, -2, 37, -12, 12, -4, -22, 31, 4, 16,
7, 10, -4, -27, 2, 10, -32, -21, 18, 6, -6, 4, -3, 18, -27, -16, 17, -9, 6, -37,
23, 2, 5, 2, -18, 46, -47, 3, 42, 26, -5, -17, 56, -9, -13, 31, 18, -3, -35, 20,
-7, -7, -13, -20, 39, -46, -27, -4, 41, -21, -49, 24, 19, 0, -24, 56, -13, 22,
1, 34, 47, -65, 10, 34, 28, -30, -16, 39, -24, -16, -1, -40, 32, -40, 10, 47,
-9, -48, 1, 65, -48, -41, -9, 28, 0, -3, 26, 4, -29, -12, 26, 31, -63, 17, 42,
-8, 32, -42, 46, 8, -22, -16, 5, 3, -35, 2, 35, -9, -48, 27, 16, 2, -31, -14,
46, -49, -4, 50, -40, 13, -43, 44, 16, -38, 24, 9, 44, -22, 0, 48, -5, -30, 13,
21, 23, -32, 4, 34, -21, -42, 34, 10, -35, -1, -19, 12, -33, 25, -18, -19, 30,
-41, 33, 33, -12, 0, 8, 22, 2, -13, 21, 6, -13, 23, 4, 7, 3, -12, 32, -36, 10,
1, -9, 3, -14, 39, -13, 4, 0, -21, -24, -9, -3, -10, 27, -2, -26, 17, -3, -16,
18, 1, -5, 16, 24, 21, 2, 21, -9, -13, -8, -8, 7, -24, 2, 6, -13, -7, -17, -19,
-26, -23, 3, -6, -6, 13, -20, 12, 18, -40, 33, -7, 9, 11, -6, 44, -31, 1, 12,
-8, -32, -6, 21, -4, 8, 4, -12, -3, 1, 6, -16, -10, -1, 24, 15, -30, 15, -23, 7,
11, -11, -14, -6, -9, -3, 1, -6, -35, 8, 21, -35, 15, -6, -2, 14, -2, 5, 1, -23,
44, -23, 5, 1, -22, 42, -27, 2, -16, 10, 9, -13, 9, -4, -11, -20, 2, -3, -32, 9,
7, 15, -28, -17, 19, -31, 11, -17, 23, -11, 20, 44, -12, 28, -22, -1, 32, -8,
-21, 23, 15, -4, 2, -10, 5, -22, -33, 25, -39, -8, 0, 0, 9, -71, 28, -4, -11,
28, -28, 25, -14, -5, 31, 7, -4, -8, 38, 20, 2, -16, 15, 11, -52, -9, 16, -3,
-29, 8, 33, -19, -5, 1, -7, -25, -26, 6, 29, 6, -27, -12, 14, -9, -36, 2, 13, 3,
25, 24, 25, 17, -17, 49, -10, -37, 12, 12, 36, -28, 9, -1, -8, 4, -19, -4, -25,
-24, 7, 29, -11, -40, -3, 7, -2, -46, 12, 24, -30, 31, 1, 26, -26, -4, 28, -19,
-16, -14, 32, 4, -17, 5, 9, 4, -13, -16, 2, -10, -7, -3, 34, -18, -26, 12, -1,
3, -52, 29, 5, -29, 21, -23, 19, -14, -1, 13, -33, 22, -24, 17, 18, -29, 4, 1,
26, -18, 8, 7, -2, -11, -7, 5, -18, -16, -22, 23, -18, -14, 14, 6, -3, -6, 3,
-4, 7, -20, -4, 31, -10, -7, 21, -10, -29, -20, 8, -5, 2, -6, -5, 20, -28, 0, 8,
-20, 6, -18, 16, 21, -8, 42, -26, -16, -14, -17, 9, 0, -11, -2, 3, -11, 14, -43,
14, -30, 2, 35, -31, 25, -9, 16, -3, 9, -2, -18, 18, -3, 4, -11, 8, 0, -7, 1,
-40, 17, -15, 12, 21, -16, 19, -31, 29, -23, -19, 3, -23, 11, 17, -31, -1, -5,
-21, 19, -24, 16, -3, -3, 19, -5, -3, 8, -24, -1, 5, -19, 16, 3, -9, -8, -8, -7,
-11, 1, -12, 5, 5, -17, 0, -10, -16, -35, -2, -10, -10, 29, -6, 7, -4, 11, -7,
13, -1, -6, 25, 3, 2, 7, 14, -25, 8, -19, -10, -10, -2, 6, -14, 8, -15, -9, 5,
-26, -12, -1, -10, 15, 2, -14, 0, -3, -6, 10, -3, 6, -10, 6, -2, 8, -19, -7, 9,
-24, 26, -39, 26, -13, -10, -5, -20, 25, -40, 30, -5, -14, -8, -35, 28, -7, -16,
6, -15, 24, -10, 22, 3, -17, 1, -3, 14, -21, 8, -1, 20, -6, -8, 2, -12, -14,
-22, 30, 2, -28, 29, -2, -12, -11, -20, 25, -12, 4, -8, 41, -3, -20, 17, -1,
-16, -42, 31, -16, 11, -11, 9, 38, -42, -14, -9, 7, -27, -16, 72, -1, -12, 16,
11, -3, -26, -9, 20, -3, -34, 7, -3, 5, -38, 11, 33, -48, -7, 4, 21, 1, -42, 32,
9, -40, -8, -8, 19, -42, -5, 43, -5, -18, -7, 31, -10, -22, 1, 15, -4, -27, 16,
8, -21, -8, -17, 44, -25, -29, 17, 9, 4, -51, 22, -5, -28, 5, 5, 1, -22, -21,
38, 5, -43, 1, -6, 8, -5, 11, 17, 7, -16, -3, 16, -13, -28, -7, 45, -19, -16,
18, 0, -16, -17, -5, 1, -19, -14, 25, 13, -14, 1, -1, -7, -37, 0, 16, -24, 41,
-11, 19, 10, -33, 7, -8, 5, -23, 16, 8, 0, 1, 13, -16, -19, -9, -7, 20, -27, 19,
-14, -17, -7, -22, -15, -15, -14, 1, -7, 3, 14, 1, 7, 4, -5, -7, 17, 5, 15, 5,
-4, -5, -3, 6, -10, -7, 12, -17, 3, -8, -13, -8, -46, 17, -20, -14, 3, -4, 19,
-18, 7, -11, 12, -3, 3, 13, 9, 11, -1, 20, -32, -11, -25, 12, 15, -25, 29, -10,
16, -6, 1, 3, -37, 15, 3, 0, -5, -2, 1, -12, -14, -30, -9, 0, -14, 26, -2, 2, 5,
6, 16, -23, -7, 1, 15, 11, -17, 15, -3, -30, 10, 8, -13, -25, 4, 12, -6, -22,
10, 0, -23, 5, -2, 27, -16, 6, 0, -2, 1, -40, 29, -17, -9, -5, 11, 5, -41, 6, 6,
-2, -19, 26, 24, 0, 4, -12, 10, -21, -21, 12, 2, -33, -1, 6, 23, -15, -37, 8,
-10, -13, 2, 20, 0, -14, 1, 24, -17, -37, -18, 18, -2, -15, 4, 29, -29, -2, 12,
-17, -1, -28, 35, 2, -4, -14, 7, 29, -29, 3, 2, 3, -13, -5, 31, -7, -38, 2, 25,
-17, -39, 17, -2, -3, -15, -21, 59, -36, -3, 9, 7, -1, -41, 39, 24, -31, -12,
28, 5, -10, -18, -2, 31, -26, -4, 41, -20, -23, -9, 23, -20, -33, 2, 1, 14, -43,
-2, 0, -11, -15, -7, 29, -10, 3, -2, 52, -20, -27, 31, 10, -9, -28, 21, 6, -20,
19, -11, -11, -15, -28, 28, 9, -13, 9, 15, -4, -4, -24, 10, -5, -31, 13, 8, 4,
-13, -9, 25, -4, -11, 2, 7, 4, 11, 21, -1, 1, 3, -6, 5, -16, -14, 8, -3, 5, 5,
-22, -5, -30, -17, 4, -15, -15, 0, 27, 15, -2, -2, 7, -24, 9, 22, 1, -19, 20,
-2, -8, -4, -6, -27, -8, 20, -12, 10, 1, 20, 0, -11, -7, 4, -12, -15, 6, 1, -7,
-12, -2, -8, -8, -25, -16, 38, 1, -22, 11, 2, 4, -17, 7, 22, -18, 7, 3, 19, -21,
-16, -2, -3, -10, -24, 11, 4, -1, -24, 1, -2, -14, -12, 19, 10, -27, 13, 19, 9,
-24, -20, 19, -12, -4, 13, 10, 5, -27, 17, 8, -24, 4, -36, 24, 17, -31, -3, 15,
-4, -34, 1, -9, -16, 1, 12, 22, 0, 9, 12, 3, -1, -30, 20, -8, -6, 12, -10, -7,
-36, 3, -12, -23, -2, -3, -14, 10, 1, -8, 20, -20, 8, 5, 4, 5, -3, 19, -14, -32,
19, -5, -8, -1, -12, 20, -15, -17, 8, -18, -1, -20, 1, 18, -21, 16, -7, 9, -23,
-1, 8, 17, -15, -10, 35, -16, -1, -4, 9, -13, -8, 8, 5, 2, -15, 7, 7, -12, -5,
-5, -12, -16, -11, -6, 2, -7, -16, 18, -24, -3, -8, 2, 21, -25, 31, 5, 20, -4,
-1, 19, -27, -16, 13, 3, 11, -10, 17, -8, -7, 17, -24, 30, -25, 2, 25, -5, -13,
-13, 22, -18, -21, 11, -1, -6, -24, -8, 4, 7, -11, 11, 10, -19, -8, 13, 19, -11,
15, 15, 10, -4, -22, 26, 3, -20, -13, 1, 6, -21, -25, 11, 9, -37, 8, 1, 6, -8,
-14, 14, -13, 3, -9, 17, -4, -22, 21, 7, 6, -31, -10, 7, 4, 0, -6, 15, -12, -20,
0, -5, -16, -26, 5, -1, -5, -2, 3, 13, -14, -16, -4, 5, -11, 5, -3, 24, -14, -9,
18, -31, -6, -18, 0, 21, -24, 27, 0, -15, 7, -36, 6, -7, -11, -1, -7, -5, -1,
21, -26, -7, -12, -15, 14, 1, -4, -18, 21, -11, -13, 20, -28, -7, 8, 0, 5, -17,
12, -7, -1, -5, -3, -18, 11, 9, -14, 9, -35, 6, -14, -5, 7, -22, 25, 2, 13, -2,
-22, 16, -9, -1, -11, -1, -3, 3, 2, -19, -6, -20, 1, -14, 1, 4, -19, 25, 1, -18,
-22, 17, -1, -5, 17, -12, 15, -1, 4, -1, -23, -5, -17, 8, 8, -11, -16, -3, 33,
-24, -18, 11, -5, -10, -9, 15, 2, -13, 16, -3, -4, -6, -3, 9, 4, -10, -18, 12,
3, -9, 6, 5, -3, -12, 7, 2, 2, -7, -14, 15, 3, -25, 1, 11, -36, -14, -5, -1, -9,
18, 2, -14, 13, 10, -12, 5, 8, -11, 19, 9, -7, 3, -2, -11, -11, -3, -10, -22, 4,
-12, 12, -14, -5, 21, -33, -2, -21, 7, 1, -5, 8, -11, 8, -14, 28, 3, -16, -6, 6,
2, -7, 3, -2, 6, 5, -25, 8, 9, -24, 3, -3, -9, -13, 2, 3, -3, -24, 1, 8, -11,
-14, -6, 16, -13, 9, 17, -1, 9, -14, 4, 14, -22, -4, 6, 23, -10, -30, 35, -22,
-4, -1, -7, 3, -6, 1, 0, 1, -31, 5, -2, 7, -12, -20, 30, -17, -9, 19, -6, -2,
-22, 18, 6, -26, -4, -2, 1, -14, -15, 10, 13, -23, 0, 10, -17, -2, 1, 8, 2, -20,
6, 10, 5, -23, -14, 26, -31, -2, 8, 10, 13, -33, 15, 25, -27, -8, 7, -5, -15,
-15, 20, 8, -17, -4, 12, 7, -7, -29, 21, 6, -14, 6, 24, -6, -24, -2, -10, 6,
-29, 12, 20, -16, 3, -6, 13, 5, -15, -6, -1, 5, -18, 9, 11, -23, -8, -5, 5, -14,
2, 2, 4, 2, -23, 18, 6, -11, -13, 15, -14, -6, 12, -4, -11, -4, 7, 1, 15, -4,
-6, -11, 9, -8, -18, 3, -9, -11, 24, 6, -11, 6, -12, 2, -8, -10, 6, -4, 1, 5,
-7, 4, 2, -4, -7, -16, 12, -3, 16, 15, 3, -7, -15, 6, -8, -15, -9, -3, -2, 6,
-6, 6, -9, -14, -6, -13, 7, -1, -3, 20, 13, -23, 9, 9, -8, -31, 19, 17, -27, 18,
-5, 13, -8, -5, -7, 10, -12, -9, 23, -27, 3, -12, 3, 18, -26, 10, -11, 15, -3,
-20, 35, -21, 13, 6, 15, -4, -31, 11, 0, -8, -10, 10, 13, 5, -14, 7, 11, -28, 3,
-5, 7, -2, -29, 30, 4, -16, -20, 5, 17, -34, 3, 20, -7, 0, 3, 3, -4, -13, -7,
14, 2, -14, 15, -9, 20, -15, -13, 24, -24, 9, -9, -2, -8, 3, 6, 1, -11, -21, 18,
-7, -4, 0, 3, -10, -10, 20, -6, -15, -7, 5, 7, -14, 2, 2, -8, -3, -5, 14, 6,
-13, 5, 19, -11, -5, 2, 0, -13, -20, 19, 7, -2, -9, 4, -3, -3, -22, 18, 8, -31,
26, -9, 11, -8, -15, 18, -17, -21, -12, 9, 21, -29, -8, 27, -15, -4, 6, 11, -23,
3, 5, 7, 0, -17, 8, 14, -11, -25, 20, -12, -10, -11, 4, 9, -5, -2, 18, -3, -20,
3, 3, 1, -7, 2, 31, -10, -9, 22, -29, 5, -21, 12, 10, -20, 10, -3, 15, -12, -14,
4, -3, -18, -5, 21, 9, -15, 9, 5, -23, -27, 14, 8, -21, -7, 19, 12, -12, 25,
-12, 6, -7, -2, 22, -3, 7, 1, 3, 12, -16, -17, 15, -9, -16, 4, 15, -5, 6, -9,
16, -14, -6, 16, -12, 2, -21, 10, 0, -7, -9, 2, -3, -1, 3, -4, -4, -2, -6, -14,
20, -8, -3, 29, -3, -25, 13, -12, 1, -3, 5, -9, -26, 45, -14, -10, -11, 0, 1,
-11, 14, -2, 9, 1, -2, 5, -7, -13, -5, 16, 2, -30, 14, 4, 9, -9, -23, 18, -14,
-1, 8, 7, -22, -19, 20, 17, -19, -7, 8, -5, -5, -3, -2, -5, -15, 13, 8, -10, 6,
-13, 31, -9, -15, 3, 10, 11, -21, 13, 10, -14, -18, 7, -6, -33, 9, 7, -4, -4,
-8, 15, -9, -6, -5, -3, 4, -10, 1, 18, 7, -12, -7, 12, -9, -41, 30, 1, -15, 14,
6, 19, -7, -17, 2, 10, -18, 8, 16, 11, -15, 1, 15, -20, -8, 1, -4, 5, -11, -12,
20, 0, -17, 4, 20, -18, -6, 15, 12, -21, -2, 19, -10, -3, -11, 16, -7, -6, 3,
-4, -1, -18, 5, 17, -8, -2, 8, 12, 9, -40, 31, 13, -10, 2, 4, 6, -16, 7, 4, -6,
-44, 19, -8, -5, 14, -16, 31, -11, 1, -4, -6, -2, -21, 20, -7, 5, 0, -2, 15,
-35, 0, 3, -4, -7, -1, 23, -10, -2, -14, 17, -12, -18, 17, -8, -6, -8, 15, -3,
-18, -3, 1, -5, 0, -24, -2, 31, -30, -3, 30, -11, -19, -3, 16, -5, -19, 9, 3, 4,
-2, -10, 31, -13, -19, -7, 3, -4, -18, 11, -11, -1, -18, 3, 17, -21, -18, 9, 20,
-28, 12, 15, -9, 5, -22, 25, -13, -22, 19, -6, -5, -14, 7, 0, 1, -12, -13, 16,
-15, 9, 0, 7, -4, -18, 20, 5, -12, -9, 5, 0, -7, -17, 12, -8, -15, 16, -11, 1,
-5, 9, 6, -3, 1, -12, 16, 0, 2, -2, 6, 2, -9, -8, -20, -11, -17, 0, 12, -13, 6,
9, -6, 0, -11, 12, -7, 8, 15, -10, 8, 8, -6, -7, -15, -4, 2, -19, 17, -14, -12,
25, -5, -18, -2, -6, -9, 2, 6, -10, -9, 27, -15, 6, -9, -2, -5, -10, 3, -8, -2,
-15, 27, -11, -13, -3, 10, 11, -24, 7, -7, 9, 14, -11, 21, -23, -14, -12, 0, 1,
-38, 10, 17, 21, -21, 13, 18, -27, -5, -12, 16, -20, 17, 28, -10, 13, -29, 14,
9, -22, -12, 0, 22, -3, -4, 0, -13, -17, -9, -1, -10, -18, 21, 17, -11, -7, 8,
7, -9, -13, -4, 10, 1, 11, 5, 5, -13, -5, 3, -7, -11, -21, 18, -1, -12, -1, 0,
-3, -11, 2, -14, 13, -6, -4, 30, -22, -8, 11, 2, -17, -10, 10, -4, 9, -4, -4, 0,
-4, -8, 8, 14, -36, 12, 12, -8, -11, 2, 11, -3, 12, -7, 14, -10, -5, -10, -9,
-13, -19, 7, 1, 1, -15, 11, 21, 2, -11, 22, -4, -5, 11, -1, 2, -11, -2, -6, -5,
-19, -10, -1, 2, -14, 24, -5, -2, 21, -18, 5, -6, -12, 7, -7, -11, 9, -3, 9, -7,
-8, -12, 2, -16, 0, 4, -6, 13, -13, 22, -27, 5, 4, -17, 6, -5, 7, -5, 11, -12,
-5, -2, -1, -17, -4, 9, -21, 2, 10, 3, -7, -2, 21, -30, -4, 12, -13, 15, -15, 7,
-6, -7, -12, -9, 7, -17, 2, 14, 7, -9, 2, -8, 3, 14, -25, 4, 16, -25, -5, 8, -6,
-14, 3, 1, -2, 8, -12, 15, -9, -4, 7, -5, 18, -7, 0, -6, -6, -3, -13, 15, -10,
-2, -3, -1, 12, -27, 20, -25, 3, 5, -19, 20, -8, 16, -6, 2, -7, 6, -12, -1, 12,
-20, 5, 6, 8, -14, 3, -1, -13, 10, -6, -3, 4, -1, 2, -2, 14, -12, 2, 1, -17, 6,
-14, 3, 1, 4, -14, 15, 8, -7, 13, -8, 6, -4, 0, 1, 3, -4, 4, -13, -2, 1, -19, 1,
-11, -7, 8, 9, 2, 0, -1, 4, 2, 4, -5, 1, -4, 2, 14, -4, 5, -13, 4, -7, -11, 3,
-5, 7, -4, 2, 8, -10, -12, 1, 11, -9, -3, 14, 11, -4, -18, 10, -9, -9, -20, 5,
4, -29, 17, -1, 16, -19, -4, 28, -17, 13, -14, 16, 9, -24, 2, -1, -3, -18, 4, 0,
0, -15, -8, 27, -11, -5, -1, 11, 4, -14, 11, 1, 6, -16, 2, 9, -14, -13, 12, 19,
-25, -4, 5, -5, -4, -16, 17, 3, -2, 4, -10, 18, -26, 5, 15, -17, -15, -13, 25,
-2, -6, 0, -2, -7, -6, -3, 8, -7, -7, 15, 9, -1, 7, 9, -3, -9, -7, 9, -13, 11,
-1, 5, -4, -12, -4, 2, -3, -28, 20, 9, -2, -3, 16, 5, -16, -2, -1, 1, -21, 4,
12, -5, 0, 8, 6, -3, -4, -5, 3, 10, -7, -3, 12, -9, -4, -1, -3, -19, -7, 0, 17,
0, -12, 25, -4, -9, -5, 3, -1, -7, 4, 9, -5, 8, 2, 5, -9, -22, 4, 3, 7, -8, 2,
4, 0, -1, -7, 5, -4, -10, 21, 5, -17, 8, 3, -6, -14, 6, 0, -16, 3, -11, 3, 3,
-6, 18, 5, -2, -11, 23, 13, -24, 0, -7, 0, -18, 2, 6, -5, -26, -5, 16, -15, -6,
-4, 17, 1, -6, 14, 13, -5, -1, 5, 6, -3, -10, 6, 6, -28, -5, 2, -10, 0, -30, 11,
8, -1, 4, 7, 0, -7, 4, 9, 0, 2, -6, -5, 6, -22, 6, -10, 0, -16, 5, 1, -5, 1, -6,
6, -21, 21, -9, 12, -2, 2, 23, -26, 13, -5, -17, -2, -8, 3, -11, 3, 2, 0, -6,
-23, 11, -2, 18, -11, 5, 20, -16, 10, -10, 0, -17, -10, 7, 11, -3, -1, 12, 4,
-13, -9, 6, -7, -3, 2, 17, -7, 1, 6, -13, -13, -12, -10, 10, 12, -10, 12, 2, -8,
-2, -3, 6, -22, 4, 19, -1, -4, 0, 22, -22, -5, 15, 0, -1, -5, 17, -8, -5, -10,
-1, 1, -20, -19, 20, 10, -19, 13, 1, 11, -13, -1, 15, -9, -17, -8, 26, -9, -26,
10, 8, -9, -20, 23, 13, -16, 1, -7, 15, -10, -3, 6, 8, -20, -8, 22, 9, -2, -28,
28, 0, -20, -5, 23, -8, -24, 15, -3, -4, -18, 2, 18, -10, -1, 9, 8, 5, -28, 13,
4, -8, -14, 0, 7, -17, 1, 15, 11, -17, -11, 3, 9, -12, 3, 13, -1, -5, 13, 5,
-21, -12, 8, -3, -8, 10, -10, 20, -4, -10, 5, -12, 0, -17, 16, 3, -14, 0, 20, 0,
-22, 5, -2, 2, -5, 0, 13, -18, -1, 6, -1, 4, -15, 12, -2, -3, -14, 10, 0, -10,
-3, -4, 10, -17, 14, -4, 12, -26, -4, 27, -23, 2, -7, 9, -8, -2, 14, -18, 8, -7,
-3, 18, -12, 4, 0, 5, -12, -4, -1, -12, 9, -12, 16, 11, -11, 13, 0, -12, -13,
-1, 19, -14, 0, 6, -8, -4, -4, 5, -16, -1, 3, 11, 5, -5, 1, 0, -1, -13, -1, -3,
2, -12, 1, 10, -10, -2, -1, 0, -5, -7, 13, 5, -1, -7, -6, 0, -4, 4, -7, 2, 0,
-16, -6, 17, -15, -2, 8, -3, 7, 1, 2, -8, 4, -5, 1, 11, 1, 1, 1, -6, 8, -1, -21,
3, -10, -9, -3, 8, 4, -10, 4, 0, -3, 0, -2, 8, 11, -3, 6, 0, 16, -15, -9, -7, 0,
-7, -11, 42, -15, -10, 7, 9, 8, -15, 0, 1, 2, 11, -9, 22, -4, -18, 8, -5, 2,
-22, 26, 2, 3, -3, -5, 29, -20, -13, 13, 10, -21, 17, 8, -12, -10, -5, 3, -2,
-15, -1, -4, -2, 8, -6, 10, -6, 2, -9, 20, -3, -8, 8, 4, 4, -20, 13, 7, -21,
-10, 10, -3, -9, 2, 9, -8, -7, -1, 17, -4, -8, 6, 4, 11, -17, 12, 12, -7, -21,
1, 4, -3, -12, 0, 26, -28, -17, 21, 11, -8, -9, 14, 5, -13, 8, -2, -1, -23, 4,
5, 6, -3, -19, 32, 0, -17, -5, 6, -1, -17, -6, 24, -3, -12, 13, 2, -17, -14, 5,
3, -6, -16, 7, 15, 3, -16, 4, -14, -3, 3, 3, 26, -16, 8, 1, 18, -2, -19, 10, 2,
-10, -3, 8, -8, -5, -3, -6, -14, -9, 2, 18, -9, 4, -5, 9, 8, -12, 3, -5, 3, -4,
17, -4, -11, -11, 16, 5, -13, 7, 1, 1, 0, 2, -2, -2, -6, -2, 0, 0, -17, 12, -6,
-10, -8, -2, 22, -1, -4, -1, 4, -4, 1, -7, 5, -13, -4, 13, 4, 6, -1, 13, -9, -4,
-5, -9, 13, -4, -1, -10, 1, 9, -8, 6, -16, 5, 0, 4, 18, -16, 6, -5, 13, -9, -8,
6, -4, 16, -7, 5, 5, 6, -3, -3, 8, -15, 5, 12, 3, -10, -15, 7, -14, 13, -13,
-11, 11, -7, 23, -13, -3, 1, -6, 7, -2, 11, -11, 2, 11, -13, -1, -9, 6, 3, -2,
3, -3, 17, -10, 5, -16, -6, 10, 1, 13, -9, 15, -21, 20, 3, -12, 0, -14, 19, -6,
5, 2, 0, 5, -9, -8, -7, 9, 5, -10, 11, -10, 4, -4, 9, 9, -30, 6, 9, 7, -8, -3,
-2, 12, -2, -6, 13, -8, -14, 5, 19, -3, -3, -1, 6, -2, -13, 0, 1, -5, -9, -1,
18, -10, 0, 13, -3, -5, -9, 15, -6, -5, -6, 4, 9, -4, -3, 4, 10, -11, -3, 14,
10, -9, -3, 13, -8, -5, 1, 7, 0, -20, 15, 8, 2, -2, -3, 1, -11, -6, -12, 10,
-17, -6, 13, -2, -1, -21, 10, 16, -15, 7, 16, -2, -1, -1, 10, 1, -11, 8, 15,
-12, -17, 3, 5, -12, -19, 3, -1, 0, -10, 12, 18, -25, -6, -2, 16, -10, -6, 32,
-4, -14, -4, 11, -6, -25, 6, 14, 7, -3, 15, 12, -11, -8, -22, 18, -5, -10, -2,
10, 2, -19, 15, 8, -4, -28, 15, 14, -1, -4, 3, 17, -23, -2, 10, -2, -6, 0, 14,
-2, 5, -4, -7, 15, -27, 1, 4, 0, -2, -8, 19, -14, -3, 5, 8, -10, -12, 10, 10,
-2, -1, 0, -9, -13, 10, 12, 2, -6, -6, 3, -10, 5, -6, 5, -3, -9, 6, 7, 6, -19,
-1, 7, -11, 4, 15, 22, -10, -7, 21, -18, -10, 2, 6, -6, -9, 9, -10, 9, -7, -11,
-3, 7, 9, 1, 18, -3, -11, 3, 10, -2, -18, -13, 3, 6, -3, -1, -2, -3, 8, 5, 3,
-5, 6, -4, 1, 5, -17, 3, -2, 4, -10, 2, -2, -1, 8, -4, -6, 3, 10, 2, 18, -22,
11, -4, -7, 18, -12, -11, -4, 17, 2, -8, 3, -3, -9, -6, -5, -5, -4, 19, -6, 16,
2, -6, 1, 4, 1, -24, 13, 8, 12, -11, 2, 1, -10, -5, 9, -7, -4, 10, -1, 19, -15,
-2, -6, -1, -6, -1, -7, 7, 11, -8, 7, -17, 13, 0, -4, 3, -14, 12, 1, -6, 16, -6,
-1, -11, 20, 4, -15, -2, -6, 6, -28, 24, 6, -12, -1, 2, 6, -2, 0, -9, 11, -8, 1,
2, 7, -4, -26, -2, 12, 4, -19, 17, 28, -15, -9, 9, 13, -15, -13, 17, -15, -3, 4,
13, 22, -13, -15, 14, 17, -17, -3, 6, 2, -11, -8, 10, -4, -31, -2, 33, -1, -14,
8, 23, -8, -3, 11, 1, -7, -3, 2, 5, 2, -16, 14, 1, -13, -9, 13, 20, -5, -8, 10,
3, -25, 1, 33, -20, -10, 18, 16, -2, -25, 16, -8, -14, -4, 12, -2, 6, -8, 6, 14,
-24, 0, 2, 24, -8, -6, 30, 8, -22, -19, 19, 0, -30, 9, 10, -2, -12, 5, 24, -11,
-7, -4, 16, -1, -7, 4, 14, -5, -28, 6, 14, -12, -24, 16, 9, -7, -23, 30, 16,
-21, 8, 8, 18, -21, -3, 17, -12, -9, 2, -1, 12, -9, -6, 5, -3, -14, -3, 18, -3,
-12, -2, 32, -1, -13, 1, 0, -17, -13, 16, -9, -7, 5, 8, 2, -6, -4, -4, -11, 12,
-4, 5, 13, 1, 3, -8, 1, -13, 11, 0, 6, -5, -10, 25, -14, 3, 4, -14, -8, -1, 19,
-5, -4, 7, -3, 4, 0, -5, -4, 6, -5, -4, 3, -10, 1, -14, 14, 6, -8, 11, 10, 2,
-11, 6, 10, 0, 1, 7, -2, -14, -4, 0, -15, 0, -6, 1, -1, 16, 5, -9, 14, -13, -4,
3, 6, 7, -4, 9, 4, 0, 2, -16, 1, -3, 2, 1, -1, 14, -12, -8, 2, 11, -21, -13, 11,
7, 1, 9, 22, 4, -7, -12, 2, 2, -7, -13, 10, -2, -11, 2, 13, 7, -10, -4, 13, 22,
-7, 12, 9, -13, -8, 3, 3, -9, -2, -4, -3, -5, -10, 4, 3, -7, 11, -3, 11, 12, -6,
6, -7, -4, -1, 12, 14, -17, -3, 11, -21, 6, 1, -10, -8, 5, 21, 0, -5, -5, 9,
-10, -1, -9, 3, 4, -14, 12, 3, -6, -13, 1, 11, -6, -19, 8, 27, -10, -11, 13, 0,
-12, -4, 16, 1, -17, -14, 22, 25, -26, 3, 4, 4, -15, -14, 23, 4, -17, 4, 21, 6,
-15, -7, 37, -9, -31, 5, 15, -14, -16, 10, 14, -12, -4, 14, 8, -9, -3, 12, 9, 0,
-14, 9, 4, -8, -13, -4, -7, -19, -10, 25, 4, -8, 12, 7, 1, -13, 11, -6, 2, -7,
5, 16, -2, 2, 0, -1, -13, -3, 1, 11, -20, -5, 12, -14, -3, -11, 3, 6, -20, 16,
19, -4, -11, 11, 21, -10, 1, -2, 17, -16, -11, 5, -8, 11, -14, 16, 4, -8, -5, 4,
14, -13, -7, 16, 16, -11, -1, 11, -9, -17, 1, 0, 2, -2, 2, 0, 11, 2, -2, 9, -10,
-5, -2, 20, 6, -6, 3, -6, -3, -3, -18, -6, -7, -1, 5, -3, 0, 0, 5, -2, 11, -12,
8, 13, 4, 6, -12, -2, 7, 4, -9, -8, -3, -2, -1, 12, -11, -1, -7, 1, 8, 2, 2, -4,
11, 4, -11, 2, 7, -8, 15, -4, 5, -6, 1, -3, -13, -2, -5, 5, 10, 8, -8, 13, -4,
5, -7, -10, 6, -2, 8, 2, 1, -1, -7, 0, -3, -2, 5, 3, 13, -3, 5, -17, 4, -6, -10,
-4, -19, 25, 4, 12, -3, 6, 8, -6, 13, 4, -2, -5, -4, 8, -2, -18, -3, 8, -3, -15,
13, 11, -1, -8, 11, 6, -9, 1, 0, 13, -19, -4, 15, 1, -7, -11, 7, 12, -4, -1, 7,
3, -14, -7, 7, -9, -5, 3, 24, -1, -2, 6, 3, 2, -18, -9, 6, 4, -6, 7, -4, -3, -2,
3, 4, -8, -5, 6, 21, 3, -1, 12, -10, -9, 3, -11, -1, -7, 19, 8, -3, -2, -3, 15,
-14, -7, -9, 6, -5, 2, 13, 1, -3, -9, 16, 11, -21, -6, 16, 1, -10, -3, 16, -3,
-22, 2, 17, -19, -1, 2, 17, 8, -20, 21, 9, -1, -23, 2, 13, -1, -6, 10, 18, -11,
-6, 5, 3, -20, -17, 3, 12, -16, -2, 18, 6, -8, -4, 7, 12, 0, -4, 20, 2, -14, 0,
7, -1, -16, -15, 16, 4, -6, -3, 10, 5, -7, 9, 1, -8, -10, 9, 1, 6, -6, -4, 9,
-9, -2, 6, 12, -8, 6, -1, -9, -5, -5, 4, 5, -2, 1, 13, -4, -1, -3, 1, 3, -13,
17, 8, -10, 3, -5, 10, -21, -9, 6, 0, -9, -1, 29, -12, 5, -15, 2, 9, -16, 16, 8,
-1, -12, 7, 6, -1, -9, -6, 10, 1, -7, -6, 6, -4, -24, 5, 10, -1, -6, 7, 27, -15,
-5, -2, 9, 4, -9, 5, -2, 8, -5, -7, 6, -14, -6, 12, 7, 4, -7, 7, 2, 1, -9, -1,
-2, -8, 14, -8, 6, -2, -9, -3, -8, 0, -4, 6, 5, 9, 3, 0, 7, -5, 2, -12, 3, 9,
-8, 23, -2, -4, 1, -7, -14, -6, 5, -17, 11, 12, 3, -1, 2, -2, -7, -7, 1, 14, 2,
11, 1, -5, -3, -5, -2, -3, 2, -2, -3, 11, 5, -10, -5, 1, -3, 8, 0, -4, 10, -10,
7, 1, 0, -3, -4, 2, 0, 4, -9, 3, -4, 3, -4, 5, 10, -4, 1, 3, -1, -9, 0, -3, -1,
1, -6, -3, 4, -6, 1, -8, 4, 2, -9, 16, 6, -7, -9, 9, 3, -8, -4, 2, -2, 1, 4, 9,
-6, -3, -5, 1, 5, -18, -1, 1, 18, -6, 6, 7, -4, -3, 2, 7, -14, 0, -2, 11, -8,
-13, 2, 6, -1, -6, 11, 0, 0, 13, -4, 12, -5, -10, 14, -4, -7, -10, 6, -11, -3,
1, 6, 1, -9, 13, 3, -8, -8, 9, 5, -8, 1, 12, -3, 4, -1, -7, -3, -2, -5, 9, 8,
-20, 0, 14, -2, -20, 10, 10, 3, -4, 2, 22, -11, -17, 10, 3, -12, -7, 6, 13, -11,
-11, 2, 18, -10, -10, 20, 9, -7, -1, 19, -6, -13, -11, 16, 12, -11, 0, 16, -1,
-21, 4, 5, -11, -12, 3, 14, 0, -11, 12, 0, 3, -16, 2, 15, -12, 0, 3, 18, -20,
-9, 14, -12, -8, -1, 9, 11, -3, 12, 9, -10, -5, -10, 2, 2, -8, -6, 11, -1, -1,
2, -5, -4, -8, 11, 13, -8, -5, 13, -2, -4, -5, 2, -3, -2, 8, 10, 1, -10, 8, 3,
-5, -9, -1, 4, 3, -8, -5, 3, -3, -2, 11, 11, -9, -10, 20, 7, -18, -1, 1, 2, -4,
3, 9, -4, -5, 1, -1, -5, 4, 0, 3, 11, -10, -11, 5, -8, -8, -4, 9, 3, 0, 12, 0,
-7, -1, 9, -12, 3, -1, 2, 14, -7, 7, -8, -15, 3, -1, -12, 1, 10, 0, 0, 2, -9, 2,
-6, 4, 1, -1, 16, -9, 19, 3, -6, -7, 1, 6, -13, 7, -1, 0, -4, -3, 5, -13, -6, 7,
-2, 6, 2, 3, 0, -2, -5, -2, -1, 3, -1, -4, 21, -8, -4, -4, -3, -5, -2, 8, -1, 7,
-5, 9, -1, -9, 6, -2, 1, 5, -4, -1, -5, 2, 2, -11, -7, -1, 2, 6, 2, -8, 13, 2,
3, 9, 1, -8, -10, 7, 8, -8, -11, 14, 5, -8, 1, 7, -5, -3, -1, 2, -1, -4, 0, 7,
2, -17, 4, 4, 3, -7, 11, 14, -11, 5, 1, 0, -9, -12, 2, 4, -8, 3, 12, -1, -2, 0,
3, 1, -8, 7, 5, 7, -3, -3, 12, -15, -8, -5, 5, -5, -5, 9, 10, 4, -10, 11, 2,
-12, -2, 13, -2, -3, 9, 0, -1, -2, -4, -2, 1, -7, -4, 10, -2, -7, 1, 4, -2, -17,
19, 11, -5, 5, 5, 6, -17, 0, 4, 3, -10, -1, 11, -4, -9, -6, 6, -5, -8, 8, 16, 4,
-11, -1, 12, -4, -4, -5, 13, -5, -5, 12, 0, -13, -13, 20, -5, -2, -1, 6, 6, -7,
7, -4, -1, 4, -4, 6, 4, -9, -4, 9, 9, -15, 1, -1, 6, -2, 6, 3, -15, 11, 1, 5,
-7, -3, 4, 0, 4, -3, -2, -3, -2, 0, -3, 7, -8, 1, 7, -4, 1, -6, 7, -5, 4, -4, 3,
4, -5, 10, -8, -6, -4, 6, 2, -2, 7, 1, -4, 4, -5, -9, 4, 4, -1, 11, 8, -9, 2,
-2, -11, -5, -2, 2, 5, -8, 10, 0, -9, 9, -1, 0, -4, 10, 6, 2, 2, 0, -9, 0, 3,
-7, 2, 1, 6, 2, 2, -4, 3, 1, 0, 0, -2, 0, -2, -4, 1, -9, -8, 4, 0, 6, -6, 4, 4,
-5, -2, 8, -3, -8, 6, 8, -2, -3, -1, 1, 1, -9, 7, -8, 3, 0, -5, 4, -2, -7, -5,
12, -8, 0, 4, 10, -1, -6, 12, 0, -9, -2, 0, 2, 2, -1, 1, 6, -3, -6, 2, -7, 4,
-4, 12, 3, -1, 1, 1, 14, -11, -3, -2, 0, -2, 6, 2, -10, -1, -1, 2, -3, -5, 1, 3,
2, 4, 8, -1, -3, 7, -3, -1, -8, -4, 6, 1, -5, -3, 13, -4, -8, 2, 0, -8, -1, 14,
0, -5, 4, 0, 9, -5, -7, 11, -4, 0, -3, 4, 3, -6, -3, 1, -1, -5, 9, 6, 2, -3, 5,
10, -2, -5, -9, 4, 1, -5, 10, -5, -3, -8, 6, 3, -7, 4, -1, 17, -8, 1, 4, 3, 2,
-9, 2, -4, 1, -2, 8, 1, -13, 5, 4, -2, -1, -6, 6, 4, 0, 1, 4, -1, -7, 7, 7, -6,
-5, 8, -1, -1, -9, 3, 3, -6, -1, 3, 7, -7, 7, 2, -2, -5, 0, 3, -1, -7, 0, 14,
-5, -4, -1, 2, -2, -4, 3, 4, 0, -1, -1, 7, -9, -10, 16, 5, -8, -4, 3, -4, 3, 0,
-1, 5, -7, -2, 6, -4, -7, -5, 14, 13, -5, 6, 2, 5, -9, -3, 2, -5, -4, 1, 10, -7,
1, 1, 1, -6, -5, 2, 6, 7, -9, 9, 2, -2, 2, -11, 7, -6, -1, 8, 6, 4, -12, 9, -6,
-10, -2, 2, 4, -5, 9, -6, 7, 5, -1, -1, -11, 1, 2, 2, 7, 0, -7, 1, 0, -8, -1,
-2, -5, 10, 5, 6, -3, -2, 0, -6, 0, 0, 2, -2, 3, -2, -3, -2, 0, 3, 1, -2, 4, 4,
2, 2, -1, -5, -3, 7, -6, 5, -1, -2, -4, -1, 4, -7, 5, 0, -4, 2, 9, -4, 0, -2, 0,
1, -2, 7, 0, -1, 2, -2, -2, -2, -4, -3, -7, 4, -3, 1, 2, 2, -2, 3, 5, -6, 9, 2,
-1, 1, 3, -2, 1, -1, -3, -2, -7, 3, 1, 0, -2, 1, 1, -3, 0, 4, 0, -4, 1, 5, -1,
0, -4, -2, 8, -2, -2, 3, 6, -9, -1, 7, 1, -7, 1, 7, -8, 1, 0, 3, -3, -1, -1, -3,
6, -5, 0, 5, -4, -4, 2, 10, -3, -2, 10, -1, 2, -5, 3, -2, -5, -1, 1, 1, -5, 1,
0, -3, -4, 3, 4, -3, -9, 3, -1, 8, 5, -2, 3, -2, 0, 2, 5, -10, -3, 5, 8, -7, 0,
3, -6, 0, -4, 3, -7, -4, 13, 5, -2, -1, 1, 4, -6, -5, -9, 8, 4, -5, 11, 0, -3,
-3, 16, -2, -8, 0, 3, 7, -2, -1, 0, -2, -4, -1, 4, 1, -7, 4, 1, -1, -4, -1, 2,
0, -7, 1, 7, -6, 7, 1, 4, -4, -3, 9, -3, -3, 0, 3, 1, -8, 4, 3, -8, 3, 0, 1, 0,
-3, -3, 4, 0, -7, 6, 3, -4, -5, 3, 3, -7, -6, 3, -1, -2, 2, 7, 1, -3, 1, -2, -1,
-2, 5, 2, 2, -2, -1, 4, 0, -12, -1, 4, -4, 10, 5, 5, -4, -7, 3, -1, -9, -1, 5,
3, -2, -1, 0, 1, 1, -3, -1, -3, 5, 2, 1, 1, -5, -7, 5, 4, -7, -7, 7, 9, -2, 8,
-5, -9, 1, 4, -6, 1, 0, -7, 6, -1, 1, -3, -4, 5, 4, -4, 3, 5, 1, 1, -4, -8, -3,
-1, 1, 0, 2, 5, -6, 13, 0, -11, -4, -1, 2, 1, 4, 1, -1, -8, -1, 6, -7, -4, 11,
-3, 8, 8, -5, -4, -2, -4, -2, 5, 2, 0, 0, 8, -3, -3, 0, -4, -6, -1, 5, 3, 2, 3,
5, -5, -5, 3, -3, -1, 4, -3, 4, 2, 3, 3, -6, -5, -3, 2, -1, 2, -1, 4, 2, -3, 2,
-4, -3, -4, 2, 7, -1, 4, 7, 1, -3, -1, -1, -5, 0, -4, 0, 1, 0, 3, 0, 2, -7, 1,
5, 7, -7, -1, 9, -7, 2, 0, -2, -1, -7, 4, 4, -9, 4, 6, 2, -1, -2, -2, 1, 3, 0,
0, 1, -1, 2, 7, -1, -8, -1, 5, -3, 2, -3, 1, 3, -3, 3, 2, -6, -4, 9, 2, -2, 1,
0, 1, 3, -2, 1, 5, -7, -2, 2, -4, -2, -1, 5, 2, -6, 3, 1, 0, -1, 2, 1, -10, 3,
7, -1, -4, -3, -5, 2, 2, -1, 2, 2, -2, 3, 7, -4, -3, -4, 3, -1, -6, -3, 5, -2,
-5, 7, 3, -1, 0, 5, 3, -1, -3, -2, 5, -5, -3, 6, 1, 3, -1, 1, -4, -3, 2, 7, 2,
-7, 4, 1, 2, -1, 0, -3, -6, 3, 0, 3, 1, 0, 4, -2, -3, -3, -5, 2, 0, -3, 7, 7,
-3, -1, 4, -9, -7, 3, 3, -4, -1, 5, 3, 1, 0, -6, -3, -2, 3, 7, 4, 0, -1, 1, -3,
0, -8, 1, 3, -1, 3, 4, 1, -5, 3, -7, -4, -2, -4, 7, 3, -3, 4, -1, 1, 2, 1, -3,
-2, 1, 0, 2, -1, -4, -6, 10, -1, 1, 1, 0, 0, 0, 6, -5, 0, -3, 2, -1, 0, -1, -5,
1, 6, -3, -3, 7, 5, 0, 0, 0, -7, -1, -2, 4, -3, -3, 2, 6, 9, -1, -6, -1, -2, -3,
3, -2, 2, -2, 1, 4, -1, -6, -2, 2, 0, -2, 0, 10, -1, -1, 0, -1, -6, 1, 1, -1, 9,
-5, 5, 6, -4, -4, -3, 1, -2, 2, 5, 1, -3, -2, 3, -1, -5, -2, 1, -1, 0, 3, -1, 3,
-3, 1, 2, 0, -3, -1, 5, -5, 2, 1, 3, -1, -2, 0, -1, 1, 1, 6, -1, -4, 3, 5, -1,
-5, -1, 1, -1, 0, 1, 0, -6, -1, 4, 7, -7, -3, 6, -1, 3, -5, 3, 0, -4, 0, 6, 2,
-5, 6, 1, -4, -4, -3, 4, 4, -3, -4, -2, 3, -1, 1, -2, -5, -3, 5, 9, -5, -1, -1,
3, -2, -1, 2, -4, -1, 2, 4, -1, -3, 5, 3, -2, -3, -4, 4, -2, 1, -4, 4, 0, -4, 4,
-3, -2, -9, 8, 4, -4, 3, 1, 2, -5, 1, 3, -1, -3, -5, 4, 1, -1, 3, -1, -2, -2, 0,
1, 2, -7, 1, 3, -3, 0, 2, 5, -6, 0, 0, -1, 1, 1, 5, 1, -2, -1, 2, -4, -4, -3,
-1, 2, 3, 3, 6, 2, -2, 2, 1, -4, -5, 1, 5, -1, -2, 1, -1, -3, -7, 1, 0, -2, 4,
4, 2, 0, 1, 1, -2, -5, -3, -1, 8, 2, 1, 1, -2, -2, 0, -2, -6, -3, 2, 5, -1, 1,
2, 1, 1, -2, 0, -2, -1, 3, 2, 0, -2, -1, -4, -1, -4, -3, 7, 2, 5, -1, -1, -1,
-1, 6, -3, 0, -2, 0, 2, 0, 0, -3, -2, -5, 2, 3, -4, 1, 0, -3, 2, 1, -1, 0, 1, 1,
1, 2, 0, -3, 1, -3, -5, 0, -3, 0, 0, 1, 0, -1, 5, 1, -1, -2, 1, 1, 0, 3, 0, -2,
-3, -2, 3, 0, -1, -1, 2, 3, -1, -1, -2, -2, -7, -2, 2, 1, 4, 3, 4, 1, -1, -1, 0,
-3, -4, 1, -2, 2, 0, -1, 3, -5, 0, 0, 2, 2, -3, 4, 2, -1, -2, 3, -1, -5, 0, -1,
0, 1, 2, 3, -1, -1, -1, 1, -1, -4, 0, -1, 3, -2, 1, 3, -2, -1, 3, 6, -5, -1, 2,
-2, 0, 2, -3, -3, 1, -3, 1, 2, -3, 3, 2, 0, 0, -3, 1, -1, -1, -3, 0, -2, 0, 4,
3, -1, -4, 5, 2, -6, 0, 1, -2, 5, 2, 1, 0, -6, 2, 2, -5, -3, -3, 1, 5, 0, -1, 0,
-3, -4, 1, 1, -2, -1, 1, 4, -1, -2, 2, 0, -4, 0, -2, 2, 3, -1, 3, -3, -1, 0, 1,
1, -5, -2, 0, 0, 1, -1, 3, -1, 0, 1, 1, 3, -5, 8, -2, -2, 4, -2, 4, -5, -2, 2,
-1, 0, 1, -2, -3, 2, 1, 0, 2, -4, -1, -2, 2, -2, -2, 6, -3, 1, 1, 4, -4, 2, 2,
-4, 2, -4, 2, 1, -3, -2, -1, 0, -1, -1, 2, 4, 0, -2, 7, -1, -3, -3, -1, -1, -3,
2, 0, 2, -3, 1, 3, 2, -1, -2, 3, -2, 0, -1, -1, 0, -1, 1, 3, 1, -4, 2, 4, -2, 1,
-2, 0, 1, -3, 1, -5, -1, 2, 1, 0, -1, 3, 5, 4, 1, -3, -2, 0, -1, -2, -2, -5, -3,
4, 0, -1, -1, 0, 1, 4, 1, -2, 2, -1, 1, 0, 2, 0, 0, -2, -1, -2, -4, 6, 1, -3, 1,
-2, 0, -1, 1, -1, -2, 1, 1, 6, -1, -3, 1, -3, -1, -1, -1, -4, 1, -2, 0, 3, -1,
0, 1, 3, -4, 0, 2, 0, 2, 0, -1, 2, -1, -2, -1, -4, -2, 0, 0, 1, 0, -5, -1, 2, 0,
-3, 1, 0, 2, 3, 2, 3, -3, -2, -5, 0, -1, -2, 2, 1, 2, 0, -2, 1, 2, -1, -3, 4,
-3, -3, 4, -3, 0, -5, 1, 3, -3, 0, -1, 1, -1, 3, 1, -2, 1, -1, 1, 1, -2, -1, 0,
2, -1, -1, 0, 0, -3, -1, 1, -6, 0, -3, 2, 1, -4, 2, 0, 2, 1, 0, 1, -1, 0, 0, 1,
-4, -3, 2, -2, 2, -5, 1, 2, -2, 5, 2, -1, -4, 4, 1, -1, -2, 1, 1, -3, 2, -3, 0,
-1, -1, 2, 0, -1, 1, 4, 0, -2, -2, 0, 6, -3, -2, 5, -4, -3, 2, 0, -4, -1, 2, 3,
1, -2, 0, 0, -2, 0, 1, 2, 0, -2, 5, -1, -2, 0, -1, 0, -4, 0, 4, 2, 0, 0, -2, -2,
-1, 0, 1, -1, -3, 2, 5, -1, 1, -3, -1, 0, -3, 3, 0, 0, -1, 2, 2, -2, -1, 0, 1,
-5, 2, 4, -1, 2, 0, 2, -5, -3, 1, -1, -1, -2, 3, -1, 2, 0, 1, 3, -7, 2, 4, -1,
-1, -1, 2, -1, -1, -2, 1, -2, -3, 5, 2, -1, -3, 0, 3, 0, -3, -2, 1, -2, -1, 1,
1, -2, 2, 4, -1, 1, -2, 0, 2, -3, -2, -1, 0, 0, 2, 0, -5, 3, 1, 0, 1, 0, 0, -2,
2, -2, -2, -2, -2, 2, 0, -1, 0, 2, 1, 1, 0, -3, 1, -2, -3, 1, -2, 0, 2, 3, -1,
1, 0, 0, 4, -4, 0, -2, 0, 0, 0, 2, -4, 1, -1, 1, -1, -1, 3, 0, 1, -3, 3, 0, -3,
0, 0, 1, -2, 4, 2, 0, -1, -1, 1, -2, 2, -2, -1, -3, 0, 3, -2, 1, -2, 1, 3, -2,
0, 0, -1, -2, 1, 2, -3, -3, 1, 2, -3, -1, 4, -1, -3, 0, 1, 0, -4, 2, 4, -2, -2,
1, 4, 0, -1, 0, 1, 0, -2, 0, 0, -2, -4, 2, 4, -1, -2, 2, 3, -1, 0, -1, 0, -3,
-1, 3, -1, -2, -1, 1, 0, 0, -3, 2, 3, -1, 1, 0, 1, -3, 0, 2, -4, -2, 0, 4, -2,
0, 1, 0, 2, -1, 3, -3, -3, 0, 0, 0, -2, 1, -1, 2, 1, 0, 2, -2, 1, 0, 0, 1, -3,
4, 1, -4, -1, 0, 0, -3, 0, 2, 0, -2, 3, 3, -3, -3, 0, 3, -1, -1, 1, 1, 1, -1, 3,
1, -2, -2, -1, 3, -4, 0, 3, -1, -1, -2, 0, 1, 0, 0, 2, 0, 0, 2, -1, -1, -2, -2,
0, -1, 1, -1, -1, 0, -1, 1, 0, 0, -1, 2, 1, 0, 1, 0, 1, -2, 0, 0, -1, -1, 1, 1,
-2, 1, 0, 0, 0, -1, -1, 0, 0, 0, 1, 0, -2, 0, 3, 0, -2, 1, -1, 0, 0, -2, 1, -1,
-1, 1, 2, -2, -1, 1, 0, 0, -1, 1, 0, -2, 1, 0, 0, -1, -1, 2, -1, -2, -1, 1, 0,
-1, 0, 0, 0, -1, 1, 0, -1, 1, 0, 0, 0, -1, -1, 0, 1, -1, -1, -1, 0, 0, 0, 0, 0,
1, -1, 0, 0, -1, 0, -1, 1, 0, -1, 0, 1, 0, -1, -1, 0, 0, 0, -1, 0, 0, -1, -1, 0,
-1, 0, 0, 1, 1, -1, 1, -1, 1, -1, -2, 0, -1, 0, -1, 1, -1, 0, 1, 0, -1, -1, 0,
0, 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, -1, 0, 0, -1, 0, -1, 0, -1, -1, 0,
-1, 0, 1, 0, -1, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, -2, 0, 0, -1, 0, 0, 1, -1,
0, 1, 1, 0, -2, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, -1, -1, 0, 1, 0, -1, 0, 1, -1,
-1, 0, 0, -1, 0, 0, -1, -1, -1, 1, 0, -1, 0, -1, 1, 0, -1, 0, -1, 0, 0, 0, 0, 0,
-1, 0, 0, -1, -1, 0, -1, -1, 0, 0, 0, -1, 0, -1, 0, 1, 0, 0, 0, -1, 0, 0, 0, -1,
0, 0, 0, 0, 0, 0, -1, 0, 0, -1, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, -1, 1, 0, 0, 0,
-1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0, -1, 0, 0, -1, 0,
0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0,
-1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, };

#endif /* EATSTATICELEVEN_H_ */
