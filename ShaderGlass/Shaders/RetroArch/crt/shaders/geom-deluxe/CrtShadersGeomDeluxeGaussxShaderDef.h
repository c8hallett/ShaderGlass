/*
ShaderGlass shader crt-shaders-geom-deluxe\gaussx imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/master/crt/shaders/geom-deluxe/gaussx.slang
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArchCrtShadersGeomDeluxeGaussxShaderDefs
{
static const BYTE sVertexByteCode[] =
{
68,88,66,67,218,1,
105,164,198,60,67,41,
121,100,69,251,34,9,
34,39,1,0,0,0,
240,11,0,0,5,0,
0,0,52,0,0,0,
152,8,0,0,228,8,
0,0,84,9,0,0,
84,11,0,0,82,68,
69,70,92,8,0,0,
2,0,0,0,136,0,
0,0,2,0,0,0,
60,0,0,0,0,5,
254,255,0,129,0,0,
50,8,0,0,82,68,
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
0,0,7,0,0,0,
184,0,0,0,160,0,
0,0,0,0,0,0,
0,0,0,0,128,0,
0,0,23,0,0,0,
220,2,0,0,96,0,
0,0,0,0,0,0,
0,0,0,0,208,1,
0,0,0,0,0,0,
16,0,0,0,2,0,
0,0,236,1,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,16,2,0,0,
16,0,0,0,16,0,
0,0,0,0,0,0,
236,1,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
36,2,0,0,32,0,
0,0,16,0,0,0,
0,0,0,0,236,1,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,54,2,
0,0,48,0,0,0,
4,0,0,0,0,0,
0,0,80,2,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,116,2,0,0,
64,0,0,0,16,0,
0,0,0,0,0,0,
236,1,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
141,2,0,0,80,0,
0,0,16,0,0,0,
0,0,0,0,236,1,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,162,2,
0,0,96,0,0,0,
64,0,0,0,2,0,
0,0,184,2,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,103,108,111,98,
97,108,95,83,111,117,
114,99,101,83,105,122,
101,0,102,108,111,97,
116,52,0,171,171,171,
1,0,3,0,1,0,
4,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,226,1,0,0,
103,108,111,98,97,108,
95,79,114,105,103,105,
110,97,108,83,105,122,
101,0,103,108,111,98,
97,108,95,79,117,116,
112,117,116,83,105,122,
101,0,103,108,111,98,
97,108,95,70,114,97,
109,101,67,111,117,110,
116,0,100,119,111,114,
100,0,171,171,0,0,
19,0,1,0,1,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
72,2,0,0,103,108,
111,98,97,108,95,70,
105,110,97,108,86,105,
101,119,112,111,114,116,
83,105,122,101,0,103,
108,111,98,97,108,95,
105,110,116,101,114,110,
97,108,49,83,105,122,
101,0,103,108,111,98,
97,108,95,77,86,80,
0,102,108,111,97,116,
52,120,52,0,171,171,
2,0,3,0,4,0,
4,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,173,2,0,0,
116,6,0,0,0,0,
0,0,4,0,0,0,
0,0,0,0,144,6,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,180,6,
0,0,4,0,0,0,
4,0,0,0,0,0,
0,0,144,6,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,206,6,0,0,
8,0,0,0,4,0,
0,0,0,0,0,0,
144,6,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
222,6,0,0,12,0,
0,0,4,0,0,0,
2,0,0,0,144,6,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,235,6,
0,0,16,0,0,0,
4,0,0,0,2,0,
0,0,144,6,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,251,6,0,0,
20,0,0,0,4,0,
0,0,0,0,0,0,
144,6,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
11,7,0,0,24,0,
0,0,4,0,0,0,
0,0,0,0,144,6,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,20,7,
0,0,28,0,0,0,
4,0,0,0,0,0,
0,0,144,6,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,29,7,0,0,
32,0,0,0,4,0,
0,0,0,0,0,0,
144,6,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
44,7,0,0,36,0,
0,0,4,0,0,0,
0,0,0,0,144,6,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,59,7,
0,0,40,0,0,0,
4,0,0,0,0,0,
0,0,144,6,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,84,7,0,0,
44,0,0,0,4,0,
0,0,0,0,0,0,
144,6,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
100,7,0,0,48,0,
0,0,4,0,0,0,
0,0,0,0,144,6,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,117,7,
0,0,52,0,0,0,
4,0,0,0,0,0,
0,0,144,6,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,135,7,0,0,
56,0,0,0,4,0,
0,0,0,0,0,0,
144,6,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
155,7,0,0,60,0,
0,0,4,0,0,0,
0,0,0,0,144,6,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,173,7,
0,0,64,0,0,0,
4,0,0,0,0,0,
0,0,144,6,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,191,7,0,0,
68,0,0,0,4,0,
0,0,0,0,0,0,
144,6,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
211,7,0,0,72,0,
0,0,4,0,0,0,
0,0,0,0,144,6,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,228,7,
0,0,76,0,0,0,
4,0,0,0,0,0,
0,0,144,6,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,243,7,0,0,
80,0,0,0,4,0,
0,0,0,0,0,0,
144,6,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
10,8,0,0,84,0,
0,0,4,0,0,0,
0,0,0,0,144,6,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,26,8,
0,0,88,0,0,0,
4,0,0,0,0,0,
0,0,144,6,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,112,97,114,97,
109,115,95,112,104,111,
115,112,104,111,114,95,
112,111,119,101,114,0,
102,108,111,97,116,0,
0,0,3,0,1,0,
1,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,138,6,0,0,
112,97,114,97,109,115,
95,112,104,111,115,112,
104,111,114,95,97,109,
112,108,105,116,117,100,
101,0,112,97,114,97,
109,115,95,67,82,84,
103,97,109,109,97,0,
112,97,114,97,109,115,
95,119,105,100,116,104,
0,112,97,114,97,109,
115,95,97,115,112,101,
99,116,95,120,0,112,
97,114,97,109,115,95,
97,115,112,101,99,116,
95,121,0,112,97,114,
97,109,115,95,100,0,
112,97,114,97,109,115,
95,82,0,112,97,114,
97,109,115,95,97,110,
103,108,101,95,120,0,
112,97,114,97,109,115,
95,97,110,103,108,101,
95,121,0,112,97,114,
97,109,115,95,97,112,
101,114,116,117,114,101,
95,115,116,114,101,110,
103,116,104,0,112,97,
114,97,109,115,95,104,
97,108,97,116,105,111,
110,0,112,97,114,97,
109,115,95,99,117,114,
118,97,116,117,114,101,
0,112,97,114,97,109,
115,95,99,111,114,110,
101,114,115,105,122,101,
0,112,97,114,97,109,
115,95,99,111,114,110,
101,114,115,109,111,111,
116,104,0,112,97,114,
97,109,115,95,111,118,
101,114,115,99,97,110,
95,120,0,112,97,114,
97,109,115,95,111,118,
101,114,115,99,97,110,
95,121,0,112,97,114,
97,109,115,95,109,111,
110,105,116,111,114,103,
97,109,109,97,0,112,
97,114,97,109,115,95,
109,97,115,107,95,116,
121,112,101,0,112,97,
114,97,109,115,95,83,
72,65,82,80,69,82,
0,112,97,114,97,109,
115,95,115,99,97,110,
108,105,110,101,95,119,
101,105,103,104,116,0,
112,97,114,97,109,115,
95,103,101,111,109,95,
108,117,109,0,112,97,
114,97,109,115,95,105,
110,116,101,114,108,97,
99,101,95,100,101,116,
101,99,116,0,77,105,
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
104,0,0,0,3,0,
0,0,8,0,0,0,
80,0,0,0,0,0,
0,0,0,0,0,0,
3,0,0,0,0,0,
0,0,3,12,0,0,
80,0,0,0,1,0,
0,0,0,0,0,0,
3,0,0,0,1,0,
0,0,15,0,0,0,
89,0,0,0,0,0,
0,0,1,0,0,0,
3,0,0,0,2,0,
0,0,15,0,0,0,
84,69,88,67,79,79,
82,68,0,83,86,95,
80,111,115,105,116,105,
111,110,0,171,171,171,
83,72,69,88,248,1,
0,0,80,0,1,0,
126,0,0,0,106,8,
0,1,89,0,0,4,
70,142,32,0,0,0,
0,0,10,0,0,0,
89,0,0,4,70,142,
32,0,1,0,0,0,
2,0,0,0,95,0,
0,3,242,16,16,0,
0,0,0,0,95,0,
0,3,50,16,16,0,
1,0,0,0,101,0,
0,3,50,32,16,0,
0,0,0,0,101,0,
0,3,242,32,16,0,
1,0,0,0,103,0,
0,4,242,32,16,0,
2,0,0,0,1,0,
0,0,104,0,0,2,
1,0,0,0,54,0,
0,5,50,32,16,0,
0,0,0,0,70,16,
16,0,1,0,0,0,
56,0,0,9,18,0,
16,0,0,0,0,0,
10,128,32,0,0,0,
0,0,0,0,0,0,
58,128,32,0,1,0,
0,0,0,0,0,0,
56,0,0,8,34,0,
16,0,0,0,0,0,
1,64,0,0,0,0,
160,67,10,128,32,0,
1,0,0,0,1,0,
0,0,14,0,0,7,
18,0,16,0,0,0,
0,0,10,0,16,0,
0,0,0,0,26,0,
16,0,0,0,0,0,
14,0,0,7,34,0,
16,0,0,0,0,0,
1,64,0,0,0,0,
128,191,10,0,16,0,
0,0,0,0,14,0,
0,7,18,0,16,0,
0,0,0,0,26,0,
16,0,0,0,0,0,
10,0,16,0,0,0,
0,0,56,0,0,10,
242,0,16,0,0,0,
0,0,6,0,16,0,
0,0,0,0,2,64,
0,0,59,170,184,63,
59,170,184,64,131,191,
79,65,59,170,184,65,
25,0,0,5,242,32,
16,0,1,0,0,0,
70,14,16,0,0,0,
0,0,56,0,0,8,
242,0,16,0,0,0,
0,0,86,21,16,0,
0,0,0,0,70,142,
32,0,0,0,0,0,
7,0,0,0,50,0,
0,10,242,0,16,0,
0,0,0,0,6,16,
16,0,0,0,0,0,
70,142,32,0,0,0,
0,0,6,0,0,0,
70,14,16,0,0,0,
0,0,50,0,0,10,
242,0,16,0,0,0,
0,0,166,26,16,0,
0,0,0,0,70,142,
32,0,0,0,0,0,
8,0,0,0,70,14,
16,0,0,0,0,0,
50,0,0,10,242,32,
16,0,2,0,0,0,
246,31,16,0,0,0,
0,0,70,142,32,0,
0,0,0,0,9,0,
0,0,70,14,16,0,
0,0,0,0,62,0,
0,1,83,84,65,84,
148,0,0,0,13,0,
0,0,1,0,0,0,
0,0,0,0,5,0,
0,0,11,0,0,0,
0,0,0,0,0,0,
0,0,1,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,1,0,0,0,
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
0,0
};


static const BYTE sFragmentByteCode[] =
{
68,88,66,67,80,69,
212,88,109,129,74,121,
92,86,202,245,111,33,
53,32,1,0,0,0,
84,13,0,0,5,0,
0,0,52,0,0,0,
96,3,0,0,172,3,
0,0,224,3,0,0,
184,12,0,0,82,68,
69,70,36,3,0,0,
1,0,0,0,192,0,
0,0,3,0,0,0,
60,0,0,0,0,5,
255,255,0,129,0,0,
252,2,0,0,82,68,
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
0,0,175,0,0,0,
2,0,0,0,5,0,
0,0,4,0,0,0,
255,255,255,255,2,0,
0,0,1,0,0,0,
13,0,0,0,185,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,1,0,
0,0,1,0,0,0,
95,105,110,116,101,114,
110,97,108,49,95,115,
97,109,112,108,101,114,
0,105,110,116,101,114,
110,97,108,49,0,85,
66,79,0,171,171,171,
185,0,0,0,7,0,
0,0,216,0,0,0,
160,0,0,0,0,0,
0,0,0,0,0,0,
240,1,0,0,0,0,
0,0,16,0,0,0,
2,0,0,0,12,2,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,48,2,
0,0,16,0,0,0,
16,0,0,0,0,0,
0,0,12,2,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,68,2,0,0,
32,0,0,0,16,0,
0,0,0,0,0,0,
12,2,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
86,2,0,0,48,0,
0,0,4,0,0,0,
0,0,0,0,112,2,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,148,2,
0,0,64,0,0,0,
16,0,0,0,0,0,
0,0,12,2,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,173,2,0,0,
80,0,0,0,16,0,
0,0,0,0,0,0,
12,2,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
194,2,0,0,96,0,
0,0,64,0,0,0,
0,0,0,0,216,2,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,103,108,
111,98,97,108,95,83,
111,117,114,99,101,83,
105,122,101,0,102,108,
111,97,116,52,0,171,
171,171,1,0,3,0,
1,0,4,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,2,2,
0,0,103,108,111,98,
97,108,95,79,114,105,
103,105,110,97,108,83,
105,122,101,0,103,108,
111,98,97,108,95,79,
117,116,112,117,116,83,
105,122,101,0,103,108,
111,98,97,108,95,70,
114,97,109,101,67,111,
117,110,116,0,100,119,
111,114,100,0,171,171,
0,0,19,0,1,0,
1,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,104,2,0,0,
103,108,111,98,97,108,
95,70,105,110,97,108,
86,105,101,119,112,111,
114,116,83,105,122,101,
0,103,108,111,98,97,
108,95,105,110,116,101,
114,110,97,108,49,83,
105,122,101,0,103,108,
111,98,97,108,95,77,
86,80,0,102,108,111,
97,116,52,120,52,0,
171,171,2,0,3,0,
4,0,4,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,205,2,
0,0,77,105,99,114,
111,115,111,102,116,32,
40,82,41,32,72,76,
83,76,32,83,104,97,
100,101,114,32,67,111,
109,112,105,108,101,114,
32,49,48,46,49,0,
73,83,71,78,68,0,
0,0,2,0,0,0,
8,0,0,0,56,0,
0,0,0,0,0,0,
0,0,0,0,3,0,
0,0,0,0,0,0,
3,3,0,0,56,0,
0,0,1,0,0,0,
0,0,0,0,3,0,
0,0,1,0,0,0,
15,15,0,0,84,69,
88,67,79,79,82,68,
0,171,171,171,79,83,
71,78,44,0,0,0,
1,0,0,0,8,0,
0,0,32,0,0,0,
0,0,0,0,0,0,
0,0,3,0,0,0,
0,0,0,0,15,0,
0,0,83,86,95,84,
97,114,103,101,116,0,
171,171,83,72,69,88,
208,8,0,0,80,0,
0,0,52,2,0,0,
106,8,0,1,89,0,
0,4,70,142,32,0,
0,0,0,0,1,0,
0,0,90,0,0,3,
0,96,16,0,2,0,
0,0,88,24,0,4,
0,112,16,0,2,0,
0,0,85,85,0,0,
98,16,0,3,50,16,
16,0,0,0,0,0,
98,16,0,3,242,16,
16,0,1,0,0,0,
101,0,0,3,242,32,
16,0,0,0,0,0,
104,0,0,2,4,0,
0,0,54,0,0,8,
162,0,16,0,0,0,
0,0,2,64,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,14,0,
0,11,18,0,16,0,
1,0,0,0,2,64,
0,0,0,0,128,63,
0,0,128,63,0,0,
128,63,0,0,128,63,
10,128,32,0,0,0,
0,0,0,0,0,0,
56,0,0,10,114,0,
16,0,2,0,0,0,
6,0,16,0,1,0,
0,0,2,64,0,0,
0,0,0,192,0,0,
128,192,0,0,64,192,
0,0,0,0,54,0,
0,5,82,0,16,0,
0,0,0,0,86,6,
16,0,2,0,0,0,
0,0,0,7,242,0,
16,0,0,0,0,0,
70,14,16,0,0,0,
0,0,70,20,16,0,
0,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,3,0,0,0,
230,10,16,0,0,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,0,0,
0,0,70,0,16,0,
0,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,47,0,0,5,
114,0,16,0,0,0,
0,0,70,2,16,0,
0,0,0,0,56,0,
0,10,114,0,16,0,
0,0,0,0,70,2,
16,0,0,0,0,0,
2,64,0,0,205,204,
12,64,205,204,12,64,
205,204,12,64,0,0,
0,0,25,0,0,5,
114,0,16,0,0,0,
0,0,70,2,16,0,
0,0,0,0,47,0,
0,5,114,0,16,0,
3,0,0,0,70,2,
16,0,3,0,0,0,
56,0,0,10,114,0,
16,0,3,0,0,0,
70,2,16,0,3,0,
0,0,2,64,0,0,
205,204,12,64,205,204,
12,64,205,204,12,64,
0,0,0,0,25,0,
0,5,114,0,16,0,
3,0,0,0,70,2,
16,0,3,0,0,0,
56,0,0,7,114,0,
16,0,3,0,0,0,
70,2,16,0,3,0,
0,0,166,26,16,0,
1,0,0,0,50,0,
0,9,114,0,16,0,
0,0,0,0,70,2,
16,0,0,0,0,0,
246,31,16,0,1,0,
0,0,70,2,16,0,
3,0,0,0,54,0,
0,8,162,0,16,0,
2,0,0,0,2,64,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,7,50,0,
16,0,2,0,0,0,
70,0,16,0,2,0,
0,0,70,16,16,0,
0,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,3,0,0,0,
70,0,16,0,2,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
47,0,0,5,114,0,
16,0,3,0,0,0,
70,2,16,0,3,0,
0,0,56,0,0,10,
114,0,16,0,3,0,
0,0,70,2,16,0,
3,0,0,0,2,64,
0,0,205,204,12,64,
205,204,12,64,205,204,
12,64,0,0,0,0,
25,0,0,5,114,0,
16,0,3,0,0,0,
70,2,16,0,3,0,
0,0,50,0,0,9,
114,0,16,0,0,0,
0,0,70,2,16,0,
3,0,0,0,86,21,
16,0,1,0,0,0,
70,2,16,0,0,0,
0,0,54,0,0,6,
66,0,16,0,2,0,
0,0,10,0,16,128,
65,0,0,0,1,0,
0,0,0,0,0,7,
50,0,16,0,2,0,
0,0,230,10,16,0,
2,0,0,0,70,16,
16,0,0,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,2,0,
0,0,70,0,16,0,
2,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,47,0,0,5,
114,0,16,0,2,0,
0,0,70,2,16,0,
2,0,0,0,56,0,
0,10,114,0,16,0,
2,0,0,0,70,2,
16,0,2,0,0,0,
2,64,0,0,205,204,
12,64,205,204,12,64,
205,204,12,64,0,0,
0,0,25,0,0,5,
114,0,16,0,2,0,
0,0,70,2,16,0,
2,0,0,0,50,0,
0,9,114,0,16,0,
0,0,0,0,70,2,
16,0,2,0,0,0,
6,16,16,0,1,0,
0,0,70,2,16,0,
0,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,2,0,0,0,
70,16,16,0,0,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
47,0,0,5,114,0,
16,0,2,0,0,0,
70,2,16,0,2,0,
0,0,56,0,0,10,
114,0,16,0,2,0,
0,0,70,2,16,0,
2,0,0,0,2,64,
0,0,205,204,12,64,
205,204,12,64,205,204,
12,64,0,0,0,0,
25,0,0,5,114,0,
16,0,2,0,0,0,
70,2,16,0,2,0,
0,0,0,0,0,7,
114,0,16,0,0,0,
0,0,70,2,16,0,
0,0,0,0,70,2,
16,0,2,0,0,0,
54,0,0,5,34,0,
16,0,1,0,0,0,
1,64,0,0,0,0,
0,0,0,0,0,7,
50,0,16,0,2,0,
0,0,70,0,16,0,
1,0,0,0,70,16,
16,0,0,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,2,0,
0,0,70,0,16,0,
2,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,47,0,0,5,
114,0,16,0,2,0,
0,0,70,2,16,0,
2,0,0,0,56,0,
0,10,114,0,16,0,
2,0,0,0,70,2,
16,0,2,0,0,0,
2,64,0,0,205,204,
12,64,205,204,12,64,
205,204,12,64,0,0,
0,0,25,0,0,5,
114,0,16,0,2,0,
0,0,70,2,16,0,
2,0,0,0,50,0,
0,9,114,0,16,0,
0,0,0,0,70,2,
16,0,2,0,0,0,
6,16,16,0,1,0,
0,0,70,2,16,0,
0,0,0,0,56,0,
0,10,194,0,16,0,
1,0,0,0,6,0,
16,0,1,0,0,0,
2,64,0,0,0,0,
0,0,0,0,0,0,
0,0,0,64,0,0,
64,64,50,0,0,12,
50,0,16,0,2,0,
0,0,70,0,16,0,
1,0,0,0,2,64,
0,0,0,0,128,64,
0,0,128,63,0,0,
0,0,0,0,0,0,
70,16,16,0,0,0,
0,0,0,0,0,7,
242,0,16,0,1,0,
0,0,102,7,16,0,
1,0,0,0,70,20,
16,0,0,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,2,0,
0,0,70,0,16,0,
2,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,47,0,0,5,
114,0,16,0,2,0,
0,0,70,2,16,0,
2,0,0,0,56,0,
0,10,114,0,16,0,
2,0,0,0,70,2,
16,0,2,0,0,0,
2,64,0,0,205,204,
12,64,205,204,12,64,
205,204,12,64,0,0,
0,0,25,0,0,5,
114,0,16,0,2,0,
0,0,70,2,16,0,
2,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,3,0,0,0,
70,0,16,0,1,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,1,0,
0,0,230,10,16,0,
1,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,47,0,0,5,
114,0,16,0,1,0,
0,0,70,2,16,0,
1,0,0,0,56,0,
0,10,114,0,16,0,
1,0,0,0,70,2,
16,0,1,0,0,0,
2,64,0,0,205,204,
12,64,205,204,12,64,
205,204,12,64,0,0,
0,0,25,0,0,5,
114,0,16,0,1,0,
0,0,70,2,16,0,
1,0,0,0,47,0,
0,5,114,0,16,0,
3,0,0,0,70,2,
16,0,3,0,0,0,
56,0,0,10,114,0,
16,0,3,0,0,0,
70,2,16,0,3,0,
0,0,2,64,0,0,
205,204,12,64,205,204,
12,64,205,204,12,64,
0,0,0,0,25,0,
0,5,114,0,16,0,
3,0,0,0,70,2,
16,0,3,0,0,0,
50,0,0,9,114,0,
16,0,0,0,0,0,
70,2,16,0,3,0,
0,0,86,21,16,0,
1,0,0,0,70,2,
16,0,0,0,0,0,
50,0,0,9,114,0,
16,0,0,0,0,0,
70,2,16,0,1,0,
0,0,166,26,16,0,
1,0,0,0,70,2,
16,0,0,0,0,0,
50,0,0,9,114,0,
16,0,0,0,0,0,
70,2,16,0,2,0,
0,0,246,31,16,0,
1,0,0,0,70,2,
16,0,0,0,0,0,
0,0,0,7,130,0,
16,0,0,0,0,0,
26,16,16,0,1,0,
0,0,10,16,16,0,
1,0,0,0,0,0,
0,7,130,0,16,0,
0,0,0,0,58,0,
16,0,0,0,0,0,
42,16,16,0,1,0,
0,0,0,0,0,7,
130,0,16,0,0,0,
0,0,58,0,16,0,
0,0,0,0,58,16,
16,0,1,0,0,0,
50,0,0,9,130,0,
16,0,0,0,0,0,
58,0,16,0,0,0,
0,0,1,64,0,0,
0,0,0,64,1,64,
0,0,0,0,128,63,
14,0,0,10,130,0,
16,0,0,0,0,0,
2,64,0,0,0,0,
128,63,0,0,128,63,
0,0,128,63,0,0,
128,63,58,0,16,0,
0,0,0,0,56,0,
0,7,114,0,16,0,
0,0,0,0,246,15,
16,0,0,0,0,0,
70,2,16,0,0,0,
0,0,47,0,0,5,
114,0,16,0,0,0,
0,0,70,2,16,0,
0,0,0,0,56,0,
0,10,114,0,16,0,
0,0,0,0,70,2,
16,0,0,0,0,0,
2,64,0,0,47,186,
232,62,47,186,232,62,
47,186,232,62,0,0,
0,0,25,0,0,5,
114,32,16,0,0,0,
0,0,70,2,16,0,
0,0,0,0,54,0,
0,5,130,32,16,0,
0,0,0,0,1,64,
0,0,0,0,128,63,
62,0,0,1,83,84,
65,84,148,0,0,0,
70,0,0,0,4,0,
0,0,0,0,0,0,
3,0,0,0,55,0,
0,0,0,0,0,0,
0,0,0,0,1,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,9,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,5,0,
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

}

namespace RetroArch
{
class CrtShadersGeomDeluxeGaussxShaderDef : public ShaderDef
{
public:
	CrtShadersGeomDeluxeGaussxShaderDef() : ShaderDef{}
	{
		Name = "gaussx";
		VertexByteCode = RetroArchCrtShadersGeomDeluxeGaussxShaderDefs::sVertexByteCode;
		VertexLength = sizeof(RetroArchCrtShadersGeomDeluxeGaussxShaderDefs::sVertexByteCode);
		FragmentByteCode = RetroArchCrtShadersGeomDeluxeGaussxShaderDefs::sFragmentByteCode;
		FragmentLength = sizeof(RetroArchCrtShadersGeomDeluxeGaussxShaderDefs::sFragmentByteCode);
		Params.push_back(ShaderParam("mask_type", -1, 72, 4, 1.000000f, 19.000000f, 1.000000f));
		Params.push_back(ShaderParam("aperture_strength", -1, 40, 4, 0.000000f, 1.000000f, 0.400000f));
		Params.push_back(ShaderParam("phosphor_power", -1, 0, 4, 0.500000f, 3.000000f, 1.200000f));
		Params.push_back(ShaderParam("phosphor_amplitude", -1, 4, 4, 0.000000f, 0.200000f, 0.040000f));
		Params.push_back(ShaderParam("CRTgamma", -1, 8, 4, 0.700000f, 4.000000f, 2.400000f));
		Params.push_back(ShaderParam("halation", -1, 44, 4, 0.000000f, 0.300000f, 0.100000f));
		Params.push_back(ShaderParam("width", -1, 12, 4, 0.100000f, 4.000000f, 2.000000f));
		Params.push_back(ShaderParam("curvature", -1, 48, 4, 0.000000f, 1.000000f, 1.000000f));
		Params.push_back(ShaderParam("R", -1, 28, 4, 0.500000f, 10.000000f, 3.500000f));
		Params.push_back(ShaderParam("d", -1, 24, 4, 0.100000f, 10.000000f, 2.000000f));
		Params.push_back(ShaderParam("angle_x", -1, 32, 4, -1.000000f, 1.000000f, 0.000000f));
		Params.push_back(ShaderParam("angle_y", -1, 36, 4, -1.000000f, 1.000000f, 0.000000f));
		Params.push_back(ShaderParam("cornersize", -1, 52, 4, 0.000000f, 0.100000f, 0.010000f));
		Params.push_back(ShaderParam("cornersmooth", -1, 56, 4, 100.000000f, 2000.000000f, 1000.000000f));
		Params.push_back(ShaderParam("overscan_x", -1, 60, 4, 0.800000f, 1.200000f, 1.000000f));
		Params.push_back(ShaderParam("overscan_y", -1, 64, 4, 0.800000f, 1.200000f, 1.000000f));
		Params.push_back(ShaderParam("monitorgamma", -1, 68, 4, 0.700000f, 4.000000f, 2.200000f));
		Params.push_back(ShaderParam("aspect_x", -1, 16, 4, 0.300000f, 1.000000f, 1.000000f));
		Params.push_back(ShaderParam("aspect_y", -1, 20, 4, 0.300000f, 1.000000f, 0.750000f));
		Params.push_back(ShaderParam("scanline_weight", -1, 80, 4, 0.100000f, 0.500000f, 0.300000f));
		Params.push_back(ShaderParam("geom_lum", -1, 84, 4, 0.000000f, 1.000000f, 0.000000f));
		Params.push_back(ShaderParam("interlace_detect", -1, 88, 4, 0.000000f, 1.000000f, 1.000000f));
		Params.push_back(ShaderParam("MVP", 0, 96, 64, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("SourceSize", 0, 0, 16, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("OriginalSize", 0, 16, 16, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("OutputSize", 0, 32, 16, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("FrameCount", 0, 48, 4, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("FinalViewportSize", 0, 64, 16, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("internal1Size", 0, 80, 16, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("SHARPER", -1, 76, 4, 0.000000f, 0.000000f, 0.000000f));
		Samplers.push_back(ShaderSampler("internal1", 2));
/*
VertexSource = %*VERTEX_SOURCE*%;
*/
/*
FragmentSource = %*FRAGMENT_SOURCE*%;
*/
	}
};
}
