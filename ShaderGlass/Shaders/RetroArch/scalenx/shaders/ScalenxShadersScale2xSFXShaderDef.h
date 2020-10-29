/*
ShaderGlass shader scalenx-shaders\scale2xSFX imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/master/scalenx/shaders/scale2xSFX.slang
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArchScalenxShadersScale2xSFXShaderDefs
{
static const BYTE sVertexByteCode[] =
{
68,88,66,67,13,190,
177,88,97,38,73,79,
232,74,97,221,105,230,
81,242,1,0,0,0,
52,8,0,0,5,0,
0,0,52,0,0,0,
136,3,0,0,212,3,
0,0,164,4,0,0,
152,7,0,0,82,68,
69,70,76,3,0,0,
2,0,0,0,136,0,
0,0,2,0,0,0,
60,0,0,0,0,5,
254,255,0,129,0,0,
34,3,0,0,82,68,
49,49,60,0,0,0,
24,0,0,0,32,0,
0,0,40,0,0,0,
36,0,0,0,12,0,
0,0,0,0,0,0,
124,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
1,0,0,0,1,0,
0,0,128,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,1,0,
0,0,1,0,0,0,
0,0,0,0,85,66,
79,0,80,117,115,104,
0,171,171,171,124,0,
0,0,1,0,0,0,
184,0,0,0,64,0,
0,0,0,0,0,0,
0,0,0,0,128,0,
0,0,7,0,0,0,
24,1,0,0,64,0,
0,0,0,0,0,0,
0,0,0,0,224,0,
0,0,0,0,0,0,
64,0,0,0,2,0,
0,0,244,0,0,0,
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
235,0,0,0,48,2,
0,0,0,0,0,0,
16,0,0,0,2,0,
0,0,76,2,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,112,2,0,0,
16,0,0,0,16,0,
0,0,0,0,0,0,
76,2,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
132,2,0,0,32,0,
0,0,16,0,0,0,
0,0,0,0,76,2,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,150,2,
0,0,48,0,0,0,
4,0,0,0,0,0,
0,0,176,2,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,212,2,0,0,
52,0,0,0,4,0,
0,0,0,0,0,0,
232,2,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
12,3,0,0,56,0,
0,0,4,0,0,0,
0,0,0,0,232,2,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,23,3,
0,0,60,0,0,0,
4,0,0,0,0,0,
0,0,232,2,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,112,97,114,97,
109,115,95,83,111,117,
114,99,101,83,105,122,
101,0,102,108,111,97,
116,52,0,171,171,171,
1,0,3,0,1,0,
4,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,66,2,0,0,
112,97,114,97,109,115,
95,79,114,105,103,105,
110,97,108,83,105,122,
101,0,112,97,114,97,
109,115,95,79,117,116,
112,117,116,83,105,122,
101,0,112,97,114,97,
109,115,95,70,114,97,
109,101,67,111,117,110,
116,0,100,119,111,114,
100,0,171,171,0,0,
19,0,1,0,1,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
168,2,0,0,112,97,
114,97,109,115,95,89,
84,82,0,102,108,111,
97,116,0,171,171,171,
0,0,3,0,1,0,
1,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,223,2,0,0,
112,97,114,97,109,115,
95,85,84,82,0,112,
97,114,97,109,115,95,
86,84,82,0,77,105,
99,114,111,115,111,102,
116,32,40,82,41,32,
72,76,83,76,32,83,
104,97,100,101,114,32,
67,111,109,112,105,108,
101,114,32,49,48,46,
49,0,171,171,73,83,
71,78,68,0,0,0,
2,0,0,0,8,0,
0,0,56,0,0,0,
0,0,0,0,0,0,
0,0,3,0,0,0,
0,0,0,0,15,15,
0,0,56,0,0,0,
1,0,0,0,0,0,
0,0,3,0,0,0,
1,0,0,0,3,3,
0,0,84,69,88,67,
79,79,82,68,0,171,
171,171,79,83,71,78,
200,0,0,0,7,0,
0,0,8,0,0,0,
176,0,0,0,0,0,
0,0,0,0,0,0,
3,0,0,0,0,0,
0,0,3,12,0,0,
176,0,0,0,1,0,
0,0,0,0,0,0,
3,0,0,0,1,0,
0,0,15,0,0,0,
176,0,0,0,2,0,
0,0,0,0,0,0,
3,0,0,0,2,0,
0,0,15,0,0,0,
176,0,0,0,3,0,
0,0,0,0,0,0,
3,0,0,0,3,0,
0,0,15,0,0,0,
176,0,0,0,4,0,
0,0,0,0,0,0,
3,0,0,0,4,0,
0,0,15,0,0,0,
176,0,0,0,5,0,
0,0,0,0,0,0,
3,0,0,0,5,0,
0,0,15,0,0,0,
185,0,0,0,0,0,
0,0,1,0,0,0,
3,0,0,0,6,0,
0,0,15,0,0,0,
84,69,88,67,79,79,
82,68,0,83,86,95,
80,111,115,105,116,105,
111,110,0,171,171,171,
83,72,69,88,236,2,
0,0,80,0,1,0,
187,0,0,0,106,8,
0,1,89,0,0,4,
70,142,32,0,0,0,
0,0,4,0,0,0,
89,0,0,4,70,142,
32,0,1,0,0,0,
1,0,0,0,95,0,
0,3,242,16,16,0,
0,0,0,0,95,0,
0,3,50,16,16,0,
1,0,0,0,101,0,
0,3,50,32,16,0,
0,0,0,0,101,0,
0,3,242,32,16,0,
1,0,0,0,101,0,
0,3,242,32,16,0,
2,0,0,0,101,0,
0,3,242,32,16,0,
3,0,0,0,101,0,
0,3,242,32,16,0,
4,0,0,0,101,0,
0,3,242,32,16,0,
5,0,0,0,103,0,
0,4,242,32,16,0,
6,0,0,0,1,0,
0,0,104,0,0,2,
1,0,0,0,54,0,
0,5,50,32,16,0,
0,0,0,0,70,16,
16,0,1,0,0,0,
56,0,0,11,210,0,
16,0,0,0,0,0,
2,64,0,0,0,0,
128,191,0,0,0,0,
0,0,128,63,0,0,
128,191,166,142,32,0,
1,0,0,0,0,0,
0,0,54,0,0,5,
34,0,16,0,0,0,
0,0,1,64,0,0,
0,0,0,0,0,0,
0,7,242,32,16,0,
1,0,0,0,70,14,
16,0,0,0,0,0,
6,20,16,0,1,0,
0,0,0,0,0,7,
242,32,16,0,2,0,
0,0,70,6,16,0,
0,0,0,0,6,20,
16,0,1,0,0,0,
56,0,0,11,210,0,
16,0,0,0,0,0,
2,64,0,0,0,0,
128,191,0,0,0,0,
0,0,128,63,0,0,
128,63,166,142,32,0,
1,0,0,0,0,0,
0,0,54,0,0,5,
34,0,16,0,0,0,
0,0,1,64,0,0,
0,0,0,0,0,0,
0,7,242,32,16,0,
3,0,0,0,70,14,
16,0,0,0,0,0,
6,20,16,0,1,0,
0,0,54,0,0,8,
146,0,16,0,0,0,
0,0,2,64,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,56,0,
0,11,98,0,16,0,
0,0,0,0,2,64,
0,0,0,0,0,0,
0,0,0,192,0,0,
0,192,0,0,0,0,
246,142,32,0,1,0,
0,0,0,0,0,0,
0,0,0,7,242,32,
16,0,4,0,0,0,
70,14,16,0,0,0,
0,0,70,20,16,0,
1,0,0,0,56,0,
0,11,146,0,16,0,
0,0,0,0,2,64,
0,0,0,0,0,64,
0,0,0,0,0,0,
0,0,0,0,0,64,
166,142,32,0,1,0,
0,0,0,0,0,0,
54,0,0,5,34,0,
16,0,0,0,0,0,
1,64,0,0,0,0,
0,0,0,0,0,7,
242,32,16,0,5,0,
0,0,70,13,16,0,
0,0,0,0,70,20,
16,0,1,0,0,0,
56,0,0,8,242,0,
16,0,0,0,0,0,
86,21,16,0,0,0,
0,0,70,142,32,0,
0,0,0,0,1,0,
0,0,50,0,0,10,
242,0,16,0,0,0,
0,0,6,16,16,0,
0,0,0,0,70,142,
32,0,0,0,0,0,
0,0,0,0,70,14,
16,0,0,0,0,0,
50,0,0,10,242,0,
16,0,0,0,0,0,
166,26,16,0,0,0,
0,0,70,142,32,0,
0,0,0,0,2,0,
0,0,70,14,16,0,
0,0,0,0,50,0,
0,10,242,32,16,0,
6,0,0,0,246,31,
16,0,0,0,0,0,
70,142,32,0,0,0,
0,0,3,0,0,0,
70,14,16,0,0,0,
0,0,62,0,0,1,
83,84,65,84,148,0,
0,0,19,0,0,0,
1,0,0,0,0,0,
0,0,9,0,0,0,
13,0,0,0,0,0,
0,0,0,0,0,0,
1,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
5,0,0,0,0,0,
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
0,0,0,0,0,0
};


static const BYTE sFragmentByteCode[] =
{
68,88,66,67,234,34,
33,61,153,192,13,75,
220,145,82,197,215,118,
148,93,1,0,0,0,
60,30,0,0,5,0,
0,0,52,0,0,0,
64,3,0,0,236,3,
0,0,32,4,0,0,
160,29,0,0,82,68,
69,70,4,3,0,0,
1,0,0,0,184,0,
0,0,3,0,0,0,
60,0,0,0,0,5,
255,255,0,129,0,0,
218,2,0,0,82,68,
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
1,0,0,0,1,0,
0,0,0,0,0,0,
95,83,111,117,114,99,
101,95,115,97,109,112,
108,101,114,0,83,111,
117,114,99,101,0,80,
117,115,104,0,179,0,
0,0,7,0,0,0,
208,0,0,0,64,0,
0,0,0,0,0,0,
0,0,0,0,232,1,
0,0,0,0,0,0,
16,0,0,0,2,0,
0,0,4,2,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,40,2,0,0,
16,0,0,0,16,0,
0,0,0,0,0,0,
4,2,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
60,2,0,0,32,0,
0,0,16,0,0,0,
0,0,0,0,4,2,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,78,2,
0,0,48,0,0,0,
4,0,0,0,0,0,
0,0,104,2,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,140,2,0,0,
52,0,0,0,4,0,
0,0,0,0,0,0,
160,2,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
196,2,0,0,56,0,
0,0,4,0,0,0,
0,0,0,0,160,2,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,207,2,
0,0,60,0,0,0,
4,0,0,0,0,0,
0,0,160,2,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,112,97,114,97,
109,115,95,83,111,117,
114,99,101,83,105,122,
101,0,102,108,111,97,
116,52,0,171,171,171,
1,0,3,0,1,0,
4,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,250,1,0,0,
112,97,114,97,109,115,
95,79,114,105,103,105,
110,97,108,83,105,122,
101,0,112,97,114,97,
109,115,95,79,117,116,
112,117,116,83,105,122,
101,0,112,97,114,97,
109,115,95,70,114,97,
109,101,67,111,117,110,
116,0,100,119,111,114,
100,0,171,171,0,0,
19,0,1,0,1,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
96,2,0,0,112,97,
114,97,109,115,95,89,
84,82,0,102,108,111,
97,116,0,171,171,171,
0,0,3,0,1,0,
1,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,151,2,0,0,
112,97,114,97,109,115,
95,85,84,82,0,112,
97,114,97,109,115,95,
86,84,82,0,77,105,
99,114,111,115,111,102,
116,32,40,82,41,32,
72,76,83,76,32,83,
104,97,100,101,114,32,
67,111,109,112,105,108,
101,114,32,49,48,46,
49,0,171,171,73,83,
71,78,164,0,0,0,
6,0,0,0,8,0,
0,0,152,0,0,0,
0,0,0,0,0,0,
0,0,3,0,0,0,
0,0,0,0,3,3,
0,0,152,0,0,0,
1,0,0,0,0,0,
0,0,3,0,0,0,
1,0,0,0,15,15,
0,0,152,0,0,0,
2,0,0,0,0,0,
0,0,3,0,0,0,
2,0,0,0,15,15,
0,0,152,0,0,0,
3,0,0,0,0,0,
0,0,3,0,0,0,
3,0,0,0,15,15,
0,0,152,0,0,0,
4,0,0,0,0,0,
0,0,3,0,0,0,
4,0,0,0,15,15,
0,0,152,0,0,0,
5,0,0,0,0,0,
0,0,3,0,0,0,
5,0,0,0,15,15,
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
83,72,69,88,120,25,
0,0,80,0,0,0,
94,6,0,0,106,8,
0,1,89,0,0,4,
70,142,32,0,1,0,
0,0,1,0,0,0,
90,0,0,3,0,96,
16,0,2,0,0,0,
88,24,0,4,0,112,
16,0,2,0,0,0,
85,85,0,0,98,16,
0,3,50,16,16,0,
0,0,0,0,98,16,
0,3,242,16,16,0,
1,0,0,0,98,16,
0,3,242,16,16,0,
2,0,0,0,98,16,
0,3,242,16,16,0,
3,0,0,0,98,16,
0,3,242,16,16,0,
4,0,0,0,98,16,
0,3,242,16,16,0,
5,0,0,0,101,0,
0,3,242,32,16,0,
0,0,0,0,104,0,
0,2,13,0,0,0,
56,0,0,8,50,0,
16,0,0,0,0,0,
22,21,16,0,0,0,
0,0,22,133,32,0,
1,0,0,0,0,0,
0,0,26,0,0,5,
50,0,16,0,0,0,
0,0,70,0,16,0,
0,0,0,0,0,0,
0,7,50,0,16,0,
0,0,0,0,70,0,
16,0,0,0,0,0,
70,0,16,0,0,0,
0,0,65,0,0,5,
50,0,16,0,0,0,
0,0,70,0,16,0,
0,0,0,0,24,0,
0,10,50,0,16,0,
0,0,0,0,70,0,
16,0,0,0,0,0,
2,64,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
1,0,0,0,70,16,
16,0,4,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,16,0,
0,10,66,0,16,0,
0,0,0,0,70,2,
16,0,1,0,0,0,
2,64,0,0,135,22,
153,62,162,69,22,63,
213,120,233,61,0,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
2,0,0,0,198,16,
16,0,1,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,16,0,
0,10,130,0,16,0,
0,0,0,0,70,2,
16,0,2,0,0,0,
2,64,0,0,135,22,
153,62,162,69,22,63,
213,120,233,61,0,0,
0,0,24,0,0,7,
130,0,16,0,1,0,
0,0,42,0,16,0,
0,0,0,0,58,0,
16,0,0,0,0,0,
16,0,0,10,130,0,
16,0,2,0,0,0,
70,2,16,0,1,0,
0,0,2,64,0,0,
33,201,44,190,111,155,
169,190,0,0,0,63,
0,0,0,0,16,0,
0,10,18,0,16,0,
1,0,0,0,70,2,
16,0,1,0,0,0,
2,64,0,0,0,0,
0,63,70,94,214,190,
232,134,166,189,0,0,
0,0,16,0,0,10,
34,0,16,0,1,0,
0,0,70,2,16,0,
2,0,0,0,2,64,
0,0,33,201,44,190,
111,155,169,190,0,0,
0,63,0,0,0,0,
16,0,0,10,66,0,
16,0,1,0,0,0,
70,2,16,0,2,0,
0,0,2,64,0,0,
0,0,0,63,70,94,
214,190,232,134,166,189,
0,0,0,0,24,0,
0,7,18,0,16,0,
2,0,0,0,58,0,
16,0,2,0,0,0,
26,0,16,0,1,0,
0,0,1,0,0,7,
130,0,16,0,1,0,
0,0,58,0,16,0,
1,0,0,0,10,0,
16,0,2,0,0,0,
24,0,0,7,18,0,
16,0,2,0,0,0,
10,0,16,0,1,0,
0,0,42,0,16,0,
1,0,0,0,1,0,
0,7,130,0,16,0,
1,0,0,0,58,0,
16,0,1,0,0,0,
10,0,16,0,2,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
2,0,0,0,214,21,
16,0,2,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,16,0,
0,10,18,0,16,0,
3,0,0,0,70,2,
16,0,2,0,0,0,
2,64,0,0,135,22,
153,62,162,69,22,63,
213,120,233,61,0,0,
0,0,24,0,0,7,
34,0,16,0,3,0,
0,0,58,0,16,0,
0,0,0,0,10,0,
16,0,3,0,0,0,
16,0,0,10,66,0,
16,0,3,0,0,0,
70,2,16,0,2,0,
0,0,2,64,0,0,
33,201,44,190,111,155,
169,190,0,0,0,63,
0,0,0,0,24,0,
0,7,130,0,16,0,
3,0,0,0,26,0,
16,0,1,0,0,0,
42,0,16,0,3,0,
0,0,1,0,0,7,
34,0,16,0,3,0,
0,0,58,0,16,0,
3,0,0,0,26,0,
16,0,3,0,0,0,
16,0,0,10,130,0,
16,0,3,0,0,0,
70,2,16,0,2,0,
0,0,2,64,0,0,
0,0,0,63,70,94,
214,190,232,134,166,189,
0,0,0,0,24,0,
0,7,18,0,16,0,
4,0,0,0,42,0,
16,0,1,0,0,0,
58,0,16,0,3,0,
0,0,1,0,0,7,
34,0,16,0,3,0,
0,0,26,0,16,0,
3,0,0,0,10,0,
16,0,4,0,0,0,
59,0,0,5,18,0,
16,0,4,0,0,0,
26,0,16,0,3,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,226,0,16,0,
4,0,0,0,230,26,
16,0,1,0,0,0,
54,121,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,16,0,
0,10,18,0,16,0,
5,0,0,0,150,7,
16,0,4,0,0,0,
2,64,0,0,135,22,
153,62,162,69,22,63,
213,120,233,61,0,0,
0,0,24,0,0,7,
34,0,16,0,5,0,
0,0,10,0,16,0,
3,0,0,0,10,0,
16,0,5,0,0,0,
16,0,0,10,66,0,
16,0,5,0,0,0,
150,7,16,0,4,0,
0,0,2,64,0,0,
33,201,44,190,111,155,
169,190,0,0,0,63,
0,0,0,0,16,0,
0,10,34,0,16,0,
4,0,0,0,150,7,
16,0,4,0,0,0,
2,64,0,0,0,0,
0,63,70,94,214,190,
232,134,166,189,0,0,
0,0,24,0,0,7,
66,0,16,0,4,0,
0,0,42,0,16,0,
3,0,0,0,42,0,
16,0,5,0,0,0,
1,0,0,7,66,0,
16,0,4,0,0,0,
42,0,16,0,4,0,
0,0,26,0,16,0,
5,0,0,0,24,0,
0,7,130,0,16,0,
4,0,0,0,58,0,
16,0,3,0,0,0,
26,0,16,0,4,0,
0,0,1,0,0,7,
66,0,16,0,4,0,
0,0,58,0,16,0,
4,0,0,0,42,0,
16,0,4,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,6,0,
0,0,198,16,16,0,
3,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,16,0,0,10,
130,0,16,0,4,0,
0,0,70,2,16,0,
6,0,0,0,2,64,
0,0,135,22,153,62,
162,69,22,63,213,120,
233,61,0,0,0,0,
24,0,0,7,34,0,
16,0,5,0,0,0,
10,0,16,0,3,0,
0,0,58,0,16,0,
4,0,0,0,16,0,
0,10,130,0,16,0,
5,0,0,0,70,2,
16,0,6,0,0,0,
2,64,0,0,33,201,
44,190,111,155,169,190,
0,0,0,63,0,0,
0,0,16,0,0,10,
18,0,16,0,6,0,
0,0,70,2,16,0,
6,0,0,0,2,64,
0,0,0,0,0,63,
70,94,214,190,232,134,
166,189,0,0,0,0,
24,0,0,7,34,0,
16,0,6,0,0,0,
42,0,16,0,3,0,
0,0,58,0,16,0,
5,0,0,0,1,0,
0,7,34,0,16,0,
5,0,0,0,26,0,
16,0,5,0,0,0,
26,0,16,0,6,0,
0,0,24,0,0,7,
34,0,16,0,6,0,
0,0,58,0,16,0,
3,0,0,0,10,0,
16,0,6,0,0,0,
1,0,0,7,34,0,
16,0,5,0,0,0,
26,0,16,0,5,0,
0,0,26,0,16,0,
6,0,0,0,60,0,
0,7,34,0,16,0,
6,0,0,0,42,0,
16,0,4,0,0,0,
26,0,16,0,5,0,
0,0,59,0,0,5,
66,0,16,0,4,0,
0,0,42,0,16,0,
4,0,0,0,59,0,
0,5,34,0,16,0,
5,0,0,0,26,0,
16,0,5,0,0,0,
60,0,0,7,18,0,
16,0,4,0,0,0,
10,0,16,0,4,0,
0,0,26,0,16,0,
6,0,0,0,60,0,
0,7,130,0,16,0,
1,0,0,0,58,0,
16,0,1,0,0,0,
10,0,16,0,4,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
7,0,0,0,230,26,
16,0,4,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,16,0,
0,10,18,0,16,0,
4,0,0,0,70,2,
16,0,7,0,0,0,
2,64,0,0,135,22,
153,62,162,69,22,63,
213,120,233,61,0,0,
0,0,24,0,0,7,
130,0,16,0,0,0,
0,0,58,0,16,0,
0,0,0,0,10,0,
16,0,4,0,0,0,
24,0,0,7,18,0,
16,0,4,0,0,0,
10,0,16,0,4,0,
0,0,58,0,16,0,
4,0,0,0,16,0,
0,10,66,0,16,0,
6,0,0,0,70,2,
16,0,7,0,0,0,
2,64,0,0,33,201,
44,190,111,155,169,190,
0,0,0,63,0,0,
0,0,16,0,0,10,
130,0,16,0,6,0,
0,0,70,2,16,0,
7,0,0,0,2,64,
0,0,0,0,0,63,
70,94,214,190,232,134,
166,189,0,0,0,0,
24,0,0,7,34,0,
16,0,1,0,0,0,
26,0,16,0,1,0,
0,0,42,0,16,0,
6,0,0,0,24,0,
0,7,66,0,16,0,
6,0,0,0,58,0,
16,0,5,0,0,0,
42,0,16,0,6,0,
0,0,1,0,0,7,
18,0,16,0,4,0,
0,0,10,0,16,0,
4,0,0,0,42,0,
16,0,6,0,0,0,
1,0,0,7,130,0,
16,0,0,0,0,0,
58,0,16,0,0,0,
0,0,26,0,16,0,
1,0,0,0,24,0,
0,7,34,0,16,0,
1,0,0,0,42,0,
16,0,1,0,0,0,
58,0,16,0,6,0,
0,0,24,0,0,7,
66,0,16,0,1,0,
0,0,58,0,16,0,
6,0,0,0,10,0,
16,0,6,0,0,0,
1,0,0,7,66,0,
16,0,1,0,0,0,
42,0,16,0,1,0,
0,0,10,0,16,0,
4,0,0,0,1,0,
0,7,130,0,16,0,
0,0,0,0,58,0,
16,0,0,0,0,0,
26,0,16,0,1,0,
0,0,60,0,0,7,
130,0,16,0,0,0,
0,0,58,0,16,0,
0,0,0,0,58,0,
16,0,1,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,7,0,
0,0,214,21,16,0,
1,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,16,0,0,10,
34,0,16,0,1,0,
0,0,70,2,16,0,
7,0,0,0,2,64,
0,0,135,22,153,62,
162,69,22,63,213,120,
233,61,0,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,8,0,
0,0,230,26,16,0,
2,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,16,0,0,10,
130,0,16,0,1,0,
0,0,70,2,16,0,
8,0,0,0,2,64,
0,0,135,22,153,62,
162,69,22,63,213,120,
233,61,0,0,0,0,
57,0,0,7,18,0,
16,0,4,0,0,0,
58,0,16,0,1,0,
0,0,26,0,16,0,
1,0,0,0,16,0,
0,10,66,0,16,0,
6,0,0,0,70,2,
16,0,7,0,0,0,
2,64,0,0,33,201,
44,190,111,155,169,190,
0,0,0,63,0,0,
0,0,16,0,0,10,
130,0,16,0,6,0,
0,0,70,2,16,0,
8,0,0,0,2,64,
0,0,33,201,44,190,
111,155,169,190,0,0,
0,63,0,0,0,0,
57,0,0,7,130,0,
16,0,7,0,0,0,
58,0,16,0,6,0,
0,0,42,0,16,0,
6,0,0,0,60,0,
0,7,18,0,16,0,
4,0,0,0,10,0,
16,0,4,0,0,0,
58,0,16,0,7,0,
0,0,16,0,0,10,
130,0,16,0,7,0,
0,0,70,2,16,0,
7,0,0,0,2,64,
0,0,0,0,0,63,
70,94,214,190,232,134,
166,189,0,0,0,0,
16,0,0,10,130,0,
16,0,8,0,0,0,
70,2,16,0,8,0,
0,0,2,64,0,0,
0,0,0,63,70,94,
214,190,232,134,166,189,
0,0,0,0,57,0,
0,7,18,0,16,0,
9,0,0,0,58,0,
16,0,7,0,0,0,
58,0,16,0,8,0,
0,0,60,0,0,7,
18,0,16,0,4,0,
0,0,10,0,16,0,
4,0,0,0,10,0,
16,0,9,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,9,0,
0,0,198,16,16,0,
2,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,16,0,0,10,
130,0,16,0,9,0,
0,0,70,2,16,0,
9,0,0,0,2,64,
0,0,135,22,153,62,
162,69,22,63,213,120,
233,61,0,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,10,0,
0,0,214,21,16,0,
3,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,16,0,0,10,
130,0,16,0,10,0,
0,0,70,2,16,0,
10,0,0,0,2,64,
0,0,135,22,153,62,
162,69,22,63,213,120,
233,61,0,0,0,0,
57,0,0,7,18,0,
16,0,11,0,0,0,
58,0,16,0,9,0,
0,0,58,0,16,0,
10,0,0,0,16,0,
0,10,34,0,16,0,
11,0,0,0,70,2,
16,0,9,0,0,0,
2,64,0,0,33,201,
44,190,111,155,169,190,
0,0,0,63,0,0,
0,0,16,0,0,10,
66,0,16,0,11,0,
0,0,70,2,16,0,
10,0,0,0,2,64,
0,0,33,201,44,190,
111,155,169,190,0,0,
0,63,0,0,0,0,
57,0,0,7,130,0,
16,0,11,0,0,0,
42,0,16,0,11,0,
0,0,26,0,16,0,
11,0,0,0,60,0,
0,7,18,0,16,0,
11,0,0,0,58,0,
16,0,11,0,0,0,
10,0,16,0,11,0,
0,0,16,0,0,10,
130,0,16,0,11,0,
0,0,70,2,16,0,
9,0,0,0,2,64,
0,0,0,0,0,63,
70,94,214,190,232,134,
166,189,0,0,0,0,
16,0,0,10,18,0,
16,0,12,0,0,0,
70,2,16,0,10,0,
0,0,2,64,0,0,
0,0,0,63,70,94,
214,190,232,134,166,189,
0,0,0,0,57,0,
0,7,34,0,16,0,
12,0,0,0,58,0,
16,0,11,0,0,0,
10,0,16,0,12,0,
0,0,60,0,0,7,
18,0,16,0,11,0,
0,0,10,0,16,0,
11,0,0,0,26,0,
16,0,12,0,0,0,
1,0,0,7,18,0,
16,0,4,0,0,0,
10,0,16,0,4,0,
0,0,10,0,16,0,
11,0,0,0,24,0,
0,7,18,0,16,0,
11,0,0,0,26,0,
16,0,1,0,0,0,
58,0,16,0,9,0,
0,0,24,0,0,7,
34,0,16,0,12,0,
0,0,42,0,16,0,
6,0,0,0,26,0,
16,0,11,0,0,0,
1,0,0,7,18,0,
16,0,11,0,0,0,
10,0,16,0,11,0,
0,0,26,0,16,0,
12,0,0,0,24,0,
0,7,34,0,16,0,
12,0,0,0,58,0,
16,0,7,0,0,0,
58,0,16,0,11,0,
0,0,1,0,0,7,
18,0,16,0,11,0,
0,0,10,0,16,0,
11,0,0,0,26,0,
16,0,12,0,0,0,
1,0,0,7,18,0,
16,0,11,0,0,0,
10,0,16,0,4,0,
0,0,10,0,16,0,
11,0,0,0,1,0,
0,7,130,0,16,0,
0,0,0,0,58,0,
16,0,0,0,0,0,
10,0,16,0,11,0,
0,0,0,0,0,7,
226,0,16,0,12,0,
0,0,6,9,16,0,
7,0,0,0,6,9,
16,0,9,0,0,0,
0,0,0,7,114,0,
16,0,7,0,0,0,
70,2,16,0,7,0,
0,0,70,2,16,0,
8,0,0,0,0,0,
0,7,114,0,16,0,
8,0,0,0,70,2,
16,0,8,0,0,0,
70,2,16,0,10,0,
0,0,0,0,0,7,
114,0,16,0,9,0,
0,0,70,2,16,0,
9,0,0,0,70,2,
16,0,10,0,0,0,
56,0,0,10,114,0,
16,0,9,0,0,0,
70,2,16,0,9,0,
0,0,2,64,0,0,
0,0,0,63,0,0,
0,63,0,0,0,63,
0,0,0,0,56,0,
0,10,114,0,16,0,
8,0,0,0,70,2,
16,0,8,0,0,0,
2,64,0,0,0,0,
0,63,0,0,0,63,
0,0,0,63,0,0,
0,0,56,0,0,10,
114,0,16,0,7,0,
0,0,70,2,16,0,
7,0,0,0,2,64,
0,0,0,0,0,63,
0,0,0,63,0,0,
0,63,0,0,0,0,
56,0,0,10,114,0,
16,0,10,0,0,0,
150,7,16,0,12,0,
0,0,2,64,0,0,
0,0,0,63,0,0,
0,63,0,0,0,63,
0,0,0,0,55,0,
0,9,114,0,16,0,
10,0,0,0,246,15,
16,0,0,0,0,0,
70,2,16,0,10,0,
0,0,70,2,16,0,
2,0,0,0,57,0,
0,7,130,0,16,0,
0,0,0,0,26,0,
16,0,1,0,0,0,
58,0,16,0,9,0,
0,0,24,0,0,7,
34,0,16,0,1,0,
0,0,58,0,16,0,
1,0,0,0,26,0,
16,0,1,0,0,0,
24,0,0,7,130,0,
16,0,9,0,0,0,
58,0,16,0,9,0,
0,0,58,0,16,0,
10,0,0,0,57,0,
0,7,18,0,16,0,
11,0,0,0,42,0,
16,0,6,0,0,0,
26,0,16,0,11,0,
0,0,24,0,0,7,
66,0,16,0,6,0,
0,0,58,0,16,0,
6,0,0,0,42,0,
16,0,6,0,0,0,
1,0,0,7,34,0,
16,0,1,0,0,0,
26,0,16,0,1,0,
0,0,42,0,16,0,
6,0,0,0,24,0,
0,7,66,0,16,0,
6,0,0,0,42,0,
16,0,11,0,0,0,
26,0,16,0,11,0,
0,0,1,0,0,7,
66,0,16,0,6,0,
0,0,42,0,16,0,
6,0,0,0,58,0,
16,0,9,0,0,0,
60,0,0,7,130,0,
16,0,0,0,0,0,
58,0,16,0,0,0,
0,0,10,0,16,0,
11,0,0,0,57,0,
0,7,130,0,16,0,
9,0,0,0,58,0,
16,0,7,0,0,0,
58,0,16,0,11,0,
0,0,24,0,0,7,
130,0,16,0,7,0,
0,0,58,0,16,0,
7,0,0,0,58,0,
16,0,8,0,0,0,
1,0,0,7,34,0,
16,0,1,0,0,0,
26,0,16,0,1,0,
0,0,58,0,16,0,
7,0,0,0,24,0,
0,7,130,0,16,0,
7,0,0,0,58,0,
16,0,11,0,0,0,
10,0,16,0,12,0,
0,0,1,0,0,7,
66,0,16,0,6,0,
0,0,42,0,16,0,
6,0,0,0,58,0,
16,0,7,0,0,0,
60,0,0,7,130,0,
16,0,0,0,0,0,
58,0,16,0,0,0,
0,0,58,0,16,0,
9,0,0,0,57,0,
0,7,130,0,16,0,
7,0,0,0,58,0,
16,0,1,0,0,0,
58,0,16,0,10,0,
0,0,24,0,0,7,
130,0,16,0,1,0,
0,0,58,0,16,0,
1,0,0,0,58,0,
16,0,10,0,0,0,
57,0,0,7,130,0,
16,0,9,0,0,0,
58,0,16,0,6,0,
0,0,42,0,16,0,
11,0,0,0,24,0,
0,7,130,0,16,0,
6,0,0,0,58,0,
16,0,6,0,0,0,
42,0,16,0,11,0,
0,0,1,0,0,7,
130,0,16,0,1,0,
0,0,58,0,16,0,
1,0,0,0,58,0,
16,0,6,0,0,0,
60,0,0,7,130,0,
16,0,6,0,0,0,
58,0,16,0,7,0,
0,0,58,0,16,0,
9,0,0,0,57,0,
0,7,130,0,16,0,
7,0,0,0,58,0,
16,0,8,0,0,0,
10,0,16,0,12,0,
0,0,24,0,0,7,
130,0,16,0,8,0,
0,0,58,0,16,0,
8,0,0,0,10,0,
16,0,12,0,0,0,
1,0,0,7,130,0,
16,0,1,0,0,0,
58,0,16,0,1,0,
0,0,58,0,16,0,
8,0,0,0,1,0,
0,7,130,0,16,0,
1,0,0,0,10,0,
16,0,4,0,0,0,
58,0,16,0,1,0,
0,0,60,0,0,7,
18,0,16,0,4,0,
0,0,58,0,16,0,
6,0,0,0,58,0,
16,0,7,0,0,0,
1,0,0,7,130,0,
16,0,0,0,0,0,
58,0,16,0,0,0,
0,0,10,0,16,0,
4,0,0,0,1,0,
0,7,34,0,16,0,
1,0,0,0,58,0,
16,0,0,0,0,0,
26,0,16,0,1,0,
0,0,1,0,0,7,
130,0,16,0,0,0,
0,0,58,0,16,0,
0,0,0,0,42,0,
16,0,6,0,0,0,
24,0,0,7,66,0,
16,0,0,0,0,0,
42,0,16,0,0,0,
0,0,10,0,16,0,
5,0,0,0,24,0,
0,7,130,0,16,0,
2,0,0,0,58,0,
16,0,2,0,0,0,
42,0,16,0,5,0,
0,0,1,0,0,7,
66,0,16,0,0,0,
0,0,42,0,16,0,
0,0,0,0,58,0,
16,0,2,0,0,0,
24,0,0,7,18,0,
16,0,1,0,0,0,
10,0,16,0,1,0,
0,0,26,0,16,0,
4,0,0,0,1,0,
0,7,66,0,16,0,
0,0,0,0,42,0,
16,0,0,0,0,0,
10,0,16,0,1,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
11,0,0,0,230,26,
16,0,3,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,16,0,
0,10,18,0,16,0,
1,0,0,0,70,2,
16,0,11,0,0,0,
2,64,0,0,135,22,
153,62,162,69,22,63,
213,120,233,61,0,0,
0,0,24,0,0,7,
130,0,16,0,2,0,
0,0,10,0,16,0,
1,0,0,0,10,0,
16,0,3,0,0,0,
16,0,0,10,18,0,
16,0,3,0,0,0,
70,2,16,0,11,0,
0,0,2,64,0,0,
33,201,44,190,111,155,
169,190,0,0,0,63,
0,0,0,0,16,0,
0,10,18,0,16,0,
4,0,0,0,70,2,
16,0,11,0,0,0,
2,64,0,0,0,0,
0,63,70,94,214,190,
232,134,166,189,0,0,
0,0,24,0,0,7,
66,0,16,0,3,0,
0,0,10,0,16,0,
3,0,0,0,42,0,
16,0,3,0,0,0,
1,0,0,7,130,0,
16,0,2,0,0,0,
58,0,16,0,2,0,
0,0,42,0,16,0,
3,0,0,0,24,0,
0,7,66,0,16,0,
3,0,0,0,58,0,
16,0,3,0,0,0,
10,0,16,0,4,0,
0,0,1,0,0,7,
130,0,16,0,2,0,
0,0,58,0,16,0,
2,0,0,0,42,0,
16,0,3,0,0,0,
60,0,0,7,34,0,
16,0,3,0,0,0,
58,0,16,0,2,0,
0,0,26,0,16,0,
3,0,0,0,59,0,
0,5,130,0,16,0,
2,0,0,0,58,0,
16,0,2,0,0,0,
60,0,0,7,130,0,
16,0,2,0,0,0,
26,0,16,0,6,0,
0,0,58,0,16,0,
2,0,0,0,60,0,
0,7,66,0,16,0,
3,0,0,0,26,0,
16,0,3,0,0,0,
42,0,16,0,4,0,
0,0,60,0,0,7,
34,0,16,0,3,0,
0,0,26,0,16,0,
3,0,0,0,26,0,
16,0,5,0,0,0,
60,0,0,7,66,0,
16,0,1,0,0,0,
42,0,16,0,1,0,
0,0,26,0,16,0,
3,0,0,0,60,0,
0,7,66,0,16,0,
0,0,0,0,42,0,
16,0,0,0,0,0,
42,0,16,0,3,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,226,0,16,0,
3,0,0,0,70,16,
16,0,5,0,0,0,
54,121,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,16,0,
0,10,66,0,16,0,
4,0,0,0,150,7,
16,0,3,0,0,0,
2,64,0,0,135,22,
153,62,162,69,22,63,
213,120,233,61,0,0,
0,0,24,0,0,7,
18,0,16,0,5,0,
0,0,42,0,16,0,
4,0,0,0,10,0,
16,0,5,0,0,0,
24,0,0,7,66,0,
16,0,4,0,0,0,
10,0,16,0,1,0,
0,0,42,0,16,0,
4,0,0,0,16,0,
0,10,34,0,16,0,
5,0,0,0,150,7,
16,0,3,0,0,0,
2,64,0,0,33,201,
44,190,111,155,169,190,
0,0,0,63,0,0,
0,0,16,0,0,10,
34,0,16,0,3,0,
0,0,150,7,16,0,
3,0,0,0,2,64,
0,0,0,0,0,63,
70,94,214,190,232,134,
166,189,0,0,0,0,
24,0,0,7,66,0,
16,0,3,0,0,0,
26,0,16,0,5,0,
0,0,42,0,16,0,
5,0,0,0,24,0,
0,7,130,0,16,0,
3,0,0,0,10,0,
16,0,3,0,0,0,
26,0,16,0,5,0,
0,0,1,0,0,7,
130,0,16,0,3,0,
0,0,58,0,16,0,
3,0,0,0,42,0,
16,0,4,0,0,0,
1,0,0,7,66,0,
16,0,3,0,0,0,
42,0,16,0,3,0,
0,0,10,0,16,0,
5,0,0,0,24,0,
0,7,34,0,16,0,
4,0,0,0,26,0,
16,0,3,0,0,0,
26,0,16,0,4,0,
0,0,24,0,0,7,
34,0,16,0,3,0,
0,0,26,0,16,0,
3,0,0,0,10,0,
16,0,4,0,0,0,
1,0,0,7,34,0,
16,0,3,0,0,0,
26,0,16,0,3,0,
0,0,58,0,16,0,
3,0,0,0,60,0,
0,7,130,0,16,0,
2,0,0,0,58,0,
16,0,2,0,0,0,
26,0,16,0,3,0,
0,0,1,0,0,7,
34,0,16,0,3,0,
0,0,42,0,16,0,
3,0,0,0,26,0,
16,0,4,0,0,0,
60,0,0,7,66,0,
16,0,0,0,0,0,
42,0,16,0,0,0,
0,0,26,0,16,0,
3,0,0,0,1,0,
0,7,66,0,16,0,
0,0,0,0,42,0,
16,0,0,0,0,0,
26,0,16,0,1,0,
0,0,55,0,0,9,
226,0,16,0,3,0,
0,0,166,10,16,0,
0,0,0,0,6,9,
16,0,7,0,0,0,
6,9,16,0,2,0,
0,0,55,0,0,9,
226,0,16,0,3,0,
0,0,86,5,16,0,
0,0,0,0,6,9,
16,0,10,0,0,0,
86,14,16,0,3,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
5,0,0,0,230,26,
16,0,5,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,16,0,
0,10,66,0,16,0,
0,0,0,0,70,2,
16,0,5,0,0,0,
2,64,0,0,135,22,
153,62,162,69,22,63,
213,120,233,61,0,0,
0,0,24,0,0,7,
34,0,16,0,1,0,
0,0,42,0,16,0,
0,0,0,0,58,0,
16,0,4,0,0,0,
24,0,0,7,66,0,
16,0,0,0,0,0,
42,0,16,0,0,0,
0,0,10,0,16,0,
1,0,0,0,16,0,
0,10,18,0,16,0,
1,0,0,0,70,2,
16,0,5,0,0,0,
2,64,0,0,33,201,
44,190,111,155,169,190,
0,0,0,63,0,0,
0,0,16,0,0,10,
34,0,16,0,4,0,
0,0,70,2,16,0,
5,0,0,0,2,64,
0,0,0,0,0,63,
70,94,214,190,232,134,
166,189,0,0,0,0,
24,0,0,7,66,0,
16,0,4,0,0,0,
10,0,16,0,1,0,
0,0,58,0,16,0,
5,0,0,0,24,0,
0,7,18,0,16,0,
1,0,0,0,10,0,
16,0,1,0,0,0,
10,0,16,0,3,0,
0,0,1,0,0,7,
66,0,16,0,0,0,
0,0,42,0,16,0,
0,0,0,0,10,0,
16,0,1,0,0,0,
1,0,0,7,18,0,
16,0,1,0,0,0,
26,0,16,0,1,0,
0,0,42,0,16,0,
4,0,0,0,24,0,
0,7,34,0,16,0,
1,0,0,0,26,0,
16,0,4,0,0,0,
10,0,16,0,6,0,
0,0,24,0,0,7,
18,0,16,0,3,0,
0,0,26,0,16,0,
4,0,0,0,10,0,
16,0,4,0,0,0,
1,0,0,7,66,0,
16,0,0,0,0,0,
42,0,16,0,0,0,
0,0,10,0,16,0,
3,0,0,0,60,0,
0,7,66,0,16,0,
0,0,0,0,42,0,
16,0,0,0,0,0,
58,0,16,0,2,0,
0,0,1,0,0,7,
66,0,16,0,0,0,
0,0,42,0,16,0,
0,0,0,0,58,0,
16,0,1,0,0,0,
55,0,0,9,114,0,
16,0,4,0,0,0,
166,10,16,0,0,0,
0,0,70,2,16,0,
8,0,0,0,70,2,
16,0,2,0,0,0,
1,0,0,7,66,0,
16,0,0,0,0,0,
26,0,16,0,1,0,
0,0,10,0,16,0,
1,0,0,0,60,0,
0,7,66,0,16,0,
0,0,0,0,42,0,
16,0,0,0,0,0,
42,0,16,0,1,0,
0,0,1,0,0,7,
66,0,16,0,0,0,
0,0,42,0,16,0,
0,0,0,0,58,0,
16,0,0,0,0,0,
55,0,0,9,114,0,
16,0,1,0,0,0,
166,10,16,0,0,0,
0,0,70,2,16,0,
9,0,0,0,70,2,
16,0,2,0,0,0,
55,0,0,9,226,0,
16,0,0,0,0,0,
86,5,16,0,0,0,
0,0,6,9,16,0,
1,0,0,0,6,9,
16,0,4,0,0,0,
55,0,0,9,114,32,
16,0,0,0,0,0,
6,0,16,0,0,0,
0,0,150,7,16,0,
3,0,0,0,150,7,
16,0,0,0,0,0,
54,0,0,5,130,32,
16,0,0,0,0,0,
1,64,0,0,0,0,
128,63,62,0,0,1,
83,84,65,84,148,0,
0,0,202,0,0,0,
13,0,0,0,0,0,
0,0,7,0,0,0,
112,0,0,0,0,0,
0,0,68,0,0,0,
1,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,13,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
1,0,0,0,7,0,
0,0,2,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0
};

}

namespace RetroArch
{
class ScalenxShadersScale2xSFXShaderDef : public ShaderDef
{
public:
	ScalenxShadersScale2xSFXShaderDef() : ShaderDef{}
	{
		Name = "scale2xSFX";
		VertexByteCode = RetroArchScalenxShadersScale2xSFXShaderDefs::sVertexByteCode;
		VertexLength = sizeof(RetroArchScalenxShadersScale2xSFXShaderDefs::sVertexByteCode);
		FragmentByteCode = RetroArchScalenxShadersScale2xSFXShaderDefs::sFragmentByteCode;
		FragmentLength = sizeof(RetroArchScalenxShadersScale2xSFXShaderDefs::sFragmentByteCode);
		Params.push_back(ShaderParam("YTR", -1, 52, 4, 0.000000f, 255.000000f, 48.000000f));
		Params.push_back(ShaderParam("UTR", -1, 56, 4, 0.000000f, 255.000000f, 7.000000f));
		Params.push_back(ShaderParam("VTR", -1, 60, 4, 0.000000f, 255.000000f, 6.000000f));
		Params.push_back(ShaderParam("MVP", 0, 0, 64, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("SourceSize", -1, 0, 16, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("OriginalSize", -1, 16, 16, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("OutputSize", -1, 32, 16, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("FrameCount", -1, 48, 4, 0.000000f, 0.000000f, 0.000000f));
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
