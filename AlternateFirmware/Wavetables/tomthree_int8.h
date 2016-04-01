#ifndef TOMTHREE_H_
#define TOMTHREE_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define TOMTHREE_NUM_CELLS 8402
#define TOMTHREE_SAMPLERATE 16384
 
const int8_t __attribute__((section(".progmem.data"))) TOMTHREE_DATA [] = {24,
10, 25, 102, 73, 48, -3, 42, 114, 49, 95, 65, 13, 32, 18, -7, -11, -12, 8, 65,
44, -37, 6, 48, 53, -39, 13, 60, -125, -52, 19, -16, -31, -42, -42, -70, -60,
-53, -48, -70, -46, -47, -115, 9, -51, -108, -5, 6, -55, -102, 27, 48, -10, -41,
-9, 48, 75, 88, 64, 68, 107, 70, 39, 33, 3, 43, 57, 20, 27, 57, 40, 40, 51, 32,
26, 44, 76, 17, -35, -9, 22, -10, -14, 35, 23, -2, -34, -44, -64, -18, -33, -86,
-43, -3, -30, -58, -32, -59, -98, -68, -16, -19, -52, -80, -46, -2, 18, 1, -37,
-56, -52, -59, -34, -19, -36, -20, -10, 6, 15, 4, 0, 27, 17, 14, 21, 23, 17, 20,
12, 23, 31, 3, 23, 27, 27, 5, 3, 11, 7, 1, 12, 12, -9, -4, -8, 29, 9, -37, -26,
-1, -4, -60, -60, -27, -24, -61, -56, -22, -45, -49, -65, -59, -24, -41, -66,
-58, -51, -47, -55, -56, -30, -11, -3, 9, 2, 5, 7, -9, 32, 7, -33, 23, 55, 47,
39, 59, 64, 56, 83, 100, 109, 106, 85, 78, 99, 92, 75, 91, 91, 84, 84, 52, 62,
86, 69, 80, 72, 73, 64, 45, 43, 43, 58, 61, 36, 13, 29, 34, -2, -8, -17, -27,
-5, -5, -10, -24, -15, -12, -20, -29, -53, -59, -49, -54, -50, -43, -50, -32,
-43, -44, -47, -55, -35, -45, -44, -35, -66, -72, -50, -42, -47, -57, -46, -40,
-40, -44, -50, -39, -38, -41, -38, -57, -45, -37, -48, -38, -37, -37, -21, -25,
-55, -42, -28, -39, -31, -29, -28, -22, -21, -26, -52, -68, -49, -52, -67, -53,
-39, -37, -45, -54, -45, -18, -18, -7, -4, -31, -8, 15, -7, -21, -5, 15, 31, 61,
71, 51, 56, 62, 57, 63, 89, 84, 77, 97, 89, 88, 108, 120, 103, 92, 95, 100, 97,
83, 98, 99, 90, 92, 84, 81, 76, 68, 72, 78, 58, 72, 71, 56, 71, 66, 50, 37, 40,
26, 5, -2, 0, -9, -2, -1, -33, -8, 28, -2, -20, -16, -18, -34, -61, -61, -53,
-48, -74, -68, -68, -93, -84, -80, -72, -76, -82, -81, -82, -66, -73, -77, -57,
-65, -70, -63, -76, -73, -61, -59, -50, -39, -37, -69, -56, -33, -37, -27, -27,
-26, -14, -8, -15, -5, 19, 27, 13, 7, 11, 25, 14, 0, 18, 4, -7, 9, 23, 24, 5,
-3, -4, -7, -11, -18, -18, -15, -17, -18, -8, -7, -18, -23, -24, -17, -16, -20,
-10, -12, -15, -14, -4, 4, 13, 29, 27, 32, 37, 44, 61, 72, 72, 59, 59, 59, 61,
65, 72, 88, 82, 80, 75, 77, 94, 95, 82, 93, 85, 80, 88, 78, 75, 76, 98, 82, 69,
66, 50, 38, 48, 44, 30, 16, 4, 22, 20, 13, 0, -6, -6, -9, -15, -17, -26, -41,
-34, -33, -39, -41, -51, -63, -64, -67, -73, -79, -75, -87, -93, -84, -98, -102,
-93, -86, -93, -105, -108, -99, -98, -103, -97, -95, -92, -94, -92, -83, -80,
-80, -82, -75, -68, -74, -78, -59, -61, -64, -65, -63, -45, -39, -36, -26, -21,
-17, -5, -10, -10, 6, 23, 34, 26, 16, 30, 46, 46, 49, 59, 60, 58, 52, 56, 64,
62, 70, 66, 73, 76, 74, 69, 69, 67, 62, 75, 70, 60, 65, 58, 46, 39, 29, 33, 39,
27, 16, 20, 30, 39, 27, 17, 26, 24, 22, 18, 19, 18, 16, 25, 21, 29, 29, 20, 22,
22, 20, 20, 24, 15, 11, 30, 35, 23, 30, 29, 26, 42, 46, 36, 40, 49, 38, 23, 34,
35, 33, 31, 27, 33, 30, 24, 29, 33, 28, 28, 28, 19, 12, 12, 10, 9, 0, -6, 2, 1,
-14, -24, -32, -37, -44, -49, -47, -53, -59, -65, -65, -72, -77, -75, -83, -97,
-102, -104, -109, -106, -104, -107, -106, -106, -105, -105, -105, -103, -101,
-101, -96, -95, -100, -100, -96, -86, -82, -81, -74, -72, -64, -64, -66, -56,
-44, -36, -35, -27, -19, -9, -9, -6, 3, 6, 24, 34, 31, 30, 35, 43, 49, 49, 48,
51, 47, 47, 50, 50, 49, 57, 64, 54, 55, 55, 53, 58, 66, 68, 59, 62, 65, 60, 60,
62, 58, 61, 62, 53, 50, 62, 68, 57, 55, 54, 59, 59, 58, 57, 54, 55, 50, 49, 50,
53, 46, 36, 32, 29, 26, 21, 31, 35, 30, 34, 31, 30, 31, 32, 30, 20, 19, 18, 15,
20, 25, 21, 16, 20, 23, 25, 22, 21, 19, 14, 11, 15, 8, 2, 6, -1, 0, -4, -1, 3,
-4, -11, -12, -10, -14, -19, -19, -30, -42, -38, -41, -47, -53, -62, -60, -54,
-59, -61, -61, -65, -65, -68, -67, -69, -70, -71, -71, -72, -72, -70, -75, -81,
-76, -72, -74, -75, -72, -72, -73, -72, -77, -70, -68, -71, -65, -65, -59, -56,
-59, -59, -58, -53, -55, -57, -52, -50, -49, -51, -49, -44, -38, -35, -25, -21,
-27, -22, -15, -11, -7, -4, 1, 10, 14, 10, 13, 15, 24, 27, 28, 37, 33, 42, 48,
48, 57, 60, 63, 67, 72, 70, 74, 79, 77, 83, 82, 87, 92, 88, 85, 92, 106, 101,
90, 83, 83, 88, 85, 82, 79, 77, 72, 73, 72, 64, 56, 55, 58, 49, 44, 49, 44, 37,
35, 35, 34, 28, 30, 35, 31, 28, 26, 15, 9, 14, 15, 19, 20, 13, 10, 6, 1, 3, 0,
9, 8, 10, 10, 6, 10, 2, -1, -4, -3, 0, -1, -9, -14, -15, -11, -15, -19, -20,
-21, -27, -30, -27, -34, -36, -31, -34, -40, -44, -54, -55, -54, -57, -59, -70,
-75, -69, -70, -71, -73, -79, -81, -84, -86, -83, -84, -88, -89, -91, -89, -88,
-89, -88, -84, -78, -73, -75, -76, -77, -75, -75, -76, -77, -74, -64, -63, -64,
-60, -54, -52, -42, -29, -27, -26, -21, -18, -13, -6, 1, 6, 10, 14, 23, 29, 33,
39, 39, 41, 41, 46, 52, 57, 59, 60, 67, 67, 73, 71, 72, 77, 71, 73, 74, 69, 67,
63, 63, 62, 59, 57, 56, 57, 55, 55, 57, 57, 54, 51, 46, 44, 42, 47, 50, 43, 43,
41, 40, 41, 47, 44, 47, 51, 46, 49, 51, 51, 47, 44, 43, 43, 42, 43, 38, 34, 35,
29, 26, 20, 22, 23, 26, 25, 23, 22, 19, 19, 11, 13, 11, 3, -3, -7, -4, -3, -6,
-4, -11, -18, -17, -18, -20, -16, -20, -28, -22, -22, -25, -27, -32, -35, -36,
-38, -42, -43, -39, -37, -40, -43, -43, -48, -57, -57, -54, -56, -62, -64, -62,
-63, -63, -61, -59, -56, -57, -55, -52, -50, -49, -49, -44, -43, -51, -51, -45,
-45, -44, -44, -42, -41, -43, -39, -35, -33, -30, -26, -26, -24, -25, -16, -16,
-17, -13, -15, -15, -20, -20, -22, -18, -9, -10, -10, -6, -5, -4, -5, -4, 0, -1,
6, 6, 1, 4, 5, 6, 8, 11, 15, 13, 14, 20, 20, 22, 21, 24, 29, 29, 25, 28, 27, 28,
32, 33, 35, 34, 38, 42, 49, 49, 49, 54, 52, 49, 52, 54, 50, 48, 51, 53, 53, 50,
53, 59, 56, 54, 57, 57, 55, 54, 52, 50, 51, 47, 44, 45, 44, 41, 36, 33, 34, 30,
26, 27, 30, 31, 28, 23, 20, 17, 19, 16, 13, 6, 1, 0, -3, -3, -5, -7, -8, -13,
-18, -16, -18, -16, -17, -19, -19, -25, -22, -23, -25, -26, -27, -28, -32, -34,
-33, -33, -35, -34, -37, -34, -36, -39, -40, -42, -44, -47, -45, -47, -44, -46,
-46, -42, -45, -46, -48, -51, -55, -53, -48, -46, -49, -46, -40, -40, -41, -43,
-38, -35, -39, -40, -38, -37, -37, -29, -24, -26, -28, -27, -27, -27, -22, -18,
-16, -12, -8, -6, -3, -1, -2, 3, 7, 5, 6, 4, 3, 6, 7, 9, 11, 12, 10, 10, 7, 7,
10, 16, 19, 23, 22, 20, 23, 24, 29, 26, 24, 25, 27, 26, 25, 27, 28, 28, 30, 29,
28, 33, 35, 32, 27, 28, 25, 25, 29, 32, 35, 30, 29, 29, 28, 23, 19, 21, 22, 20,
18, 19, 17, 13, 15, 18, 17, 14, 13, 16, 16, 14, 11, 5, 1, 0, 2, 1, 0, -3, -4,
-5, -5, -5, -6, -6, -11, -11, -11, -10, -12, -14, -11, -11, -8, -5, -3, -2, -3,
1, 3, -1, -2, -1, -1, 0, 2, 5, 4, 2, -1, -3, -5, -10, -13, -14, -12, -14, -15,
-13, -14, -15, -13, -12, -12, -15, -17, -19, -17, -12, -11, -10, -13, -17, -15,
-17, -15, -8, -10, -11, -12, -15, -17, -14, -7, -7, -6, -3, -3, -4, -5, -5, -3,
-2, 2, -1, -1, 4, 6, 1, 1, 0, 0, 3, 3, -1, -4, -1, 1, -2, -4, -1, -3, -3, -5,
-10, -8, -7, -9, -8, -11, -12, -10, -11, -12, -14, -15, -16, -16, -12, -10, -8,
-9, -7, -5, -7, -8, -9, -9, -9, -10, -9, -9, -5, -3, -5, -8, -9, -7, -7, -10,
-10, -15, -17, -16, -16, -13, -13, -13, -15, -18, -15, -14, -16, -15, -17, -20,
-18, -15, -12, -9, -4, -5, -7, -4, -2, -2, 2, 5, 5, 3, 0, 4, 8, 14, 17, 20, 21,
23, 26, 25, 26, 29, 32, 31, 34, 33, 33, 35, 35, 35, 36, 36, 35, 35, 31, 30, 26,
23, 25, 24, 24, 22, 22, 18, 16, 17, 20, 20, 17, 16, 15, 12, 12, 16, 15, 15, 16,
15, 15, 17, 16, 16, 12, 11, 11, 11, 10, 10, 6, 5, 6, 4, 3, 1, 1, 2, 1, -1, -1,
-4, -7, -10, -12, -13, -15, -19, -20, -19, -21, -24, -24, -25, -25, -24, -19,
-14, -18, -20, -20, -19, -20, -21, -22, -24, -26, -27, -25, -25, -24, -22, -22,
-20, -18, -18, -20, -21, -22, -22, -26, -33, -31, -28, -26, -25, -26, -25, -23,
-21, -20, -17, -15, -19, -19, -20, -21, -19, -21, -24, -22, -24, -26, -25, -23,
-22, -24, -21, -20, -19, -23, -24, -18, -16, -17, -13, -13, -15, -13, -15, -14,
-13, -13, -10, -10, -13, -11, -9, -8, -7, -6, -5, -3, 2, 3, 4, 7, 12, 13, 16,
18, 18, 21, 24, 26, 26, 27, 26, 29, 32, 33, 32, 30, 32, 32, 35, 38, 34, 32, 33,
34, 36, 34, 32, 32, 35, 36, 37, 36, 37, 42, 37, 35, 37, 34, 33, 32, 31, 31, 31,
34, 35, 33, 34, 36, 32, 30, 33, 36, 36, 35, 32, 28, 29, 30, 29, 26, 22, 19, 17,
15, 15, 15, 13, 11, 8, 6, 5, 4, 1, -3, -3, -7, -8, -10, -12, -14, -15, -16, -21,
-23, -23, -25, -26, -26, -27, -28, -30, -31, -32, -36, -40, -39, -41, -41, -43,
-45, -44, -45, -44, -44, -45, -42, -44, -45, -45, -47, -43, -43, -44, -45, -48,
-47, -47, -48, -47, -42, -41, -39, -39, -38, -36, -33, -29, -27, -26, -25, -26,
-23, -18, -19, -20, -20, -18, -14, -12, -13, -14, -12, -12, -12, -10, -11, -10,
-8, -4, -2, -4, -5, -7, -3, -1, -1, 3, 4, 6, 8, 9, 11, 15, 16, 18, 20, 22, 23,
25, 24, 24, 26, 28, 32, 35, 35, 38, 39, 42, 43, 46, 47, 46, 47, 47, 47, 46, 46,
44, 42, 42, 41, 37, 35, 33, 29, 31, 29, 29, 32, 33, 34, 31, 30, 31, 33, 31, 30,
30, 29, 28, 26, 25, 24, 22, 21, 19, 20, 22, 23, 24, 28, 28, 25, 25, 24, 23, 24,
23, 20, 20, 18, 17, 17, 18, 13, 7, 7, 8, 5, 4, 3, 1, 1, -4, -8, -12, -18, -20,
-24, -28, -30, -33, -37, -37, -38, -40, -42, -44, -45, -46, -45, -45, -44, -43,
-44, -47, -48, -47, -48, -51, -49, -44, -43, -42, -42, -42, -43, -43, -42, -40,
-39, -39, -35, -35, -35, -33, -30, -29, -27, -25, -23, -26, -25, -23, -22, -22,
-23, -23, -20, -18, -20, -20, -16, -14, -13, -12, -11, -5, -2, -2, -3, -1, 4, 5,
7, 9, 11, 8, 9, 9, 7, 9, 5, 4, 3, 1, 0, 1, 3, 2, 5, 6, 6, 9, 12, 13, 14, 15, 18,
17, 16, 14, 16, 19, 18, 17, 17, 20, 21, 22, 23, 27, 30, 32, 34, 37, 40, 43, 43,
45, 48, 47, 46, 47, 50, 52, 52, 49, 49, 47, 45, 45, 44, 39, 36, 36, 33, 32, 27,
25, 26, 23, 22, 22, 22, 21, 19, 17, 17, 14, 11, 10, 6, 4, 2, 0, -2, -4, -6, -9,
-12, -15, -17, -20, -21, -22, -24, -21, -22, -23, -21, -21, -19, -18, -21, -20,
-21, -26, -30, -29, -28, -30, -32, -32, -32, -32, -31, -31, -28, -28, -29, -27,
-26, -24, -22, -20, -20, -19, -17, -17, -16, -17, -17, -16, -14, -14, -13, -16,
-17, -17, -18, -19, -19, -20, -21, -20, -20, -19, -19, -19, -18, -16, -14, -12,
-12, -13, -12, -10, -11, -11, -11, -11, -12, -12, -12, -14, -13, -9, -6, -6, -3,
-1, -1, -2, -2, 1, -2, -3, 0, 0, -1, -1, 1, -1, -1, 2, 5, 4, 3, 1, 0, 0, 1, 3,
4, 2, 1, 3, 4, 5, 5, 5, 7, 7, 8, 10, 12, 11, 10, 12, 16, 17, 16, 15, 14, 13, 12,
14, 13, 11, 10, 12, 12, 12, 15, 15, 16, 20, 22, 24, 26, 27, 28, 26, 25, 24, 20,
19, 18, 18, 17, 13, 13, 12, 12, 14, 15, 14, 13, 12, 11, 8, 11, 11, 8, 9, 9, 10,
10, 6, 5, 4, 4, 4, 2, 0, -2, -4, -4, -5, -6, -5, -4, -4, -4, -3, 0, 1, 0, -1,
-2, -4, -4, -4, -4, -5, -7, -9, -10, -10, -11, -12, -10, -11, -11, -11, -11,
-11, -12, -13, -15, -16, -15, -16, -18, -17, -17, -18, -17, -18, -19, -17, -16,
-18, -20, -20, -20, -21, -21, -22, -22, -20, -19, -18, -18, -15, -14, -12, -11,
-13, -13, -11, -9, -7, -6, -5, 0, 1, -2, -2, -1, 0, 2, 2, 3, 2, 1, 0, -2, -2, 0,
-3, -3, -2, -4, -5, -4, -4, -3, -4, -2, -2, -3, -2, -5, -8, -10, -10, -12, -13,
-13, -11, -10, -11, -9, -8, -9, -8, -8, -8, -7, -5, -3, -1, 1, 1, 1, 2, 1, -1,
1, 1, 0, 0, 1, 4, 5, 7, 8, 8, 9, 8, 9, 8, 7, 9, 10, 10, 11, 10, 10, 10, 10, 11,
9, 10, 10, 12, 14, 12, 13, 14, 14, 13, 13, 14, 12, 13, 14, 16, 18, 18, 20, 21,
21, 19, 20, 20, 20, 22, 21, 20, 20, 19, 20, 18, 18, 18, 19, 20, 20, 21, 20, 20,
19, 20, 21, 19, 18, 17, 15, 15, 16, 15, 13, 10, 9, 8, 6, 6, 3, 1, -1, -2, -4,
-7, -8, -12, -12, -14, -17, -18, -18, -18, -20, -20, -20, -19, -18, -19, -21,
-20, -21, -23, -24, -29, -32, -30, -30, -32, -32, -29, -29, -29, -29, -28, -28,
-29, -29, -30, -30, -29, -30, -31, -30, -30, -30, -30, -31, -30, -28, -29, -30,
-28, -26, -24, -24, -24, -24, -23, -23, -22, -20, -20, -20, -20, -17, -15, -13,
-10, -11, -11, -11, -10, -9, -9, -8, -4, -3, -1, 1, 1, 4, 7, 9, 9, 10, 11, 14,
15, 16, 18, 18, 20, 21, 22, 23, 23, 24, 26, 27, 28, 27, 28, 27, 27, 26, 25, 26,
25, 26, 26, 26, 25, 26, 26, 25, 24, 25, 25, 24, 24, 24, 23, 24, 25, 27, 26, 25,
25, 26, 28, 27, 26, 26, 24, 21, 20, 19, 18, 17, 17, 19, 21, 19, 18, 19, 18, 17,
16, 18, 17, 15, 14, 12, 13, 12, 11, 9, 6, 7, 5, 3, 2, 1, -1, -3, -5, -8, -8, -9,
-9, -10, -13, -13, -14, -16, -20, -20, -21, -25, -26, -25, -27, -30, -30, -31,
-32, -34, -35, -36, -38, -37, -36, -37, -35, -35, -35, -35, -36, -36, -37, -37,
-36, -37, -38, -37, -35, -33, -33, -31, -29, -30, -29, -28, -29, -27, -26, -25,
-23, -22, -18, -17, -16, -15, -13, -12, -11, -10, -9, -9, -7, -5, -4, -3, -2,
-1, -2, -1, 0, 3, 5, 6, 6, 7, 8, 8, 9, 9, 10, 12, 13, 14, 15, 16, 17, 17, 17,
19, 21, 21, 22, 22, 21, 24, 27, 27, 28, 28, 29, 30, 30, 32, 33, 33, 34, 35, 34,
34, 36, 35, 34, 34, 30, 28, 27, 26, 25, 23, 21, 21, 20, 18, 18, 16, 16, 18, 17,
14, 13, 12, 10, 10, 10, 10, 7, 6, 6, 5, 5, 4, 4, 2, 2, 2, 1, 2, 4, 2, 1, 1, -1,
-3, -4, -4, -4, -6, -7, -8, -9, -10, -12, -12, -12, -14, -15, -17, -17, -19,
-22, -22, -24, -25, -24, -25, -28, -28, -29, -31, -31, -30, -30, -31, -32, -32,
-32, -32, -30, -28, -26, -25, -26, -26, -26, -27, -26, -24, -23, -23, -22, -20,
-19, -18, -16, -15, -14, -13, -11, -12, -12, -12, -10, -6, -6, -7, -6, -2, 1, 3,
5, 7, 8, 8, 9, 11, 12, 13, 12, 12, 13, 14, 15, 17, 17, 20, 21, 21, 21, 22, 22,
21, 21, 22, 22, 22, 22, 20, 18, 15, 14, 12, 10, 9, 8, 8, 7, 7, 7, 6, 6, 7, 7, 7,
7, 5, 5, 5, 5, 5, 5, 5, 5, 4, 4, 4, 2, 1, 1, 1, 1, 4, 4, 4, 4, 5, 6, 5, 4, 4, 4,
3, 3, 2, 2, 1, 2, 3, 2, 3, 3, 2, 0, -1, -2, -2, -1, -3, -5, -4, -3, -4, -4, -4,
-5, -5, -6, -6, -6, -7, -7, -9, -8, -8, -9, -11, -11, -12, -12, -11, -10, -10,
-9, -8, -8, -9, -11, -11, -12, -12, -12, -13, -12, -11, -12, -11, -9, -7, -7,
-7, -7, -5, -5, -5, -5, -4, -5, -5, -5, -4, -4, -4, -3, -3, -3, -1, 1, 2, 2, 0,
1, 2, 3, 5, 5, 5, 5, 4, 4, 3, 4, 3, 3, 3, 3, 2, 2, 2, 2, 1, 2, 2, 0, 1, 3, 2, 2,
3, 3, 3, 4, 5, 4, 4, 5, 4, 4, 4, 3, 3, 4, 5, 4, 5, 6, 6, 7, 8, 8, 8, 8, 9, 8, 7,
7, 7, 6, 5, 5, 7, 7, 5, 4, 3, 2, 0, -1, -1, -1, -2, -2, 0, -1, -2, -3, -3, -4,
-5, -5, -6, -7, -8, -9, -10, -9, -9, -8, -9, -9, -7, -8, -7, -5, -5, -4, -4, -5,
-6, -6, -6, -6, -7, -6, -6, -4, -6, -6, -5, -4, -3, -3, -1, -1, -2, -2, -3, -3,
-3, -3, -3, -3, -2, -1, -1, -1, -1, -2, -3, -3, -2, -3, -4, -4, -6, -5, -4, -4,
-4, -4, -4, -3, -3, -4, -4, -4, -4, -5, -4, -2, -1, 0, 1, 1, 1, 2, 2, 3, 4, 3,
3, 4, 4, 4, 5, 5, 5, 6, 5, 6, 8, 9, 9, 9, 10, 10, 10, 10, 10, 10, 10, 9, 8, 8,
9, 8, 8, 8, 7, 6, 6, 6, 6, 6, 6, 6, 6, 7, 5, 4, 4, 2, 2, 3, 2, 3, 3, 4, 3, 1, 1,
0, -1, -2, -2, 0, 0, 0, 0, 0, 1, 1, 1, 2, 3, 3, 1, 0, 0, 0, 1, 0, -2, -2, -2,
-2, -3, -2, -2, -3, -5, -6, -7, -8, -8, -9, -10, -11, -11, -12, -13, -12, -12,
-13, -12, -12, -13, -13, -13, -13, -14, -15, -16, -15, -15, -16, -16, -15, -16,
-15, -14, -14, -13, -13, -13, -14, -14, -13, -13, -11, -10, -10, -9, -8, -9, -9,
-8, -9, -8, -7, -7, -6, -4, -3, -2, -1, 0, 2, 3, 3, 3, 6, 7, 8, 8, 10, 11, 11,
11, 12, 13, 14, 14, 15, 15, 14, 14, 15, 16, 16, 16, 17, 18, 18, 18, 18, 17, 16,
17, 17, 17, 18, 17, 17, 16, 14, 12, 13, 12, 9, 9, 8, 6, 5, 4, 3, 3, 2, 2, 2, 1,
0, 0, 0, 0, -1, -1, -2, -2, -2, -2, -2, -3, -4, -5, -4, -5, -6, -4, -4, -4, -5,
-7, -7, -7, -7, -7, -7, -7, -7, -6, -6, -5, -5, -5, -4, -4, -4, -5, -5, -6, -6,
-6, -7, -8, -9, -9, -8, -7, -8, -9, -8, -8, -7, -7, -7, -7, -8, -9, -9, -9, -9,
-10, -12, -13, -12, -12, -12, -12, -11, -11, -11, -11, -10, -10, -10, -10, -10,
-10, -9, -9, -9, -7, -7, -7, -6, -6, -5, -4, -3, -2, 0, 1, 1, 3, 4, 5, 6, 7, 8,
10, 12, 13, 13, 14, 15, 14, 13, 14, 14, 13, 14, 14, 14, 15, 15, 13, 12, 11, 10,
9, 8, 7, 6, 4, 3, 3, 3, 3, 1, 0, -1, -2, -2, -3, -3, -3, -3, -3, -5, -6, -5, -5,
-5, -6, -7, -6, -6, -6, -6, -7, -7, -7, -6, -6, -5, -5, -4, -3, -2, 0, 0, 1, 2,
2, 2, 2, 2, 2, 2, 1, 1, 1, 0, -2, -2, -2, -2, -3, -1, 0, 1, 1, 1, 1, 1, 0, -2,
-2, -2, -3, -3, -2, -2, -3, -3, -3, -4, -4, -3, -3, -3, -3, -3, -3, -3, -3, -3,
-3, -2, -2, -2, -1, -2, -1, 1, 1, 1, 2, 2, 3, 2, 2, 2, 2, 3, 3, 3, 3, 4, 5, 6,
7, 7, 8, 9, 9, 8, 8, 8, 8, 8, 9, 9, 8, 8, 8, 8, 7, 6, 6, 4, 3, 3, 3, 2, 0, -2,
-3, -4, -3, -3, -3, -2, -3, -3, -3, -3, -3, -3, -4, -4, -5, -6, -6, -6, -6, -6,
-6, -6, -7, -8, -9, -10, -10, -11, -10, -10, -10, -9, -9, -9, -8, -8, -8, -9,
-9, -10, -10, -9, -9, -10, -9, -9, -10, -10, -10, -8, -7, -6, -5, -5, -4, -4,
-3, -3, -3, -3, -2, 0, 0, 0, 0, 0, 1, 1, 0, 0, -1, -1, -1, -1, -1, 0, 0, -1, 0,
0, 0, 0, -1, 1, 2, 2, 2, 2, 2, 3, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 3, 4,
5, 5, 5, 6, 7, 8, 7, 7, 8, 7, 7, 7, 6, 6, 6, 7, 8, 8, 9, 9, 9, 8, 7, 8, 9, 8, 7,
7, 8, 9, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 9, 9, 10, 9, 9, 9, 8, 7, 7,
7, 7, 6, 7, 6, 6, 6, 5, 5, 4, 3, 1, -1, -2, -3, -4, -5, -6, -7, -8, -9, -10,
-10, -11, -12, -13, -14, -15, -15, -15, -15, -16, -16, -15, -15, -15, -15, -16,
-16, -16, -16, -17, -16, -16, -17, -18, -18, -17, -17, -18, -17, -18, -18, -17,
-16, -16, -16, -16, -14, -12, -11, -10, -9, -9, -10, -11, -10, -11, -11, -11,
-11, -10, -10, -9, -8, -8, -7, -7, -7, -6, -6, -6, -5, -4, -4, -3, -3, -2, -1,
-1, -1, -1, 0, 1, 1, 3, 3, 4, 5, 5, 6, 8, 8, 9, 10, 11, 11, 12, 12, 14, 15, 15,
17, 18, 19, 19, 20, 21, 21, 21, 21, 20, 20, 20, 20, 20, 21, 20, 19, 20, 20, 20,
20, 19, 19, 19, 18, 17, 17, 16, 15, 14, 14, 13, 11, 10, 9, 7, 7, 6, 5, 4, 4, 3,
2, 3, 3, 3, 2, 1, 0, 0, 0, -1, -2, -3, -4, -4, -4, -4, -4, -4, -5, -6, -6, -6,
-7, -7, -8, -8, -9, -9, -10, -10, -10, -10, -10, -10, -10, -11, -11, -12, -12,
-12, -12, -12, -13, -13, -13, -14, -15, -15, -16, -17, -16, -17, -17, -17, -18,
-17, -16, -15, -15, -15, -15, -16, -16, -17, -17, -16, -17, -18, -17, -17, -17,
-17, -17, -17, -17, -16, -16, -15, -14, -14, -14, -13, -12, -13, -13, -13, -12,
-12, -11, -11, -10, -8, -7, -7, -5, -4, -3, -1, 0, 1, 1, 2, 3, 3, 3, 4, 5, 5, 6,
7, 8, 9, 10, 12, 12, 13, 13, 14, 14, 14, 14, 15, 15, 15, 16, 15, 16, 16, 18, 19,
18, 19, 19, 19, 19, 19, 20, 20, 21, 21, 21, 20, 20, 20, 20, 20, 20, 20, 20, 20,
20, 20, 19, 18, 18, 18, 17, 15, 15, 15, 14, 13, 12, 12, 11, 11, 10, 9, 8, 8, 7,
6, 4, 3, 2, 1, 0, -1, -2, -2, -3, -4, -5, -5, -5, -5, -5, -6, -8, -9, -9, -10,
-11, -11, -12, -13, -14, -14, -14, -15, -16, -16, -16, -17, -18, -17, -17, -16,
-16, -15, -14, -15, -16, -16, -17, -17, -18, -18, -18, -19, -19, -19, -19, -19,
-19, -18, -18, -18, -17, -18, -18, -18, -18, -18, -17, -18, -17, -16, -16, -16,
-16, -16, -15, -14, -13, -13, -12, -11, -11, -11, -10, -10, -9, -8, -6, -5, -4,
-3, -2, 0, 1, 2, 4, 4, 5, 6, 7, 8, 7, 8, 9, 10, 10, 11, 11, 11, 11, 12, 13, 13,
14, 14, 15, 15, 15, 16, 16, 15, 16, 16, 17, 18, 17, 17, 17, 17, 17, 16, 15, 15,
15, 15, 15, 15, 14, 14, 13, 14, 13, 12, 12, 11, 10, 10, 10, 9, 9, 8, 7, 7, 6, 5,
5, 4, 3, 3, 3, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1,
-2, -2, -2, -2, -2, -3, -3, -2, -2, -2, -2, -3, -3, -3, -3, -4, -4, -5, -5, -5,
-6, -6, -5, -6, -6, -6, -7, -7, -7, -7, -7, -8, -8, -8, -9, -9, -9, -9, -9, -10,
-10, -10, -10, -11, -11, -11, -12, -12, -12, -11, -12, -12, -11, -11, -11, -11,
-12, -12, -12, -12, -12, -13, -12, -12, -12, -12, -11, -11, -10, -9, -9, -9, -8,
-8, -7, -7, -7, -7, -8, -7, -7, -7, -6, -5, -4, -4, -3, -2, -1, 0, 0, 1, 2, 2,
2, 3, 3, 3, 3, 4, 4, 4, 5, 5, 6, 6, 6, 7, 8, 7, 7, 8, 8, 8, 8, 7, 6, 7, 6, 6, 7,
7, 7, 7, 8, 8, 8, 8, 8, 8, 8, 8, 8, 7, 7, 7, 7, 7, 7, 6, 7, 6, 6, 6, 6, 6, 6, 6,
7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 6, 6, 6, 5, 4, 4, 3, 3, 3, 2,
2, 1, 1, 1, 1, 0, 0, -1, -1, -2, -3, -3, -5, -5, -5, -5, -6, -6, -7, -7, -8, -8,
-8, -8, -8, -8, -7, -7, -7, -7, -7, -7, -7, -7, -7, -7, -7, -7, -7, -7, -7, -6,
-5, -6, -6, -6, -6, -6, -5, -5, -5, -5, -5, -5, -5, -6, -6, -6, -6, -6, -7, -7,
-7, -7, -8, -8, -8, -8, -8, -8, -8, -8, -8, -7, -6, -6, -6, -5, -4, -4, -3, -3,
-3, -3, -3, -3, -2, -2, -2, -1, -1, -1, -1, -2, -1, -1, -1, -1, -1, -1, -1, 0,
0, 0, 0, 0, -1, -1, -2, -3, -3, -3, -3, -4, -4, -4, -4, -4, -4, -4, -4, -3, -3,
-2, -2, -2, -2, -1, 0, 0, 0, 1, 1, 2, 2, 2, 3, 3, 4, 5, 6, 6, 7, 8, 8, 8, 9, 10,
10, 11, 12, 12, 13, 13, 13, 12, 12, 13, 12, 12, 13, 12, 12, 11, 11, 10, 10, 10,
11, 10, 10, 10, 10, 10, 10, 10, 10, 10, 9, 9, 9, 8, 8, 8, 7, 7, 6, 5, 5, 4, 4,
3, 3, 3, 2, 2, 2, 2, 1, 1, 0, -1, -1, -2, -2, -3, -4, -4, -6, -6, -7, -7, -7,
-7, -8, -9, -9, -10, -10, -11, -11, -11, -12, -13, -13, -13, -13, -14, -14, -14,
-14, -14, -15, -15, -16, -16, -16, -16, -16, -17, -17, -17, -17, -17, -17, -17,
-16, -15, -15, -14, -14, -13, -12, -11, -11, -10, -9, -9, -8, -8, -7, -6, -6,
-5, -5, -5, -4, -4, -3, -3, -2, -2, -2, -1, -1, 0, 0, 0, 0, 0, 1, 1, 2, 2, 2, 2,
3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 4, 4, 4, 5, 6, 6, 6, 7, 8, 9, 9,
10, 11, 11, 11, 12, 12, 13, 13, 13, 13, 14, 15, 15, 15, 15, 16, 16, 17, 16, 17,
17, 16, 16, 16, 15, 15, 14, 13, 12, 12, 11, 10, 10, 9, 8, 7, 7, 7, 7, 7, 6, 6,
5, 4, 3, 2, 1, 1, 0, -2, -2, -3, -3, -4, -4, -5, -5, -5, -5, -5, -6, -6, -7, -7,
-8, -8, -8, -7, -7, -8, -8, -7, -8, -8, -8, -9, -9, -9, -9, -9, -9, -9, -9, -10,
-9, -10, -10, -10, -10, -11, -11, -11, -11, -11, -11, -11, -11, -11, -11, -12,
-12, -12, -13, -13, -13, -13, -13, -13, -12, -12, -11, -11, -11, -10, -10, -10,
-10, -10, -9, -9, -9, -9, -9, -8, -7, -7, -7, -6, -6, -6, -5, -4, -4, -3, -3,
-2, -2, -1, -1, 0, 0, 1, 2, 2, 3, 3, 3, 4, 4, 5, 5, 5, 5, 5, 5, 4, 4, 5, 5, 5,
5, 6, 6, 6, 6, 7, 7, 7, 8, 8, 8, 8, 8, 9, 9, 9, 9, 9, 10, 10, 10, 10, 11, 11,
11, 12, 12, 12, 12, 13, 13, 13, 14, 14, 13, 13, 13, 13, 12, 11, 11, 10, 10, 9,
9, 8, 8, 7, 7, 6, 5, 4, 3, 3, 2, 1, 0, -1, -1, -1, -1, -2, -2, -2, -3, -3, -3,
-3, -4, -4, -4, -5, -5, -5, -5, -5, -6, -6, -5, -5, -5, -5, -5, -5, -5, -5, -5,
-5, -5, -5, -5, -6, -6, -6, -6, -6, -7, -7, -7, -7, -7, -7, -7, -8, -8, -8, -9,
-9, -9, -9, -10, -10, -10, -10, -9, -9, -9, -8, -8, -8, -8, -8, -8, -9, -9, -9,
-9, -9, -9, -9, -9, -8, -8, -7, -7, -7, -7, -6, -6, -6, -5, -5, -5, -5, -5, -5,
-5, -5, -4, -4, -4, -4, -3, -3, -2, -2, -2, -1, -1, 0, 0, 0, 1, 1, 1, 2, 3, 3,
3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 6, 6, 6, 6, 6, 6, 7, 7, 7, 7,
7, 7, 7, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 9, 8, 8, 9, 8, 8, 8, 8, 8, 7, 7,
6, 6, 5, 5, 4, 4, 3, 3, 3, 2, 2, 2, 1, 1, 1, 1, 0, 0, -1, -2, -2, -2, -2, -2,
-2, -3, -3, -3, -3, -3, -4, -4, -4, -5, -4, -4, -5, -5, -4, -4, -4, -4, -3, -3,
-3, -3, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -3, -3, -3, -3, -3,
-3, -4, -4, -4, -4, -5, -5, -5, -6, -6, -6, -7, -7, -7, -7, -8, -8, -8, -8, -8,
-8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -7, -7, -7, -6,
-6, -5, -5, -5, -5, -5, -4, -3, -3, -2, -2, -2, -1, -1, 0, 0, 1, 1, 1, 1, 1, 1,
1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2,
2, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 5, 5, 6, 6, 6, 7, 7, 7, 7, 7, 8, 8, 8, 8, 8, 8,
7, 7, 7, 7, 7, 7, 6, 6, 6, 6, 6, 6, 6, 5, 5, 5, 5, 4, 4, 4, 5, 4, 4, 4, 3, 3, 3,
3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2, 1, 1, 0, 0,
0, -1, -1, -2, -3, -3, -4, -5, -5, -6, -7, -7, -7, -8, -9, -9, -10, -11, -11,
-11, -12, -12, -13, -13, -14, -14, -14, -14, -14, -14, -14, -14, -14, -14, -14,
-13, -13, -13, -13, -12, -12, -11, -11, -11, -11, -10, -10, -10, -9, -9, -9, -8,
-8, -7, -7, -7, -6, -6, -6, -5, -4, -4, -3, -3, -2, -2, -2, -1, -1, -1, -1, -1,
0, 0, 1, 1, 2, 2, 2, 3, 3, 3, 4, 4, 4, 4, 4, 4, 5, 5, 4, 4, 4, 5, 5, 5, 6, 6, 6,
6, 6, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 9, 10, 10, 10, 10, 11, 11, 11, 12, 12, 11,
11, 11, 11, 11, 11, 11, 11, 11, 11, 10, 10, 10, 10, 10, 9, 9, 8, 8, 7, 7, 6, 6,
5, 5, 4, 4, 3, 3, 2, 1, 1, 1, 0, 0, -1, -1, -1, -1, -2, -2, -2, -3, -3, -3, -3,
-3, -3, -3, -3, -3, -4, -4, -4, -5, -5, -5, -5, -5, -6, -6, -6, -7, -7, -7, -8,
-8, -8, -8, -8, -8, -9, -9, -9, -10, -10, -11, -11, -12, -12, -12, -12, -12,
-13, -13, -13, -13, -13, -13, -13, -12, -12, -12, -12, -12, -12, -11, -11, -11,
-10, -10, -10, -9, -9, -9, -9, -8, -8, -7, -7, -7, -6, -6, -6, -5, -5, -5, -4,
-4, -4, -4, -3, -3, -2, -2, -2, -2, -1, -1, -1, 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3,
3, 4, 4, 5, 5, 6, 6, 7, 7, 7, 8, 8, 8, 8, 8, 8, 9, 9, 9, 9, 9, 10, 10, 11, 11,
11, 11, 12, 12, 12, 12, 12, 12, 12, 12, 12, 11, 11, 11, 11, 11, 10, 10, 10, 10,
10, 9, 9, 9, 8, 8, 8, 8, 7, 7, 6, 5, 5, 5, 4, 4, 3, 3, 2, 2, 1, 0, 0, -1, -1,
-2, -2, -2, -3, -3, -3, -3, -3, -3, -4, -4, -4, -4, -5, -5, -6, -6, -6, -7, -7,
-7, -8, -8, -8, -8, -8, -8, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -10, -10,
-9, -9, -10, -10, -10, -10, -11, -11, -11, -11, -11, -11, -11, -11, -11, -11,
-11, -11, -10, -10, -10, -10, -9, -9, -9, -8, -8, -8, -7, -7, -6, -6, -5, -5,
-4, -4, -3, -3, -3, -2, -2, -1, -1, 0, 0, 1, 1, 1, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3,
3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
5, 5, 5, 6, 6, 6, 6, 6, 6, 6, 6, 6, 7, 7, 7, 7, 7, 7, 8, 8, 8, 8, 8, 7, 7, 7, 7,
7, 6, 6, 6, 6, 5, 5, 5, 4, 4, 3, 3, 3, 2, 2, 1, 1, 1, 0, 0, 0, 0, -1, -1, -1,
-2, -2, -2, -2, -3, -3, -4, -4, -4, -4, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5,
-5, -5, -5, -5, -5, -5, -4, -4, -4, -4, -4, -4, -3, -3, -3, -3, -3, -3, -3, -3,
-3, -3, -2, -2, -2, -2, -2, -3, -3, -3, -3, -3, -3, -3, -4, -4, -4, -4, -4, -4,
-4, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5,
-4, -4, -5, -5, -5, -5, -5, -5, -5, -5, -5, -4, -4, -4, -4, -4, -3, -3, -3, -3,
-3, -3, -2, -2, -2, -2, -2, -1, -1, -1, -1, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 2, 2,
3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 6, 6, 6, 6,
6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 4, 4,
4, 4, 3, 3, 3, 2, 2, 2, 2, 1, 1, 1, 0, 0, 0, -1, -1, -1, -1, -2, -2, -2, -3, -3,
-3, -3, -3, -3, -3, -4, -4, -3, -3, -3, -3, -3, -3, -4, -4, -4, -4, -4, -4, -4,
-4, -4, -4, -5, -5, -5, -5, -5, -5, -6, -6, -6, -6, -6, -6, -6, -6, -7, -7, -7,
-6, -6, -6, -6, -6, -6, -6, -6, -6, -6, -6, -6, -6, -6, -6, -6, -5, -5, -5, -5,
-4, -4, -4, -4, -4, -3, -3, -3, -3, -3, -3, -3, -3, -3, -2, -2, -2, -2, -2, -2,
-1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2,
2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
4, 4, 4, 4, 4, 4, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2, 1, 1, 1, 0, 0, 0, 0, 0,
-1, -1, -1, -1, -1, -1, -1, -2, -2, -2, -2, -3, -3, -3, -3, -4, -4, -4, -4, -4,
-4, -5, -5, -5, -5, -5, -5, -6, -6, -6, -6, -6, -7, -7, -7, -7, -7, -8, -8, -8,
-8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -7, -7, -7, -7, -7, -7,
-7, -7, -6, -6, -6, -6, -6, -6, -5, -5, -5, -5, -4, -4, -3, -3, -3, -2, -2, -2,
-1, -1, -1, 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 6,
6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 5,
5, 5, 5, 5, 4, 4, 4, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1,
1, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -2, -2, -2, -2, -2, -3, -3, -3, -3,
-3, -3, -3, -4, -4, -4, -4, -4, -4, -4, -4, -4, -5, -5, -5, -5, -5, -5, -5, -5,
-5, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5,
-5, -5, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -3, -3, -3, -3, -3, -3, -3, -2,
-2, -2, -2, -2, -2, -2, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2,
2, 2, 2, 2, 2, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
3, 4, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1,
1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1,
-1, -2, -2, -2, -2, -2, -2, -2, -2, -2, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3,
-3, -3, -3, -3, -3, -3, -3, -3, -3, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4,
-4, -4, -4, -4, -4, -4, -4, -4, -3, -3, -3, -3, -3, -3, -3, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1,
1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -2, -2, -2, -2, -2, -2, -2, -2, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3,
-3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3,
-3, -3, -3, -3, -3, -3, -3, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -1, -1, -1, -1, -1, -1, -1, -1, -1,
0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3,
3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, -1, -1, -1, -1, -1, -1, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3,
-3, -3, -3, -3, -3, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2,
2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -2, -2, -2, -1, -1, -1, -1, -1, -1, -2, -2,
-2, -2, -2, -2, -2, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1,
0, 0, 0, 0, 0, -1, 0, -1, 0, -1, };

#endif /* TOMTHREE_H_ */
