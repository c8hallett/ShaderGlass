/*
ShaderGlass shader eagle-shaders\supereagle imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/master/eagle/shaders/supereagle.slang
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArchEagleShadersSupereagleShaderDefs
{
static const BYTE sVertexByteCode[] =
{
68,88,66,67,142,5,
140,95,15,58,101,172,
32,133,218,208,123,66,
83,155,1,0,0,0,
224,8,0,0,5,0,
0,0,52,0,0,0,
28,2,0,0,104,2,
0,0,128,3,0,0,
68,8,0,0,82,68,
69,70,224,1,0,0,
1,0,0,0,96,0,
0,0,1,0,0,0,
60,0,0,0,0,5,
254,255,0,129,0,0,
182,1,0,0,82,68,
49,49,60,0,0,0,
24,0,0,0,32,0,
0,0,40,0,0,0,
36,0,0,0,12,0,
0,0,0,0,0,0,
92,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
1,0,0,0,1,0,
0,0,85,66,79,0,
92,0,0,0,4,0,
0,0,120,0,0,0,
112,0,0,0,0,0,
0,0,0,0,0,0,
24,1,0,0,0,0,
0,0,64,0,0,0,
2,0,0,0,44,1,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,80,1,
0,0,64,0,0,0,
16,0,0,0,0,0,
0,0,108,1,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,144,1,0,0,
80,0,0,0,16,0,
0,0,0,0,0,0,
108,1,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
164,1,0,0,96,0,
0,0,16,0,0,0,
2,0,0,0,108,1,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,103,108,
111,98,97,108,95,77,
86,80,0,102,108,111,
97,116,52,120,52,0,
2,0,3,0,4,0,
4,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,35,1,0,0,
103,108,111,98,97,108,
95,79,117,116,112,117,
116,83,105,122,101,0,
102,108,111,97,116,52,
0,171,171,171,1,0,
3,0,1,0,4,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
98,1,0,0,103,108,
111,98,97,108,95,79,
114,105,103,105,110,97,
108,83,105,122,101,0,
103,108,111,98,97,108,
95,83,111,117,114,99,
101,83,105,122,101,0,
77,105,99,114,111,115,
111,102,116,32,40,82,
41,32,72,76,83,76,
32,83,104,97,100,101,
114,32,67,111,109,112,
105,108,101,114,32,49,
48,46,49,0,171,171,
73,83,71,78,68,0,
0,0,2,0,0,0,
8,0,0,0,56,0,
0,0,0,0,0,0,
0,0,0,0,3,0,
0,0,0,0,0,0,
15,15,0,0,56,0,
0,0,1,0,0,0,
0,0,0,0,3,0,
0,0,1,0,0,0,
3,3,0,0,84,69,
88,67,79,79,82,68,
0,171,171,171,79,83,
71,78,16,1,0,0,
10,0,0,0,8,0,
0,0,248,0,0,0,
0,0,0,0,0,0,
0,0,3,0,0,0,
0,0,0,0,3,12,
0,0,248,0,0,0,
1,0,0,0,0,0,
0,0,3,0,0,0,
1,0,0,0,15,0,
0,0,248,0,0,0,
2,0,0,0,0,0,
0,0,3,0,0,0,
2,0,0,0,15,0,
0,0,248,0,0,0,
3,0,0,0,0,0,
0,0,3,0,0,0,
3,0,0,0,15,0,
0,0,248,0,0,0,
4,0,0,0,0,0,
0,0,3,0,0,0,
4,0,0,0,15,0,
0,0,248,0,0,0,
5,0,0,0,0,0,
0,0,3,0,0,0,
5,0,0,0,15,0,
0,0,248,0,0,0,
6,0,0,0,0,0,
0,0,3,0,0,0,
6,0,0,0,15,0,
0,0,248,0,0,0,
7,0,0,0,0,0,
0,0,3,0,0,0,
7,0,0,0,15,0,
0,0,248,0,0,0,
8,0,0,0,0,0,
0,0,3,0,0,0,
8,0,0,0,15,0,
0,0,1,1,0,0,
0,0,0,0,1,0,
0,0,3,0,0,0,
9,0,0,0,15,0,
0,0,84,69,88,67,
79,79,82,68,0,83,
86,95,80,111,115,105,
116,105,111,110,0,171,
171,171,83,72,69,88,
188,4,0,0,80,0,
1,0,47,1,0,0,
106,8,0,1,89,0,
0,4,70,142,32,0,
0,0,0,0,7,0,
0,0,95,0,0,3,
242,16,16,0,0,0,
0,0,95,0,0,3,
50,16,16,0,1,0,
0,0,101,0,0,3,
50,32,16,0,0,0,
0,0,101,0,0,3,
242,32,16,0,1,0,
0,0,101,0,0,3,
242,32,16,0,2,0,
0,0,101,0,0,3,
242,32,16,0,3,0,
0,0,101,0,0,3,
242,32,16,0,4,0,
0,0,101,0,0,3,
242,32,16,0,5,0,
0,0,101,0,0,3,
242,32,16,0,6,0,
0,0,101,0,0,3,
242,32,16,0,7,0,
0,0,101,0,0,3,
242,32,16,0,8,0,
0,0,103,0,0,4,
242,32,16,0,9,0,
0,0,1,0,0,0,
104,0,0,2,1,0,
0,0,54,0,0,5,
50,32,16,0,0,0,
0,0,70,16,16,0,
1,0,0,0,54,0,
0,7,66,0,16,0,
0,0,0,0,42,128,
32,128,65,0,0,0,
0,0,0,0,6,0,
0,0,54,0,0,5,
130,0,16,0,0,0,
0,0,1,64,0,0,
0,0,0,0,0,0,
0,7,50,0,16,0,
0,0,0,0,230,10,
16,0,0,0,0,0,
70,16,16,0,1,0,
0,0,54,0,0,5,
194,32,16,0,1,0,
0,0,6,4,16,0,
0,0,0,0,54,0,
0,5,50,32,16,0,
3,0,0,0,70,0,
16,0,0,0,0,0,
0,0,0,9,50,32,
16,0,1,0,0,0,
70,16,16,0,1,0,
0,0,230,138,32,128,
65,0,0,0,0,0,
0,0,6,0,0,0,
50,0,0,13,50,32,
16,0,2,0,0,0,
230,138,32,0,0,0,
0,0,6,0,0,0,
2,64,0,0,0,0,
128,63,0,0,128,191,
0,0,0,0,0,0,
0,0,70,16,16,0,
1,0,0,0,50,0,
0,13,194,32,16,0,
2,0,0,0,166,142,
32,0,0,0,0,0,
6,0,0,0,2,64,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,64,0,0,128,191,
6,20,16,0,1,0,
0,0,54,0,0,6,
98,0,16,0,0,0,
0,0,246,142,32,0,
0,0,0,0,6,0,
0,0,54,0,0,5,
130,0,16,0,0,0,
0,0,1,64,0,0,
0,0,0,0,0,0,
0,7,194,32,16,0,
3,0,0,0,166,14,
16,0,0,0,0,0,
6,20,16,0,1,0,
0,0,56,0,0,8,
66,0,16,0,0,0,
0,0,1,64,0,0,
0,0,0,64,42,128,
32,0,0,0,0,0,
6,0,0,0,54,0,
0,5,130,0,16,0,
0,0,0,0,1,64,
0,0,0,0,0,0,
0,0,0,7,50,32,
16,0,4,0,0,0,
230,10,16,0,0,0,
0,0,70,16,16,0,
1,0,0,0,50,0,
0,13,194,32,16,0,
4,0,0,0,166,142,
32,0,0,0,0,0,
6,0,0,0,2,64,
0,0,0,0,0,0,
0,0,0,0,0,0,
128,191,0,0,128,63,
6,20,16,0,1,0,
0,0,54,0,0,8,
82,0,16,0,0,0,
0,0,2,64,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,7,50,32,16,0,
5,0,0,0,70,0,
16,0,0,0,0,0,
70,16,16,0,1,0,
0,0,0,0,0,8,
194,32,16,0,5,0,
0,0,6,20,16,0,
1,0,0,0,166,142,
32,0,0,0,0,0,
6,0,0,0,50,0,
0,13,50,32,16,0,
6,0,0,0,230,138,
32,0,0,0,0,0,
6,0,0,0,2,64,
0,0,0,0,0,64,
0,0,128,63,0,0,
0,0,0,0,0,0,
70,16,16,0,1,0,
0,0,50,0,0,13,
194,32,16,0,6,0,
0,0,166,142,32,0,
0,0,0,0,6,0,
0,0,2,64,0,0,
0,0,0,0,0,0,
0,0,0,0,128,191,
0,0,0,64,6,20,
16,0,1,0,0,0,
56,0,0,8,130,0,
16,0,0,0,0,0,
1,64,0,0,0,0,
0,64,58,128,32,0,
0,0,0,0,6,0,
0,0,0,0,0,7,
50,32,16,0,7,0,
0,0,230,10,16,0,
0,0,0,0,70,16,
16,0,1,0,0,0,
50,0,0,13,194,32,
16,0,7,0,0,0,
166,142,32,0,0,0,
0,0,6,0,0,0,
2,64,0,0,0,0,
0,0,0,0,0,0,
0,0,128,63,0,0,
0,64,6,20,16,0,
1,0,0,0,50,0,
0,13,50,32,16,0,
8,0,0,0,230,138,
32,0,0,0,0,0,
6,0,0,0,2,64,
0,0,0,0,0,64,
0,0,0,64,0,0,
0,0,0,0,0,0,
70,16,16,0,1,0,
0,0,54,0,0,8,
194,32,16,0,8,0,
0,0,2,64,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,56,0,
0,8,242,0,16,0,
0,0,0,0,86,21,
16,0,0,0,0,0,
70,142,32,0,0,0,
0,0,1,0,0,0,
50,0,0,10,242,0,
16,0,0,0,0,0,
6,16,16,0,0,0,
0,0,70,142,32,0,
0,0,0,0,0,0,
0,0,70,14,16,0,
0,0,0,0,50,0,
0,10,242,0,16,0,
0,0,0,0,166,26,
16,0,0,0,0,0,
70,142,32,0,0,0,
0,0,2,0,0,0,
70,14,16,0,0,0,
0,0,50,0,0,10,
242,32,16,0,9,0,
0,0,246,31,16,0,
0,0,0,0,70,142,
32,0,0,0,0,0,
3,0,0,0,70,14,
16,0,0,0,0,0,
62,0,0,1,83,84,
65,84,148,0,0,0,
31,0,0,0,1,0,
0,0,0,0,0,0,
12,0,0,0,21,0,
0,0,0,0,0,0,
0,0,0,0,1,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,9,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0
};


static const BYTE sFragmentByteCode[] =
{
68,88,66,67,82,43,
155,160,60,62,84,55,
217,178,120,115,48,218,
75,35,1,0,0,0,
120,25,0,0,5,0,
0,0,52,0,0,0,
116,2,0,0,104,3,
0,0,156,3,0,0,
220,24,0,0,82,68,
69,70,56,2,0,0,
1,0,0,0,184,0,
0,0,3,0,0,0,
60,0,0,0,0,5,
255,255,0,129,0,0,
14,2,0,0,82,68,
49,49,60,0,0,0,
24,0,0,0,32,0,
0,0,40,0,0,0,
36,0,0,0,12,0,
0,0,0,0,0,0,
156,0,0,0,3,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,2,0,0,0,
1,0,0,0,1,0,
0,0,172,0,0,0,
2,0,0,0,5,0,
0,0,4,0,0,0,
255,255,255,255,2,0,
0,0,1,0,0,0,
13,0,0,0,179,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,1,0,
0,0,1,0,0,0,
95,83,111,117,114,99,
101,95,115,97,109,112,
108,101,114,0,83,111,
117,114,99,101,0,85,
66,79,0,171,179,0,
0,0,4,0,0,0,
208,0,0,0,112,0,
0,0,0,0,0,0,
0,0,0,0,112,1,
0,0,0,0,0,0,
64,0,0,0,0,0,
0,0,132,1,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,168,1,0,0,
64,0,0,0,16,0,
0,0,0,0,0,0,
196,1,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
232,1,0,0,80,0,
0,0,16,0,0,0,
0,0,0,0,196,1,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,252,1,
0,0,96,0,0,0,
16,0,0,0,2,0,
0,0,196,1,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,103,108,111,98,
97,108,95,77,86,80,
0,102,108,111,97,116,
52,120,52,0,2,0,
3,0,4,0,4,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
123,1,0,0,103,108,
111,98,97,108,95,79,
117,116,112,117,116,83,
105,122,101,0,102,108,
111,97,116,52,0,171,
171,171,1,0,3,0,
1,0,4,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,186,1,
0,0,103,108,111,98,
97,108,95,79,114,105,
103,105,110,97,108,83,
105,122,101,0,103,108,
111,98,97,108,95,83,
111,117,114,99,101,83,
105,122,101,0,77,105,
99,114,111,115,111,102,
116,32,40,82,41,32,
72,76,83,76,32,83,
104,97,100,101,114,32,
67,111,109,112,105,108,
101,114,32,49,48,46,
49,0,171,171,73,83,
71,78,236,0,0,0,
9,0,0,0,8,0,
0,0,224,0,0,0,
0,0,0,0,0,0,
0,0,3,0,0,0,
0,0,0,0,3,3,
0,0,224,0,0,0,
1,0,0,0,0,0,
0,0,3,0,0,0,
1,0,0,0,15,12,
0,0,224,0,0,0,
2,0,0,0,0,0,
0,0,3,0,0,0,
2,0,0,0,15,3,
0,0,224,0,0,0,
3,0,0,0,0,0,
0,0,3,0,0,0,
3,0,0,0,15,15,
0,0,224,0,0,0,
4,0,0,0,0,0,
0,0,3,0,0,0,
4,0,0,0,15,15,
0,0,224,0,0,0,
5,0,0,0,0,0,
0,0,3,0,0,0,
5,0,0,0,15,15,
0,0,224,0,0,0,
6,0,0,0,0,0,
0,0,3,0,0,0,
6,0,0,0,15,3,
0,0,224,0,0,0,
7,0,0,0,0,0,
0,0,3,0,0,0,
7,0,0,0,15,15,
0,0,224,0,0,0,
8,0,0,0,0,0,
0,0,3,0,0,0,
8,0,0,0,15,0,
0,0,84,69,88,67,
79,79,82,68,0,171,
171,171,79,83,71,78,
44,0,0,0,1,0,
0,0,8,0,0,0,
32,0,0,0,0,0,
0,0,0,0,0,0,
3,0,0,0,0,0,
0,0,15,0,0,0,
83,86,95,84,97,114,
103,101,116,0,171,171,
83,72,69,88,56,21,
0,0,80,0,0,0,
78,5,0,0,106,8,
0,1,89,0,0,4,
70,142,32,0,0,0,
0,0,7,0,0,0,
90,0,0,3,0,96,
16,0,2,0,0,0,
88,24,0,4,0,112,
16,0,2,0,0,0,
85,85,0,0,98,16,
0,3,50,16,16,0,
0,0,0,0,98,16,
0,3,194,16,16,0,
1,0,0,0,98,16,
0,3,50,16,16,0,
2,0,0,0,98,16,
0,3,242,16,16,0,
3,0,0,0,98,16,
0,3,242,16,16,0,
4,0,0,0,98,16,
0,3,242,16,16,0,
5,0,0,0,98,16,
0,3,50,16,16,0,
6,0,0,0,98,16,
0,3,242,16,16,0,
7,0,0,0,101,0,
0,3,242,32,16,0,
0,0,0,0,104,0,
0,2,13,0,0,0,
56,0,0,8,50,0,
16,0,0,0,0,0,
70,16,16,0,0,0,
0,0,70,128,32,0,
0,0,0,0,6,0,
0,0,26,0,0,5,
50,0,16,0,0,0,
0,0,70,0,16,0,
0,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,1,0,0,0,
70,16,16,0,2,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,2,0,
0,0,70,16,16,0,
0,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
3,0,0,0,230,26,
16,0,3,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,4,0,0,0,
70,16,16,0,4,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,5,0,
0,0,230,26,16,0,
4,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
6,0,0,0,70,16,
16,0,5,0,0,0,
150,124,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,7,0,0,0,
230,26,16,0,5,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,8,0,
0,0,70,16,16,0,
7,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,16,0,0,10,
66,0,16,0,0,0,
0,0,70,2,16,0,
1,0,0,0,2,64,
0,0,0,0,128,71,
0,0,127,67,0,0,
128,63,0,0,0,0,
16,0,0,10,130,0,
16,0,0,0,0,0,
70,2,16,0,2,0,
0,0,2,64,0,0,
0,0,128,71,0,0,
127,67,0,0,128,63,
0,0,0,0,16,0,
0,10,18,0,16,0,
1,0,0,0,70,2,
16,0,3,0,0,0,
2,64,0,0,0,0,
128,71,0,0,127,67,
0,0,128,63,0,0,
0,0,16,0,0,10,
34,0,16,0,1,0,
0,0,70,2,16,0,
5,0,0,0,2,64,
0,0,0,0,128,71,
0,0,127,67,0,0,
128,63,0,0,0,0,
16,0,0,10,66,0,
16,0,1,0,0,0,
38,9,16,0,6,0,
0,0,2,64,0,0,
0,0,128,71,0,0,
127,67,0,0,128,63,
0,0,0,0,16,0,
0,10,130,0,16,0,
1,0,0,0,70,2,
16,0,7,0,0,0,
2,64,0,0,0,0,
128,71,0,0,127,67,
0,0,128,63,0,0,
0,0,16,0,0,10,
130,0,16,0,2,0,
0,0,70,2,16,0,
8,0,0,0,2,64,
0,0,0,0,128,71,
0,0,127,67,0,0,
128,63,0,0,0,0,
16,0,0,10,130,0,
16,0,3,0,0,0,
70,2,16,0,4,0,
0,0,2,64,0,0,
0,0,128,71,0,0,
127,67,0,0,128,63,
0,0,0,0,57,0,
0,7,18,0,16,0,
4,0,0,0,58,0,
16,0,0,0,0,0,
58,0,16,0,1,0,
0,0,31,0,4,3,
10,0,16,0,4,0,
0,0,24,0,0,7,
50,0,16,0,4,0,
0,0,134,0,16,0,
1,0,0,0,102,10,
16,0,1,0,0,0,
24,0,0,7,66,0,
16,0,4,0,0,0,
42,0,16,0,0,0,
0,0,10,0,16,0,
1,0,0,0,60,0,
0,7,34,0,16,0,
4,0,0,0,42,0,
16,0,4,0,0,0,
26,0,16,0,4,0,
0,0,50,0,0,12,
114,0,16,0,5,0,
0,0,38,9,16,0,
6,0,0,0,2,64,
0,0,0,0,64,64,
0,0,64,64,0,0,
64,64,0,0,0,0,
70,2,16,0,2,0,
0,0,56,0,0,10,
114,0,16,0,5,0,
0,0,70,2,16,0,
5,0,0,0,2,64,
0,0,0,0,128,62,
0,0,128,62,0,0,
128,62,0,0,0,0,
0,0,0,7,114,0,
16,0,8,0,0,0,
70,2,16,0,2,0,
0,0,70,2,16,0,
3,0,0,0,56,0,
0,10,114,0,16,0,
8,0,0,0,70,2,
16,0,8,0,0,0,
2,64,0,0,0,0,
0,63,0,0,0,63,
0,0,0,63,0,0,
0,0,55,0,0,9,
226,0,16,0,4,0,
0,0,86,5,16,0,
4,0,0,0,6,9,
16,0,5,0,0,0,
6,9,16,0,8,0,
0,0,24,0,0,7,
18,0,16,0,5,0,
0,0,10,0,16,0,
1,0,0,0,58,0,
16,0,3,0,0,0,
24,0,0,7,34,0,
16,0,5,0,0,0,
42,0,16,0,1,0,
0,0,58,0,16,0,
2,0,0,0,60,0,
0,7,18,0,16,0,
5,0,0,0,26,0,
16,0,5,0,0,0,
10,0,16,0,5,0,
0,0,50,0,0,12,
226,0,16,0,5,0,
0,0,166,4,16,0,
6,0,0,0,2,64,
0,0,0,0,0,0,
0,0,64,64,0,0,
64,64,0,0,64,64,
6,9,16,0,7,0,
0,0,56,0,0,10,
226,0,16,0,5,0,
0,0,86,14,16,0,
5,0,0,0,2,64,
0,0,0,0,0,0,
0,0,128,62,0,0,
128,62,0,0,128,62,
0,0,0,7,114,0,
16,0,8,0,0,0,
38,9,16,0,6,0,
0,0,70,2,16,0,
7,0,0,0,56,0,
0,10,114,0,16,0,
8,0,0,0,70,2,
16,0,8,0,0,0,
2,64,0,0,0,0,
0,63,0,0,0,63,
0,0,0,63,0,0,
0,0,55,0,0,9,
226,0,16,0,5,0,
0,0,6,0,16,0,
5,0,0,0,86,14,
16,0,5,0,0,0,
6,9,16,0,8,0,
0,0,50,0,0,12,
114,0,16,0,8,0,
0,0,70,2,16,0,
7,0,0,0,2,64,
0,0,0,0,192,64,
0,0,192,64,0,0,
192,64,0,0,0,0,
38,9,16,0,6,0,
0,0,0,0,0,7,
114,0,16,0,8,0,
0,0,70,2,16,0,
3,0,0,0,70,2,
16,0,8,0,0,0,
56,0,0,10,226,0,
16,0,8,0,0,0,
6,9,16,0,8,0,
0,0,2,64,0,0,
0,0,0,0,0,0,
0,62,0,0,0,62,
0,0,0,62,50,0,
0,12,114,0,16,0,
9,0,0,0,70,2,
16,0,2,0,0,0,
2,64,0,0,0,0,
192,64,0,0,192,64,
0,0,192,64,0,0,
0,0,38,9,16,0,
6,0,0,0,0,0,
0,7,114,0,16,0,
9,0,0,0,70,2,
16,0,3,0,0,0,
70,2,16,0,9,0,
0,0,56,0,0,10,
114,0,16,0,9,0,
0,0,70,2,16,0,
9,0,0,0,2,64,
0,0,0,0,0,62,
0,0,0,62,0,0,
0,62,0,0,0,0,
50,0,0,12,114,0,
16,0,10,0,0,0,
38,9,16,0,6,0,
0,0,2,64,0,0,
0,0,192,64,0,0,
192,64,0,0,192,64,
0,0,0,0,70,2,
16,0,2,0,0,0,
0,0,0,7,114,0,
16,0,10,0,0,0,
70,2,16,0,7,0,
0,0,70,2,16,0,
10,0,0,0,56,0,
0,10,114,0,16,0,
10,0,0,0,150,4,
16,0,10,0,0,0,
2,64,0,0,0,0,
0,62,0,0,0,62,
0,0,0,62,0,0,
0,0,50,0,0,12,
114,0,16,0,11,0,
0,0,70,2,16,0,
3,0,0,0,2,64,
0,0,0,0,192,64,
0,0,192,64,0,0,
192,64,0,0,0,0,
70,2,16,0,2,0,
0,0,0,0,0,7,
114,0,16,0,11,0,
0,0,70,2,16,0,
7,0,0,0,70,2,
16,0,11,0,0,0,
56,0,0,10,114,0,
16,0,11,0,0,0,
70,2,16,0,11,0,
0,0,2,64,0,0,
0,0,0,62,0,0,
0,62,0,0,0,62,
0,0,0,0,54,0,
0,5,130,0,16,0,
11,0,0,0,42,0,
16,0,10,0,0,0,
55,0,0,9,242,0,
16,0,11,0,0,0,
6,0,16,0,4,0,
0,0,38,9,16,0,
6,0,0,0,70,14,
16,0,11,0,0,0,
54,0,0,5,194,0,
16,0,6,0,0,0,
86,9,16,0,4,0,
0,0,54,0,0,5,
194,0,16,0,10,0,
0,0,6,4,16,0,
9,0,0,0,55,0,
0,9,242,0,16,0,
10,0,0,0,6,0,
16,0,4,0,0,0,
70,14,16,0,6,0,
0,0,70,14,16,0,
10,0,0,0,54,0,
0,5,18,0,16,0,
5,0,0,0,58,0,
16,0,4,0,0,0,
54,0,0,5,18,0,
16,0,8,0,0,0,
42,0,16,0,9,0,
0,0,55,0,0,9,
242,0,16,0,4,0,
0,0,6,0,16,0,
4,0,0,0,70,14,
16,0,5,0,0,0,
70,14,16,0,8,0,
0,0,18,0,0,1,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,5,0,
0,0,230,26,16,0,
1,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
8,0,0,0,70,16,
16,0,3,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,9,0,0,0,
70,16,16,0,6,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,12,0,
0,0,230,26,16,0,
7,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,16,0,0,10,
18,0,16,0,5,0,
0,0,70,2,16,0,
5,0,0,0,2,64,
0,0,0,0,128,71,
0,0,127,67,0,0,
128,63,0,0,0,0,
16,0,0,10,34,0,
16,0,5,0,0,0,
70,2,16,0,8,0,
0,0,2,64,0,0,
0,0,128,71,0,0,
127,67,0,0,128,63,
0,0,0,0,16,0,
0,10,66,0,16,0,
5,0,0,0,70,2,
16,0,12,0,0,0,
2,64,0,0,0,0,
128,71,0,0,127,67,
0,0,128,63,0,0,
0,0,16,0,0,10,
130,0,16,0,5,0,
0,0,70,2,16,0,
9,0,0,0,2,64,
0,0,0,0,128,71,
0,0,127,67,0,0,
128,63,0,0,0,0,
57,0,0,7,66,0,
16,0,1,0,0,0,
10,0,16,0,1,0,
0,0,42,0,16,0,
1,0,0,0,31,0,
4,3,42,0,16,0,
1,0,0,0,24,0,
0,7,66,0,16,0,
1,0,0,0,58,0,
16,0,0,0,0,0,
10,0,16,0,5,0,
0,0,24,0,0,7,
130,0,16,0,7,0,
0,0,58,0,16,0,
1,0,0,0,58,0,
16,0,5,0,0,0,
60,0,0,7,66,0,
16,0,1,0,0,0,
42,0,16,0,1,0,
0,0,58,0,16,0,
7,0,0,0,50,0,
0,12,114,0,16,0,
8,0,0,0,70,2,
16,0,2,0,0,0,
2,64,0,0,0,0,
64,64,0,0,64,64,
0,0,64,64,0,0,
0,0,70,2,16,0,
3,0,0,0,56,0,
0,10,114,0,16,0,
8,0,0,0,70,2,
16,0,8,0,0,0,
2,64,0,0,0,0,
128,62,0,0,128,62,
0,0,128,62,0,0,
0,0,0,0,0,7,
114,0,16,0,9,0,
0,0,70,2,16,0,
2,0,0,0,70,2,
16,0,3,0,0,0,
56,0,0,10,114,0,
16,0,9,0,0,0,
70,2,16,0,9,0,
0,0,2,64,0,0,
0,0,0,63,0,0,
0,63,0,0,0,63,
0,0,0,0,55,0,
0,9,114,0,16,0,
11,0,0,0,166,10,
16,0,1,0,0,0,
70,2,16,0,8,0,
0,0,70,2,16,0,
9,0,0,0,24,0,
0,7,66,0,16,0,
1,0,0,0,58,0,
16,0,1,0,0,0,
42,0,16,0,5,0,
0,0,24,0,0,7,
130,0,16,0,1,0,
0,0,58,0,16,0,
0,0,0,0,26,0,
16,0,5,0,0,0,
60,0,0,7,66,0,
16,0,1,0,0,0,
58,0,16,0,1,0,
0,0,42,0,16,0,
1,0,0,0,50,0,
0,12,114,0,16,0,
8,0,0,0,70,2,
16,0,2,0,0,0,
2,64,0,0,0,0,
64,64,0,0,64,64,
0,0,64,64,0,0,
0,0,38,9,16,0,
6,0,0,0,56,0,
0,10,114,0,16,0,
8,0,0,0,70,2,
16,0,8,0,0,0,
2,64,0,0,0,0,
128,62,0,0,128,62,
0,0,128,62,0,0,
0,0,0,0,0,7,
114,0,16,0,7,0,
0,0,38,9,16,0,
6,0,0,0,70,2,
16,0,7,0,0,0,
56,0,0,10,114,0,
16,0,7,0,0,0,
70,2,16,0,7,0,
0,0,2,64,0,0,
0,0,0,63,0,0,
0,63,0,0,0,63,
0,0,0,0,55,0,
0,9,114,0,16,0,
10,0,0,0,166,10,
16,0,1,0,0,0,
150,4,16,0,8,0,
0,0,150,4,16,0,
7,0,0,0,54,0,
0,5,130,0,16,0,
11,0,0,0,42,0,
16,0,10,0,0,0,
54,0,0,5,194,0,
16,0,10,0,0,0,
6,4,16,0,2,0,
0,0,54,0,0,5,
242,0,16,0,4,0,
0,0,38,9,16,0,
2,0,0,0,18,0,
0,1,24,0,0,7,
66,0,16,0,1,0,
0,0,26,0,16,0,
1,0,0,0,10,0,
16,0,1,0,0,0,
24,0,0,7,34,0,
16,0,1,0,0,0,
58,0,16,0,0,0,
0,0,26,0,16,0,
1,0,0,0,1,0,
0,7,66,0,16,0,
7,0,0,0,26,0,
16,0,1,0,0,0,
1,64,0,0,1,0,
0,0,54,0,0,5,
34,0,16,0,7,0,
0,0,1,64,0,0,
0,0,0,0,55,0,
0,12,98,0,16,0,
7,0,0,0,166,10,
16,0,1,0,0,0,
2,64,0,0,0,0,
0,0,1,0,0,0,
0,0,0,0,0,0,
0,0,86,6,16,0,
7,0,0,0,24,0,
0,7,34,0,16,0,
1,0,0,0,10,0,
16,0,1,0,0,0,
58,0,16,0,2,0,
0,0,55,0,0,9,
18,0,16,0,7,0,
0,0,42,0,16,0,
1,0,0,0,1,64,
0,0,2,0,0,0,
1,64,0,0,1,0,
0,0,24,0,0,7,
66,0,16,0,1,0,
0,0,58,0,16,0,
0,0,0,0,58,0,
16,0,2,0,0,0,
30,0,0,8,130,0,
16,0,7,0,0,0,
42,0,16,128,65,0,
0,0,1,0,0,0,
42,0,16,0,7,0,
0,0,55,0,0,9,
98,0,16,0,1,0,
0,0,86,5,16,0,
1,0,0,0,6,2,
16,0,7,0,0,0,
86,7,16,0,7,0,
0,0,33,0,0,10,
98,0,16,0,1,0,
0,0,2,64,0,0,
0,0,0,0,1,0,
0,0,1,0,0,0,
0,0,0,0,86,6,
16,0,1,0,0,0,
1,0,0,7,34,0,
16,0,1,0,0,0,
26,0,16,0,1,0,
0,0,1,64,0,0,
1,0,0,0,30,0,
0,7,34,0,16,0,
1,0,0,0,42,0,
16,0,1,0,0,0,
26,0,16,0,1,0,
0,0,24,0,0,7,
66,0,16,0,1,0,
0,0,10,0,16,0,
1,0,0,0,26,0,
16,0,5,0,0,0,
24,0,0,7,130,0,
16,0,1,0,0,0,
58,0,16,0,0,0,
0,0,26,0,16,0,
5,0,0,0,1,0,
0,7,66,0,16,0,
7,0,0,0,58,0,
16,0,1,0,0,0,
1,64,0,0,1,0,
0,0,54,0,0,5,
34,0,16,0,7,0,
0,0,1,64,0,0,
0,0,0,0,55,0,
0,12,98,0,16,0,
7,0,0,0,166,10,
16,0,1,0,0,0,
2,64,0,0,0,0,
0,0,1,0,0,0,
0,0,0,0,0,0,
0,0,86,6,16,0,
7,0,0,0,24,0,
0,7,130,0,16,0,
1,0,0,0,10,0,
16,0,1,0,0,0,
10,0,16,0,5,0,
0,0,55,0,0,9,
18,0,16,0,7,0,
0,0,42,0,16,0,
1,0,0,0,1,64,
0,0,2,0,0,0,
1,64,0,0,1,0,
0,0,24,0,0,7,
66,0,16,0,1,0,
0,0,58,0,16,0,
0,0,0,0,10,0,
16,0,5,0,0,0,
30,0,0,8,130,0,
16,0,7,0,0,0,
42,0,16,128,65,0,
0,0,1,0,0,0,
42,0,16,0,7,0,
0,0,55,0,0,9,
194,0,16,0,1,0,
0,0,246,15,16,0,
1,0,0,0,6,8,
16,0,7,0,0,0,
86,13,16,0,7,0,
0,0,33,0,0,10,
194,0,16,0,1,0,
0,0,2,64,0,0,
0,0,0,0,0,0,
0,0,1,0,0,0,
1,0,0,0,166,14,
16,0,1,0,0,0,
1,0,0,7,66,0,
16,0,1,0,0,0,
42,0,16,0,1,0,
0,0,1,64,0,0,
1,0,0,0,30,0,
0,7,66,0,16,0,
1,0,0,0,58,0,
16,0,1,0,0,0,
42,0,16,0,1,0,
0,0,30,0,0,7,
34,0,16,0,1,0,
0,0,42,0,16,0,
1,0,0,0,26,0,
16,0,1,0,0,0,
24,0,0,7,66,0,
16,0,1,0,0,0,
10,0,16,0,1,0,
0,0,42,0,16,0,
5,0,0,0,24,0,
0,7,130,0,16,0,
1,0,0,0,58,0,
16,0,0,0,0,0,
42,0,16,0,5,0,
0,0,1,0,0,7,
66,0,16,0,5,0,
0,0,58,0,16,0,
1,0,0,0,1,64,
0,0,1,0,0,0,
54,0,0,5,34,0,
16,0,5,0,0,0,
1,64,0,0,0,0,
0,0,55,0,0,12,
98,0,16,0,7,0,
0,0,166,10,16,0,
1,0,0,0,2,64,
0,0,0,0,0,0,
1,0,0,0,0,0,
0,0,0,0,0,0,
86,6,16,0,5,0,
0,0,24,0,0,7,
130,0,16,0,1,0,
0,0,10,0,16,0,
1,0,0,0,58,0,
16,0,5,0,0,0,
55,0,0,9,18,0,
16,0,7,0,0,0,
42,0,16,0,1,0,
0,0,1,64,0,0,
2,0,0,0,1,64,
0,0,1,0,0,0,
24,0,0,7,66,0,
16,0,1,0,0,0,
58,0,16,0,0,0,
0,0,58,0,16,0,
5,0,0,0,30,0,
0,8,130,0,16,0,
7,0,0,0,42,0,
16,128,65,0,0,0,
1,0,0,0,42,0,
16,0,7,0,0,0,
55,0,0,9,194,0,
16,0,1,0,0,0,
246,15,16,0,1,0,
0,0,6,8,16,0,
7,0,0,0,86,13,
16,0,7,0,0,0,
33,0,0,10,194,0,
16,0,1,0,0,0,
2,64,0,0,0,0,
0,0,0,0,0,0,
1,0,0,0,1,0,
0,0,166,14,16,0,
1,0,0,0,1,0,
0,7,66,0,16,0,
1,0,0,0,42,0,
16,0,1,0,0,0,
1,64,0,0,1,0,
0,0,30,0,0,7,
66,0,16,0,1,0,
0,0,58,0,16,0,
1,0,0,0,42,0,
16,0,1,0,0,0,
30,0,0,7,34,0,
16,0,1,0,0,0,
42,0,16,0,1,0,
0,0,26,0,16,0,
1,0,0,0,24,0,
0,7,66,0,16,0,
1,0,0,0,42,0,
16,0,0,0,0,0,
10,0,16,0,1,0,
0,0,24,0,0,7,
66,0,16,0,0,0,
0,0,42,0,16,0,
0,0,0,0,58,0,
16,0,0,0,0,0,
1,0,0,7,66,0,
16,0,5,0,0,0,
42,0,16,0,0,0,
0,0,1,64,0,0,
1,0,0,0,54,0,
0,5,34,0,16,0,
5,0,0,0,1,64,
0,0,0,0,0,0,
55,0,0,12,98,0,
16,0,5,0,0,0,
166,10,16,0,1,0,
0,0,2,64,0,0,
0,0,0,0,1,0,
0,0,0,0,0,0,
0,0,0,0,86,6,
16,0,5,0,0,0,
24,0,0,7,66,0,
16,0,0,0,0,0,
10,0,16,0,1,0,
0,0,58,0,16,0,
3,0,0,0,55,0,
0,9,18,0,16,0,
5,0,0,0,42,0,
16,0,1,0,0,0,
1,64,0,0,2,0,
0,0,1,64,0,0,
1,0,0,0,24,0,
0,7,130,0,16,0,
0,0,0,0,58,0,
16,0,0,0,0,0,
58,0,16,0,3,0,
0,0,30,0,0,8,
130,0,16,0,5,0,
0,0,58,0,16,128,
65,0,0,0,0,0,
0,0,42,0,16,0,
5,0,0,0,55,0,
0,9,194,0,16,0,
0,0,0,0,166,10,
16,0,0,0,0,0,
6,8,16,0,5,0,
0,0,86,13,16,0,
5,0,0,0,33,0,
0,10,194,0,16,0,
0,0,0,0,2,64,
0,0,0,0,0,0,
0,0,0,0,1,0,
0,0,1,0,0,0,
166,14,16,0,0,0,
0,0,1,0,0,7,
66,0,16,0,0,0,
0,0,42,0,16,0,
0,0,0,0,1,64,
0,0,1,0,0,0,
30,0,0,7,66,0,
16,0,0,0,0,0,
58,0,16,0,0,0,
0,0,42,0,16,0,
0,0,0,0,30,0,
0,7,66,0,16,0,
0,0,0,0,42,0,
16,0,0,0,0,0,
26,0,16,0,1,0,
0,0,34,0,0,7,
130,0,16,0,0,0,
0,0,1,64,0,0,
0,0,0,0,42,0,
16,0,0,0,0,0,
0,0,0,7,242,0,
16,0,1,0,0,0,
38,9,16,0,2,0,
0,0,38,9,16,0,
3,0,0,0,56,0,
0,10,242,0,16,0,
1,0,0,0,70,14,
16,0,1,0,0,0,
2,64,0,0,0,0,
0,63,0,0,0,63,
0,0,0,63,0,0,
0,63,34,0,0,7,
66,0,16,0,0,0,
0,0,42,0,16,0,
0,0,0,0,1,64,
0,0,0,0,0,0,
55,0,0,9,242,0,
16,0,3,0,0,0,
166,10,16,0,0,0,
0,0,230,5,16,0,
1,0,0,0,70,10,
16,0,6,0,0,0,
55,0,0,9,242,0,
16,0,11,0,0,0,
246,15,16,0,0,0,
0,0,38,9,16,0,
6,0,0,0,38,13,
16,0,3,0,0,0,
54,0,0,5,194,0,
16,0,6,0,0,0,
86,9,16,0,1,0,
0,0,54,0,0,5,
194,0,16,0,3,0,
0,0,6,4,16,0,
2,0,0,0,55,0,
0,9,242,0,16,0,
10,0,0,0,246,15,
16,0,0,0,0,0,
70,14,16,0,6,0,
0,0,70,14,16,0,
3,0,0,0,55,0,
0,9,242,0,16,0,
4,0,0,0,246,15,
16,0,0,0,0,0,
70,14,16,0,1,0,
0,0,38,9,16,0,
2,0,0,0,21,0,
0,1,21,0,0,1,
49,0,0,10,50,0,
16,0,0,0,0,0,
70,0,16,0,0,0,
0,0,2,64,0,0,
0,0,0,63,0,0,
0,63,0,0,0,0,
0,0,0,0,55,0,
0,9,18,0,16,0,
1,0,0,0,26,0,
16,0,0,0,0,0,
42,0,16,0,10,0,
0,0,58,0,16,0,
11,0,0,0,55,0,
0,9,34,0,16,0,
1,0,0,0,26,0,
16,0,0,0,0,0,
58,0,16,0,10,0,
0,0,10,0,16,0,
10,0,0,0,55,0,
0,9,66,0,16,0,
1,0,0,0,26,0,
16,0,0,0,0,0,
10,0,16,0,4,0,
0,0,26,0,16,0,
10,0,0,0,55,0,
0,9,226,0,16,0,
0,0,0,0,86,5,
16,0,0,0,0,0,
6,9,16,0,11,0,
0,0,86,14,16,0,
4,0,0,0,55,0,
0,9,114,32,16,0,
0,0,0,0,6,0,
16,0,0,0,0,0,
70,2,16,0,1,0,
0,0,150,7,16,0,
0,0,0,0,54,0,
0,5,130,32,16,0,
0,0,0,0,1,64,
0,0,0,0,128,63,
62,0,0,1,83,84,
65,84,148,0,0,0,
162,0,0,0,13,0,
0,0,0,0,0,0,
9,0,0,0,71,0,
0,0,17,0,0,0,
12,0,0,0,3,0,
0,0,2,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,12,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,15,0,
0,0,28,0,0,0,
1,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0
};

}

namespace RetroArch
{
class EagleShadersSupereagleShaderDef : public ShaderDef
{
public:
	EagleShadersSupereagleShaderDef() : ShaderDef{}
	{
		Name = "supereagle";
		VertexByteCode = RetroArchEagleShadersSupereagleShaderDefs::sVertexByteCode;
		VertexLength = sizeof(RetroArchEagleShadersSupereagleShaderDefs::sVertexByteCode);
		FragmentByteCode = RetroArchEagleShadersSupereagleShaderDefs::sFragmentByteCode;
		FragmentLength = sizeof(RetroArchEagleShadersSupereagleShaderDefs::sFragmentByteCode);
		Params.push_back(ShaderParam("MVP", 0, 0, 64, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("SourceSize", 0, 96, 16, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("OriginalSize", 0, 80, 16, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("OutputSize", 0, 64, 16, 0.000000f, 0.000000f, 0.000000f));
		Samplers.push_back(ShaderSampler("Source", 2));
/*
VertexSource = %*VERTEX_SOURCE*%;
*/
/*
FragmentSource = %*FRAGMENT_SOURCE*%;
*/
	}
};
}
