#ifndef JAZZONE_H_
#define JAZZONE_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define JAZZONE_NUM_CELLS 5809
#define JAZZONE_SAMPLERATE 16384
 
const int8_t __attribute__((section(".progmem.data"))) JAZZONE_DATA [] = {-1, 0,
0, 1, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 16, 16, 16, 17, 17,
18, 18, 19, 19, 20, 21, 22, 22, 24, 26, 23, 22, 20, 21, 25, 29, 27, 27, 29, 26,
21, 18, 16, 13, 10, 12, 13, 13, 13, 13, 18, 19, 16, 15, 14, 12, 11, 5, -2, -7,
-10, -14, -21, -16, -6, -4, -6, -8, -16, -24, -28, -31, -36, -38, -43, -46, -47,
-49, -45, -44, -51, -54, -52, -54, -58, -64, -67, -70, -72, -71, -68, -69, -71,
-73, -75, -71, -67, -67, -68, -66, -70, -75, -79, -80, -83, -88, -88, -92, -91,
-83, -78, -78, -75, -73, -70, -64, -62, -60, -61, -58, -47, -38, -34, -35, -37,
-36, -34, -33, -30, -29, -27, -23, -22, -19, -16, -12, -10, -10, -10, -5, 0, 1,
7, 11, 11, 16, 23, 27, 32, 38, 41, 45, 50, 56, 57, 57, 57, 60, 65, 68, 70, 72,
75, 78, 80, 78, 75, 76, 76, 78, 80, 83, 87, 90, 93, 94, 96, 96, 97, 100, 106,
110, 112, 113, 115, 117, 116, 119, 120, 116, 114, 110, 109, 109, 109, 107, 105,
105, 102, 101, 101, 101, 98, 94, 91, 89, 87, 84, 77, 72, 68, 66, 65, 60, 57, 55,
52, 45, 39, 33, 25, 16, 11, 10, 7, 2, -1, -7, -14, -21, -29, -33, -38, -43, -51,
-58, -65, -73, -77, -80, -82, -83, -84, -83, -83, -82, -79, -76, -74, -73, -73,
-75, -74, -69, -68, -70, -69, -67, -69, -69, -67, -66, -65, -65, -64, -64, -61,
-61, -59, -57, -56, -56, -56, -52, -49, -48, -45, -46, -51, -51, -51, -53, -54,
-53, -53, -54, -54, -54, -55, -56, -57, -57, -58, -59, -60, -60, -58, -60, -60,
-61, -61, -60, -61, -60, -61, -62, -62, -60, -58, -60, -62, -63, -61, -60, -61,
-60, -61, -60, -56, -54, -55, -56, -51, -50, -52, -58, -57, -52, -50, -48, -47,
-45, -42, -38, -34, -32, -26, -22, -18, -13, -11, -10, -7, -6, -6, -4, 0, 3, 7,
11, 15, 18, 20, 22, 24, 27, 27, 33, 35, 40, 44, 46, 51, 55, 57, 56, 57, 60, 58,
61, 62, 60, 62, 58, 57, 53, 54, 52, 52, 53, 50, 50, 47, 47, 49, 48, 47, 50, 51,
49, 49, 53, 53, 53, 53, 51, 51, 54, 51, 50, 51, 52, 53, 55, 59, 59, 58, 58, 57,
57, 60, 61, 63, 63, 62, 65, 66, 69, 72, 73, 74, 77, 77, 80, 79, 79, 77, 74, 72,
72, 71, 67, 68, 66, 65, 62, 60, 59, 56, 52, 49, 48, 48, 48, 47, 46, 46, 46, 44,
40, 40, 40, 37, 38, 39, 39, 37, 34, 33, 29, 22, 15, 10, 8, 3, 0, -5, -11, -15,
-19, -18, -18, -20, -22, -25, -27, -28, -30, -32, -31, -36, -39, -37, -38, -37,
-35, -37, -39, -43, -47, -48, -50, -54, -56, -58, -60, -60, -62, -62, -62, -64,
-64, -62, -63, -61, -60, -59, -56, -56, -54, -50, -50, -48, -47, -46, -47, -47,
-44, -46, -47, -47, -48, -51, -51, -52, -56, -57, -56, -57, -58, -58, -59, -60,
-62, -61, -62, -63, -62, -62, -63, -63, -61, -63, -64, -64, -67, -65, -67, -70,
-69, -70, -70, -72, -74, -75, -75, -76, -76, -74, -77, -77, -76, -79, -77, -78,
-77, -75, -73, -73, -68, -64, -62, -60, -55, -52, -51, -44, -40, -37, -33, -28,
-26, -22, -21, -17, -12, -8, -2, 2, 6, 9, 14, 19, 23, 25, 28, 34, 36, 38, 42,
42, 45, 49, 50, 53, 54, 56, 57, 56, 61, 65, 66, 68, 70, 72, 73, 74, 76, 77, 78,
80, 81, 81, 79, 79, 80, 79, 78, 76, 76, 77, 74, 76, 76, 73, 73, 73, 74, 74, 72,
75, 74, 72, 73, 74, 72, 70, 69, 66, 65, 64, 63, 63, 61, 60, 61, 60, 59, 58, 56,
58, 58, 56, 56, 57, 57, 56, 56, 55, 54, 54, 50, 52, 52, 49, 48, 48, 47, 45, 43,
42, 40, 40, 38, 34, 33, 33, 30, 28, 28, 25, 24, 23, 22, 20, 19, 18, 17, 14, 12,
10, 7, 5, 2, 1, -3, -4, -6, -10, -10, -13, -17, -20, -23, -25, -27, -30, -33,
-37, -41, -44, -44, -46, -50, -50, -50, -53, -53, -54, -53, -53, -51, -52, -53,
-53, -52, -51, -53, -52, -52, -51, -52, -52, -53, -53, -56, -57, -59, -61, -62,
-63, -63, -64, -65, -64, -63, -62, -60, -59, -57, -57, -55, -55, -54, -53, -53,
-51, -50, -49, -50, -50, -50, -50, -50, -50, -50, -50, -50, -49, -49, -49, -49,
-49, -47, -46, -45, -43, -42, -43, -41, -41, -41, -39, -37, -37, -36, -35, -34,
-32, -31, -30, -29, -29, -30, -28, -28, -28, -30, -29, -29, -30, -29, -27, -26,
-26, -27, -25, -23, -23, -23, -20, -19, -20, -18, -18, -17, -16, -15, -13, -12,
-12, -9, -8, -9, -7, -5, -2, -1, 0, 1, 2, 8, 10, 13, 16, 17, 21, 24, 27, 30, 34,
37, 41, 44, 46, 49, 52, 54, 55, 56, 58, 58, 58, 60, 60, 61, 62, 62, 62, 61, 62,
63, 63, 64, 61, 62, 62, 62, 62, 61, 61, 60, 61, 60, 59, 58, 60, 57, 57, 59, 56,
56, 56, 55, 53, 53, 54, 54, 53, 55, 54, 54, 55, 56, 57, 56, 56, 56, 58, 57, 58,
57, 56, 58, 56, 55, 55, 55, 55, 53, 53, 52, 52, 51, 51, 50, 49, 48, 45, 44, 42,
41, 39, 37, 35, 32, 31, 29, 28, 25, 24, 22, 19, 17, 14, 12, 10, 7, 5, 2, 1, 0,
-3, -6, -8, -11, -13, -15, -18, -20, -23, -24, -27, -29, -30, -32, -34, -36,
-38, -41, -42, -45, -49, -50, -53, -54, -57, -59, -60, -62, -66, -67, -68, -70,
-72, -73, -73, -75, -76, -78, -78, -79, -82, -82, -82, -83, -84, -85, -86, -85,
-86, -87, -86, -86, -85, -84, -84, -84, -83, -81, -81, -80, -77, -76, -75, -74,
-72, -69, -68, -67, -63, -62, -60, -59, -57, -55, -52, -50, -48, -46, -43, -42,
-41, -38, -36, -34, -30, -28, -27, -24, -22, -21, -20, -18, -16, -14, -13, -11,
-9, -9, -7, -5, -4, -2, -1, 0, 1, 0, 3, 4, 3, 5, 6, 7, 9, 10, 12, 13, 14, 16,
17, 18, 20, 21, 23, 24, 25, 27, 27, 29, 30, 31, 32, 34, 35, 36, 37, 38, 39, 40,
40, 42, 44, 44, 45, 47, 49, 49, 50, 51, 52, 52, 51, 52, 53, 52, 52, 51, 50, 51,
50, 49, 50, 49, 48, 48, 48, 48, 48, 47, 46, 47, 46, 46, 46, 46, 45, 46, 46, 45,
44, 43, 43, 41, 41, 41, 41, 40, 39, 40, 41, 40, 39, 40, 41, 39, 39, 39, 39, 38,
37, 37, 38, 37, 36, 36, 35, 34, 34, 34, 32, 33, 31, 31, 30, 31, 30, 31, 30, 30,
30, 29, 30, 28, 27, 25, 26, 24, 23, 23, 21, 19, 18, 15, 14, 13, 11, 11, 8, 8, 7,
4, 4, 3, 0, -1, -3, -5, -5, -6, -8, -10, -12, -14, -15, -18, -18, -22, -23, -24,
-27, -29, -31, -32, -35, -37, -39, -41, -42, -42, -43, -46, -47, -47, -50, -50,
-51, -52, -53, -53, -53, -53, -53, -53, -52, -51, -51, -51, -50, -49, -49, -49,
-48, -47, -48, -47, -46, -46, -45, -43, -41, -42, -42, -41, -41, -41, -40, -41,
-40, -40, -40, -39, -40, -39, -40, -39, -39, -39, -38, -39, -39, -40, -41, -41,
-41, -41, -41, -42, -43, -42, -42, -43, -43, -43, -45, -45, -45, -45, -45, -45,
-44, -44, -43, -42, -40, -39, -38, -38, -35, -34, -33, -32, -31, -29, -29, -26,
-26, -25, -24, -22, -21, -21, -19, -18, -17, -16, -14, -14, -13, -9, -8, -8, -6,
-5, -4, -1, 1, 2, 5, 7, 10, 10, 13, 16, 17, 21, 22, 24, 27, 29, 30, 33, 34, 36,
39, 40, 42, 43, 44, 45, 47, 49, 50, 50, 52, 52, 53, 52, 54, 55, 55, 57, 57, 58,
59, 60, 62, 62, 64, 65, 65, 67, 66, 67, 68, 66, 66, 65, 65, 67, 66, 65, 65, 63,
63, 63, 62, 61, 61, 61, 60, 59, 60, 59, 58, 57, 58, 57, 55, 53, 53, 53, 52, 50,
51, 48, 47, 46, 43, 41, 39, 39, 37, 35, 34, 33, 32, 29, 26, 24, 22, 22, 20, 16,
14, 11, 10, 9, 5, 4, 3, 0, -2, -3, -5, -7, -10, -11, -14, -15, -16, -18, -21,
-24, -24, -26, -28, -31, -34, -35, -36, -38, -39, -41, -43, -42, -44, -45, -45,
-45, -45, -45, -46, -48, -47, -49, -48, -48, -48, -49, -49, -49, -49, -49, -49,
-49, -49, -48, -48, -48, -46, -47, -46, -45, -45, -44, -43, -44, -43, -41, -40,
-39, -39, -38, -37, -36, -36, -36, -35, -34, -33, -32, -31, -31, -30, -30, -28,
-28, -27, -27, -26, -25, -25, -24, -24, -24, -23, -24, -24, -24, -23, -23, -24,
-23, -24, -24, -24, -23, -24, -23, -22, -22, -23, -23, -23, -23, -23, -23, -22,
-21, -21, -21, -19, -20, -19, -19, -19, -18, -16, -17, -16, -15, -15, -15, -14,
-12, -11, -11, -10, -7, -7, -7, -5, -4, -4, -3, -3, -1, 1, 1, 2, 3, 3, 5, 6, 6,
7, 9, 9, 9, 9, 10, 12, 13, 13, 14, 16, 17, 17, 17, 18, 19, 20, 20, 21, 23, 22,
23, 23, 24, 25, 25, 25, 25, 26, 26, 26, 26, 27, 26, 26, 27, 27, 29, 28, 28, 29,
29, 29, 30, 31, 31, 32, 33, 34, 33, 34, 34, 34, 34, 33, 34, 34, 34, 35, 36, 35,
35, 37, 37, 38, 37, 38, 39, 38, 38, 39, 39, 40, 41, 42, 42, 43, 43, 42, 43, 43,
44, 44, 44, 44, 44, 43, 42, 42, 42, 42, 41, 40, 40, 40, 39, 38, 38, 38, 36, 36,
35, 33, 31, 30, 28, 26, 25, 24, 22, 20, 18, 17, 15, 14, 12, 9, 7, 6, 4, 2, 2, 0,
-2, -2, -4, -6, -7, -8, -9, -11, -13, -14, -15, -17, -18, -18, -20, -22, -23,
-25, -27, -29, -30, -32, -34, -35, -37, -38, -40, -41, -43, -44, -45, -46, -48,
-48, -50, -51, -51, -52, -53, -54, -55, -55, -56, -57, -57, -57, -58, -59, -59,
-59, -60, -60, -61, -62, -61, -62, -61, -62, -62, -62, -62, -61, -61, -61, -61,
-60, -60, -59, -59, -58, -57, -56, -56, -54, -54, -53, -52, -51, -50, -49, -48,
-47, -46, -44, -41, -41, -39, -37, -35, -34, -32, -30, -28, -26, -24, -22, -20,
-18, -16, -14, -12, -10, -9, -6, -4, -2, -2, 0, 2, 3, 4, 6, 8, 9, 11, 12, 13,
14, 16, 17, 18, 20, 20, 22, 23, 25, 25, 27, 29, 29, 30, 31, 32, 34, 34, 34, 35,
36, 36, 37, 37, 38, 38, 38, 38, 39, 39, 39, 40, 40, 40, 40, 41, 41, 40, 41, 41,
41, 41, 41, 41, 40, 40, 39, 39, 39, 39, 39, 38, 38, 38, 37, 37, 37, 36, 37, 36,
35, 34, 35, 34, 33, 33, 32, 33, 33, 32, 33, 33, 32, 32, 32, 32, 32, 32, 31, 32,
31, 30, 30, 29, 28, 28, 27, 26, 26, 25, 25, 23, 23, 21, 20, 19, 18, 17, 16, 15,
13, 13, 12, 10, 8, 8, 7, 5, 3, 3, 2, 1, 1, 0, 0, -2, -3, -3, -4, -5, -5, -6, -7,
-7, -7, -7, -8, -8, -9, -9, -9, -9, -9, -9, -9, -9, -8, -8, -7, -6, -7, -6, -6,
-5, -4, -4, -4, -4, -3, -4, -3, -4, -3, -3, -3, -3, -4, -4, -4, -5, -6, -6, -7,
-8, -8, -9, -10, -11, -12, -13, -14, -14, -15, -17, -18, -18, -20, -20, -22,
-22, -23, -24, -26, -26, -27, -29, -30, -31, -33, -34, -35, -36, -37, -38, -39,
-40, -41, -42, -43, -42, -44, -44, -43, -44, -45, -45, -45, -45, -45, -45, -46,
-46, -46, -47, -47, -46, -46, -46, -46, -47, -46, -46, -46, -46, -45, -45, -45,
-44, -44, -44, -43, -43, -42, -41, -40, -39, -38, -37, -36, -35, -34, -33, -31,
-30, -28, -26, -25, -23, -21, -20, -18, -16, -14, -12, -11, -10, -8, -6, -5, -3,
-2, -1, 1, 2, 3, 4, 6, 7, 9, 10, 11, 12, 13, 14, 14, 15, 16, 18, 19, 20, 21, 21,
22, 23, 24, 25, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 39,
40, 41, 42, 43, 45, 45, 46, 47, 48, 49, 49, 50, 51, 52, 52, 53, 52, 53, 53, 53,
54, 53, 54, 54, 54, 54, 53, 53, 53, 52, 52, 51, 51, 50, 50, 49, 47, 46, 45, 44,
43, 42, 41, 40, 38, 37, 35, 34, 33, 32, 31, 30, 28, 27, 26, 24, 22, 21, 19, 18,
16, 15, 14, 12, 10, 9, 7, 5, 4, 3, 2, 0, -1, -2, -3, -4, -6, -6, -8, -9, -10,
-10, -12, -13, -15, -16, -17, -17, -18, -20, -21, -22, -23, -23, -24, -25, -26,
-26, -27, -27, -27, -28, -28, -29, -30, -30, -30, -30, -30, -30, -31, -31, -32,
-32, -33, -33, -34, -34, -34, -35, -35, -35, -35, -35, -35, -35, -34, -34, -34,
-34, -33, -33, -33, -33, -33, -32, -31, -31, -31, -31, -30, -30, -31, -30, -29,
-29, -28, -28, -28, -27, -26, -26, -26, -25, -25, -24, -24, -23, -22, -21, -20,
-20, -19, -19, -18, -18, -18, -18, -17, -17, -17, -17, -17, -17, -17, -17, -17,
-16, -16, -16, -15, -15, -15, -15, -15, -14, -14, -14, -13, -13, -13, -12, -12,
-12, -12, -12, -11, -11, -11, -11, -11, -11, -12, -12, -12, -11, -11, -11, -11,
-10, -10, -10, -10, -9, -8, -8, -7, -6, -6, -5, -4, -4, -3, -3, -2, -2, -1, -1,
0, 0, 1, 1, 2, 2, 2, 3, 4, 4, 4, 5, 6, 7, 8, 9, 9, 11, 12, 12, 13, 15, 16, 17,
18, 20, 21, 22, 23, 25, 26, 27, 27, 28, 30, 30, 31, 32, 33, 34, 35, 36, 36, 37,
38, 38, 39, 40, 40, 40, 40, 40, 41, 41, 41, 42, 42, 42, 42, 43, 43, 43, 43, 43,
43, 42, 42, 42, 41, 41, 40, 40, 40, 39, 38, 38, 37, 36, 36, 35, 33, 33, 34, 32,
31, 30, 29, 28, 28, 26, 25, 25, 23, 23, 22, 21, 19, 18, 17, 16, 14, 14, 13, 12,
10, 9, 7, 6, 5, 4, 3, 2, 1, -1, -2, -3, -5, -6, -7, -8, -9, -11, -11, -12, -13,
-15, -16, -17, -18, -19, -19, -20, -21, -22, -22, -23, -24, -25, -25, -26, -27,
-27, -28, -29, -30, -31, -31, -32, -33, -32, -33, -33, -34, -35, -35, -35, -35,
-35, -35, -36, -35, -35, -35, -35, -35, -35, -34, -34, -34, -34, -33, -34, -33,
-33, -33, -33, -32, -32, -32, -33, -32, -32, -31, -31, -31, -31, -31, -31, -30,
-30, -30, -29, -29, -28, -28, -28, -28, -27, -26, -26, -25, -25, -24, -23, -23,
-22, -22, -21, -21, -20, -20, -19, -19, -19, -19, -18, -17, -17, -16, -16, -16,
-15, -15, -15, -14, -13, -13, -12, -12, -11, -11, -10, -10, -10, -9, -9, -8, -8,
-8, -7, -8, -7, -7, -7, -6, -5, -5, -4, -3, -3, -2, -1, -1, 0, 1, 2, 3, 4, 5, 5,
6, 7, 8, 9, 10, 10, 11, 12, 13, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24,
25, 26, 27, 27, 28, 29, 30, 31, 31, 32, 32, 33, 33, 34, 33, 33, 34, 34, 33, 33,
32, 33, 33, 32, 33, 33, 34, 33, 33, 32, 33, 33, 32, 33, 34, 34, 34, 34, 34, 34,
34, 34, 34, 34, 34, 34, 33, 33, 32, 32, 31, 31, 30, 29, 29, 28, 27, 27, 26, 25,
25, 24, 23, 23, 22, 21, 20, 19, 18, 17, 17, 16, 15, 13, 12, 12, 11, 10, 9, 8, 7,
6, 5, 4, 4, 2, 2, 1, 0, -1, -2, -2, -3, -4, -5, -5, -6, -6, -7, -8, -8, -9, -10,
-10, -11, -11, -12, -13, -14, -14, -15, -16, -16, -17, -18, -18, -19, -20, -20,
-21, -22, -22, -23, -24, -24, -25, -26, -26, -26, -27, -28, -28, -28, -29, -30,
-30, -30, -30, -30, -31, -31, -31, -31, -31, -31, -31, -30, -30, -30, -30, -30,
-29, -30, -29, -29, -28, -28, -28, -28, -27, -27, -27, -27, -26, -26, -26, -26,
-25, -25, -25, -25, -24, -24, -24, -23, -22, -22, -22, -21, -21, -20, -20, -19,
-19, -19, -18, -17, -17, -17, -16, -16, -15, -15, -15, -14, -14, -14, -13, -13,
-13, -12, -12, -11, -11, -11, -10, -10, -9, -8, -7, -7, -6, -6, -5, -4, -4, -4,
-3, -3, -3, -3, -2, -2, -2, -1, -1, -1, -1, 0, -1, 0, 0, 0, 1, 1, 2, 2, 3, 3, 4,
4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 9, 10, 10, 10, 11, 12, 12, 12, 12, 13, 14, 14, 14,
15, 15, 15, 15, 16, 16, 17, 17, 18, 18, 18, 18, 19, 19, 20, 20, 20, 20, 21, 20,
21, 22, 22, 22, 23, 23, 24, 24, 25, 25, 26, 26, 27, 27, 27, 27, 28, 28, 28, 29,
29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 30, 29, 29, 29, 29, 29, 29, 29, 28, 28,
27, 27, 27, 26, 26, 26, 25, 24, 23, 23, 23, 22, 21, 21, 20, 19, 18, 17, 17, 16,
16, 15, 14, 14, 13, 13, 12, 11, 11, 10, 9, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, -1, -2,
-4, -5, -7, -8, -9, -11, -13, -14, -15, -17, -18, -19, -20, -22, -22, -23, -24,
-24, -25, -26, -27, -28, -29, -29, -29, -30, -31, -32, -32, -32, -33, -34, -34,
-34, -35, -35, -35, -35, -35, -35, -35, -35, -34, -34, -34, -34, -34, -34, -34,
-33, -33, -33, -32, -32, -32, -32, -31, -31, -31, -31, -31, -30, -30, -29, -29,
-29, -29, -28, -28, -28, -27, -27, -26, -26, -25, -25, -25, -24, -24, -24, -24,
-23, -23, -22, -22, -22, -21, -21, -20, -19, -18, -17, -17, -16, -15, -14, -13,
-12, -11, -10, -9, -8, -7, -6, -5, -3, -2, -1, 0, 1, 2, 3, 3, 5, 5, 6, 7, 8, 9,
9, 9, 10, 11, 12, 12, 13, 14, 14, 14, 15, 15, 15, 16, 16, 16, 16, 16, 16, 16,
16, 16, 16, 16, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 16, 16, 16, 16,
16, 17, 17, 16, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17,
17, 17, 17, 18, 18, 18, 18, 18, 18, 18, 19, 18, 18, 18, 18, 18, 18, 17, 17, 17,
17, 17, 17, 17, 17, 16, 17, 16, 16, 16, 17, 16, 16, 17, 16, 16, 16, 16, 16, 16,
16, 16, 15, 15, 14, 14, 14, 14, 13, 13, 12, 12, 12, 11, 12, 11, 11, 11, 10, 10,
10, 9, 9, 9, 8, 8, 7, 7, 6, 6, 5, 5, 4, 3, 3, 2, 2, 1, 0, -1, -1, -2, -3, -3,
-4, -4, -5, -5, -6, -6, -6, -7, -7, -8, -8, -8, -9, -9, -9, -10, -10, -10, -11,
-11, -11, -11, -12, -12, -12, -13, -13, -14, -14, -14, -14, -15, -15, -16, -16,
-17, -17, -18, -19, -19, -20, -20, -21, -21, -22, -23, -23, -23, -24, -24, -24,
-25, -25, -25, -25, -25, -26, -25, -25, -25, -25, -25, -25, -25, -25, -25, -25,
-25, -24, -24, -24, -24, -24, -24, -23, -23, -22, -22, -22, -22, -21, -21, -21,
-21, -20, -20, -20, -19, -19, -19, -18, -18, -17, -17, -16, -16, -16, -15, -15,
-14, -14, -14, -13, -13, -13, -12, -12, -11, -11, -11, -10, -10, -10, -9, -9,
-8, -7, -7, -6, -6, -5, -5, -4, -3, -3, -2, -2, -1, 0, 0, 1, 2, 2, 3, 4, 5, 5,
6, 6, 7, 8, 8, 9, 9, 10, 10, 11, 11, 12, 12, 13, 13, 14, 14, 14, 15, 15, 16, 16,
16, 17, 17, 18, 18, 18, 19, 19, 20, 20, 20, 20, 20, 20, 20, 20, 21, 21, 21, 21,
21, 21, 21, 21, 21, 21, 21, 21, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
20, 20, 20, 20, 21, 21, 21, 21, 21, 21, 21, 21, 21, 20, 20, 20, 20, 19, 19, 19,
18, 18, 18, 17, 17, 17, 16, 16, 15, 15, 15, 14, 14, 14, 13, 13, 13, 12, 12, 11,
11, 10, 10, 9, 9, 8, 8, 7, 7, 6, 5, 5, 4, 3, 3, 2, 2, 1, 0, 0, -1, -2, -2, -3,
-3, -4, -4, -5, -5, -6, -6, -7, -7, -8, -9, -9, -10, -10, -11, -12, -13, -13,
-14, -15, -15, -16, -17, -18, -18, -19, -19, -20, -21, -21, -22, -22, -23, -24,
-24, -25, -25, -26, -26, -27, -27, -28, -28, -28, -28, -28, -28, -28, -28, -28,
-27, -27, -27, -27, -26, -26, -25, -25, -25, -24, -24, -23, -23, -22, -22, -22,
-21, -21, -21, -20, -20, -19, -19, -18, -18, -17, -17, -16, -16, -15, -15, -14,
-14, -13, -13, -12, -12, -11, -11, -10, -10, -10, -9, -9, -8, -8, -7, -7, -6,
-6, -6, -5, -5, -5, -4, -4, -3, -3, -2, -2, -1, -1, 0, 1, 1, 2, 2, 3, 3, 3, 4,
4, 4, 5, 5, 5, 6, 6, 6, 6, 6, 7, 7, 7, 7, 8, 8, 8, 8, 8, 8, 8, 8, 9, 9, 9, 9, 9,
9, 9, 9, 9, 9, 10, 10, 10, 9, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 9,
9, 10, 10, 10, 9, 9, 9, 9, 9, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
10, 10, 10, 10, 10, 10, 10, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 12, 12, 12,
12, 12, 12, 12, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 12, 12, 12, 12, 12, 12,
12, 12, 12, 12, 12, 12, 11, 11, 11, 11, 11, 11, 11, 11, 10, 10, 10, 10, 9, 9, 9,
9, 9, 8, 8, 8, 8, 7, 7, 7, 7, 6, 6, 6, 6, 5, 5, 5, 4, 4, 4, 3, 3, 3, 2, 2, 1, 1,
0, 0, -1, -1, -2, -2, -3, -3, -4, -4, -5, -6, -6, -7, -7, -8, -8, -9, -10, -10,
-10, -11, -11, -12, -12, -13, -13, -14, -14, -15, -16, -16, -17, -17, -18, -19,
-19, -20, -21, -21, -22, -23, -23, -24, -24, -25, -25, -26, -26, -27, -27, -27,
-28, -28, -28, -28, -29, -29, -29, -29, -29, -29, -29, -29, -29, -29, -29, -28,
-28, -28, -28, -27, -27, -27, -26, -26, -25, -25, -25, -24, -23, -23, -22, -22,
-21, -20, -19, -19, -18, -17, -16, -15, -15, -14, -13, -12, -12, -11, -10, -10,
-9, -8, -7, -7, -6, -5, -5, -4, -3, -2, -1, -1, 0, 1, 2, 3, 3, 4, 5, 6, 7, 7, 8,
9, 10, 10, 11, 12, 13, 14, 14, 15, 16, 16, 17, 18, 18, 19, 20, 20, 21, 21, 22,
22, 22, 23, 23, 23, 24, 24, 24, 24, 24, 24, 24, 24, 23, 23, 23, 23, 23, 23, 23,
22, 22, 22, 22, 21, 21, 21, 20, 20, 20, 19, 19, 19, 18, 18, 18, 17, 17, 16, 16,
15, 15, 14, 14, 13, 13, 13, 12, 12, 12, 11, 11, 10, 10, 10, 10, 9, 9, 9, 9, 8,
8, 8, 8, 7, 7, 7, 6, 6, 6, 5, 5, 5, 4, 4, 3, 3, 3, 2, 2, 1, 1, 1, 1, 0, 0, 0,
-1, -1, -1, -1, -1, -2, -2, -2, -2, -2, -3, -3, -3, -3, -4, -4, -4, -4, -5, -5,
-5, -5, -6, -6, -6, -6, -7, -7, -7, -7, -7, -8, -8, -8, -8, -8, -8, -8, -8, -8,
-8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -7, -7, -7, -7, -7,
-7, -7, -7, -7, -7, -7, -7, -6, -7, -7, -7, -7, -7, -7, -7, -7, -7, -8, -8, -8,
-8, -8, -8, -8, -8, -9, -9, -9, -9, -9, -9, -9, -10, -10, -10, -10, -10, -10,
-10, -10, -11, -11, -11, -11, -11, -11, -11, -12, -12, -12, -12, -12, -12, -12,
-12, -12, -12, -12, -12, -12, -12, -12, -12, -12, -12, -11, -12, -12, -12, -12,
-12, -12, -12, -12, -12, -12, -12, -12, -11, -11, -11, -11, -11, -11, -10, -10,
-10, -10, -10, -9, -9, -9, -8, -8, -8, -7, -7, -6, -6, -6, -5, -5, -4, -4, -3,
-3, -2, -2, -1, -1, 0, 0, 1, 1, 2, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9,
9, 9, 10, 10, 10, 11, 11, 12, 12, 12, 13, 13, 13, 14, 14, 14, 14, 15, 15, 15,
15, 15, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 15, 15, 15, 15, 15, 15, 15, 14, 14,
14, 14, 13, 13, 13, 13, 12, 12, 12, 11, 11, 10, 10, 10, 9, 9, 9, 8, 8, 8, 7, 7,
6, 6, 6, 5, 5, 4, 4, 4, 3, 3, 2, 2, 1, 1, 1, 0, 0, -1, -1, -2, -2, -3, -3, -3,
-4, -4, -5, -5, -6, -6, -7, -7, -7, -8, -8, -9, -9, -9, -10, -10, -10, -11, -11,
-11, -12, -12, -12, -13, -13, -13, -14, -14, -14, -14, -14, -15, -15, -15, -15,
-15, -15, -16, -16, -16, -16, -16, -16, -16, -16, -16, -16, -16, -17, -17, -17,
-16, -16, -17, -16, -16, -16, -16, -16, -16, -16, -16, -16, -16, -15, -15, -15,
-15, -14, -14, -14, -14, -14, -13, -13, -13, -13, -12, -12, -12, -11, -11, -11,
-10, -10, -10, -9, -9, -8, -8, -8, -7, -7, -7, -6, -6, -5, -5, -4, -4, -3, -3,
-2, -2, -1, -1, 0, 0, 1, 1, 2, 2, 2, 3, 3, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 7,
8, 8, 8, 8, 8, 8, 8, 8, 8, 9, 9, 9, 9, 9, 9, 9, 9, 9, 8, 8, 8, 8, 8, 8, 8, 8, 8,
7, 7, 7, 7, 7, 7, 7, 7, 7, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 5, 5, 5, 5,
5, 5, 5, 5, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2,
2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3,
3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
4, 4, 4, 4, 4, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 0,
0, 0, 0, 0, -1, -1, -1, -1, -2, -2, -2, -2, -3, -3, -3, -4, -4, -4, -5, -5, -5,
-6, -6, -6, -7, -7, -7, -8, -8, -8, -9, -9, -9, -9, -10, -10, -10, -10, -11,
-11, -11, -11, -11, -12, -12, -12, -12, -12, -13, -13, -13, -13, -13, -13, -13,
-13, -13, -13, -13, -13, -13, -13, -13, -13, -13, -13, -13, -13, -13, -13, -13,
-13, -13, -13, -13, -12, -12, -12, -12, -12, -11, -11, -11, -11, -10, -10, -10,
-9, -9, -9, -8, -8, -7, -7, -7, -6, -6, -5, -5, -5, -4, -4, -3, -3, -2, -2, -2,
-1, -1, 0, 0, 1, 1, 2, 2, 3, 3, 3, 4, 4, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 8, 9,
9, 9, 9, 9, 10, 10, 10, 10, 10, 10, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11,
11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11,
10, 10, 10, 10, 10, 10, 10, 9, 9, 9, 9, 8, 8, 8, 7, 7, 7, 6, 6, 6, 5, 5, 5, 4,
4, 4, 3, 3, 3, 2, 2, 1, 1, 1, 0, 0, 0, -1, -1, -1, -2, -2, -2, -2, -3, -3, -3,
-3, -3, -4, -4, -4, -4, -4, -4, -4, -5, -5, -5, -5, -5, -5, -5, -5, -5, -6, -6,
-6, -6, -6, -6, -6, -6, -6, -6, -6, -6, -6, -6, -6, -6, -6, -6, -6, -6, -6, -6,
-5, -5, -5, -5, -5, -5, -5, -4, -4, -4, -4, -4, -4, -4, -3, -3, -3, -3, -3, -3,
-3, -3, -3, -3, -3, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3,
-3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -4, -4, -4, -4, -4, -4, -4, -4,
-4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -3, -3,
-3, -3, -3, -3, -3, -3, -3, -2, -2, -2, -2, -2, -2, -1, -1, -1, -1, -1, 0, 0, 0,
0, 0, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 5,
5, 5, 5, 5, 5, 5, 5, 5, 5, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 5,
5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 4, 4, 4, 4, 4, 4, 4, 4, 3, 3, 3, 3, 3, 3, 3, 3,
3, 3, 3, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0,
0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -2, -2, -2, -2, -2, -2, -2, -2, -3, -3,
-3, -3, -3, -3, -4, -4, -4, -4, -4, -4, -4, -4, -5, -5, -5, -5, -5, -5, -5, -5,
-5, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5,
-5, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5, -4, -4, -4, -4, -4, -4, -4, -4,
-4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -3, -3, -3, -3, -3, -3, -3,
-3, -3, -3, -3, -3, -3, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -1, -1, -1, -1,
-1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2,
2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, -1, 0, 0, -1, -1, 0, -1, 0, -1, -1,
-1, -1, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, };

#endif /* JAZZONE_H_ */