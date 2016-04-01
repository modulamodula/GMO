#ifndef TOMEIGHT_H_
#define TOMEIGHT_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define TOMEIGHT_NUM_CELLS 8217
#define TOMEIGHT_SAMPLERATE 16384
 
const int8_t __attribute__((section(".progmem.data"))) TOMEIGHT_DATA [] = {-1,
-2, -2, -2, -2, -2, -2, -2, -1, -2, -1, -2, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 1, -1, 0, -1,
0, -1, 0, 0, 3, -8, -63, -71, -56, -56, -64, -58, -62, -55, -65, -63, -66, -66,
-69, -72, -66, -73, -45, -66, -90, 24, -27, -128, -29, 28, 62, 31, 86, -10, -30,
127, 100, 12, 54, 113, 25, 64, 108, 72, 74, 115, 86, 95, 78, 107, 121, 83, 72,
64, 10, 4, 55, 50, 62, 64, 80, 55, 38, 34, 62, 51, 1, 12, 49, -14, -20, 19, 0,
-41, -31, -26, -66, -44, -13, -2, -25, -8, 0, -9, -52, -43, -46, -57, -49, -68,
-60, -74, -86, -73, -39, -50, -77, -71, -81, -104, -105, -105, -124, -117, -88,
-104, -117, -111, -108, -124, -105, -88, -86, -57, -58, -80, -88, -58, -39, -75,
-74, -29, -46, -47, -27, -47, -50, -3, 12, 6, 16, 45, 62, 54, 48, 53, 80, 79,
76, 84, 96, 96, 99, 112, 113, 119, 125, 121, 116, 119, 121, 112, 108, 111, 108,
112, 104, 93, 74, 73, 86, 67, 57, 67, 68, 57, 37, 37, 41, 44, 24, 5, 11, 4, -12,
-33, -36, -40, -37, -42, -46, -31, -45, -65, -82, -78, -65, -71, -75, -76, -83,
-94, -86, -90, -105, -99, -73, -79, -99, -90, -89, -90, -83, -81, -80, -73, -71,
-60, -54, -68, -75, -70, -61, -57, -52, -37, -39, -44, -31, -23, -16, -15, -24,
-20, -14, -8, -13, -11, 2, 6, 11, 22, 35, 34, 33, 44, 52, 51, 65, 71, 64, 62,
70, 75, 78, 87, 92, 93, 94, 89, 76, 80, 85, 87, 92, 95, 91, 79, 71, 72, 72, 69,
64, 56, 57, 54, 43, 38, 41, 30, 21, 27, 25, 8, 6, 0, -18, -20, -25, -32, -33,
-35, -42, -51, -57, -58, -67, -73, -67, -63, -74, -86, -80, -79, -88, -91, -87,
-84, -84, -82, -78, -71, -69, -75, -73, -66, -63, -68, -66, -59, -52, -47, -44,
-38, -38, -38, -35, -30, -25, -25, -17, -6, -7, -7, -2, -1, -3, -2, 1, 5, 7, 15,
21, 22, 17, 19, 27, 32, 41, 46, 50, 52, 48, 49, 56, 62, 65, 69, 74, 75, 76, 74,
75, 75, 75, 71, 77, 84, 79, 76, 70, 65, 62, 65, 66, 57, 47, 47, 41, 41, 41, 35,
27, 29, 29, 13, 6, 6, 3, -4, -9, -18, -23, -28, -33, -34, -40, -48, -51, -55,
-59, -61, -66, -66, -71, -70, -66, -68, -72, -74, -74, -81, -85, -79, -72, -69,
-67, -64, -67, -69, -63, -57, -53, -49, -46, -45, -41, -37, -33, -27, -24, -23,
-17, -9, -11, -9, -6, -4, 0, 4, 8, 12, 16, 17, 20, 23, 25, 26, 28, 32, 33, 36,
40, 43, 44, 45, 47, 47, 51, 55, 58, 61, 61, 64, 66, 67, 69, 68, 66, 65, 65, 61,
59, 61, 59, 60, 62, 55, 51, 53, 50, 46, 45, 41, 36, 35, 29, 22, 19, 17, 12, 9,
6, 0, -6, -5, -4, -14, -23, -23, -26, -35, -40, -41, -43, -48, -51, -54, -59,
-61, -62, -66, -68, -67, -71, -72, -68, -68, -69, -65, -66, -68, -62, -63, -64,
-63, -59, -55, -50, -51, -51, -45, -40, -37, -31, -29, -27, -24, -22, -18, -14,
-10, -5, -2, 0, 5, 9, 9, 13, 17, 16, 18, 25, 27, 28, 32, 35, 34, 35, 37, 42, 45,
44, 47, 51, 52, 53, 53, 54, 55, 56, 56, 58, 61, 57, 52, 54, 56, 56, 57, 58, 55,
46, 43, 43, 44, 42, 39, 40, 37, 34, 32, 27, 22, 20, 16, 12, 10, 8, 6, 1, -1, -3,
-8, -12, -18, -23, -28, -31, -32, -36, -43, -46, -47, -52, -56, -59, -59, -59,
-61, -65, -67, -69, -72, -69, -67, -68, -66, -64, -65, -63, -60, -59, -57, -52,
-49, -48, -43, -40, -39, -35, -34, -34, -30, -23, -17, -16, -14, -11, -8, -4,
-1, 2, 9, 11, 10, 12, 16, 19, 20, 22, 26, 30, 31, 32, 34, 37, 39, 43, 45, 46,
46, 46, 48, 49, 49, 50, 53, 51, 50, 53, 55, 53, 51, 51, 49, 48, 47, 43, 40, 42,
42, 41, 40, 39, 37, 32, 29, 24, 22, 22, 19, 16, 14, 11, 10, 7, 4, 0, -4, -4, -7,
-11, -14, -22, -25, -26, -30, -34, -35, -37, -41, -45, -47, -50, -53, -55, -57,
-57, -59, -61, -61, -63, -63, -60, -60, -60, -57, -55, -56, -55, -52, -50, -48,
-46, -46, -44, -41, -37, -34, -32, -31, -27, -22, -20, -19, -15, -11, -8, -3, 0,
2, 4, 7, 10, 11, 13, 14, 18, 22, 26, 28, 29, 33, 35, 37, 39, 41, 42, 44, 45, 47,
49, 50, 52, 54, 54, 54, 52, 52, 52, 52, 53, 52, 52, 52, 51, 49, 49, 46, 42, 39,
38, 38, 37, 31, 29, 27, 24, 23, 19, 15, 13, 10, 7, 6, 2, -4, -6, -9, -14, -16,
-18, -20, -25, -28, -29, -32, -35, -38, -40, -41, -44, -48, -49, -50, -51, -53,
-55, -57, -57, -56, -57, -59, -58, -56, -54, -53, -51, -48, -46, -47, -47, -46,
-42, -40, -39, -35, -30, -27, -27, -25, -21, -18, -15, -11, -9, -8, -4, -1, 2,
4, 8, 12, 13, 15, 18, 20, 20, 23, 26, 29, 30, 33, 36, 37, 40, 41, 42, 43, 43,
46, 47, 46, 47, 49, 48, 49, 50, 50, 48, 49, 50, 49, 48, 47, 45, 45, 44, 40, 40,
39, 36, 33, 33, 32, 31, 27, 25, 21, 17, 16, 13, 12, 9, 6, 3, 0, -3, -6, -9, -12,
-15, -19, -22, -24, -27, -29, -32, -34, -34, -36, -40, -42, -45, -47, -49, -50,
-52, -54, -54, -55, -56, -54, -53, -53, -53, -52, -53, -52, -48, -47, -47, -46,
-44, -42, -38, -37, -35, -33, -30, -27, -25, -21, -19, -16, -13, -11, -10, -7,
-3, 0, 3, 6, 8, 9, 11, 15, 18, 21, 24, 27, 29, 31, 33, 36, 38, 39, 40, 42, 44,
45, 45, 48, 49, 50, 49, 50, 52, 51, 50, 49, 48, 47, 48, 46, 44, 43, 41, 39, 38,
37, 36, 35, 31, 28, 26, 25, 21, 18, 17, 15, 12, 10, 6, 3, 1, -1, -5, -7, -10,
-13, -15, -18, -21, -22, -24, -28, -30, -31, -33, -36, -39, -42, -43, -45, -46,
-47, -49, -49, -50, -51, -52, -52, -52, -52, -51, -50, -48, -47, -46, -45, -43,
-43, -42, -41, -38, -36, -34, -32, -29, -26, -24, -21, -19, -17, -15, -12, -9,
-8, -6, -3, -1, 2, 5, 8, 10, 11, 13, 16, 18, 20, 23, 24, 26, 29, 31, 32, 33, 34,
35, 37, 39, 40, 42, 44, 44, 44, 45, 46, 45, 45, 45, 45, 45, 44, 44, 43, 42, 41,
39, 37, 36, 35, 33, 31, 29, 28, 26, 24, 24, 21, 18, 15, 13, 10, 8, 6, 4, 1, -2,
-4, -6, -8, -13, -16, -17, -19, -24, -26, -27, -28, -30, -33, -35, -36, -39,
-41, -42, -44, -46, -46, -46, -48, -49, -49, -49, -49, -49, -49, -49, -47, -46,
-45, -43, -42, -41, -39, -36, -36, -34, -32, -31, -28, -26, -24, -21, -19, -17,
-13, -10, -8, -7, -5, -2, 1, 3, 5, 8, 10, 12, 14, 16, 19, 21, 23, 26, 28, 30,
31, 33, 35, 36, 37, 38, 40, 41, 42, 43, 43, 44, 44, 44, 45, 45, 44, 43, 43, 42,
41, 41, 40, 38, 37, 36, 34, 33, 31, 29, 27, 25, 23, 21, 20, 18, 15, 13, 11, 8,
6, 4, 2, 0, -3, -5, -7, -10, -12, -14, -16, -19, -22, -24, -25, -26, -29, -31,
-32, -33, -35, -37, -38, -39, -40, -42, -43, -43, -43, -45, -45, -45, -45, -45,
-44, -44, -42, -42, -42, -40, -39, -37, -35, -34, -33, -32, -30, -28, -26, -24,
-22, -19, -17, -15, -13, -10, -8, -5, -3, -1, 1, 3, 5, 7, 10, 12, 14, 16, 18,
19, 21, 23, 25, 27, 29, 30, 32, 34, 35, 35, 37, 38, 39, 40, 41, 41, 41, 42, 42,
43, 42, 42, 42, 41, 40, 39, 38, 37, 35, 34, 33, 31, 30, 29, 27, 26, 24, 22, 20,
18, 15, 13, 11, 9, 7, 6, 3, 1, -2, -5, -7, -9, -12, -14, -16, -18, -20, -22,
-24, -26, -28, -29, -32, -33, -35, -36, -37, -38, -39, -40, -41, -41, -42, -42,
-43, -43, -43, -42, -42, -42, -41, -40, -39, -38, -38, -36, -36, -34, -32, -30,
-29, -27, -26, -24, -22, -21, -19, -17, -15, -13, -11, -8, -6, -3, -1, 1, 3, 5,
6, 8, 11, 13, 15, 17, 19, 21, 23, 25, 26, 28, 29, 31, 32, 33, 34, 35, 36, 37,
37, 38, 39, 39, 40, 40, 39, 39, 38, 38, 38, 37, 36, 35, 34, 33, 32, 31, 29, 27,
26, 25, 23, 21, 20, 18, 16, 15, 12, 10, 8, 6, 4, 2, 0, -2, -4, -5, -7, -9, -12,
-14, -16, -17, -20, -22, -23, -25, -27, -29, -30, -32, -33, -35, -36, -37, -38,
-39, -40, -41, -41, -42, -42, -41, -41, -40, -40, -39, -38, -38, -37, -36, -36,
-34, -33, -31, -30, -29, -27, -25, -23, -21, -19, -17, -15, -13, -11, -9, -7,
-5, -3, -1, 1, 3, 5, 7, 9, 11, 12, 14, 16, 18, 19, 21, 23, 24, 25, 27, 28, 30,
30, 31, 32, 33, 34, 35, 35, 35, 36, 37, 37, 36, 37, 37, 37, 36, 35, 34, 33, 32,
31, 30, 29, 28, 27, 26, 24, 23, 22, 20, 18, 17, 15, 13, 11, 9, 7, 5, 3, 1, -1,
-3, -4, -6, -8, -10, -11, -13, -15, -16, -18, -20, -21, -23, -25, -26, -28, -29,
-31, -32, -33, -34, -34, -35, -36, -36, -37, -37, -37, -38, -37, -37, -37, -36,
-36, -35, -35, -34, -33, -32, -30, -29, -28, -26, -25, -24, -22, -21, -19, -17,
-16, -14, -12, -10, -8, -6, -4, -3, -1, 1, 3, 5, 7, 9, 10, 12, 14, 15, 17, 18,
20, 21, 23, 24, 26, 27, 28, 29, 30, 32, 32, 33, 34, 34, 34, 35, 36, 35, 35, 36,
35, 35, 34, 34, 33, 32, 31, 31, 30, 28, 27, 27, 25, 23, 22, 20, 19, 17, 15, 13,
12, 10, 8, 6, 5, 3, 1, 0, -2, -4, -6, -8, -10, -12, -13, -15, -17, -18, -20,
-22, -23, -25, -26, -28, -29, -30, -31, -32, -32, -33, -34, -35, -35, -36, -36,
-36, -36, -36, -35, -35, -34, -33, -33, -32, -31, -30, -29, -28, -27, -26, -25,
-23, -22, -21, -19, -17, -16, -14, -12, -10, -8, -7, -5, -3, -1, 0, 2, 3, 5, 6,
8, 10, 11, 13, 14, 16, 18, 19, 21, 22, 23, 23, 24, 25, 26, 27, 28, 28, 29, 30,
31, 31, 32, 32, 32, 32, 32, 32, 32, 31, 31, 30, 29, 29, 28, 27, 26, 25, 24, 24,
22, 21, 20, 19, 17, 16, 14, 13, 11, 9, 7, 5, 4, 2, 1, -1, -2, -4, -5, -7, -9,
-10, -12, -13, -15, -17, -19, -20, -22, -23, -25, -26, -27, -28, -29, -30, -31,
-31, -32, -33, -33, -33, -33, -34, -34, -34, -34, -34, -33, -33, -32, -31, -30,
-29, -29, -27, -27, -26, -25, -24, -23, -21, -19, -18, -16, -15, -13, -11, -10,
-8, -7, -5, -3, -2, 0, 2, 4, 5, 7, 9, 11, 13, 14, 15, 17, 18, 19, 21, 22, 23,
24, 26, 26, 27, 28, 29, 30, 30, 31, 31, 32, 32, 32, 31, 31, 31, 31, 30, 30, 29,
28, 28, 27, 27, 26, 24, 23, 22, 21, 20, 19, 17, 16, 14, 13, 11, 10, 9, 7, 5, 4,
2, 1, -1, -3, -4, -6, -8, -9, -10, -12, -13, -15, -16, -18, -20, -21, -22, -23,
-24, -25, -26, -27, -28, -29, -29, -30, -31, -31, -32, -32, -32, -32, -32, -31,
-31, -30, -30, -29, -29, -28, -27, -27, -26, -25, -24, -22, -21, -20, -19, -17,
-16, -15, -14, -12, -11, -9, -8, -6, -5, -3, -1, 0, 1, 3, 4, 6, 7, 8, 10, 11,
13, 14, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 27, 27, 28, 28, 29, 29,
29, 29, 29, 29, 29, 29, 28, 28, 27, 26, 26, 25, 24, 23, 22, 21, 21, 20, 19, 17,
16, 15, 14, 12, 11, 9, 8, 6, 5, 3, 2, 0, -1, -3, -4, -6, -8, -9, -10, -12, -13,
-15, -16, -18, -19, -20, -21, -23, -24, -25, -26, -26, -27, -28, -29, -29, -29,
-30, -30, -30, -30, -30, -30, -30, -30, -29, -29, -28, -28, -27, -26, -25, -24,
-23, -22, -21, -20, -19, -17, -16, -15, -13, -12, -11, -9, -8, -6, -5, -3, -2,
0, 1, 3, 4, 6, 7, 9, 10, 11, 12, 14, 15, 16, 17, 18, 19, 21, 22, 22, 23, 24, 24,
25, 26, 26, 27, 27, 27, 28, 28, 27, 27, 27, 27, 27, 26, 25, 25, 25, 24, 23, 23,
22, 21, 20, 19, 18, 17, 15, 14, 13, 12, 10, 9, 8, 7, 6, 4, 3, 2, 0, -1, -3, -4,
-5, -7, -8, -10, -11, -12, -13, -15, -16, -17, -18, -19, -20, -21, -22, -23,
-24, -25, -25, -26, -27, -27, -27, -28, -28, -28, -28, -28, -28, -28, -28, -27,
-27, -26, -26, -25, -24, -24, -23, -22, -21, -20, -19, -18, -17, -16, -14, -13,
-12, -11, -9, -8, -6, -5, -4, -2, -1, 0, 2, 3, 4, 6, 7, 9, 10, 11, 12, 14, 15,
16, 17, 18, 19, 20, 21, 22, 23, 23, 24, 24, 25, 25, 25, 26, 26, 26, 26, 26, 26,
26, 26, 26, 25, 25, 24, 23, 22, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 10,
9, 8, 7, 5, 4, 3, 1, 0, -1, -3, -4, -5, -7, -8, -9, -11, -12, -13, -14, -15,
-17, -18, -19, -20, -21, -22, -22, -23, -24, -24, -25, -25, -26, -26, -27, -27,
-27, -27, -27, -27, -27, -26, -26, -25, -25, -24, -24, -23, -22, -21, -20, -20,
-19, -18, -17, -16, -14, -13, -12, -11, -9, -8, -7, -6, -4, -3, -2, -1, 1, 2, 3,
4, 6, 7, 8, 9, 11, 12, 13, 14, 15, 16, 17, 18, 19, 19, 20, 21, 22, 22, 23, 23,
23, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 23, 23, 22, 22, 21, 21, 20, 19, 18,
17, 17, 16, 15, 14, 13, 12, 11, 10, 9, 7, 6, 5, 4, 2, 1, 0, -1, -3, -4, -5, -6,
-8, -9, -10, -11, -12, -14, -15, -16, -17, -18, -19, -20, -21, -21, -22, -23,
-23, -24, -24, -25, -25, -25, -26, -26, -26, -26, -26, -25, -25, -25, -24, -24,
-23, -23, -22, -21, -20, -19, -18, -18, -17, -16, -15, -13, -12, -11, -10, -9,
-8, -6, -5, -4, -2, -1, 0, 1, 2, 4, 5, 6, 7, 8, 10, 11, 12, 13, 14, 15, 16, 17,
17, 18, 19, 20, 20, 21, 21, 22, 22, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 22,
22, 22, 21, 20, 20, 19, 18, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5,
3, 2, 1, 0, -1, -2, -3, -4, -6, -7, -8, -9, -10, -11, -12, -13, -14, -15, -16,
-17, -18, -19, -19, -20, -21, -21, -22, -22, -23, -23, -23, -23, -24, -24, -24,
-24, -23, -23, -23, -23, -22, -22, -21, -21, -20, -20, -19, -18, -17, -16, -16,
-15, -14, -13, -12, -11, -10, -9, -7, -6, -5, -4, -3, -2, -1, 0, 1, 2, 4, 5, 6,
7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 17, 18, 19, 19, 20, 20, 21, 21, 22, 22,
22, 22, 22, 22, 22, 22, 22, 22, 21, 21, 20, 20, 19, 19, 18, 17, 17, 16, 15, 14,
13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, -1, -2, -3, -4, -5, -6, -7, -8, -9,
-10, -12, -13, -13, -15, -15, -16, -17, -18, -19, -19, -20, -21, -21, -22, -22,
-22, -23, -23, -23, -23, -23, -23, -23, -23, -22, -22, -21, -21, -20, -20, -19,
-19, -18, -17, -16, -16, -15, -14, -13, -12, -11, -10, -9, -8, -7, -6, -5, -4,
-3, -2, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 12, 13, 14, 15, 16, 16, 17,
17, 18, 18, 19, 19, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 19, 19, 18,
18, 17, 17, 16, 15, 15, 14, 13, 12, 11, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0,
-1, -2, -3, -4, -5, -6, -7, -8, -9, -9, -10, -11, -12, -13, -14, -15, -16, -16,
-17, -18, -18, -19, -19, -20, -20, -21, -21, -21, -21, -21, -21, -21, -21, -21,
-21, -21, -20, -20, -19, -19, -18, -18, -17, -16, -16, -15, -14, -13, -13, -12,
-11, -10, -9, -8, -7, -6, -5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
11, 12, 13, 13, 14, 15, 16, 16, 17, 17, 18, 18, 19, 19, 19, 19, 20, 20, 20, 20,
20, 19, 19, 19, 19, 18, 18, 18, 17, 17, 16, 15, 15, 14, 13, 13, 12, 11, 10, 9,
8, 7, 6, 6, 5, 4, 3, 2, 1, 0, -1, -2, -3, -4, -5, -6, -7, -8, -9, -10, -11, -12,
-12, -13, -14, -15, -15, -16, -17, -17, -18, -18, -19, -19, -19, -20, -20, -20,
-20, -20, -20, -20, -20, -19, -19, -19, -18, -18, -18, -17, -17, -16, -16, -15,
-14, -14, -13, -12, -11, -10, -10, -9, -8, -7, -6, -5, -4, -3, -3, -2, -1, 0, 1,
2, 3, 4, 5, 6, 6, 7, 8, 9, 10, 10, 11, 12, 13, 13, 14, 14, 15, 15, 16, 16, 17,
17, 17, 17, 18, 18, 18, 18, 18, 18, 18, 17, 17, 17, 17, 16, 16, 15, 15, 14, 14,
13, 13, 12, 11, 11, 10, 9, 8, 8, 7, 6, 5, 4, 3, 2, 1, 1, 0, -1, -2, -3, -4, -5,
-6, -7, -8, -8, -9, -10, -11, -12, -12, -13, -14, -15, -15, -16, -16, -17, -17,
-18, -18, -18, -19, -19, -19, -19, -19, -19, -19, -19, -19, -18, -18, -18, -17,
-17, -17, -16, -15, -15, -14, -14, -13, -12, -11, -11, -10, -9, -8, -7, -7, -6,
-5, -4, -3, -2, -1, 0, 1, 2, 2, 3, 4, 5, 6, 7, 8, 8, 9, 10, 11, 11, 12, 13, 13,
14, 14, 15, 15, 16, 16, 16, 16, 17, 17, 17, 17, 17, 17, 17, 17, 17, 16, 16, 16,
15, 15, 15, 14, 14, 13, 12, 12, 11, 11, 10, 9, 8, 8, 7, 6, 5, 4, 4, 3, 2, 1, 0,
-1, -1, -2, -3, -4, -5, -5, -6, -7, -8, -8, -9, -10, -11, -11, -12, -13, -13,
-14, -14, -15, -15, -16, -16, -16, -17, -17, -17, -17, -17, -17, -17, -17, -17,
-17, -17, -17, -16, -16, -16, -15, -15, -14, -14, -13, -13, -12, -12, -11, -10,
-10, -9, -8, -8, -7, -6, -5, -4, -4, -3, -2, -1, 0, 0, 1, 2, 3, 4, 4, 5, 6, 7,
7, 8, 9, 10, 10, 11, 11, 12, 13, 13, 14, 14, 14, 15, 15, 15, 16, 16, 16, 16, 16,
16, 16, 16, 16, 16, 15, 15, 15, 14, 14, 14, 13, 13, 12, 12, 11, 10, 10, 9, 8, 8,
7, 6, 5, 5, 4, 3, 2, 1, 0, 0, -1, -2, -3, -4, -4, -5, -6, -7, -7, -8, -9, -10,
-10, -11, -12, -12, -13, -13, -14, -14, -15, -15, -16, -16, -16, -16, -16, -17,
-17, -17, -17, -17, -17, -16, -16, -16, -16, -15, -15, -15, -14, -14, -13, -13,
-12, -12, -11, -10, -10, -9, -8, -8, -7, -6, -5, -5, -4, -3, -2, -2, -1, 0, 1,
1, 2, 3, 4, 4, 5, 6, 6, 7, 8, 8, 9, 10, 10, 11, 11, 12, 12, 13, 13, 13, 14, 14,
14, 14, 14, 14, 15, 15, 15, 15, 14, 14, 14, 14, 14, 13, 13, 13, 12, 12, 11, 11,
10, 10, 9, 9, 8, 8, 7, 6, 6, 5, 4, 3, 3, 2, 1, 1, 0, -1, -2, -2, -3, -4, -4, -5,
-6, -7, -7, -8, -9, -9, -10, -10, -11, -12, -12, -13, -13, -14, -14, -14, -15,
-15, -15, -15, -16, -16, -16, -16, -16, -16, -16, -15, -15, -15, -15, -14, -14,
-14, -13, -13, -12, -12, -11, -11, -10, -10, -9, -8, -8, -7, -6, -6, -5, -4, -4,
-3, -2, -1, -1, 0, 1, 2, 2, 3, 4, 4, 5, 6, 7, 7, 8, 8, 9, 10, 10, 11, 11, 12,
12, 12, 13, 13, 13, 13, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 13, 13, 13, 13,
12, 12, 12, 11, 11, 10, 10, 9, 8, 8, 7, 7, 6, 5, 5, 4, 3, 3, 2, 1, 0, 0, -1, -2,
-2, -3, -4, -4, -5, -6, -6, -7, -8, -8, -9, -9, -10, -10, -11, -11, -12, -12,
-13, -13, -13, -14, -14, -14, -14, -14, -15, -15, -15, -15, -15, -14, -14, -14,
-14, -14, -13, -13, -13, -12, -12, -11, -11, -10, -10, -9, -9, -8, -8, -7, -7,
-6, -5, -5, -4, -3, -3, -2, -1, -1, 0, 1, 1, 2, 3, 3, 4, 4, 5, 6, 6, 7, 7, 8, 8,
9, 9, 10, 10, 11, 11, 11, 12, 12, 12, 12, 13, 13, 13, 13, 13, 13, 13, 13, 13,
13, 12, 12, 12, 12, 11, 11, 11, 10, 10, 10, 9, 9, 8, 7, 7, 6, 6, 5, 4, 4, 3, 3,
2, 1, 1, 0, -1, -1, -2, -3, -3, -4, -5, -5, -6, -7, -7, -8, -8, -9, -9, -10,
-10, -11, -11, -12, -12, -13, -13, -13, -13, -14, -14, -14, -14, -14, -14, -14,
-14, -14, -14, -14, -13, -13, -13, -13, -12, -12, -11, -11, -11, -10, -10, -9,
-8, -8, -7, -7, -6, -5, -5, -4, -4, -3, -2, -2, -1, 0, 0, 1, 2, 2, 3, 4, 4, 5,
5, 6, 6, 7, 8, 8, 8, 9, 9, 10, 10, 10, 11, 11, 11, 12, 12, 12, 12, 12, 12, 12,
12, 12, 12, 12, 12, 12, 12, 11, 11, 11, 10, 10, 10, 9, 9, 8, 8, 8, 7, 6, 6, 5,
5, 4, 4, 3, 2, 2, 1, 1, 0, -1, -1, -2, -2, -3, -4, -4, -5, -5, -6, -6, -7, -7,
-8, -8, -9, -9, -10, -10, -11, -11, -11, -12, -12, -12, -12, -13, -13, -13, -13,
-13, -13, -13, -13, -13, -13, -13, -12, -12, -12, -12, -11, -11, -11, -10, -10,
-9, -9, -8, -8, -7, -7, -6, -6, -5, -5, -4, -4, -3, -2, -2, -1, -1, 0, 1, 1, 2,
2, 3, 3, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 9, 9, 10, 10, 10, 11, 11, 11, 11, 11, 12,
12, 12, 12, 12, 12, 12, 11, 11, 11, 11, 11, 10, 10, 10, 9, 9, 9, 8, 8, 7, 7, 6,
6, 5, 5, 4, 4, 3, 3, 2, 1, 1, 0, 0, -1, -2, -2, -3, -3, -4, -5, -5, -6, -6, -7,
-7, -8, -8, -9, -9, -10, -10, -10, -11, -11, -11, -12, -12, -12, -12, -12, -12,
-13, -13, -13, -13, -12, -12, -12, -12, -12, -12, -11, -11, -11, -10, -10, -10,
-9, -9, -8, -8, -7, -7, -6, -6, -5, -5, -4, -4, -3, -2, -2, -1, -1, 0, 0, 1, 1,
2, 3, 3, 4, 4, 5, 5, 6, 6, 6, 7, 7, 8, 8, 8, 9, 9, 9, 10, 10, 10, 10, 10, 11,
11, 11, 11, 11, 11, 11, 11, 11, 10, 10, 10, 10, 10, 9, 9, 9, 8, 8, 8, 7, 7, 6,
6, 5, 5, 4, 4, 3, 3, 2, 2, 1, 1, 0, 0, -1, -1, -2, -2, -3, -3, -4, -5, -5, -6,
-6, -6, -7, -7, -8, -8, -9, -9, -9, -10, -10, -10, -11, -11, -11, -11, -11, -12,
-12, -12, -12, -12, -12, -12, -12, -11, -11, -11, -11, -11, -10, -10, -10, -9,
-9, -9, -8, -8, -7, -7, -6, -6, -6, -5, -4, -4, -3, -3, -2, -2, -1, -1, 0, 0, 1,
1, 2, 3, 3, 4, 4, 5, 5, 6, 6, 6, 7, 7, 8, 8, 8, 9, 9, 9, 10, 10, 10, 10, 10, 10,
10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 9, 9, 9, 8, 8, 8, 7, 7, 7, 6, 6, 5,
5, 4, 4, 3, 3, 2, 2, 1, 1, 0, 0, -1, -1, -2, -2, -3, -4, -4, -4, -5, -5, -6, -6,
-7, -7, -8, -8, -8, -9, -9, -9, -10, -10, -10, -10, -10, -11, -11, -11, -11,
-11, -11, -11, -11, -11, -11, -11, -11, -10, -10, -10, -10, -9, -9, -9, -8, -8,
-8, -7, -7, -6, -6, -6, -5, -5, -4, -4, -3, -3, -2, -2, -1, -1, 0, 0, 1, 1, 2,
2, 3, 3, 3, 4, 4, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 9, 9, 9, 10, 10,
10, 10, 10, 10, 9, 9, 9, 9, 9, 9, 8, 8, 8, 8, 7, 7, 7, 6, 6, 5, 5, 5, 4, 4, 3,
3, 2, 2, 1, 1, 0, 0, -1, -1, -2, -2, -3, -3, -4, -4, -5, -5, -6, -6, -6, -7, -7,
-8, -8, -8, -9, -9, -9, -10, -10, -10, -10, -10, -10, -11, -11, -11, -11, -11,
-11, -11, -11, -10, -10, -10, -10, -10, -9, -9, -9, -8, -8, -8, -7, -7, -7, -6,
-6, -5, -5, -4, -4, -3, -3, -2, -2, -2, -1, -1, 0, 0, 1, 1, 2, 2, 3, 3, 4, 4, 5,
5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9,
8, 8, 8, 8, 7, 7, 7, 7, 6, 6, 6, 5, 5, 4, 4, 4, 3, 3, 2, 2, 1, 1, 0, 0, -1, -1,
-1, -2, -2, -3, -3, -4, -4, -5, -5, -5, -6, -6, -6, -7, -7, -7, -8, -8, -8, -9,
-9, -9, -9, -9, -10, -10, -10, -10, -10, -10, -10, -10, -10, -10, -10, -9, -9,
-9, -9, -9, -8, -8, -8, -8, -7, -7, -7, -6, -6, -5, -5, -5, -4, -4, -3, -3, -3,
-2, -2, -1, -1, 0, 0, 1, 1, 1, 2, 2, 3, 3, 4, 4, 4, 5, 5, 6, 6, 6, 6, 7, 7, 7,
8, 8, 8, 8, 8, 8, 9, 9, 9, 9, 9, 9, 9, 9, 9, 8, 8, 8, 8, 8, 8, 7, 7, 7, 6, 6, 6,
5, 5, 5, 4, 4, 3, 3, 3, 2, 2, 1, 1, 0, 0, 0, -1, -1, -2, -2, -3, -3, -4, -4, -4,
-5, -5, -6, -6, -6, -7, -7, -7, -8, -8, -8, -8, -9, -9, -9, -9, -9, -9, -9, -10,
-10, -10, -9, -9, -9, -9, -9, -9, -9, -9, -8, -8, -8, -8, -7, -7, -7, -6, -6,
-6, -5, -5, -5, -4, -4, -3, -3, -3, -2, -2, -1, -1, 0, 0, 0, 1, 1, 2, 2, 2, 3,
3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 6, 7, 7, 7, 7, 7, 7, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8,
8, 8, 8, 7, 7, 7, 7, 7, 6, 6, 6, 6, 5, 5, 5, 4, 4, 4, 3, 3, 3, 2, 2, 1, 1, 1, 0,
0, -1, -1, -2, -2, -2, -3, -3, -4, -4, -4, -5, -5, -5, -6, -6, -6, -7, -7, -7,
-7, -8, -8, -8, -8, -8, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -8,
-8, -8, -8, -8, -7, -7, -7, -6, -6, -6, -5, -5, -5, -4, -4, -4, -3, -3, -2, -2,
-2, -1, -1, 0, 0, 0, 1, 1, 2, 2, 2, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 6, 7, 7, 7,
7, 7, 7, 7, 8, 8, 8, 8, 8, 8, 8, 8, 8, 7, 7, 7, 7, 7, 7, 6, 6, 6, 6, 5, 5, 5, 4,
4, 4, 3, 3, 3, 2, 2, 2, 1, 1, 0, 0, 0, -1, -1, -2, -2, -2, -3, -3, -3, -4, -4,
-5, -5, -5, -5, -6, -6, -6, -7, -7, -7, -7, -7, -8, -8, -8, -8, -8, -8, -8, -8,
-8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -7, -7, -7, -7, -6, -6, -6, -6, -5, -5,
-5, -4, -4, -4, -3, -3, -3, -2, -2, -2, -1, -1, 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3,
3, 4, 4, 4, 5, 5, 5, 5, 6, 6, 6, 6, 6, 6, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7,
7, 7, 6, 6, 6, 6, 6, 5, 5, 5, 5, 4, 4, 4, 4, 3, 3, 3, 2, 2, 2, 1, 1, 0, 0, 0,
-1, -1, -1, -2, -2, -3, -3, -3, -4, -4, -4, -5, -5, -5, -6, -6, -6, -6, -7, -7,
-7, -7, -7, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -7, -7,
-7, -7, -7, -6, -6, -6, -6, -5, -5, -5, -5, -4, -4, -4, -3, -3, -2, -2, -2, -1,
-1, -1, 0, 0, 0, 1, 1, 1, 2, 2, 3, 3, 3, 3, 4, 4, 4, 5, 5, 5, 5, 5, 6, 6, 6, 6,
6, 6, 6, 6, 7, 7, 7, 7, 7, 7, 6, 6, 6, 6, 6, 6, 6, 6, 5, 5, 5, 5, 5, 4, 4, 4, 4,
3, 3, 3, 2, 2, 2, 1, 1, 1, 0, 0, 0, -1, -1, -1, -2, -2, -2, -3, -3, -3, -4, -4,
-4, -4, -5, -5, -5, -5, -6, -6, -6, -6, -6, -7, -7, -7, -7, -7, -7, -7, -7, -7,
-7, -7, -7, -7, -7, -7, -7, -7, -7, -7, -6, -6, -6, -6, -6, -5, -5, -5, -5, -4,
-4, -4, -4, -3, -3, -3, -2, -2, -2, -1, -1, -1, 0, 0, 0, 1, 1, 1, 2, 2, 2, 2, 3,
3, 3, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
6, 6, 6, 5, 5, 5, 5, 5, 4, 4, 4, 4, 3, 3, 3, 3, 2, 2, 2, 1, 1, 1, 0, 0, 0, -1,
-1, -1, -2, -2, -2, -3, -3, -3, -3, -4, -4, -4, -5, -5, -5, -5, -6, -6, -6, -6,
-6, -6, -7, -7, -7, -7, -7, -7, -7, -7, -7, -7, -7, -7, -7, -7, -7, -6, -6, -6,
-6, -6, -6, -5, -5, -5, -5, -5, -4, -4, -4, -3, -3, -3, -3, -2, -2, -2, -1, -1,
-1, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5,
5, 5, 5, 5, 5, 5, 6, 6, 6, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 4, 4, 4, 4, 4, 3, 3, 3,
3, 2, 2, 2, 2, 1, 1, 1, 1, 0, 0, 0, -1, -1, -1, -1, -2, -2, -2, -3, -3, -3, -3,
-4, -4, -4, -4, -5, -5, -5, -5, -5, -6, -6, -6, -6, -6, -6, -6, -6, -6, -6, -6,
-6, -6, -6, -6, -6, -6, -6, -6, -6, -6, -6, -6, -5, -5, -5, -5, -5, -4, -4, -4,
-4, -3, -3, -3, -3, -2, -2, -2, -2, -1, -1, -1, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 2,
3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
5, 5, 5, 4, 4, 4, 4, 4, 4, 3, 3, 3, 3, 3, 2, 2, 2, 1, 1, 1, 1, 0, 0, 0, 0, -1,
-1, -1, -2, -2, -2, -2, -3, -3, -3, -3, -4, -4, -4, -4, -4, -5, -5, -5, -5, -5,
-5, -5, -6, -6, -6, -6, -6, -6, -6, -6, -6, -6, -6, -6, -6, -6, -6, -6, -5, -5,
-5, -5, -5, -5, -5, -4, -4, -4, -4, -4, -3, -3, -3, -3, -2, -2, -2, -2, -1, -1,
-1, -1, 0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4,
4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 4, 4, 4, 4, 4, 4, 4, 4, 4, 3, 3, 3, 3, 3,
2, 2, 2, 2, 2, 1, 1, 1, 1, 0, 0, 0, 0, -1, -1, -1, -1, -2, -2, -2, -2, -3, -3,
-3, -3, -4, -4, -4, -4, -4, -5, -5, -5, -5, -5, -5, -5, -5, -5, -6, -6, -6, -6,
-6, -6, -6, -6, -6, -6, -5, -5, -5, -5, -5, -5, -5, -5, -4, -4, -4, -4, -4, -4,
-3, -3, -3, -3, -2, -2, -2, -2, -1, -1, -1, -1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2,
2, 2, 2, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
4, 4, 4, 4, 4, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2, 1, 1, 1, 1, 0, 0, 0, 0, 0,
-1, -1, -1, -1, -2, -2, -2, -2, -2, -3, -3, -3, -3, -3, -4, -4, -4, -4, -4, -4,
-4, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5,
-5, -5, -4, -4, -4, -4, -4, -4, -4, -3, -3, -3, -3, -3, -2, -2, -2, -2, -2, -1,
-1, -1, -1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3,
4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 3, 3, 3, 3, 3, 3, 3, 2, 2,
2, 2, 2, 2, 1, 1, 1, 1, 1, 0, 0, 0, 0, -1, -1, -1, -1, -1, -2, -2, -2, -2, -2,
-3, -3, -3, -3, -3, -3, -4, -4, -4, -4, -4, -4, -4, -5, -5, -5, -5, -5, -5, -5,
-5, -5, -5, -5, -5, -5, -5, -5, -5, -4, -4, -4, -4, -4, -4, -4, -4, -3, -3, -3,
-3, -3, -3, -2, -2, -2, -2, -2, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 1, 1, 1, 1,
1, 1, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0,
0, -1, -1, -1, -1, -1, -2, -2, -2, -2, -2, -2, -3, -3, -3, -3, -3, -3, -3, -4,
-4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4,
-4, -4, -4, -4, -4, -4, -4, -3, -3, -3, -3, -3, -3, -2, -2, -2, -2, -2, -2, -1,
-1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 3, 3,
3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2,
2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -2, -2, -2,
-2, -2, -2, -3, -3, -3, -3, -3, -3, -3, -3, -4, -4, -4, -4, -4, -4, -4, -4, -4,
-4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -3, -3, -3, -3, -3, -3,
-3, -3, -2, -2, -2, -2, -2, -2, -2, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 1,
1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0,
0, 0, 0, -1, -1, -1, -1, -1, -1, -2, -2, -2, -2, -2, -2, -2, -3, -3, -3, -3, -3,
-3, -3, -3, -3, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4,
-4, -4, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -2, -2, -2, -2, -2, -2, -1, -1,
-1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2,
2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
2, 2, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -2,
-2, -2, -2, -2, -2, -2, -2, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3,
-3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0,
0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0,
0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -2, -2, -2, -2, -2, -2, -2, -2, -3,
-3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3,
-3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -2, -2, -2, -2, -2, -2, -2, -2, -2, -1,
-1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2,
2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1,
-1, -1, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -3, -3, -3, -3, -3, -3, -3,
-3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0,
0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0,
0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3,
-3, -3, -3, -3, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1,
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1,
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1,
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, 0, -1, 0, 0, -1, 0,
-1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, };

#endif /* TOMEIGHT_H_ */
