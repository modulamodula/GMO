#ifndef KICKFIVE_H_
#define KICKFIVE_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define KICKFIVE_NUM_CELLS 8212
#define KICKFIVE_SAMPLERATE 16384
 
const int8_t __attribute__((section(".progmem.data"))) KICKFIVE_DATA [] = {66,
-40, 23, 9, -67, 123, -118, 10, 109, -68, -95, 75, 106, -42, -121, -48, 86, 116,
48, -69, -119, -99, -9, 70, 123, 106, 51, -32, -93, -125, -108, -60, 7, 68, 110,
123, 105, 65, 10, -43, -90, -116, -125, -110, -81, -37, 9, 56, 91, 116, 123,
116, 93, 61, 21, -20, -58, -90, -112, -123, -122, -110, -87, -58, -24, 11, 45,
75, 99, 115, 123, 121, 113, 96, 74, 47, 18, -12, -42, -69, -91, -108, -120,
-124, -122, -113, -98, -78, -55, -29, -1, 26, 52, 75, 94, 109, 119, 123, 122,
115, 104, 88, 68, 46, 22, -3, -27, -50, -71, -90, -104, -115, -122, -124, -122,
-116, -105, -91, -75, -55, -35, -13, 9, 31, 52, 70, 87, 101, 112, 119, 123, 123,
119, 111, 100, 86, 69, 51, 30, 9, -12, -33, -53, -71, -88, -101, -112, -119,
-123, -124, -121, -114, -105, -92, -77, -59, -40, -20, 0, 21, 41, 59, 76, 91,
104, 113, 120, 123, 123, 119, 113, 103, 91, 76, 59, 41, 21, 2, -18, -38, -56,
-73, -88, -101, -111, -118, -123, -124, -122, -118, -110, -100, -87, -72, -55,
-37, -18, 1, 20, 39, 56, 72, 87, 99, 109, 117, 121, 123, 122, 118, 111, 102, 91,
77, 61, 45, 27, 9, -10, -28, -46, -63, -78, -91, -103, -112, -119, -123, -124,
-123, -119, -113, -104, -93, -80, -65, -49, -33, -15, 3, 21, 38, 54, 70, 84, 96,
106, 114, 119, 122, 123, 121, 117, 110, 102, 91, 78, 64, 49, 33, 16, -1, -19,
-35, -51, -66, -80, -92, -103, -111, -118, -122, -124, -124, -121, -116, -109,
-100, -89, -77, -63, -48, -33, -16, 0, 17, 33, 48, 63, 76, 89, 99, 108, 115,
120, 122, 123, 122, 118, 113, 105, 96, 85, 73, 59, 45, 30, 14, -2, -18, -33,
-48, -62, -75, -87, -98, -107, -114, -119, -123, -124, -124, -121, -117, -111,
-103, -94, -83, -71, -57, -43, -29, -14, 2, 17, 32, 46, 60, 72, 84, 94, 103,
111, 116, 120, 123, 123, 122, 119, 114, 107, 99, 90, 79, 67, 55, 41, 27, 12, -2,
-17, -31, -45, -58, -70, -82, -92, -101, -109, -115, -120, -123, -124, -124,
-122, -118, -113, -107, -99, -90, -79, -68, -56, -43, -29, -15, -1, 12, 26, 40,
53, 65, 76, 86, 96, 104, 110, 116, 120, 122, 123, 123, 120, 117, 112, 106, 98,
89, 80, 69, 57, 45, 32, 19, 6, -7, -21, -34, -46, -58, -70, -80, -90, -98, -106,
-112, -117, -121, -123, -124, -124, -122, -119, -114, -109, -102, -94, -85, -75,
-64, -53, -41, -29, -16, -4, 9, 22, 34, 46, 57, 68, 78, 88, 96, 103, 110, 115,
119, 121, 123, 123, 122, 120, 116, 112, 106, 99, 91, 83, 73, 63, 52, 41, 29, 17,
5, -7, -19, -31, -42, -54, -64, -74, -83, -92, -100, -106, -112, -117, -120,
-123, -124, -124, -123, -121, -118, -114, -108, -102, -95, -87, -78, -69, -59,
-49, -38, -26, -15, -4, 8, 19, 31, 42, 52, 62, 72, 81, 89, 97, 103, 109, 114,
118, 120, 122, 123, 123, 122, 119, 116, 112, 107, 101, 94, 87, 79, 70, 60, 50,
40, 30, 19, 8, -3, -14, -25, -35, -46, -56, -65, -74, -83, -90, -97, -104, -109,
-114, -118, -121, -123, -124, -124, -123, -122, -119, -116, -112, -107, -101,
-94, -87, -79, -71, -62, -53, -43, -33, -23, -12, -2, 8, 19, 29, 39, 48, 58, 67,
75, 83, 90, 97, 103, 108, 113, 116, 119, 121, 123, 123, 123, 122, 120, 117, 113,
109, 104, 98, 92, 85, 78, 70, 61, 53, 44, 34, 25, 15, 5, -5, -15, -24, -34, -43,
-52, -61, -69, -77, -84, -91, -97, -103, -108, -113, -116, -119, -122, -123,
-124, -124, -123, -122, -120, -117, -114, -110, -105, -99, -93, -87, -80, -73,
-65, -57, -48, -39, -30, -21, -12, -3, 7, 16, 25, 34, 43, 51, 59, 67, 75, 82,
88, 94, 100, 105, 109, 113, 117, 119, 121, 122, 123, 123, 122, 121, 119, 117,
113, 110, 105, 100, 95, 89, 83, 76, 69, 61, 54, 46, 37, 29, 20, 12, 3, -6, -14,
-23, -32, -40, -48, -56, -63, -71, -78, -84, -90, -96, -101, -106, -110, -114,
-117, -120, -122, -123, -124, -124, -124, -123, -122, -120, -117, -114, -110,
-106, -102, -97, -91, -85, -79, -72, -65, -58, -51, -43, -35, -27, -19, -11, -3,
5, 13, 22, 30, 37, 45, 52, 60, 67, 73, 80, 86, 91, 96, 101, 106, 109, 113, 116,
118, 120, 122, 123, 123, 123, 122, 121, 120, 118, 115, 112, 109, 105, 101, 96,
91, 85, 79, 73, 67, 60, 53, 46, 39, 32, 24, 17, 9, 1, -6, -14, -22, -29, -36,
-44, -51, -58, -64, -71, -77, -82, -88, -93, -98, -102, -106, -110, -113, -116,
-119, -121, -122, -123, -124, -124, -124, -123, -122, -121, -119, -116, -113,
-110, -107, -103, -98, -94, -89, -83, -78, -72, -66, -60, -53, -47, -40, -33,
-26, -19, -12, -5, 2, 10, 17, 24, 31, 38, 44, 51, 57, 63, 69, 75, 80, 86, 91,
95, 99, 103, 107, 110, 113, 116, 118, 120, 121, 122, 123, 123, 123, 123, 122,
120, 119, 117, 114, 112, 109, 105, 101, 97, 93, 89, 84, 79, 73, 68, 62, 56, 50,
44, 37, 31, 24, 18, 11, 5, -2, -9, -15, -22, -28, -35, -41, -47, -53, -59, -65,
-71, -76, -81, -86, -90, -95, -99, -103, -106, -109, -112, -115, -117, -119,
-121, -122, -123, -124, -124, -124, -124, -123, -122, -121, -119, -117, -115,
-112, -109, -106, -102, -99, -95, -90, -86, -81, -76, -71, -66, -60, -55, -49,
-43, -37, -31, -25, -19, -12, -6, 0, 7, 13, 19, 25, 31, 37, 43, 49, 55, 60, 66,
71, 76, 81, 85, 90, 94, 98, 101, 105, 108, 111, 113, 116, 118, 119, 121, 122,
122, 123, 123, 123, 123, 122, 121, 119, 118, 116, 114, 111, 108, 105, 102, 99,
95, 91, 87, 82, 78, 73, 68, 63, 57, 52, 46, 41, 35, 29, 23, 17, 11, 5, -1, -7,
-13, -19, -24, -30, -36, -42, -47, -53, -58, -63, -68, -73, -78, -83, -87, -91,
-95, -99, -102, -105, -108, -111, -114, -116, -118, -120, -121, -122, -123,
-124, -124, -124, -124, -123, -123, -122, -120, -119, -117, -115, -112, -110,
-107, -104, -100, -97, -93, -89, -85, -81, -76, -72, -67, -62, -57, -52, -46,
-41, -36, -30, -24, -19, -13, -7, -2, 4, 10, 16, 21, 27, 32, 38, 43, 48, 54, 59,
64, 68, 73, 78, 82, 86, 90, 94, 97, 101, 104, 107, 109, 112, 114, 116, 118, 119,
121, 122, 122, 123, 123, 123, 123, 122, 122, 121, 119, 118, 116, 114, 112, 110,
107, 104, 101, 98, 94, 91, 87, 83, 79, 75, 70, 66, 61, 56, 51, 46, 41, 36, 31,
25, 20, 14, 9, 4, -2, -7, -13, -18, -24, -29, -34, -39, -44, -49, -54, -59, -64,
-68, -73, -77, -81, -85, -89, -93, -96, -100, -103, -106, -108, -111, -113,
-115, -117, -119, -120, -121, -122, -123, -124, -124, -124, -124, -124, -123,
-122, -121, -120, -118, -117, -115, -113, -110, -108, -105, -102, -99, -96, -93,
-89, -85, -81, -77, -73, -69, -65, -60, -55, -51, -46, -41, -36, -31, -26, -21,
-16, -11, -6, 0, 5, 10, 15, 20, 25, 30, 35, 40, 45, 50, 54, 59, 63, 68, 72, 76,
80, 84, 87, 91, 94, 97, 100, 103, 106, 108, 111, 113, 115, 116, 118, 119, 121,
121, 122, 123, 123, 123, 123, 123, 122, 122, 121, 120, 118, 117, 115, 113, 111,
109, 107, 104, 101, 98, 95, 92, 89, 85, 82, 78, 74, 70, 66, 62, 57, 53, 48, 44,
39, 35, 30, 25, 20, 15, 11, 6, 1, -4, -9, -14, -19, -24, -28, -33, -38, -42,
-47, -51, -56, -60, -64, -68, -72, -76, -80, -84, -87, -90, -94, -97, -100,
-103, -105, -108, -110, -112, -114, -116, -118, -119, -120, -121, -122, -123,
-124, -124, -124, -124, -124, -124, -123, -122, -121, -120, -119, -118, -116,
-114, -112, -110, -108, -106, -103, -100, -98, -95, -92, -88, -85, -81, -78,
-74, -70, -66, -62, -58, -54, -50, -46, -41, -37, -32, -28, -23, -19, -14, -10,
-5, 0, 4, 9, 13, 18, 23, 27, 32, 36, 40, 45, 49, 53, 57, 61, 65, 69, 73, 76, 80,
83, 86, 90, 93, 96, 98, 101, 104, 106, 108, 110, 112, 114, 116, 117, 118, 120,
121, 121, 122, 123, 123, 123, 123, 123, 123, 122, 122, 121, 120, 119, 118, 116,
115, 113, 111, 109, 107, 105, 102, 100, 97, 94, 91, 88, 85, 82, 79, 75, 72, 68,
64, 61, 57, 53, 49, 45, 41, 36, 32, 28, 24, 19, 15, 11, 6, 2, -2, -7, -11, -15,
-20, -24, -28, -32, -36, -41, -45, -49, -53, -57, -60, -64, -68, -71, -75, -78,
-82, -85, -88, -91, -94, -97, -99, -102, -104, -106, -109, -111, -113, -114,
-116, -117, -119, -120, -121, -122, -123, -123, -124, -124, -124, -124, -124,
-124, -123, -123, -122, -121, -120, -119, -118, -116, -115, -113, -111, -109,
-107, -105, -102, -100, -97, -95, -92, -89, -86, -83, -79, -76, -73, -69, -66,
-62, -58, -54, -51, -47, -43, -39, -35, -31, -26, -22, -18, -14, -10, -5, -1, 3,
7, 11, 16, 20, 24, 28, 32, 36, 40, 44, 48, 52, 56, 59, 63, 67, 70, 74, 77, 80,
83, 86, 89, 92, 95, 97, 100, 102, 105, 107, 109, 111, 112, 114, 116, 117, 118,
119, 120, 121, 122, 122, 123, 123, 123, 123, 123, 123, 122, 122, 121, 120, 119,
118, 117, 115, 114, 112, 111, 109, 107, 105, 102, 100, 97, 95, 92, 89, 87, 84,
80, 77, 74, 71, 67, 64, 60, 57, 53, 49, 45, 42, 38, 34, 30, 26, 22, 18, 14, 9,
5, 1, -3, -7, -11, -15, -19, -23, -27, -31, -35, -39, -43, -47, -51, -54, -58,
-61, -65, -68, -72, -75, -78, -81, -84, -87, -90, -93, -96, -98, -101, -103,
-105, -107, -109, -111, -113, -115, -116, -117, -119, -120, -121, -122, -122,
-123, -124, -124, -124, -124, -124, -124, -124, -123, -123, -122, -121, -120,
-119, -118, -116, -115, -113, -112, -110, -108, -106, -104, -101, -99, -97, -94,
-91, -89, -86, -83, -80, -77, -73, -70, -67, -63, -60, -56, -53, -49, -45, -42,
-38, -34, -30, -26, -22, -18, -15, -11, -7, -3, 1, 5, 9, 13, 17, 21, 25, 29, 33,
37, 40, 44, 48, 51, 55, 58, 62, 65, 69, 72, 75, 78, 81, 84, 87, 90, 92, 95, 97,
100, 102, 104, 106, 108, 110, 112, 113, 115, 116, 117, 118, 119, 120, 121, 122,
122, 123, 123, 123, 123, 123, 123, 122, 122, 121, 121, 120, 119, 118, 117, 115,
114, 112, 111, 109, 107, 105, 103, 101, 99, 96, 94, 91, 89, 86, 83, 80, 77, 74,
71, 68, 64, 61, 58, 54, 51, 47, 44, 40, 36, 33, 29, 25, 21, 17, 14, 10, 6, 2,
-2, -6, -10, -13, -17, -21, -25, -29, -32, -36, -40, -43, -47, -50, -54, -57,
-61, -64, -67, -71, -74, -77, -80, -83, -85, -88, -91, -93, -96, -98, -101,
-103, -105, -107, -109, -111, -112, -114, -115, -117, -118, -119, -120, -121,
-122, -122, -123, -123, -124, -124, -124, -124, -124, -124, -123, -123, -122,
-122, -121, -120, -119, -118, -116, -115, -114, -112, -110, -109, -107, -105,
-103, -100, -98, -96, -93, -91, -88, -85, -83, -80, -77, -74, -71, -68, -65,
-61, -58, -55, -51, -48, -44, -41, -37, -34, -30, -26, -23, -19, -15, -12, -8,
-4, 0, 3, 7, 11, 14, 18, 22, 25, 29, 33, 36, 40, 43, 47, 50, 54, 57, 60, 63, 66,
70, 73, 76, 78, 81, 84, 87, 89, 92, 94, 97, 99, 101, 103, 105, 107, 109, 110,
112, 113, 115, 116, 117, 118, 119, 120, 121, 122, 122, 123, 123, 123, 123, 123,
123, 123, 122, 122, 121, 121, 120, 119, 118, 117, 116, 115, 113, 112, 110, 109,
107, 105, 103, 101, 99, 97, 94, 92, 89, 87, 84, 82, 79, 76, 73, 70, 67, 64, 61,
58, 55, 51, 48, 45, 41, 38, 34, 31, 27, 24, 20, 17, 13, 9, 6, 2, -1, -5, -9,
-12, -16, -19, -23, -26, -30, -33, -37, -40, -44, -47, -50, -54, -57, -60, -63,
-66, -69, -72, -75, -78, -81, -83, -86, -89, -91, -93, -96, -98, -100, -102,
-104, -106, -108, -110, -111, -113, -114, -116, -117, -118, -119, -120, -121,
-122, -122, -123, -123, -124, -124, -124, -124, -124, -124, -124, -123, -123,
-122, -122, -121, -120, -119, -118, -117, -116, -114, -113, -111, -110, -108,
-106, -104, -103, -100, -98, -96, -94, -92, -89, -87, -84, -81, -79, -76, -73,
-70, -67, -64, -61, -58, -55, -52, -49, -46, -42, -39, -36, -32, -29, -25, -22,
-19, -15, -12, -8, -5, -1, 2, 6, 9, 13, 16, 20, 23, 26, 30, 33, 37, 40, 43, 46,
50, 53, 56, 59, 62, 65, 68, 71, 74, 76, 79, 82, 84, 87, 89, 91, 94, 96, 98, 100,
102, 104, 106, 108, 109, 111, 112, 114, 115, 116, 117, 118, 119, 120, 121, 121,
122, 122, 123, 123, 123, 123, 123, 123, 123, 122, 122, 121, 121, 120, 119, 118,
117, 116, 115, 114, 112, 111, 109, 108, 106, 104, 102, 100, 98, 96, 94, 91, 89,
87, 84, 82, 79, 76, 73, 71, 68, 65, 62, 59, 56, 53, 49, 46, 43, 40, 36, 33, 30,
26, 23, 20, 16, 13, 9, 6, 2, -1, -5, -8, -12, -15, -19, -22, -25, -29, -32, -36,
-39, -42, -45, -49, -52, -55, -58, -61, -64, -67, -70, -73, -76, -78, -81, -84,
-86, -89, -91, -93, -96, -98, -100, -102, -104, -106, -108, -109, -111, -112,
-114, -115, -116, -118, -119, -120, -121, -121, -122, -123, -123, -124, -124,
-124, -124, -124, -124, -124, -124, -123, -123, -122, -121, -121, -120, -119,
-118, -117, -115, -114, -113, -111, -110, -108, -106, -104, -102, -100, -98,
-96, -94, -91, -89, -87, -84, -81, -79, -76, -73, -70, -68, -65, -62, -59, -55,
-52, -49, -46, -43, -39, -36, -33, -29, -26, -23, -19, -16, -12, -9, -5, -2, 2,
5, 9, 12, 16, 19, 23, 26, 29, 33, 36, 39, 43, 46, 49, 52, 55, 58, 61, 64, 67,
70, 73, 76, 79, 81, 84, 86, 89, 91, 93, 96, 98, 100, 102, 104, 106, 107, 109,
111, 112, 113, 115, 116, 117, 118, 119, 120, 121, 121, 122, 122, 123, 123, 123,
123, 123, 123, 123, 122, 122, 121, 121, 120, 119, 118, 117, 116, 115, 114, 112,
111, 109, 108, 106, 104, 102, 100, 98, 96, 94, 92, 89, 87, 85, 82, 79, 77, 74,
71, 68, 65, 62, 59, 56, 53, 50, 47, 44, 40, 37, 34, 30, 27, 23, 20, 17, 13, 10,
6, 3, -1, -4, -8, -11, -15, -18, -22, -25, -28, -32, -35, -38, -42, -45, -48,
-51, -55, -58, -61, -64, -67, -70, -72, -75, -78, -81, -83, -86, -88, -91, -93,
-95, -98, -100, -102, -104, -106, -107, -109, -111, -112, -114, -115, -116,
-117, -119, -120, -120, -121, -122, -123, -123, -123, -124, -124, -124, -124,
-124, -124, -124, -123, -123, -122, -122, -121, -120, -119, -118, -117, -116,
-114, -113, -111, -110, -108, -106, -105, -103, -101, -99, -96, -94, -92, -89,
-87, -84, -82, -79, -77, -74, -71, -68, -65, -62, -59, -56, -53, -50, -46, -43,
-40, -37, -33, -30, -26, -23, -20, -16, -13, -9, -6, -2, 1, 5, 8, 12, 15, 19,
22, 25, 29, 32, 35, 39, 42, 45, 49, 52, 55, 58, 61, 64, 67, 70, 73, 75, 78, 81,
83, 86, 88, 91, 93, 95, 97, 100, 102, 104, 105, 107, 109, 110, 112, 113, 115,
116, 117, 118, 119, 120, 121, 121, 122, 122, 123, 123, 123, 123, 123, 123, 123,
122, 122, 122, 121, 120, 119, 119, 118, 117, 115, 114, 113, 111, 110, 108, 106,
105, 103, 101, 99, 97, 94, 92, 90, 87, 85, 82, 80, 77, 74, 72, 69, 66, 63, 60,
57, 54, 50, 47, 44, 41, 37, 34, 31, 27, 24, 21, 17, 14, 10, 7, 3, 0, -4, -7,
-11, -14, -18, -21, -24, -28, -31, -35, -38, -41, -44, -48, -51, -54, -57, -60,
-63, -66, -69, -72, -75, -78, -80, -83, -85, -88, -90, -93, -95, -97, -99, -101,
-103, -105, -107, -109, -110, -112, -113, -115, -116, -117, -118, -119, -120,
-121, -122, -122, -123, -123, -124, -124, -124, -124, -124, -124, -124, -123,
-123, -122, -122, -121, -120, -119, -118, -117, -116, -115, -113, -112, -110,
-108, -107, -105, -103, -101, -99, -97, -94, -92, -90, -87, -85, -82, -80, -77,
-74, -71, -68, -66, -63, -59, -56, -53, -50, -47, -44, -40, -37, -34, -30, -27,
-24, -20, -17, -13, -10, -6, -3, 1, 4, 8, 11, 15, 18, 21, 25, 28, 32, 35, 38,
42, 45, 48, 51, 54, 57, 61, 64, 66, 69, 72, 75, 78, 80, 83, 86, 88, 90, 93, 95,
97, 99, 101, 103, 105, 107, 109, 110, 112, 113, 114, 116, 117, 118, 119, 120,
120, 121, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 122, 122, 121, 120,
120, 119, 118, 117, 116, 114, 113, 111, 110, 108, 107, 105, 103, 101, 99, 97,
95, 93, 90, 88, 85, 83, 80, 78, 75, 72, 69, 66, 63, 60, 57, 54, 51, 48, 45, 41,
38, 35, 31, 28, 25, 21, 18, 14, 11, 7, 4, 0, -3, -7, -10, -14, -17, -20, -24,
-27, -31, -34, -37, -41, -44, -47, -50, -54, -57, -60, -63, -66, -69, -72, -74,
-77, -80, -83, -85, -88, -90, -92, -95, -97, -99, -101, -103, -105, -107, -109,
-110, -112, -113, -115, -116, -117, -118, -119, -120, -121, -122, -122, -123,
-123, -124, -124, -124, -124, -124, -124, -124, -123, -123, -122, -122, -121,
-120, -119, -118, -117, -116, -115, -113, -112, -110, -109, -107, -105, -103,
-101, -99, -97, -95, -93, -90, -88, -85, -83, -80, -77, -75, -72, -69, -66, -63,
-60, -57, -54, -51, -48, -44, -41, -38, -35, -31, -28, -24, -21, -18, -14, -11,
-7, -4, 0, 3, 7, 10, 13, 17, 20, 24, 27, 30, 34, 37, 40, 44, 47, 50, 53, 56, 59,
62, 65, 68, 71, 74, 76, 79, 82, 84, 87, 89, 91, 94, 96, 98, 100, 102, 104, 106,
107, 109, 110, 112, 113, 115, 116, 117, 118, 119, 120, 120, 121, 122, 122, 123,
123, 123, 123, 123, 123, 123, 123, 122, 122, 121, 121, 120, 119, 118, 117, 116,
115, 114, 112, 111, 109, 108, 106, 104, 102, 100, 99, 96, 94, 92, 90, 88, 85,
83, 80, 78, 75, 72, 70, 67, 64, 61, 58, 55, 52, 49, 46, 43, 39, 36, 33, 30, 26,
23, 20, 16, 13, 10, 6, 3, 0, -4, -7, -11, -14, -17, -21, -24, -27, -31, -34,
-37, -40, -43, -47, -50, -53, -56, -59, -62, -65, -68, -70, -73, -76, -78, -81,
-84, -86, -88, -91, -93, -95, -97, -99, -101, -103, -105, -107, -109, -110,
-112, -113, -114, -116, -117, -118, -119, -120, -121, -121, -122, -123, -123,
-124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -122, -122, -121,
-120, -119, -118, -117, -116, -115, -114, -112, -111, -109, -108, -106, -104,
-102, -100, -98, -96, -94, -92, -90, -87, -85, -83, -80, -77, -75, -72, -69,
-67, -64, -61, -58, -55, -52, -49, -46, -43, -40, -36, -33, -30, -27, -24, -20,
-17, -14, -10, -7, -4, 0, 3, 6, 10, 13, 16, 19, 23, 26, 29, 32, 36, 39, 42, 45,
48, 51, 54, 57, 60, 63, 66, 68, 71, 74, 76, 79, 81, 84, 86, 89, 91, 93, 95, 97,
99, 101, 103, 105, 106, 108, 110, 111, 112, 114, 115, 116, 117, 118, 119, 120,
121, 121, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 122, 122, 121, 121,
120, 119, 119, 118, 117, 116, 114, 113, 112, 110, 109, 107, 106, 104, 102, 100,
98, 96, 94, 92, 90, 88, 85, 83, 81, 78, 76, 73, 70, 68, 65, 62, 59, 56, 53, 50,
47, 44, 41, 38, 35, 32, 29, 26, 22, 19, 16, 13, 10, 6, 3, 0, -3, -7, -10, -13,
-16, -20, -23, -26, -29, -32, -36, -39, -42, -45, -48, -51, -54, -57, -59, -62,
-65, -68, -71, -73, -76, -78, -81, -83, -86, -88, -90, -92, -95, -97, -99, -101,
-102, -104, -106, -108, -109, -111, -112, -114, -115, -116, -117, -118, -119,
-120, -121, -121, -122, -123, -123, -123, -124, -124, -124, -124, -124, -124,
-124, -123, -123, -123, -122, -121, -121, -120, -119, -118, -117, -116, -115,
-114, -112, -111, -109, -108, -106, -104, -103, -101, -99, -97, -95, -93, -91,
-88, -86, -84, -81, -79, -76, -74, -71, -69, -66, -63, -60, -57, -55, -52, -49,
-46, -43, -40, -37, -34, -31, -27, -24, -21, -18, -15, -12, -8, -5, -2, 1, 4, 8,
11, 14, 17, 20, 23, 26, 30, 33, 36, 39, 42, 45, 48, 51, 53, 56, 59, 62, 65, 67,
70, 73, 75, 78, 80, 82, 85, 87, 89, 91, 93, 96, 97, 99, 101, 103, 105, 106, 108,
109, 111, 112, 113, 115, 116, 117, 118, 119, 119, 120, 121, 121, 122, 122, 123,
123, 123, 123, 123, 123, 123, 123, 122, 122, 121, 121, 120, 120, 119, 118, 117,
116, 115, 114, 112, 111, 110, 108, 107, 105, 103, 102, 100, 98, 96, 94, 92, 90,
88, 85, 83, 81, 78, 76, 73, 71, 68, 66, 63, 60, 58, 55, 52, 49, 46, 43, 40, 37,
34, 31, 28, 25, 22, 19, 16, 13, 10, 7, 3, 0, -3, -6, -9, -12, -15, -18, -22,
-25, -28, -31, -34, -37, -40, -43, -46, -48, -51, -54, -57, -60, -62, -65, -68,
-70, -73, -75, -78, -80, -83, -85, -87, -89, -92, -94, -96, -98, -99, -101,
-103, -105, -106, -108, -110, -111, -112, -114, -115, -116, -117, -118, -119,
-120, -121, -121, -122, -122, -123, -123, -124, -124, -124, -124, -124, -124,
-124, -124, -123, -123, -123, -122, -121, -121, -120, -119, -118, -117, -116,
-115, -114, -113, -111, -110, -108, -107, -105, -103, -102, -100, -98, -96, -94,
-92, -90, -88, -86, -83, -81, -79, -76, -74, -71, -69, -66, -63, -61, -58, -55,
-53, -50, -47, -44, -41, -38, -35, -32, -29, -26, -23, -20, -17, -14, -11, -8,
-5, -2, 1, 4, 7, 10, 13, 16, 19, 22, 25, 28, 31, 34, 37, 40, 43, 46, 49, 52, 54,
57, 60, 62, 65, 68, 70, 73, 75, 77, 80, 82, 84, 87, 89, 91, 93, 95, 97, 99, 100,
102, 104, 105, 107, 108, 110, 111, 112, 114, 115, 116, 117, 118, 119, 119, 120,
121, 121, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 122, 122, 121,
121, 120, 119, 119, 118, 117, 116, 115, 114, 113, 111, 110, 109, 107, 106, 104,
102, 101, 99, 97, 95, 93, 91, 89, 87, 85, 83, 80, 78, 76, 73, 71, 68, 66, 63,
61, 58, 55, 53, 50, 47, 44, 42, 39, 36, 33, 30, 27, 24, 21, 18, 15, 12, 9, 6, 3,
0, -3, -6, -9, -12, -15, -18, -21, -24, -27, -30, -32, -35, -38, -41, -44, -47,
-49, -52, -55, -58, -60, -63, -65, -68, -70, -73, -75, -78, -80, -82, -84, -87,
-89, -91, -93, -95, -97, -99, -100, -102, -104, -105, -107, -108, -110, -111,
-112, -114, -115, -116, -117, -118, -119, -120, -120, -121, -122, -122, -123,
-123, -124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -122,
-122, -121, -121, -120, -119, -118, -117, -116, -115, -114, -113, -112, -110,
-109, -107, -106, -104, -103, -101, -99, -97, -96, -94, -92, -90, -88, -85, -83,
-81, -79, -76, -74, -72, -69, -67, -64, -62, -59, -57, -54, -51, -48, -46, -43,
-40, -37, -35, -32, -29, -26, -23, -20, -17, -14, -11, -8, -6, -3, 0, 3, 6, 9,
12, 15, 18, 21, 24, 27, 30, 32, 35, 38, 41, 44, 46, 49, 52, 54, 57, 60, 62, 65,
67, 69, 72, 74, 77, 79, 81, 83, 85, 87, 89, 91, 93, 95, 97, 99, 101, 102, 104,
105, 107, 108, 110, 111, 112, 113, 114, 116, 117, 117, 118, 119, 120, 120, 121,
121, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 122, 122, 121, 121,
120, 120, 119, 118, 117, 116, 115, 114, 113, 112, 111, 110, 108, 107, 105, 104,
102, 101, 99, 97, 95, 94, 92, 90, 88, 86, 83, 81, 79, 77, 75, 72, 70, 68, 65,
63, 60, 58, 55, 52, 50, 47, 44, 42, 39, 36, 33, 31, 28, 25, 22, 19, 17, 14, 11,
8, 5, 2, -1, -4, -6, -9, -12, -15, -18, -21, -24, -26, -29, -32, -35, -38, -40,
-43, -46, -48, -51, -54, -56, -59, -61, -64, -66, -69, -71, -73, -76, -78, -80,
-82, -84, -87, -89, -91, -93, -94, -96, -98, -100, -101, -103, -105, -106, -108,
-109, -110, -112, -113, -114, -115, -116, -117, -118, -119, -120, -120, -121,
-122, -122, -123, -123, -123, -124, -124, -124, -124, -124, -124, -124, -124,
-124, -123, -123, -122, -122, -121, -121, -120, -119, -118, -117, -116, -115,
-114, -113, -112, -111, -109, -108, -107, -105, -104, -102, -100, -99, -97, -95,
-93, -91, -89, -87, -85, -83, -81, -79, -77, -74, -72, -70, -68, -65, -63, -60,
-58, -55, -53, -50, -47, -45, -42, -39, -37, -34, -31, -29, -26, -23, -20, -18,
-15, -12, -9, -6, -3, -1, 2, 5, 8, 11, 13, 16, 19, 22, 25, 27, 30, 33, 36, 38,
41, 44, 46, 49, 51, 54, 56, 59, 61, 64, 66, 68, 71, 73, 75, 77, 80, 82, 84, 86,
88, 90, 92, 94, 95, 97, 99, 100, 102, 104, 105, 106, 108, 109, 110, 112, 113,
114, 115, 116, 117, 118, 118, 119, 120, 120, 121, 122, 122, 122, 123, 123, 123,
123, 123, 123, 123, 123, 123, 122, 122, 122, 121, 121, 120, 120, 119, 118, 117,
116, 115, 114, 113, 112, 111, 110, 109, 107, 106, 104, 103, 101, 100, 98, 96,
95, 93, 91, 89, 87, 85, 83, 81, 79, 77, 75, 72, 70, 68, 66, 63, 61, 58, 56, 53,
51, 48, 46, 43, 41, 38, 35, 33, 30, 27, 25, 22, 19, 17, 14, 11, 8, 6, 3, 0, -3,
-5, -8, -11, -14, -17, -19, -22, -25, -27, -30, -33, -35, -38, -41, -43, -46,
-48, -51, -53, -56, -58, -61, -63, -65, -68, -70, -72, -75, -77, -79, -81, -83,
-85, -87, -89, -91, -93, -95, -96, -98, -100, -101, -103, -104, -106, -107,
-109, -110, -111, -112, -113, -115, -116, -117, -117, -118, -119, -120, -121,
-121, -122, -122, -123, -123, -123, -124, -124, -124, -124, -124, -124, -124,
-124, -124, -123, -123, -123, -122, -122, -121, -121, -120, -119, -118, -117,
-116, -115, -114, -113, -112, -111, -110, -109, -107, -106, -104, -103, -101,
-100, -98, -96, -95, -93, -91, -89, -87, -85, -83, -81, -79, -77, -75, -73, -70,
-68, -66, -64, -61, -59, -56, -54, -52, -49, -47, -44, -42, -39, -36, -34, -31,
-29, -26, -23, -21, -18, -15, -13, -10, -7, -5, -2, 1, 4, 6, 9, 12, 14, 17, 20,
22, 25, 28, 30, 33, 35, 38, 40, 43, 46, 48, 50, 53, 55, 58, 60, 62, 65, 67, 69,
71, 74, 76, 78, 80, 82, 84, 86, 88, 90, 91, 93, 95, 97, 98, 100, 101, 103, 104,
106, 107, 108, 110, 111, 112, 113, 114, 115, 116, 117, 118, 118, 119, 120, 120,
121, 121, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 122, 122,
122, 121, 121, 120, 120, 119, 118, 117, 117, 116, 115, 114, 113, 112, 111, 109,
108, 107, 106, 104, 103, 101, 100, 98, 96, 95, 93, 91, 90, 88, 86, 84, 82, 80,
78, 76, 74, 72, 69, 67, 65, 63, 60, 58, 56, 53, 51, 49, 46, 44, 41, 39, 36, 34,
31, 29, 26, 23, 21, 18, 16, 13, 10, 8, 5, 2, 0, -3, -5, -8, -11, -13, -16, -19,
-21, -24, -26, -29, -31, -34, -37, -39, -42, -44, -46, -49, -51, -54, -56, -58,
-61, -63, -65, -67, -70, -72, -74, -76, -78, -80, -82, -84, -86, -88, -90, -91,
-93, -95, -97, -98, -100, -101, -103, -104, -106, -107, -108, -110, -111, -112,
-113, -114, -115, -116, -117, -118, -119, -119, -120, -121, -121, -122, -122,
-123, -123, -123, -124, -124, -124, -124, -124, -124, -124, -124, -124, -124,
-123, -123, -122, -122, -122, -121, -120, -120, -119, -118, -117, -117, -116,
-115, -114, -113, -111, -110, -109, -108, -106, -105, -104, -102, -101, -99,
-98, -96, -94, -93, -91, -89, -87, -85, -83, -82, -80, -78, -75, -73, -71, -69,
-67, -65, -63, -60, -58, -56, -53, -51, -49, -46, -44, -42, -39, -37, -34, -32,
-29, -27, -24, -22, -19, -16, -14, -11, -9, -6, -4, -1, 2, 4, 7, 9, 12, 14, 17,
19, 22, 25, 27, 30, 32, 34, 37, 39, 42, 44, 47, 49, 51, 54, 56, 58, 60, 63, 65,
67, 69, 71, 73, 75, 77, 79, 81, 83, 85, 87, 89, 90, 92, 94, 95, 97, 99, 100,
102, 103, 104, 106, 107, 108, 109, 111, 112, 113, 114, 115, 116, 116, 117, 118,
119, 119, 120, 120, 121, 121, 122, 122, 122, 123, 123, 123, 123, 123, 123, 123,
123, 123, 123, 122, 122, 122, 121, 121, 120, 119, 119, 118, 117, 117, 116, 115,
114, 113, 112, 111, 110, 109, 107, 106, 105, 103, 102, 101, 99, 98, 96, 94, 93,
91, 89, 88, 86, 84, 82, 80, 78, 76, 74, 72, 70, 68, 66, 64, 62, 60, 57, 55, 53,
51, 48, 46, 44, 41, 39, 37, 34, 32, 29, 27, 24, 22, 19, 17, 14, 12, 9, 7, 4, 2,
-1, -3, -6, -8, -11, -13, -16, -18, -21, -23, -26, -28, -30, -33, -35, -38, -40,
-42, -45, -47, -49, -52, -54, -56, -58, -61, -63, -65, -67, -69, -71, -73, -75,
-77, -79, -81, -83, -85, -87, -88, -90, -92, -94, -95, -97, -98, -100, -101,
-103, -104, -105, -107, -108, -109, -110, -111, -113, -114, -115, -116, -116,
-117, -118, -119, -119, -120, -121, -121, -122, -122, -123, -123, -123, -124,
-124, -124, -124, -124, -124, -124, -124, -124, -124, -123, -123, -123, -122,
-122, -122, -121, -120, -120, -119, -118, -118, -117, -116, -115, -114, -113,
-112, -111, -110, -109, -107, -106, -105, -104, -102, -101, -99, -98, -96, -95,
-93, -91, -90, -88, -86, -84, -83, -81, -79, -77, -75, -73, -71, -69, -67, -65,
-63, -60, -58, -56, -54, -52, -49, -47, -45, -43, -40, -38, -36, -33, -31, -28,
-26, -24, -21, -19, -16, -14, -12, -9, -7, -4, -2, 1, 3, 6, 8, 11, 13, 15, 18,
20, 23, 25, 27, 30, 32, 35, 37, 39, 41, 44, 46, 48, 51, 53, 55, 57, 59, 61, 63,
66, 68, 70, 72, 74, 76, 77, 79, 81, 83, 85, 86, 88, 90, 92, 93, 95, 96, 98, 99,
101, 102, 103, 105, 106, 107, 108, 109, 111, 112, 113, 114, 114, 115, 116, 117,
118, 118, 119, 120, 120, 121, 121, 122, 122, 122, 123, 123, 123, 123, 123, 123,
123, 123, 123, 123, 123, 122, 122, 122, 121, 121, 120, 120, 119, 119, 118, 117,
117, 116, 115, 114, 113, 112, 111, 110, 109, 108, 107, 105, 104, 103, 102, 100,
99, 97, 96, 94, 93, 91, 90, 88, 86, 84, 83, 81, 79, 77, 75, 73, 71, 70, 67, 65,
63, 61, 59, 57, 55, 53, 51, 49, 46, 44, 42, 40, 37, 35, 33, 30, 28, 26, 23, 21,
19, 16, 14, 12, 9, 7, 4, 2, 0, -3, -5, -7, -10, -12, -15, -17, -19, -22, -24,
-26, -29, -31, -33, -36, -38, -40, -42, -45, -47, -49, -51, -53, -56, -58, -60,
-62, -64, -66, -68, -70, -72, -74, -76, -78, -79, -81, -83, -85, -86, -88, -90,
-91, -93, -95, -96, -98, -99, -100, -102, -103, -104, -106, -107, -108, -109,
-110, -111, -112, -113, -114, -115, -116, -117, -118, -118, -119, -120, -120,
-121, -121, -122, -122, -123, -123, -123, -124, -124, -124, -124, -124, -124,
-124, -124, -124, -124, -124, -123, -123, -123, -122, -122, -121, -121, -120,
-120, -119, -118, -118, -117, -116, -115, -114, -113, -112, -111, -110, -109,
-108, -107, -106, -104, -103, -102, -101, -99, -98, -96, -95, -93, -92, -90,
-88, -87, -85, -83, -82, -80, -78, -76, -74, -72, -70, -68, -66, -64, -62, -60,
-58, -56, -54, -52, -50, -48, -45, -43, -41, -39, -37, -34, -32, -30, -28, -25,
-23, -21, -19, -16, -14, -12, -9, -7, -5, -2, 0, 2, 4, 7, 9, 11, 13, 16, 18, 20,
22, 25, 27, 29, 31, 33, 35, 38, 40, 42, 44, 46, 48, 50, 52, 54, 56, 58, 60, 62,
63, 65, 67, 69, 71, 72, 74, 76, 77, 79, 81, 82, 84, 85, 87, 88, 89, 91, 92, 93,
95, 96, 97, 98, 99, 101, 102, 103, 104, 105, 105, 106, 107, 108, 109, 109, 110,
111, 111, 112, 112, 113, 113, 114, 114, 114, 115, 115, 115, 115, 115, 115, 115,
115, 115, 115, 115, 115, 115, 114, 114, 114, 113, 113, 113, 112, 112, 111, 110,
110, 109, 108, 108, 107, 106, 105, 104, 103, 102, 101, 100, 99, 98, 97, 96, 95,
94, 92, 91, 90, 88, 87, 86, 84, 83, 81, 80, 78, 77, 75, 74, 72, 70, 69, 67, 65,
64, 62, 60, 58, 57, 55, 53, 51, 49, 47, 45, 44, 42, 40, 38, 36, 34, 32, 30, 28,
26, 24, 22, 20, 18, 16, 14, 12, 10, 8, 6, 4, 2, 0, -2, -4, -6, -8, -10, -12,
-14, -16, -18, -20, -22, -24, -26, -28, -30, -32, -34, -35, -37, -39, -41, -43,
-45, -46, -48, -50, -52, -53, -55, -57, -58, -60, -61, -63, -65, -66, -68, -69,
-70, -72, -73, -75, -76, -77, -79, -80, -81, -82, -84, -85, -86, -87, -88, -89,
-90, -91, -92, -93, -94, -95, -95, -96, -97, -98, -98, -99, -100, -100, -101,
-101, -102, -102, -103, -103, -103, -104, -104, -104, -104, -104, -105, -105,
-105, -105, -105, -105, -105, -105, -104, -104, -104, -104, -104, -103, -103,
-103, -102, -102, -101, -101, -100, -100, -99, -98, -98, -97, -96, -96, -95,
-94, -93, -92, -92, -91, -90, -89, -88, -87, -86, -85, -83, -82, -81, -80, -79,
-77, -76, -75, -74, -72, -71, -70, -68, -67, -65, -64, -63, -61, -60, -58, -57,
-55, -53, -52, -50, -49, -47, -45, -44, -42, -41, -39, -37, -35, -34, -32, -30,
-29, -27, -25, -23, -22, -20, -18, -16, -15, -13, -11, -9, -8, -6, -4, -2, -1,
1, 3, 5, 6, 8, 10, 11, 13, 15, 17, 18, 20, 22, 23, 25, 27, 28, 30, 32, 33, 35,
36, 38, 39, 41, 42, 44, 45, 47, 48, 50, 51, 53, 54, 55, 57, 58, 59, 61, 62, 63,
64, 65, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 80, 81, 82, 83,
83, 84, 85, 85, 86, 86, 87, 88, 88, 89, 89, 89, 90, 90, 90, 91, 91, 91, 91, 92,
92, 92, 92, 92, 92, 92, 92, 92, 92, 92, 92, 91, 91, 91, 91, 90, 90, 90, 89, 89,
89, 88, 88, 87, 87, 86, 86, 85, 84, 84, 83, 82, 82, 81, 80, 79, 79, 78, 77, 76,
75, 74, 73, 72, 71, 70, 69, 68, 67, 66, 65, 64, 63, 61, 60, 59, 58, 57, 55, 54,
53, 52, 50, 49, 48, 46, 45, 44, 42, 41, 39, 38, 37, 35, 34, 32, 31, 29, 28, 26,
25, 24, 22, 21, 19, 18, 16, 15, 13, 12, 10, 9, 7, 6, 4, 3, 1, 0, -2, -3, -5, -6,
-8, -9, -11, -12, -14, -15, -17, -18, -19, -21, -22, -24, -25, -27, -28, -29,
-31, -32, -33, -35, -36, -37, -38, -40, -41, -42, -43, -45, -46, -47, -48, -49,
-50, -52, -53, -54, -55, -56, -57, -58, -59, -60, -61, -62, -63, -64, -64, -65,
-66, -67, -68, -68, -69, -70, -71, -71, -72, -73, -73, -74, -74, -75, -75, -76,
-76, -77, -77, -78, -78, -78, -79, -79, -79, -80, -80, -80, -80, -80, -81, -81,
-81, -81, -81, -81, -81, -81, -81, -81, -81, -81, -80, -80, -80, -80, -80, -79,
-79, -79, -78, -78, -78, -77, -77, -77, -76, -76, -75, -75, -74, -74, -73, -72,
-72, -71, -70, -70, -69, -68, -68, -67, -66, -65, -65, -64, -63, -62, -61, -60,
-59, -59, -58, -57, -56, -55, -54, -53, -52, -51, -50, -49, -48, -47, -45, -44,
-43, -42, -41, -40, -39, -38, -36, -35, -34, -33, -32, -31, -29, -28, -27, -26,
-24, -23, -22, -21, -20, -18, -17, -16, -15, -13, -12, -11, -10, -8, -7, -6, -5,
-3, -2, -1, 0, 2, 3, 4, 5, 7, 8, 9, 10, 11, 13, 14, 15, 16, 17, 19, 20, 21, 22,
23, 24, 25, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43,
44, 44, 45, 46, 47, 48, 49, 50, 50, 51, 52, 53, 53, 54, 55, 55, 56, 57, 57, 58,
58, 59, 60, 60, 61, 61, 62, 62, 62, 63, 63, 64, 64, 64, 65, 65, 65, 66, 66, 66,
66, 66, 67, 67, 67, 67, 67, 67, 67, 67, 67, 67, 67, 67, 67, 67, 67, 67, 67, 67,
67, 66, 66, 66, 66, 66, 65, 65, 65, 64, 64, 64, 63, 63, 62, 62, 62, 61, 61, 60,
60, 59, 59, 58, 58, 57, 56, 56, 55, 55, 54, 53, 53, 52, 51, 51, 50, 49, 48, 48,
47, 46, 45, 44, 44, 43, 42, 41, 40, 39, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30,
29, 28, 27, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11,
10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, -1, -2, -3, -4, -5, -6, -7, -8, -9, -10, -11,
-12, -13, -14, -15, -16, -17, -18, -19, -20, -21, -21, -22, -23, -24, -25, -26,
-27, -27, -28, -29, -30, -31, -31, -32, -33, -34, -35, -35, -36, -37, -37, -38,
-39, -39, -40, -41, -41, -42, -43, -43, -44, -44, -45, -45, -46, -46, -47, -47,
-48, -48, -49, -49, -50, -50, -50, -51, -51, -52, -52, -52, -52, -53, -53, -53,
-54, -54, -54, -54, -54, -55, -55, -55, -55, -55, -55, -55, -55, -55, -55, -55,
-56, -55, -55, -55, -55, -55, -55, -55, -55, -55, -55, -55, -55, -54, -54, -54,
-54, -54, -53, -53, -53, -53, -52, -52, -52, -51, -51, -51, -50, -50, -50, -49,
-49, -48, -48, -47, -47, -47, -46, -46, -45, -45, -44, -44, -43, -42, -42, -41,
-41, -40, -40, -39, -38, -38, -37, -37, -36, -35, -35, -34, -33, -33, -32, -31,
-31, -30, -29, -28, -28, -27, -26, -26, -25, -24, -23, -23, -22, -21, -20, -20,
-19, -18, -17, -17, -16, -15, -14, -13, -13, -12, -11, -10, -10, -9, -8, -7, -6,
-6, -5, -4, -3, -3, -2, -1, 0, 0, 1, 2, 3, 3, 4, 5, 6, 6, 7, 8, 9, 9, 10, 11,
11, 12, 13, 14, 14, 15, 16, 16, 17, 18, 18, 19, 19, 20, 21, 21, 22, 22, 23, 24,
24, 25, 25, 26, 26, 27, 28, 28, 29, 29, 30, 30, 30, 31, 31, 32, 32, 33, 33, 34,
34, 34, 35, 35, 35, 36, 36, 36, 37, 37, 37, 38, 38, 38, 38, 39, 39, 39, 39, 39,
40, 40, 40, 40, 40, 40, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41,
41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 40, 40, 40, 40, 40, 40, 40, 39, 39, 39,
39, 39, 38, 38, 38, 38, 37, 37, 37, 36, 36, 36, 35, 35, 35, 34, 34, 34, 33, 33,
32, 32, 32, 32, 31, 31, 30, 30, 29, 29, 29, 28, 28, 27, 27, 26, 26, 25, 25, 24,
24, 23, 23, 22, 22, 21, 21, 20, 20, 19, 19, 18, 18, 17, 17, 16, 16, 15, 15, 14,
14, 13, 12, 12, 11, 11, 10, 10, 9, 9, 8, 8, 7, 6, 6, 5, 5, 4, 4, 3, 3, 2, 2, 1,
0, 0, -1, -1, -2, -2, -3, -3, -4, -4, -5, -5, -6, -6, -7, -7, -8, -8, -9, -9,
-10, -10, -11, -11, -12, -12, -12, -13, -13, -14, -14, -15, -15, -15, -16, -16,
-17, -17, -17, -18, -18, -19, -19, -19, -20, -20, -20, -21, -21, -21, -22, -22,
-22, -22, -23, -23, -23, -24, -24, -24, -24, -25, -25, -25, -25, -26, -26, -26,
-26, -26, -26, -27, -27, -27, -27, -27, -27, -27, -28, -28, -28, -28, -28, -28,
-28, -28, -28, -28, -28, -29, -29, -29, -29, -29, -29, -29, -29, -29, -29, -29,
-29, -29, -28, -28, -28, -28, -28, -28, -28, -28, -28, -28, -28, -28, -27, -27,
-27, -27, -27, -27, -27, -26, -26, -26, -26, -26, -26, -25, -25, -25, -25, -25,
-24, -24, -24, -24, -24, -23, -23, -23, -23, -22, -22, -22, -22, -21, -21, -21,
-21, -20, -20, -20, -19, -19, -19, -18, -18, -18, -18, -17, -17, -17, -16, -16,
-16, -15, -15, -15, -14, -14, -14, -13, -13, -13, -12, -12, -12, -12, -11, -11,
-10, -10, -10, -10, -9, -9, -9, -8, -8, -7, -7, -7, -7, -6, -6, -5, -5, -5, -5,
-4, -4, -4, -3, -3, -3, -2, -2, -2, -1, -1, -1, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 3,
3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 5, 6, 6, 6, 6, 7, 7, 7, 7, 8, 8, 8, 8, 8, 9, 9, 9,
9, 9, 10, 10, 10, 10, 10, 10, 11, 11, 11, 11, 11, 11, 12, 12, 12, 12, 12, 12,
12, 12, 12, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 14, 14, 14, 14,
14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14,
14, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 12, 12, 12,
12, 12, 12, 12, 12, 12, 12, 11, 11, 11, 11, 11, 11, 11, 11, 10, 10, 10, 10, 10,
10, 10, 10, 9, 9, 9, 9, 9, 9, 9, 8, 8, 8, 8, 8, 8, 8, 7, 7, 7, 7, 7, 7, 7, 6, 6,
6, 6, 6, 6, 5, 5, 5, 5, 5, 5, 5, 4, 4, 4, 4, 4, 4, 4, 3, 3, 3, 3, 3, 3, 3, 2, 2,
2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, -1, 0, -1, 0, 0,
-1, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1,
0, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0,
0, -1, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0, -1,
0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, 0, 0, 0, 0, -1, 0, -1, 0,
-1, 0, -1, 0, -1, -1, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0,
-1, 0, -1, 0, -1, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0,
-1, 0, 0, -1, 0, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1,
0, -1, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, -1, 0,
-1, 0, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0,
-1, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0,
-1, 0, 0, -1, 0, -1, 0, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0,
0, -1, 0, -1, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0,
-1, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, 0,
0, 0, -1, 0, 0, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, 0, 0,
-1, 0, -1, 0, -1, -1, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0, -1, 0, 0, -1,
0, -1, 0, -1, 0, -1, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0,
-1, 0, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0,
-1, 0, -1, 0, -1, 0, -1, 0, 0, 0, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1,
0, -1, 0, -1, 0, -1, 0, -1, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, -1, 0, -1, 0, 0,
0, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1,
0, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, 0, -1, 0, -1,
0, 0, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0,
-1, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0,
-1, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, -1,
0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0, 0, -1, 0,
-1, 0, -1, 0, -1, 0, -1, -1, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0,
0, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0,
0, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1,
0, -1, 0, -1, 0, 0, -1, 0, 0, -1, 0, -1, 0, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0,
-1, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0,
-1, 0, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1,
0, -1, 0, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0,
-1, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0,
-1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0,
-1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0,
-1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1,
0, -1, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0,
-1, 0, 0, -1, 0, };

#endif /* KICKFIVE_H_ */
