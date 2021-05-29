const unsigned int knockSampleRate = 22050;
const unsigned int knockSampleCount = 360;
const signed char knockSamples[] = {//0
0, -1, -1, 4, 14, 23, 33, 35, 39, 45, 45, 40, 46, 54, 61, 60, //16
58, 65, 70, 71, 71, 66, 63, 67, 75, 84, 86, 84, 89, 100, 99, 96, //32
98, 100, 95, 95, 98, 97, 93, 90, 92, 99, 104, 99, 94, 96, 106, 104, //48
96, 91, 91, 97, 94, 86, 83, 87, 88, 81, 76, 76, 75, 72, 68, 71, //64
75, 72, 64, 60, 59, 60, 56, 50, 50, 56, 55, 43, 28, 24, 30, 35, //80
29, 19, 10, 3, -1, -8, -16, -19, -22, -31, -35, -31, -34, -40, -44, -43, //96
-39, -45, -49, -48, -48, -54, -63, -62, -57, -58, -62, -64, -66, -66, -69, -69, //112
-68, -66, -67, -70, -68, -63, -70, -84, -88, -90, -86, -81, -86, -101, -99, -93, //128
-91, -94, -99, -99, -92, -88, -85, -86, -96, -99, -100, -96, -89, -87, -94, -96, //144
-97, -95, -92, -97, -101, -100, -92, -88, -87, -85, -86, -87, -85, -83, -78, -66, //160
-61, -60, -61, -62, -53, -43, -35, -31, -28, -24, -11, -6, 0, 5, 9, 12, //176
25, 35, 41, 47, 50, 51, 57, 64, 65, 67, 73, 82, 87, 89, 91, 97, //192
106, 114, 117, 120, 122, 120, 121, 123, 121, 123, 123, 119, 115, 113, 111, 112, //208
114, 114, 111, 114, 121, 127, 123, 115, 117, 119, 115, 104, 96, 101, 104, 96, //224
91, 91, 90, 87, 77, 70, 71, 79, 80, 75, 74, 75, 73, 71, 69, 73, //240
74, 67, 58, 59, 65, 60, 48, 40, 42, 53, 52, 48, 50, 51, 48, 40, //256
36, 40, 44, 41, 33, 29, 28, 21, 13, 6, 3, -2, -12, -20, -21, -16, //272
-16, -20, -25, -29, -30, -32, -40, -40, -43, -51, -60, -70, -72, -69, -71, -79, //288
-83, -83, -83, -85, -87, -88, -89, -93, -96, -95, -89, -84, -92, -94, -91, -91, //304
-91, -93, -100, -103, -104, -108, -113, -110, -109, -111, -115, -117, -112, -106, -105, -102, //320
-98, -98, -102, -101, -97, -97, -97, -94, -89, -91, -93, -91, -90, -92, -93, -85, //336
-76, -73, -76, -81, -81, -77, -73, -69, -70, -73, -69, -66, -66, -64, -62, -58, //352
-57, -53, -44, -39, -37, -35, -17, 0, };
