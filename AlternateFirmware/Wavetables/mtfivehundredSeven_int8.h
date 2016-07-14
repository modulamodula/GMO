#ifndef MTFIVEHUNDREDSEVEN_H_
#define MTFIVEHUNDREDSEVEN_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define MTFIVEHUNDREDSEVEN_NUM_CELLS 5278
#define MTFIVEHUNDREDSEVEN_SAMPLERATE 16384
 
const int8_t __attribute__((section(".progmem.data"))) MTFIVEHUNDREDSEVEN_DATA
[] = {0, -1, 0, 0, 0, 0, -1, 0, 0, 3, -1, -2, 0, -4, -1, -4, 0, 0, -1, 2, 0, 2,
-1, 4, 0, 1, -1, -1, 0, 7, -1, 1, 0, -29, -1, -30, 0, -1, -1, -10, 0, -40, 0, 6,
-1, 8, 0, -62, -1, -80, 0, -24, -1, -11, 0, -74, -1, -73, 0, -28, -1, -34, 0, 9,
0, 105, -1, 96, 0, 56, -1, 50, 0, 49, 0, 45, -1, 57, 0, 38, 0, 21, -1, 37, 0,
25, -1, 7, 0, -21, -1, -28, 0, -40, -1, -57, 0, -60, -1, -68, 0, -61, -1, -38,
0, 56, -1, 84, 0, 52, -1, 50, 0, 9, -1, 18, 0, 24, 0, -8, -1, -23, 0, -62, 0,
-62, -1, -28, 0, 46, -1, 86, 0, 60, 0, 45, -1, -32, 0, -73, 0, -57, 0, -53, -1,
-30, 0, 64, -1, 73, 0, -10, -1, -35, 0, -68, 0, -59, -1, -21, 0, 22, -1, 54, 0,
4, -1, -40, 0, -34, -1, 22, 0, 58, 0, 0, -1, -69, 0, -80, 0, 32, -1, 116, 0, 35,
-1, -46, 0, 21, -1, 70, 0, -33, -1, -80, 0, 31, 0, 13, -1, -73, 0, 36, -1, 60,
0, -27, -1, 68, 0, 46, -1, -34, 0, 36, -1, -8, 0, -38, -1, -18, 0, -26, 0, -16,
-1, -13, 0, -7, 0, 8, -1, 37, 0, 20, 0, -30, -1, 34, 0, 42, 0, 54, -1, -16, 0,
-9, -1, 36, 0, -76, -1, 76, 0, 43, -1, -100, 0, 2, -1, 84, 0, 13, 0, -104, -1,
-73, 0, 39, -1, 89, 0, 69, 0, -37, -1, -96, 0, -27, -1, 26, 0, 65, 0, 53, -1,
59, 0, 39, -1, -6, 0, -9, -1, -30, 0, -37, -1, -37, 0, -29, -1, -19, 0, -3, -1,
10, -1, 20, 0, 26, -1, 34, 0, 34, 0, 32, -1, 28, 0, 25, 0, 21, 0, 17, 0, 15, 0,
31, 0, 50, 0, 27, 0, 18, 0, -13, 0, -28, 0, -9, 0, -3, 0, 26, 0, -14, 0, -44,
-1, -18, 0, -31, -1, -42, 0, -77, -1, -78, 0, -63, -1, -63, 0, -55, -1, -51, 0,
-35, -1, -35, 0, -74, -1, -56, 0, -4, -1, -26, 0, -44, 0, -56, -1, -64, 0, -65,
0, -35, -1, -12, 0, -33, -1, 12, 0, 5, -1, -26, 0, 20, -1, 14, 0, -11, -1, -3,
0, 7, -1, 26, 0, 47, -1, 69, 0, 81, 0, 87, -1, 66, 0, 33, -1, 72, 0, 94, -1, 54,
0, 48, -1, 42, 0, 44, -1, 68, 0, 54, 0, 50, -1, 34, 0, 44, -1, 70, 0, 7, -1, 14,
0, 28, 0, 7, -1, 2, 0, -15, -1, 23, 0, -8, 0, -46, -1, -15, 0, -29, -1, -36, 0,
-51, 0, -38, -1, -16, 0, -77, -1, -61, 0, -48, -1, -60, 0, -65, -1, -72, 0, -30,
-1, -46, 0, -75, -1, -69, 0, -72, 0, -52, -1, -34, 0, -42, -1, -7, 0, -6, -1,
-29, 0, -40, -1, -25, 0, 23, -1, -7, 0, -23, -1, 16, -1, 9, 0, 25, -1, 56, 0,
54, -1, 56, 0, 44, -1, 36, 0, 21, -1, 43, 0, 80, 0, 56, 0, 28, 0, 36, 0, 32, -1,
54, 0, 66, 0, 53, 0, 79, -1, 60, 0, 31, -1, 19, 0, 8, -1, 8, 0, 12, -1, 42, 0,
49, -1, -2, -1, -31, 0, -19, -1, -18, 0, 3, -1, -8, 0, -21, 0, -30, -1, -37, 0,
-3, -1, -44, 0, -65, -1, -37, 0, -50, 0, -28, -1, -21, 0, -42, -1, -54, 0, -71,
0, -81, -1, -87, 0, -82, -1, -77, 0, -63, -1, -31, 0, -15, -1, -59, 0, -46, 0,
-20, -1, -28, 0, -21, 0, -26, -1, 20, 0, 9, 0, -9, -1, -3, 0, 0, -1, 0, 0, 5, 0,
11, -1, 44, 0, 55, -1, 45, 0, 50, -1, 42, 0, 86, 0, 70, -1, 43, 0, 45, -1, 44,
0, 40, -1, 38, 0, 38, 0, 41, -1, 52, 0, 62, -1, 72, 0, 74, -1, 68, 0, 54, -1,
35, 0, 16, -1, 0, 0, 8, 0, 17, -1, -19, 0, -3, 0, 7, 0, -2, -1, -3, 0, -24, -1,
-58, 0, -38, -1, -35, 0, -51, 0, -51, 0, -87, 0, -70, 0, -65, -1, -58, 0, -56,
-1, -47, 0, -38, -1, -33, 0, -66, 0, -66, -1, -34, 0, -50, -1, -36, 0, -52, 0,
-21, -1, -1, 0, -35, -1, -38, 0, -29, -1, -25, 0, 6, 0, 12, 0, 6, 0, 15, 0, 6,
0, 50, -1, 59, 0, 46, -1, 47, 0, 44, -1, 43, 0, 38, 0, 39, 0, 35, -1, 36, 0, 36,
0, 62, 0, 68, 0, 56, 0, 84, -1, 68, 0, 45, 0, 34, 0, 26, 0, 23, 0, 20, -1, 22,
0, 21, -1, 25, 0, 43, 0, 47, -1, 0, 0, -21, -1, -11, 0, -3, 0, 2, -1, 8, 0, 7,
-1, -3, 0, -38, -1, -31, 0, -40, -1, -68, 0, -51, -1, -49, 0, -48, 0, -45, 0,
-40, -1, -38, 0, -36, -1, -34, 0, -33, -1, -33, 0, -34, 0, -38, 0, -55, -1, -71,
0, -38, -1, -43, 0, -39, 0, -40, -1, -42, 0, -9, 0, -8, -1, 3, 0, 4, -1, -17, 0,
-15, 0, 35, 0, 36, 0, 26, 0, 12, 0, 17, 0, 29, 0, 10, 0, 31, 0, 44, 0, 49, 0,
57, -1, 64, 0, 68, -1, 69, 0, 71, -1, 70, 0, 60, 0, 29, 0, 35, 0, 57, 0, 28, 0,
13, 0, 15, -1, 15, 0, 22, -1, 28, 0, 35, -1, 6, 0, 4, -1, 35, 0, 4, 0, -28, -1,
4, 0, 20, -1, -9, 0, -26, -1, -42, 0, -28, -1, -46, 0, -53, 0, -18, -1, -41, 0,
-76, -1, -50, 0, -49, -1, -62, 0, -54, 0, -75, -1, -42, 0, -36, -1, -74, 0, -67,
-1, -25, 0, -32, -1, -49, 0, -57, -1, -49, 0, -32, -1, -55, 0, -20, 0, -4, 0,
-36, -1, -49, 0, -33, -1, -21, 0, 3, -1, 13, 0, 1, 0, 27, 0, 17, -1, 6, 0, 9, 0,
23, 0, 57, -1, 60, 0, 26, -1, 35, 0, 62, -1, 46, -1, 58, 0, 42, -1, 56, 0, 84,
-1, 51, 0, 31, -1, 52, 0, 68, 0, 68, -1, 56, 0, 32, -1, 49, 0, 30, 0, 29, -1,
59, 0, 31, -1, 6, 0, 2, 0, -1, -1, -10, 0, -14, -1, -18, 0, -4, 0, 4, -1, -19,
0, -4, -1, -8, 0, -33, -1, -44, 0, -48, -1, -22, 0, -19, -1, -45, 0, -53, 0,
-56, 0, -63, -1, -66, 0, -69, -1, -69, 0, -70, 0, -66, 0, -55, 0, -32, 0, -47,
-1, -41, 0, -42, 0, -48, 0, -9, 0, -21, 0, -46, 0, -23, 0, -7, 0, -37, 0, -29,
0, -14, 0, 14, 0, 9, 0, -3, -1, 33, 0, 39, -1, 42, 0, 44, -1, 34, 0, 15, 0, 45,
-1, 47, 0, 43, -1, 51, 0, 35, -1, 68, 0, 72, -1, 39, 0, 46, -1, 66, 0, 38, 0,
44, -1, 62, 0, 65, -1, 69, 0, 67, -1, 61, 0, 48, -1, 36, 0, 22, -1, 12, 0, 20,
0, 42, 0, 29, 0, 10, 0, 2, 0, -9, 0, -22, -1, -5, 0, -12, -1, -45, 0, -33, -1,
-25, -1, -22, 0, -18, -1, -20, 0, -29, -1, -60, 0, -58, -1, -26, 0, -37, -1,
-70, 0, -58, 0, -26, -1, -33, 0, -47, -1, -51, 0, -61, -1, -65, 0, -65, -1, -42,
0, -41, 0, -62, -1, -43, 0, -30, 0, -27, -1, -19, 0, -13, 0, -7, -1, -1, 0, 4,
-1, 8, 0, 7, -1, -6, 0, -16, -1, 13, 0, 14, 0, 10, -1, 23, 0, 0, -1, 9, 0, 20,
-1, 25, 0, 33, -1, 39, 0, 48, -1, 61, 0, 56, 0, 29, -1, 46, 0, 61, -1, 42, 0,
55, -1, 41, 0, 44, -1, 74, 0, 65, -1, 59, 0, 53, -1, 50, 0, 40, -1, 34, 0, 14,
-1, 9, 0, 28, -1, 3, 0, -17, 0, -9, -1, -10, 0, -6, -1, -3, 0, 1, -1, 0, 0, -2,
0, -8, -1, -17, 0, -28, 0, -40, 0, -53, 0, -50, -1, -25, 0, -29, 0, -47, 0, -51,
-1, -55, 0, -59, -1, -63, 0, -67, -1, -69, 0, -69, -1, -67, 0, -58, 0, -36, -1,
-49, 0, -41, -1, -15, 0, -27, -1, -31, 0, -36, 0, -39, 0, -41, 0, -38, -1, -32,
0, -26, -1, -19, 0, -11, -1, -3, 0, 4, -1, 13, 0, 20, 0, 26, 0, 34, 0, 40, 0,
46, 0, 47, 0, 37, 0, 22, 0, 47, -1, 50, 0, 42, -1, 57, 0, 36, 0, 31, -1, 37, 0,
46, -1, 68, 0, 70, 0, 53, -1, 44, 0, 43, -1, 36, 0, 37, 0, 53, -1, 33, 0, 13, 0,
28, 0, 31, 0, 33, 0, 34, -1, 34, 0, 19, -1, -8, 0, -2, -1, 21, 0, 6, -1, -23, 0,
-24, 0, -4, -1, -4, 0, -11, -1, -26, 0, -44, -1, -26, 0, -43, -1, -52, 0, -23,
-1, -28, 0, -44, -1, -46, 0, -50, -1, -55, 0, -58, -1, -61, 0, -63, -1, -46, 0,
-41, -1, -65, 0, -52, 0, -38, -1, -31, 0, -25, -1, -21, 0, -20, -1, -22, 0, -24,
0, -28, 0, -30, 0, -31, 0, -30, -1, -26, 0, -19, -1, -15, 0, -8, -1, -1, 0, 7,
0, 14, -1, 21, 0, 27, -1, 35, 0, 39, 0, 44, -1, 49, 0, 53, -1, 54, 0, 56, -1,
56, 0, 45, -1, 29, 0, 45, -1, 57, 0, 39, -1, 55, 0, 40, -1, 24, 0, 32, 0, 32,
-1, 34, 0, 33, -1, 36, 0, 48, 0, 55, -1, 33, 0, 13, 0, 29, 0, 31, 0, 3, -1, 11,
0, 18, -1, 19, 0, 7, 0, -15, -1, -1, 0, 12, -1, 3, 0, -3, 0, -11, 0, -28, -1,
-42, 0, -24, -1, -30, 0, -43, -1, -30, 0, -54, -1, -46, 0, -24, 0, -32, -1, -40,
0, -45, -1, -52, 0, -66, 0, -49, -1, -44, 0, -56, -1, -41, 0, -59, -1, -52, 0,
-23, -1, -34, 0, -55, -1, -45, 0, -21, 0, -39, -1, -24, 0, -25, 0, -33, -1, -2,
0, 2, -1, -17, 0, -21, 0, 9, -1, 6, 0, 0, 0, 19, -1, 4, 0, 12, -1, 40, 0, 35, 0,
18, -1, 17, 0, 44, -1, 36, 0, 32, 0, 49, -1, 28, 0, 39, -1, 63, 0, 55, 0, 36,
-1, 34, 0, 37, -1, 35, 0, 33, -1, 33, 0, 34, 0, 49, -1, 53, 0, 32, -1, 49, 0,
56, 0, 46, -1, 35, 0, 12, 0, 18, 0, 40, -1, 35, 0, 25, -1, 21, 0, 16, -1, 12,
-1, 5, 0, -1, -1, -7, 0, -14, -1, -22, 0, -26, -1, -32, 0, -36, 0, -39, -1, -24,
0, -35, -1, -47, 0, -32, -1, -54, 0, -50, -1, -29, 0, -38, 0, -59, 0, -61, -1,
-39, 0, -53, -1, -70, 0, -59, 0, -52, -1, -45, 0, -40, -1, -35, 0, -29, 0, -27,
-1, -28, 0, -33, 0, -48, -1, -40, 0, -14, -1, -15, 0, -30, -1, -34, 0, -8, -1,
-9, 0, -17, 0, 9, -1, 8, 0, 2, -1, 2, 0, 0, 0, 1, -1, 3, 0, 7, -1, 12, 0, 16,
-1, 25, 0, 45, -1, 49, 0, 32, -1, 23, 0, 45, -1, 50, 0, 36, 0, 54, -1, 40, 0,
36, -1, 63, 0, 61, -1, 41, 0, 32, -1, 53, 0, 51, 0, 30, -1, 30, 0, 30, -1, 43,
0, 45, -1, 19, 0, 23, 0, 29, 0, 25, -1, 25, 0, 25, -1, 23, 0, 22, -1, 19, 0, 1,
-1, -16, 0, -16, -1, -11, 0, -10, 0, -9, -1, -8, 0, -8, 0, -11, 0, -13, 0, -20,
0, -29, -1, -45, 0, -33, -1, -34, 0, -57, 0, -40, -1, -26, 0, -38, 0, -57, -1,
-58, 0, -38, -1, -45, 0, -55, -1, -37, 0, -53, -1, -55, 0, -29, -1, -28, 0, -41,
-1, -53, 0, -45, -1, -33, 0, -28, 0, -21, 0, -15, -1, -11, 0, -9, -1, -9, 0, -9,
-1, -9, 0, -10, -1, -12, 0, -13, -1, -11, 0, -7, -1, -2, 0, 4, 0, 11, -1, 18, 0,
27, 0, 31, 0, 17, -1, 22, 0, 46, -1, 47, 0, 33, -1, 23, 0, 40, -1, 51, 0, 30,
-1, 29, 0, 42, -1, 46, 0, 50, 0, 55, 0, 57, -1, 49, 0, 33, -1, 37, 0, 55, 0, 54,
-1, 35, -1, 22, 0, 22, -1, 24, 0, 25, 0, 37, -1, 32, 0, 15, -1, 32, 0, 34, 0,
25, -1, 21, 0, 14, -1, 8, -1, -3, 0, -14, -1, -8, 0, 5, -1, 1, 0, -7, -1, -12,
0, -19, -1, -36, 0, -37, -1, -18, 0, -16, -1, -27, 0, -35, -1, -50, 0, -43, -1,
-38, 0, -59, -1, -60, 0, -55, -1, -53, 0, -42, -1, -32, 0, -39, -1, -47, -1,
-45, 0, -47, -1, -46, 0, -48, 0, -49, -1, -48, 0, -36, -1, -28, 0, -47, -1, -45,
0, -34, -1, -29, 0, -22, -1, -16, 0, -7, -1, -8, 0, -20, -1, -13, 0, 6, 0, 9,
-1, 11, 0, 15, -1, 17, 0, 5, -1, 1, 0, 9, -1, 16, 0, 24, 0, 35, -1, 27, 0, 26,
-1, 42, 0, 25, -1, 31, 0, 51, 0, 52, 0, 52, -1, 52, 0, 54, -1, 54, 0, 52, 0, 51,
0, 49, -1, 48, 0, 46, -1, 42, 0, 38, 0, 34, -1, 25, 0, 31, -1, 44, 0, 33, -1,
24, 0, 20, -1, 14, 0, 10, -1, 7, 0, 5, 0, 4, 0, 5, 0, 6, 0, 9, 0, 10, -1, 8, 0,
-2, -1, -19, 0, -15, -1, -5, 0, -9, 0, -11, -1, -12, 0, -16, 0, -31, -1, -41, 0,
-29, -1, -23, 0, -43, -1, -35, 0, -32, 0, -53, 0, -42, -1, -28, 0, -33, -1, -48,
0, -56, -1, -44, 0, -32, -1, -42, 0, -48, -1, -50, 0, -49, 0, -34, 0, -40, -1,
-53, 0, -36, 0, -23, 0, -28, 0, -38, -1, -41, 0, -24, -1, -19, 0, -31, -1, -15,
0, -5, -1, -12, -1, -12, 0, -18, -1, -15, 0, 1, -1, 13, 0, 13, -1, 14, -1, 15,
0, 10, -1, 3, 0, 8, -1, 27, 0, 20, 0, 17, -1, 38, 0, 40, -1, 36, 0, 31, -1, 21,
0, 30, -1, 46, 0, 47, -1, 37, 0, 28, 0, 36, 0, 49, 0, 35, -1, 37, 0, 49, 0, 32,
0, 34, 0, 50, -1, 49, 0, 36, -1, 25, 0, 31, -1, 44, 0, 28, 0, 25, -1, 37, 0, 16,
0, 9, -1, 13, 0, 12, -1, 16, -1, 24, 0, 20, -1, 11, 0, 8, -1, 2, 0, -6, 0, -13,
-1, -3, 0, 2, -1, -13, 0, -19, 0, -23, -1, -25, 0, -14, 0, -27, -1, -42, 0, -38,
-1, -39, 0, -40, 0, -39, -1, -38, 0, -39, 0, -39, -1, -38, 0, -37, -1, -32, 0,
-31, -1, -42, 0, -50, -1, -44, 0, -30, -1, -42, 0, -44, -1, -28, 0, -41, 0, -46,
0, -29, 0, -20, 0, -20, -1, -21, 0, -21, -1, -24, 0, -32, 0, -31, -1, -16, 0,
-7, -1, -7, 0, -5, -1, -13, 0, -17, 0, 3, -1, -2, 0, -12, -1, 5, 0, 17, 0, 17,
-1, 8, 0, 3, -1, 6, 0, 10, -1, 13, 0, 15, -1, 19, 0, 24, -1, 28, 0, 34, 0, 38,
-1, 42, 0, 35, -1, 32, 0, 47, -1, 39, 0, 30, -1, 44, 0, 53, -1, 50, 0, 38, -1,
30, 0, 41, -1, 51, 0, 37, -1, 28, 0, 31, -1, 32, 0, 41, -1, 41, 0, 22, -1, 21,
0, 25, -1, 23, 0, 23, 0, 21, -1, 21, 0, 20, -1, 19, 0, 17, -1, 17, 0, 15, -1,
14, 0, 11, 0, 8, -1, 7, 0, 2, -1, 0, 0, -3, -1, -7, 0, -12, -1, -22, 0, -30, -1,
-24, 0, -16, -1, -33, 0, -33, 0, -23, -1, -41, 0, -43, -1, -34, 0, -34, -1, -34,
0, -34, 0, -32, -1, -40, 0, -51, 0, -52, -1, -50, 0, -51, -1, -50, 0, -48, -1,
-47, 0, -44, -1, -39, 0, -36, -1, -31, 0, -30, 0, -40, -1, -29, 0, -23, -1, -39,
0, -31, -1, -19, 0, -17, -1, -15, 0, -10, -1, -9, 0, -15, -1, -20, 0, -10, -1,
5, 0, -5, 0, -6, -1, 11, 0, 5, 0, -4, -1, 3, 0, 7, 0, 10, -1, 14, 0, 17, -1, 19,
0, 22, -1, 26, 0, 29, -1, 31, 0, 34, 0, 37, -1, 42, 0, 44, 0, 37, -1, 31, 0, 31,
-1, 32, 0, 32, 0, 33, -1, 33, 0, 34, -1, 42, 0, 49, 0, 35, -1, 29, 0, 36, -1,
37, 0, 39, -1, 40, 0, 41, -1, 40, 0, 32, 0, 20, -1, 24, 0, 34, -1, 32, 0, 25, 0,
13, 0, 8, -1, 17, 0, 23, -1, 16, 0, 9, 0, 3, -1, -5, 0, 2, 0, 5, -1, -12, 0,
-17, -1, -17, 0, -19, -1, -21, 0, -22, 0, -23, 0, -17, 0, -13, -1, -15, 0, -20,
-1, -23, 0, -26, 0, -32, -1, -41, 0, -38, -1, -25, 0, -26, -1, -31, 0, -32, -1,
-34, 0, -36, -1, -40, 0, -42, 0, -44, 0, -46, -1, -45, 0, -35, 0, -34, 0, -47,
-1, -43, 0, -31, -1, -27, 0, -27, -1, -28, 0, -27, 0, -29, 0, -35, 0, -34, -1,
-21, 0, -18, 0, -29, -1, -20, 0, -9, -1, -9, 0, -6, -1, -3, 0, -1, 0, -1, -1,
-7, 0, -10, 0, 1, -1, 10, 0, 12, -1, 13, 0, 16, -1, 15, 0, 12, -1, 9, 0, 15, -1,
27, 0, 23, 0, 12, -1, 17, 0, 21, 0, 24, -1, 27, 0, 30, -1, 35, 0, 38, -1, 40, 0,
42, 0, 38, -1, 28, 0, 32, -1, 40, 0, 41, 0, 40, -1, 41, 0, 43, -1, 37, 0, 29, 0,
26, -1, 36, 0, 39, 0, 31, -1, 27, 0, 24, 0, 21, -1, 18, 0, 15, -1, 17, 0, 26,
-1, 23, 0, 6, -1, 5, 0, 15, 0, 18, -1, 14, 0, 10, -1, 8, 0, 3, -1, -7, 0, -13,
0, -9, -1, -1, 0, -13, -1, -22, 0, -10, 0, -13, -1, -28, 0, -28, -1, -26, 0,
-28, -1, -26, 0, -22, -1, -21, 0, -26, -1, -30, 0, -30, -1, -33, 0, -40, -1,
-43, -1, -33, 0, -28, -1, -41, 0, -42, 0, -28, -1, -29, 0, -32, -1, -33, 0, -35,
0, -36, -1, -37, 0, -43, -1, -41, 0, -30, -1, -25, 0, -28, -1, -33, 0, -37, -1,
-32, 0, -20, -1, -22, 0, -31, -1, -20, 0, -13, -1, -25, 0, -23, -1, -9, 0, -2,
0, -3, 0, -8, 0, -12, -1, -8, 0, -5, -1, -5, 0, 2, -1, 12, 0, 10, 0, 2, -1, 6,
0, 9, -1, 15, 0, 25, -1, 21, 0, 14, 0, 20, 0, 31, -1, 35, 0, 34, -1, 35, 0, 38,
-1, 37, 0, 36, -1, 36, 0, 36, -1, 36, 0, 37, -1, 36, 0, 35, 0, 34, 0, 33, -1,
31, 0, 34, -1, 42, 0, 35, 0, 28, 0, 39, 0, 37, 0, 25, -1, 28, 0, 36, 0, 38, -1,
33, 0, 25, -1, 21, 0, 20, 0, 18, 0, 15, -1, 18, 0, 24, -1, 15, 0, 9, -1, 7, 0,
3, -1, 6, 0, 11, 0, 1, 0, -8, -1, -1, 0, 3, 0, 2, 0, -2, 0, -5, 0, -6, -1, -9,
0, -12, -1, -15, 0, -17, -1, -19, 0, -22, 0, -28, -1, -34, 0, -31, -1, -23, 0,
-30, -1, -39, 0, -30, 0, -29, -1, -43, 0, -42, -1, -36, 0, -37, 0, -37, -1, -34,
0, -30, 0, -34, -1, -38, 0, -38, -1, -39, 0, -38, -1, -39, 0, -39, -1, -38, 0,
-37, 0, -37, -1, -36, 0, -32, -1, -23, 0, -21, -1, -31, 0, -31, 0, -27, 0, -25,
0, -22, 0, -20, 0, -14, -1, -6, 0, -7, -1, -15, 0, -11, -1, -6, -1, -4, 0, 0,
-1, 8, 0, 13, 0, 11, 0, 10, 0, 13, 0, 13, 0, 11, -1, 10, 0, 19, -1, 27, 0, 27,
-1, 28, 0, 28, -1, 27, 0, 28, 0, 27, -1, 26, 0, 26, -1, 25, 0, 26, -1, 28, 0,
29, -1, 33, 0, 41, -1, 37, 0, 28, -1, 33, 0, 42, -1, 43, 0, 41, -1, 39, 0, 38,
-1, 36, 0, 29, 0, 26, 0, 31, 0, 38, 0, 28, -1, 23, 0, 33, -1, 27, 0, 16, -1, 17,
0, 18, -1, 17, 0, 15, -1, 14, 0, 14, -1, 15, 0, 18, -1, 16, 0, 8, -1, 1, 0, -2,
-1, 3, 0, 6, -1, 3, 0, 1, 0, -6, -1, -16, 0, -11, -1, -7, 0, -18, -1, -23, 0,
-16, -1, -14, 0, -16, -1, -22, 0, -28, 0, -32, -1, -27, 0, -23, -1, -33, 0, -35,
0, -25, -1, -25, 0, -28, 0, -32, -1, -40, 0, -43, 0, -36, -1, -33, 0, -33, -1,
-32, 0, -32, -1, -32, 0, -31, 0, -30, -1, -30, 0, -29, -1, -29, 0, -29, -1, -28,
0, -27, -1, -26, 0, -26, 0, -25, -1, -24, 0, -23, -1, -23, 0, -22, -1, -21, 0,
-19, -1, -19, 0, -20, 0, -17, 0, -7, -1, -6, 0, -14, -1, -7, 0, 4, -1, 4, 0, 4,
0, 6, -1, 6, 0, 6, -1, 7, 0, 8, 0, 9, 0, 10, 0, 10, 0, 13, -1, 20, 0, 24, 0, 25,
0, 26, 0, 27, -1, 28, 0, 30, 0, 30, -1, 30, 0, 31, -1, 32, 0, 29, 0, 25, 0, 24,
-1, 27, 0, 31, -1, 32, 0, 34, -1, 35, 0, 28, -1, 26, 0, 32, -1, 33, 0, 33, 0,
33, -1, 28, 0, 21, -1, 24, 0, 26, -1, 24, 0, 24, -1, 27, 0, 29, 0, 24, 0, 18, 0,
13, 0, 14, -1, 20, 0, 16, -1, 6, 0, 10, -1, 16, 0, 4, -1, -2, 0, 3, -1, 6, 0, 5,
-1, 0, 0, -6, -1, -11, 0, -11, 0, -5, -1, -7, 0, -17, 0, -14, -1, -10, 0, -18,
-1, -25, 0, -21, 0, -17, -1, -17, 0, -21, 0, -27, 0, -31, 0, -31, 0, -33, 0,
-34, 0, -33, 0, -36, -1, -35, 0, -30, -1, -25, 0, -33, -1, -41, 0, -38, -1, -37,
0, -36, -1, -34, 0, -34, -1, -32, 0, -30, -1, -28, 0, -26, -1, -24, 0, -24, 0,
-23, 0, -24, 0, -24, 0, -25, 0, -26, 0, -25, 0, -24, 0, -24, 0, -26, -1, -21, 0,
-14, -1, -11, 0, -9, -1, -9, 0, -8, 0, -6, -1, -8, 0, -10, -1, -10, -1, -2, 0,
5, -1, 0, 0, -3, 0, 7, -1, 11, 0, 3, -1, 2, 0, 10, 0, 13, 0, 13, -1, 16, 0, 17,
0, 19, 0, 22, 0, 23, 0, 24, 0, 26, -1, 27, 0, 28, -1, 26, 0, 23, -1, 22, 0, 28,
0, 35, -1, 30, 0, 24, -1, 31, 0, 37, -1, 36, 0, 36, -1, 35, 0, 34, -1, 33, 0,
32, 0, 31, -1, 29, 0, 27, -1, 24, 0, 26, 0, 30, -1, 31, 0, 29, -1, 29, 0, 29,
-1, 28, 0, 25, 0, 24, -1, 24, 0, 23, -1, 21, 0, 18, -1, 17, 0, 16, -1, 13, -1,
10, 0, 9, -1, 7, 0, 3, -1, 2, 0, 0, -1, -3, 0, -4, 0, -7, -1, -8, 0, -11, -1,
-12, 0, -14, 0, -16, -1, -16, 0, -16, 0, -14, -1, -12, 0, -18, -1, -23, 0, -24,
-1, -25, 0, -24, -1, -20, 0, -21, -1, -29, 0, -30, -1, -31, 0, -32, 0, -32, 0,
-27, -1, -25, 0, -26, -1, -27, 0, -29, -1, -29, 0, -27, -1, -28, 0, -32, -1,
-35, 0, -37, 0, -38, 0, -37, 0, -35, 0, -33, -1, -27, 0, -26, -1, -33, 0, -34,
-1, -31, 0, -29, 0, -24, -1, -20, 0, -23, -1, -27, 0, -23, -1, -18, 0, -13, -1,
-11, 0, -11, -1, -9, 0, -9, -1, -12, 0, -15, -1, -14, 0, -11, 0, -8, -1, -6, 0,
-5, 0, -1, -1, 1, 0, 7, -1, 10, 0, 5, 0, 4, -1, 7, 0, 9, -1, 12, -1, 14, 0, 16,
-1, 18, 0, 22, -1, 19, 0, 15, -1, 18, 0, 21, 0, 21, -1, 22, 0, 24, -1, 25, 0,
28, 0, 31, -1, 34, 0, 34, -1, 34, 0, 33, -1, 32, 0, 31, 0, 28, -1, 27, 0, 32,
-1, 35, 0, 31, -1, 26, 0, 30, -1, 35, 0, 30, 0, 23, -1, 26, 0, 30, -1, 30, 0,
30, -1, 29, 0, 29, -1, 28, 0, 23, -1, 20, 0, 16, -1, 17, 0, 23, -1, 21, -1, 13,
0, 11, -1, 18, 0, 17, -1, 7, 0, 3, -1, 4, 0, 4, -1, 4, -1, 4, 0, 6, -1, 5, 0, 3,
0, 2, -1, -1, 0, -4, 0, -8, 0, -13, 0, -13, -1, -9, 0, -9, 0, -16, -1, -19, 0,
-14, -1, -14, 0, -20, -1, -25, 0, -23, -1, -18, 0, -17, 0, -19, -1, -23, 0, -24,
-1, -25, 0, -27, -1, -30, 0, -34, -1, -31, 0, -25, -1, -26, -1, -35, 0, -34, -1,
-26, 0, -29, 0, -35, -1, -35, 0, -31, 0, -28, -1, -27, 0, -28, -1, -30, 0, -33,
-1, -32, -1, -31, 0, -30, -1, -31, 0, -24, 0, -20, -1, -22, 0, -22, -1, -21, 0,
-25, -1, -25, 0, -17, -1, -13, -1, -13, 0, -13, -1, -15, 0, -18, 0, -16, 0, -11,
-1, -7, 0, -4, -1, -3, 0, -6, -1, -8, 0, -7, -1, -3, 0, 0, -1, 1, 0, 3, -1, 5,
0, 7, -1, 11, 0, 12, 0, 13, 0, 16, -1, 16, 0, 16, 0, 16, -1, 16, 0, 13, -1, 15,
0, 22, -1, 24, 0, 23, 0, 25, 0, 21, 0, 17, 0, 19, -1, 23, 0, 24, -1, 24, 0, 26,
-1, 30, 0, 31, 0, 30, 0, 31, -1, 30, 0, 29, -1, 28, 0, 24, -1, 24, 0, 27, -1,
32, 0, 29, -1, 23, 0, 26, -1, 30, 0, 28, -1, 25, 0, 25, 0, 24, -1, 22, 0, 20, 0,
18, -1, 17, 0, 16, -1, 16, 0, 15, -1, 16, 0, 19, -1, 19, 0, 18, -1, 17, 0, 16,
-1, 13, 0, 10, -1, 6, 0, 2, 0, 3, -1, 6, 0, 7, 0, 0, 0, -4, -1, -2, 0, 2, -1,
-4, 0, -10, -1, -11, 0, -11, 0, -11, -1, -12, 0, -14, -1, -15, 0, -15, -1, -15,
0, -15, 0, -16, -1, -18, 0, -19, -1, -18, 0, -18, 0, -19, 0, -21, 0, -22, -1,
-21, 0, -21, -1, -22, 0, -23, -1, -24, 0, -23, 0, -24, -1, -26, 0, -30, -1, -30,
0, -29, -1, -30, 0, -30, -1, -28, 0, -24, -1, -25, 0, -29, -1, -30, 0, -25, -1,
-22, 0, -27, -1, -28, 0, -27, -1, -23, 0, -19, -1, -18, 0, -18, -1, -18, 0, -17,
-1, -17, 0, -16, 0, -16, 0, -15, -1, -15, 0, -14, -1, -14, 0, -13, -1, -13, 0,
-11, -1, -10, -1, -9, 0, -8, -1, -7, 0, -6, -1, -6, 0, -6, 0, -4, 0, 1, 0, 3,
-1, 4, 0, 4, -1, 4, 0, 2, -1, 3, 0, 8, 0, 10, -1, 9, 0, 11, 0, 12, -1, 8, 0, 8,
-1, 10, 0, 12, -1, 13, 0, 12, 0, 12, -1, 14, 0, 16, -1, 16, 0, 17, -1, 18, 0,
18, 0, 19, -1, 18, 0, 18, -1, 18, 0, 19, 0, 18, 0, 16, 0, 15, 0, 16, -1, 18, 0,
18, -1, 17, 0, 17, -1, 18, 0, 17, -1, 17, 0, 18, -1, 17, 0, 17, 0, 16, 0, 16, 0,
15, -1, 14, 0, 11, 0, 12, 0, 15, 0, 13, 0, 10, -1, 10, 0, 10, 0, 10, 0, 11, -1,
10, 0, 9, -1, 8, 0, 8, -1, 7, 0, 4, -1, 3, 0, 2, 0, 3, 0, 4, 0, 3, 0, 3, -1, 2,
0, -1, -1, -2, 0, -1, -1, 0, -1, -2, 0, -4, -1, -5, 0, -5, -1, -6, 0, -7, -1,
-6, 0, -6, -1, -6, 0, -6, -1, -6, 0, -6, -1, -6, 0, -6, -1, -8, 0, -9, 0, -9, 0,
-9, 0, -10, 0, -10, -1, -9, 0, -9, 0, -9, -1, -9, 0, -9, 0, -8, -1, -8, 0, -8,
-1, -8, 0, -10, 0, -8, -1, -7, 0, -9, -1, -11, 0, -9, -1, -8, 0, -8, 0, -8, 0,
-8, 0, -7, -1, -7, 0, -7, -1, -6, 0, -5, -1, -5, 0, -6, -1, -5, 0, -5, 0, -5, 0,
-5, -1, -4, 0, -5, -1, -6, 0, -4, 0, -4, 0, -4, -1, -4, 0, -4, -1, -4, 0, -4,
-1, -3, 0, -3, -1, -3, 0, -3, 0, -3, -1, -3, 0, -2, -1, -1, 0, -1, -1, -1, 0, 0,
-1, 1, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0, 1, -1, 2, 0, 2, -1, 2, 0, 2, -1, 2, 0,
2, -1, 1, 0, 2, -1, 2, 0, 2, -1, 2, 0, 1, -1, 2, 0, 2, 0, 1, -1, 1, 0, 1, -1, 1,
0, 1, 0, 1, -1, 1, 0, 1, -1, 1, 0, 1, 0, 1, -1, 1, 0, 1, -1, 1, 0, 1, 0, 1, -1,
1, 0, 1, 0, 1, -1, 1, 0, 1, 0, 1, -1, 1, 0, 1, -1, 1, 0, 1, -1, 1, 0, 1, 0, 0,
-1, 0, 0, 0, -1, 1, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, -1,
0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0, 0, -1, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0,
0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1,
0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0,
-1, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0, 0, -1, 0, -1, 0, 0, 0, -1, -1, 0, -1,
-1, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, -1, 0, -1, -1, -1, 0, -1, -1, -1,
0, -1, -1, -1, 0, -1, 0, -1, -1, -1, 0, -1, -1, -1, 0, -1, 0, -1, -1, -1, 0, -1,
-1, -1, 0, -1, -1, -1, 0, -1, 0, -1, -1, -1, 0, -1, -1, -1, 0, -1, -1, -1, 0,
-1, 0, -1, 0, -1, };

#endif /* MTFIVEHUNDREDSEVEN_H_ */