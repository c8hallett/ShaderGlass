/*
ShaderGlass shader sharpen-shaders\super-res-ex imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/master/sharpen/shaders/super-res-ex.slang
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArchSharpenShadersSuperResExShaderDefs
{
static const BYTE sVertexByteCode[] =
{
68,88,66,67,110,239,
1,38,44,138,120,137,
121,214,212,137,93,170,
129,5,1,0,0,0,
140,3,0,0,5,0,
0,0,52,0,0,0,
60,1,0,0,136,1,
0,0,224,1,0,0,
240,2,0,0,82,68,
69,70,0,1,0,0,
1,0,0,0,96,0,
0,0,1,0,0,0,
60,0,0,0,0,5,
254,255,0,129,0,0,
216,0,0,0,82,68,
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
92,0,0,0,1,0,
0,0,120,0,0,0,
64,0,0,0,0,0,
0,0,0,0,0,0,
160,0,0,0,0,0,
0,0,64,0,0,0,
2,0,0,0,180,0,
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
0,0,171,0,0,0,
77,105,99,114,111,115,
111,102,116,32,40,82,
41,32,72,76,83,76,
32,83,104,97,100,101,
114,32,67,111,109,112,
105,108,101,114,32,49,
48,46,49,0,73,83,
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
80,0,0,0,2,0,
0,0,8,0,0,0,
56,0,0,0,0,0,
0,0,0,0,0,0,
3,0,0,0,0,0,
0,0,3,12,0,0,
65,0,0,0,0,0,
0,0,1,0,0,0,
3,0,0,0,1,0,
0,0,15,0,0,0,
84,69,88,67,79,79,
82,68,0,83,86,95,
80,111,115,105,116,105,
111,110,0,171,171,171,
83,72,69,88,8,1,
0,0,80,0,1,0,
66,0,0,0,106,8,
0,1,89,0,0,4,
70,142,32,0,0,0,
0,0,4,0,0,0,
95,0,0,3,242,16,
16,0,0,0,0,0,
95,0,0,3,50,16,
16,0,1,0,0,0,
101,0,0,3,50,32,
16,0,0,0,0,0,
103,0,0,4,242,32,
16,0,1,0,0,0,
1,0,0,0,104,0,
0,2,1,0,0,0,
54,0,0,5,50,32,
16,0,0,0,0,0,
70,16,16,0,1,0,
0,0,56,0,0,8,
242,0,16,0,0,0,
0,0,86,21,16,0,
0,0,0,0,70,142,
32,0,0,0,0,0,
1,0,0,0,50,0,
0,10,242,0,16,0,
0,0,0,0,6,16,
16,0,0,0,0,0,
70,142,32,0,0,0,
0,0,0,0,0,0,
70,14,16,0,0,0,
0,0,50,0,0,10,
242,0,16,0,0,0,
0,0,166,26,16,0,
0,0,0,0,70,142,
32,0,0,0,0,0,
2,0,0,0,70,14,
16,0,0,0,0,0,
50,0,0,10,242,32,
16,0,1,0,0,0,
246,31,16,0,0,0,
0,0,70,142,32,0,
0,0,0,0,3,0,
0,0,70,14,16,0,
0,0,0,0,62,0,
0,1,83,84,65,84,
148,0,0,0,6,0,
0,0,1,0,0,0,
0,0,0,0,4,0,
0,0,4,0,0,0,
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
68,88,66,67,116,70,
94,3,38,214,122,9,
235,218,146,201,86,39,
173,97,1,0,0,0,
88,26,0,0,5,0,
0,0,52,0,0,0,
200,2,0,0,252,2,
0,0,48,3,0,0,
188,25,0,0,82,68,
69,70,140,2,0,0,
1,0,0,0,12,1,
0,0,5,0,0,0,
60,0,0,0,0,5,
255,255,0,129,0,0,
100,2,0,0,82,68,
49,49,60,0,0,0,
24,0,0,0,32,0,
0,0,40,0,0,0,
36,0,0,0,12,0,
0,0,0,0,0,0,
220,0,0,0,3,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,2,0,0,0,
1,0,0,0,1,0,
0,0,236,0,0,0,
3,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,3,0,
0,0,1,0,0,0,
1,0,0,0,249,0,
0,0,2,0,0,0,
5,0,0,0,4,0,
0,0,255,255,255,255,
2,0,0,0,1,0,
0,0,13,0,0,0,
0,1,0,0,2,0,
0,0,5,0,0,0,
4,0,0,0,255,255,
255,255,3,0,0,0,
1,0,0,0,13,0,
0,0,4,1,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,1,0,
0,0,1,0,0,0,
0,0,0,0,95,83,
111,117,114,99,101,95,
115,97,109,112,108,101,
114,0,95,82,69,70,
95,115,97,109,112,108,
101,114,0,83,111,117,
114,99,101,0,82,69,
70,0,80,117,115,104,
0,171,171,171,4,1,
0,0,4,0,0,0,
36,1,0,0,64,0,
0,0,0,0,0,0,
0,0,0,0,196,1,
0,0,0,0,0,0,
16,0,0,0,0,0,
0,0,224,1,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,4,2,0,0,
16,0,0,0,16,0,
0,0,2,0,0,0,
224,1,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
19,2,0,0,32,0,
0,0,16,0,0,0,
0,0,0,0,224,1,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,37,2,
0,0,48,0,0,0,
4,0,0,0,0,0,
0,0,64,2,0,0,
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
0,0,214,1,0,0,
112,97,114,97,109,115,
95,82,69,70,83,105,
122,101,0,112,97,114,
97,109,115,95,79,117,
116,112,117,116,83,105,
122,101,0,112,97,114,
97,109,115,95,70,114,
97,109,101,67,111,117,
110,116,0,100,119,111,
114,100,0,171,171,171,
0,0,19,0,1,0,
1,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,55,2,0,0,
77,105,99,114,111,115,
111,102,116,32,40,82,
41,32,72,76,83,76,
32,83,104,97,100,101,
114,32,67,111,109,112,
105,108,101,114,32,49,
48,46,49,0,73,83,
71,78,44,0,0,0,
1,0,0,0,8,0,
0,0,32,0,0,0,
0,0,0,0,0,0,
0,0,3,0,0,0,
0,0,0,0,3,3,
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
83,72,69,88,132,22,
0,0,80,0,0,0,
161,5,0,0,106,8,
0,1,89,0,0,4,
70,142,32,0,1,0,
0,0,2,0,0,0,
90,0,0,3,0,96,
16,0,2,0,0,0,
90,0,0,3,0,96,
16,0,3,0,0,0,
88,24,0,4,0,112,
16,0,2,0,0,0,
85,85,0,0,88,24,
0,4,0,112,16,0,
3,0,0,0,85,85,
0,0,98,16,0,3,
50,16,16,0,0,0,
0,0,101,0,0,3,
242,32,16,0,0,0,
0,0,104,0,0,2,
9,0,0,0,50,0,
0,13,50,0,16,0,
0,0,0,0,70,16,
16,0,0,0,0,0,
70,128,32,0,1,0,
0,0,1,0,0,0,
2,64,0,0,0,0,
0,191,0,0,0,191,
0,0,0,0,0,0,
0,0,64,0,0,5,
242,0,16,0,1,0,
0,0,70,4,16,0,
0,0,0,0,0,0,
0,8,242,0,16,0,
1,0,0,0,70,4,
16,0,0,0,0,0,
70,14,16,128,65,0,
0,0,1,0,0,0,
0,0,0,8,50,0,
16,0,0,0,0,0,
70,0,16,0,0,0,
0,0,70,0,16,128,
65,0,0,0,1,0,
0,0,0,0,0,11,
242,0,16,0,2,0,
0,0,230,14,16,128,
65,0,0,0,1,0,
0,0,2,64,0,0,
0,0,128,191,0,0,
128,191,0,0,128,191,
0,0,0,0,15,0,
0,7,66,0,16,0,
0,0,0,0,230,10,
16,0,2,0,0,0,
230,10,16,0,2,0,
0,0,15,0,0,7,
130,0,16,0,0,0,
0,0,70,0,16,0,
2,0,0,0,70,0,
16,0,2,0,0,0,
56,0,0,10,194,0,
16,0,0,0,0,0,
166,14,16,0,0,0,
0,0,2,64,0,0,
0,0,0,0,0,0,
0,0,59,170,56,191,
59,170,56,191,25,0,
0,5,130,0,16,0,
0,0,0,0,58,0,
16,0,0,0,0,0,
25,0,0,5,66,0,
16,0,0,0,0,0,
42,0,16,0,0,0,
0,0,0,0,0,10,
242,0,16,0,2,0,
0,0,70,4,16,0,
0,0,0,0,2,64,
0,0,0,0,0,191,
0,0,0,191,0,0,
0,191,0,0,0,63,
14,0,0,11,50,0,
16,0,3,0,0,0,
2,64,0,0,0,0,
128,63,0,0,128,63,
0,0,128,63,0,0,
128,63,70,128,32,0,
1,0,0,0,1,0,
0,0,56,0,0,7,
242,0,16,0,2,0,
0,0,70,14,16,0,
2,0,0,0,70,4,
16,0,3,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
242,0,16,0,4,0,
0,0,230,10,16,0,
2,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,242,0,16,0,
5,0,0,0,70,16,
16,0,0,0,0,0,
70,126,16,0,3,0,
0,0,0,96,16,0,
3,0,0,0,16,0,
0,10,66,0,16,0,
3,0,0,0,70,2,
16,0,5,0,0,0,
2,64,0,0,208,179,
89,62,89,23,55,63,
152,221,147,61,0,0,
0,0,0,0,0,8,
130,0,16,0,3,0,
0,0,58,0,16,128,
65,0,0,0,4,0,
0,0,42,0,16,0,
3,0,0,0,56,0,
0,7,130,0,16,0,
3,0,0,0,58,0,
16,0,3,0,0,0,
1,64,0,0,0,0,
200,66,56,0,0,7,
130,0,16,0,3,0,
0,0,58,0,16,0,
3,0,0,0,58,0,
16,0,3,0,0,0,
50,0,0,9,130,0,
16,0,3,0,0,0,
58,0,16,0,3,0,
0,0,1,64,0,0,
0,0,0,63,1,64,
0,0,0,0,128,63,
56,0,0,7,130,0,
16,0,3,0,0,0,
58,0,16,0,3,0,
0,0,58,0,16,0,
3,0,0,0,14,0,
0,10,130,0,16,0,
3,0,0,0,2,64,
0,0,0,0,128,63,
0,0,128,63,0,0,
128,63,0,0,128,63,
58,0,16,0,3,0,
0,0,56,0,0,7,
66,0,16,0,0,0,
0,0,42,0,16,0,
0,0,0,0,58,0,
16,0,3,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,6,0,
0,0,230,10,16,0,
2,0,0,0,70,126,
16,0,3,0,0,0,
0,96,16,0,3,0,
0,0,0,0,0,8,
114,0,16,0,6,0,
0,0,70,2,16,0,
5,0,0,0,70,2,
16,128,65,0,0,0,
6,0,0,0,56,0,
0,7,114,0,16,0,
6,0,0,0,166,10,
16,0,0,0,0,0,
70,2,16,0,6,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,242,0,16,0,
7,0,0,0,70,0,
16,0,2,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,2,0,0,0,
70,0,16,0,2,0,
0,0,70,126,16,0,
3,0,0,0,0,96,
16,0,3,0,0,0,
0,0,0,8,114,0,
16,0,2,0,0,0,
70,2,16,128,65,0,
0,0,2,0,0,0,
70,2,16,0,5,0,
0,0,0,0,0,8,
130,0,16,0,2,0,
0,0,42,0,16,0,
3,0,0,0,58,0,
16,128,65,0,0,0,
7,0,0,0,56,0,
0,7,130,0,16,0,
2,0,0,0,58,0,
16,0,2,0,0,0,
1,64,0,0,0,0,
200,66,56,0,0,7,
130,0,16,0,2,0,
0,0,58,0,16,0,
2,0,0,0,58,0,
16,0,2,0,0,0,
50,0,0,9,130,0,
16,0,2,0,0,0,
58,0,16,0,2,0,
0,0,1,64,0,0,
0,0,0,63,1,64,
0,0,0,0,128,63,
56,0,0,7,130,0,
16,0,2,0,0,0,
58,0,16,0,2,0,
0,0,58,0,16,0,
2,0,0,0,14,0,
0,10,130,0,16,0,
2,0,0,0,2,64,
0,0,0,0,128,63,
0,0,128,63,0,0,
128,63,0,0,128,63,
58,0,16,0,2,0,
0,0,56,0,0,7,
130,0,16,0,3,0,
0,0,58,0,16,0,
0,0,0,0,58,0,
16,0,2,0,0,0,
50,0,0,9,130,0,
16,0,0,0,0,0,
58,0,16,0,0,0,
0,0,58,0,16,0,
2,0,0,0,42,0,
16,0,0,0,0,0,
56,0,0,7,114,0,
16,0,4,0,0,0,
166,10,16,0,0,0,
0,0,70,2,16,0,
4,0,0,0,50,0,
0,9,114,0,16,0,
4,0,0,0,70,2,
16,0,7,0,0,0,
246,15,16,0,3,0,
0,0,70,2,16,0,
4,0,0,0,50,0,
0,9,114,0,16,0,
2,0,0,0,70,2,
16,0,2,0,0,0,
246,15,16,0,3,0,
0,0,70,2,16,0,
6,0,0,0,0,0,
0,11,242,0,16,0,
6,0,0,0,230,14,
16,128,65,0,0,0,
1,0,0,0,2,64,
0,0,0,0,128,191,
0,0,128,63,0,0,
0,0,0,0,128,191,
15,0,0,7,66,0,
16,0,0,0,0,0,
70,0,16,0,6,0,
0,0,70,0,16,0,
6,0,0,0,15,0,
0,7,130,0,16,0,
2,0,0,0,230,10,
16,0,6,0,0,0,
230,10,16,0,6,0,
0,0,56,0,0,7,
130,0,16,0,2,0,
0,0,58,0,16,0,
2,0,0,0,1,64,
0,0,59,170,56,191,
25,0,0,5,130,0,
16,0,2,0,0,0,
58,0,16,0,2,0,
0,0,56,0,0,7,
66,0,16,0,0,0,
0,0,42,0,16,0,
0,0,0,0,1,64,
0,0,59,170,56,191,
25,0,0,5,66,0,
16,0,0,0,0,0,
42,0,16,0,0,0,
0,0,0,0,0,10,
242,0,16,0,6,0,
0,0,70,4,16,0,
0,0,0,0,2,64,
0,0,0,0,0,191,
0,0,192,63,0,0,
0,63,0,0,0,191,
56,0,0,7,242,0,
16,0,6,0,0,0,
70,4,16,0,3,0,
0,0,70,14,16,0,
6,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,242,0,
16,0,7,0,0,0,
70,0,16,0,6,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
0,0,0,8,130,0,
16,0,3,0,0,0,
42,0,16,0,3,0,
0,0,58,0,16,128,
65,0,0,0,7,0,
0,0,56,0,0,7,
130,0,16,0,3,0,
0,0,58,0,16,0,
3,0,0,0,1,64,
0,0,0,0,200,66,
56,0,0,7,130,0,
16,0,3,0,0,0,
58,0,16,0,3,0,
0,0,58,0,16,0,
3,0,0,0,50,0,
0,9,130,0,16,0,
3,0,0,0,58,0,
16,0,3,0,0,0,
1,64,0,0,0,0,
0,63,1,64,0,0,
0,0,128,63,56,0,
0,7,130,0,16,0,
3,0,0,0,58,0,
16,0,3,0,0,0,
58,0,16,0,3,0,
0,0,14,0,0,10,
130,0,16,0,3,0,
0,0,2,64,0,0,
0,0,128,63,0,0,
128,63,0,0,128,63,
0,0,128,63,58,0,
16,0,3,0,0,0,
56,0,0,7,130,0,
16,0,4,0,0,0,
42,0,16,0,0,0,
0,0,58,0,16,0,
3,0,0,0,50,0,
0,9,66,0,16,0,
0,0,0,0,42,0,
16,0,0,0,0,0,
58,0,16,0,3,0,
0,0,58,0,16,0,
0,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,8,0,0,0,
70,0,16,0,6,0,
0,0,70,126,16,0,
3,0,0,0,0,96,
16,0,3,0,0,0,
0,0,0,8,114,0,
16,0,8,0,0,0,
70,2,16,0,5,0,
0,0,70,2,16,128,
65,0,0,0,8,0,
0,0,50,0,0,9,
114,0,16,0,2,0,
0,0,70,2,16,0,
8,0,0,0,246,15,
16,0,4,0,0,0,
70,2,16,0,2,0,
0,0,50,0,0,9,
114,0,16,0,4,0,
0,0,70,2,16,0,
7,0,0,0,246,15,
16,0,4,0,0,0,
70,2,16,0,4,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,242,0,16,0,
7,0,0,0,230,10,
16,0,6,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,6,0,0,0,
230,10,16,0,6,0,
0,0,70,126,16,0,
3,0,0,0,0,96,
16,0,3,0,0,0,
0,0,0,8,114,0,
16,0,6,0,0,0,
70,2,16,0,5,0,
0,0,70,2,16,128,
65,0,0,0,6,0,
0,0,0,0,0,8,
130,0,16,0,0,0,
0,0,42,0,16,0,
3,0,0,0,58,0,
16,128,65,0,0,0,
7,0,0,0,56,0,
0,7,130,0,16,0,
0,0,0,0,58,0,
16,0,0,0,0,0,
1,64,0,0,0,0,
200,66,56,0,0,7,
130,0,16,0,0,0,
0,0,58,0,16,0,
0,0,0,0,58,0,
16,0,0,0,0,0,
50,0,0,9,130,0,
16,0,0,0,0,0,
58,0,16,0,0,0,
0,0,1,64,0,0,
0,0,0,63,1,64,
0,0,0,0,128,63,
56,0,0,7,130,0,
16,0,0,0,0,0,
58,0,16,0,0,0,
0,0,58,0,16,0,
0,0,0,0,14,0,
0,10,130,0,16,0,
0,0,0,0,2,64,
0,0,0,0,128,63,
0,0,128,63,0,0,
128,63,0,0,128,63,
58,0,16,0,0,0,
0,0,56,0,0,7,
130,0,16,0,3,0,
0,0,58,0,16,0,
0,0,0,0,58,0,
16,0,2,0,0,0,
50,0,0,9,66,0,
16,0,0,0,0,0,
58,0,16,0,2,0,
0,0,58,0,16,0,
0,0,0,0,42,0,
16,0,0,0,0,0,
50,0,0,9,114,0,
16,0,2,0,0,0,
70,2,16,0,6,0,
0,0,246,15,16,0,
3,0,0,0,70,2,
16,0,2,0,0,0,
50,0,0,9,114,0,
16,0,4,0,0,0,
70,2,16,0,7,0,
0,0,246,15,16,0,
3,0,0,0,70,2,
16,0,4,0,0,0,
15,0,0,9,130,0,
16,0,0,0,0,0,
230,10,16,128,65,0,
0,0,1,0,0,0,
230,10,16,128,65,0,
0,0,1,0,0,0,
56,0,0,7,130,0,
16,0,0,0,0,0,
58,0,16,0,0,0,
0,0,1,64,0,0,
59,170,56,191,25,0,
0,5,130,0,16,0,
0,0,0,0,58,0,
16,0,0,0,0,0,
0,0,0,10,242,0,
16,0,6,0,0,0,
70,4,16,0,0,0,
0,0,2,64,0,0,
0,0,0,63,0,0,
0,63,0,0,0,63,
0,0,192,63,56,0,
0,7,242,0,16,0,
6,0,0,0,70,4,
16,0,3,0,0,0,
70,14,16,0,6,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,242,0,16,0,
7,0,0,0,70,0,
16,0,6,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,0,0,
0,8,130,0,16,0,
2,0,0,0,42,0,
16,0,3,0,0,0,
58,0,16,128,65,0,
0,0,7,0,0,0,
56,0,0,7,130,0,
16,0,2,0,0,0,
58,0,16,0,2,0,
0,0,1,64,0,0,
0,0,200,66,56,0,
0,7,130,0,16,0,
2,0,0,0,58,0,
16,0,2,0,0,0,
58,0,16,0,2,0,
0,0,50,0,0,9,
130,0,16,0,2,0,
0,0,58,0,16,0,
2,0,0,0,1,64,
0,0,0,0,0,63,
1,64,0,0,0,0,
128,63,56,0,0,7,
130,0,16,0,2,0,
0,0,58,0,16,0,
2,0,0,0,58,0,
16,0,2,0,0,0,
14,0,0,10,130,0,
16,0,2,0,0,0,
2,64,0,0,0,0,
128,63,0,0,128,63,
0,0,128,63,0,0,
128,63,58,0,16,0,
2,0,0,0,56,0,
0,7,130,0,16,0,
3,0,0,0,58,0,
16,0,0,0,0,0,
58,0,16,0,2,0,
0,0,50,0,0,9,
66,0,16,0,0,0,
0,0,58,0,16,0,
0,0,0,0,58,0,
16,0,2,0,0,0,
42,0,16,0,0,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
8,0,0,0,70,0,
16,0,6,0,0,0,
70,126,16,0,3,0,
0,0,0,96,16,0,
3,0,0,0,0,0,
0,8,114,0,16,0,
8,0,0,0,70,2,
16,0,5,0,0,0,
70,2,16,128,65,0,
0,0,8,0,0,0,
50,0,0,9,114,0,
16,0,2,0,0,0,
70,2,16,0,8,0,
0,0,246,15,16,0,
3,0,0,0,70,2,
16,0,2,0,0,0,
50,0,0,9,114,0,
16,0,4,0,0,0,
70,2,16,0,7,0,
0,0,246,15,16,0,
3,0,0,0,70,2,
16,0,4,0,0,0,
0,0,0,11,242,0,
16,0,7,0,0,0,
230,14,16,128,65,0,
0,0,1,0,0,0,
2,64,0,0,0,0,
0,0,0,0,128,63,
0,0,128,63,0,0,
128,191,0,0,0,11,
242,0,16,0,1,0,
0,0,70,14,16,128,
65,0,0,0,1,0,
0,0,2,64,0,0,
0,0,128,63,0,0,
0,0,0,0,128,63,
0,0,128,63,15,0,
0,7,130,0,16,0,
0,0,0,0,70,0,
16,0,7,0,0,0,
70,0,16,0,7,0,
0,0,15,0,0,7,
130,0,16,0,2,0,
0,0,230,10,16,0,
7,0,0,0,230,10,
16,0,7,0,0,0,
56,0,0,7,130,0,
16,0,2,0,0,0,
58,0,16,0,2,0,
0,0,1,64,0,0,
59,170,56,191,25,0,
0,5,130,0,16,0,
2,0,0,0,58,0,
16,0,2,0,0,0,
56,0,0,7,130,0,
16,0,0,0,0,0,
58,0,16,0,0,0,
0,0,1,64,0,0,
59,170,56,191,25,0,
0,5,130,0,16,0,
0,0,0,0,58,0,
16,0,0,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
242,0,16,0,7,0,
0,0,230,10,16,0,
6,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
6,0,0,0,230,10,
16,0,6,0,0,0,
70,126,16,0,3,0,
0,0,0,96,16,0,
3,0,0,0,0,0,
0,8,114,0,16,0,
6,0,0,0,70,2,
16,0,5,0,0,0,
70,2,16,128,65,0,
0,0,6,0,0,0,
0,0,0,8,130,0,
16,0,3,0,0,0,
42,0,16,0,3,0,
0,0,58,0,16,128,
65,0,0,0,7,0,
0,0,56,0,0,7,
130,0,16,0,3,0,
0,0,58,0,16,0,
3,0,0,0,1,64,
0,0,0,0,200,66,
56,0,0,7,130,0,
16,0,3,0,0,0,
58,0,16,0,3,0,
0,0,58,0,16,0,
3,0,0,0,50,0,
0,9,130,0,16,0,
3,0,0,0,58,0,
16,0,3,0,0,0,
1,64,0,0,0,0,
0,63,1,64,0,0,
0,0,128,63,56,0,
0,7,130,0,16,0,
3,0,0,0,58,0,
16,0,3,0,0,0,
58,0,16,0,3,0,
0,0,14,0,0,10,
130,0,16,0,3,0,
0,0,2,64,0,0,
0,0,128,63,0,0,
128,63,0,0,128,63,
0,0,128,63,58,0,
16,0,3,0,0,0,
56,0,0,7,130,0,
16,0,4,0,0,0,
58,0,16,0,0,0,
0,0,58,0,16,0,
3,0,0,0,50,0,
0,9,66,0,16,0,
0,0,0,0,58,0,
16,0,0,0,0,0,
58,0,16,0,3,0,
0,0,42,0,16,0,
0,0,0,0,50,0,
0,9,114,0,16,0,
2,0,0,0,70,2,
16,0,6,0,0,0,
246,15,16,0,4,0,
0,0,70,2,16,0,
2,0,0,0,50,0,
0,9,114,0,16,0,
4,0,0,0,70,2,
16,0,7,0,0,0,
246,15,16,0,4,0,
0,0,70,2,16,0,
4,0,0,0,0,0,
0,10,242,0,16,0,
6,0,0,0,70,4,
16,0,0,0,0,0,
2,64,0,0,0,0,
192,63,0,0,0,191,
0,0,192,63,0,0,
0,63,0,0,0,10,
50,0,16,0,0,0,
0,0,70,0,16,0,
0,0,0,0,2,64,
0,0,0,0,192,63,
0,0,192,63,0,0,
0,0,0,0,0,0,
56,0,0,7,50,0,
16,0,0,0,0,0,
70,0,16,0,0,0,
0,0,70,0,16,0,
3,0,0,0,56,0,
0,7,242,0,16,0,
6,0,0,0,70,4,
16,0,3,0,0,0,
70,14,16,0,6,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,242,0,16,0,
7,0,0,0,70,0,
16,0,6,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,0,0,
0,8,130,0,16,0,
0,0,0,0,42,0,
16,0,3,0,0,0,
58,0,16,128,65,0,
0,0,7,0,0,0,
56,0,0,7,130,0,
16,0,0,0,0,0,
58,0,16,0,0,0,
0,0,1,64,0,0,
0,0,200,66,56,0,
0,7,130,0,16,0,
0,0,0,0,58,0,
16,0,0,0,0,0,
58,0,16,0,0,0,
0,0,50,0,0,9,
130,0,16,0,0,0,
0,0,58,0,16,0,
0,0,0,0,1,64,
0,0,0,0,0,63,
1,64,0,0,0,0,
128,63,56,0,0,7,
130,0,16,0,0,0,
0,0,58,0,16,0,
0,0,0,0,58,0,
16,0,0,0,0,0,
14,0,0,10,130,0,
16,0,0,0,0,0,
2,64,0,0,0,0,
128,63,0,0,128,63,
0,0,128,63,0,0,
128,63,58,0,16,0,
0,0,0,0,56,0,
0,7,18,0,16,0,
3,0,0,0,58,0,
16,0,0,0,0,0,
58,0,16,0,2,0,
0,0,50,0,0,9,
66,0,16,0,0,0,
0,0,58,0,16,0,
2,0,0,0,58,0,
16,0,0,0,0,0,
42,0,16,0,0,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
8,0,0,0,70,0,
16,0,6,0,0,0,
70,126,16,0,3,0,
0,0,0,96,16,0,
3,0,0,0,0,0,
0,8,114,0,16,0,
8,0,0,0,70,2,
16,0,5,0,0,0,
70,2,16,128,65,0,
0,0,8,0,0,0,
50,0,0,9,114,0,
16,0,2,0,0,0,
70,2,16,0,8,0,
0,0,6,0,16,0,
3,0,0,0,70,2,
16,0,2,0,0,0,
50,0,0,9,178,0,
16,0,3,0,0,0,
70,8,16,0,7,0,
0,0,6,0,16,0,
3,0,0,0,70,8,
16,0,4,0,0,0,
15,0,0,7,130,0,
16,0,0,0,0,0,
70,0,16,0,1,0,
0,0,70,0,16,0,
1,0,0,0,15,0,
0,7,18,0,16,0,
1,0,0,0,230,10,
16,0,1,0,0,0,
230,10,16,0,1,0,
0,0,56,0,0,7,
18,0,16,0,1,0,
0,0,10,0,16,0,
1,0,0,0,1,64,
0,0,59,170,56,191,
25,0,0,5,18,0,
16,0,1,0,0,0,
10,0,16,0,1,0,
0,0,56,0,0,7,
130,0,16,0,0,0,
0,0,58,0,16,0,
0,0,0,0,1,64,
0,0,59,170,56,191,
25,0,0,5,130,0,
16,0,0,0,0,0,
58,0,16,0,0,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,242,0,16,0,
4,0,0,0,230,10,
16,0,6,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,226,0,
16,0,1,0,0,0,
230,10,16,0,6,0,
0,0,54,121,16,0,
3,0,0,0,0,96,
16,0,3,0,0,0,
0,0,0,8,226,0,
16,0,1,0,0,0,
86,14,16,128,65,0,
0,0,1,0,0,0,
6,9,16,0,5,0,
0,0,0,0,0,8,
130,0,16,0,2,0,
0,0,42,0,16,0,
3,0,0,0,58,0,
16,128,65,0,0,0,
4,0,0,0,56,0,
0,7,130,0,16,0,
2,0,0,0,58,0,
16,0,2,0,0,0,
1,64,0,0,0,0,
200,66,56,0,0,7,
130,0,16,0,2,0,
0,0,58,0,16,0,
2,0,0,0,58,0,
16,0,2,0,0,0,
50,0,0,9,130,0,
16,0,2,0,0,0,
58,0,16,0,2,0,
0,0,1,64,0,0,
0,0,0,63,1,64,
0,0,0,0,128,63,
56,0,0,7,130,0,
16,0,2,0,0,0,
58,0,16,0,2,0,
0,0,58,0,16,0,
2,0,0,0,14,0,
0,10,130,0,16,0,
2,0,0,0,2,64,
0,0,0,0,128,63,
0,0,128,63,0,0,
128,63,0,0,128,63,
58,0,16,0,2,0,
0,0,56,0,0,7,
130,0,16,0,4,0,
0,0,58,0,16,0,
0,0,0,0,58,0,
16,0,2,0,0,0,
50,0,0,9,66,0,
16,0,0,0,0,0,
58,0,16,0,0,0,
0,0,58,0,16,0,
2,0,0,0,42,0,
16,0,0,0,0,0,
50,0,0,9,226,0,
16,0,1,0,0,0,
86,14,16,0,1,0,
0,0,246,15,16,0,
4,0,0,0,6,9,
16,0,2,0,0,0,
50,0,0,9,114,0,
16,0,2,0,0,0,
70,2,16,0,4,0,
0,0,246,15,16,0,
4,0,0,0,70,3,
16,0,3,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
242,0,16,0,4,0,
0,0,70,0,16,0,
0,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,178,0,16,0,
0,0,0,0,70,0,
16,0,0,0,0,0,
70,123,16,0,3,0,
0,0,0,96,16,0,
3,0,0,0,0,0,
0,8,178,0,16,0,
0,0,0,0,70,12,
16,128,65,0,0,0,
0,0,0,0,70,8,
16,0,5,0,0,0,
0,0,0,8,130,0,
16,0,2,0,0,0,
42,0,16,0,3,0,
0,0,58,0,16,128,
65,0,0,0,4,0,
0,0,56,0,0,7,
130,0,16,0,2,0,
0,0,58,0,16,0,
2,0,0,0,1,64,
0,0,0,0,200,66,
56,0,0,7,130,0,
16,0,2,0,0,0,
58,0,16,0,2,0,
0,0,58,0,16,0,
2,0,0,0,50,0,
0,9,130,0,16,0,
2,0,0,0,58,0,
16,0,2,0,0,0,
1,64,0,0,0,0,
0,63,1,64,0,0,
0,0,128,63,56,0,
0,7,130,0,16,0,
2,0,0,0,58,0,
16,0,2,0,0,0,
58,0,16,0,2,0,
0,0,14,0,0,10,
130,0,16,0,2,0,
0,0,2,64,0,0,
0,0,128,63,0,0,
128,63,0,0,128,63,
0,0,128,63,58,0,
16,0,2,0,0,0,
56,0,0,7,18,0,
16,0,3,0,0,0,
10,0,16,0,1,0,
0,0,58,0,16,0,
2,0,0,0,50,0,
0,9,66,0,16,0,
0,0,0,0,10,0,
16,0,1,0,0,0,
58,0,16,0,2,0,
0,0,42,0,16,0,
0,0,0,0,50,0,
0,9,178,0,16,0,
0,0,0,0,70,12,
16,0,0,0,0,0,
6,0,16,0,3,0,
0,0,150,13,16,0,
1,0,0,0,50,0,
0,9,114,0,16,0,
1,0,0,0,70,2,
16,0,4,0,0,0,
6,0,16,0,3,0,
0,0,70,2,16,0,
2,0,0,0,14,0,
0,7,114,0,16,0,
1,0,0,0,70,2,
16,0,1,0,0,0,
166,10,16,0,0,0,
0,0,14,0,0,7,
114,0,16,0,0,0,
0,0,70,3,16,0,
0,0,0,0,166,10,
16,0,0,0,0,0,
0,0,0,8,114,0,
16,0,0,0,0,0,
70,2,16,128,65,0,
0,0,1,0,0,0,
70,2,16,0,0,0,
0,0,50,0,0,12,
114,0,16,0,0,0,
0,0,70,2,16,0,
0,0,0,0,2,64,
0,0,154,153,153,62,
154,153,153,62,154,153,
153,62,0,0,0,0,
70,2,16,0,1,0,
0,0,50,0,0,13,
114,32,16,0,0,0,
0,0,70,2,16,128,
65,0,0,0,0,0,
0,0,2,64,0,0,
205,204,76,63,205,204,
76,63,205,204,76,63,
0,0,0,0,70,2,
16,0,5,0,0,0,
54,0,0,5,130,32,
16,0,0,0,0,0,
58,0,16,0,5,0,
0,0,62,0,0,1,
83,84,65,84,148,0,
0,0,170,0,0,0,
9,0,0,0,0,0,
0,0,2,0,0,0,
149,0,0,0,0,0,
0,0,0,0,0,0,
1,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,19,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
1,0,0,0,0,0,
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
0,0,0,0,0,0
};

}

namespace RetroArch
{
class SharpenShadersSuperResExShaderDef : public ShaderDef
{
public:
	SharpenShadersSuperResExShaderDef() : ShaderDef{}
	{
		Name = "super-res-ex";
		VertexByteCode = RetroArchSharpenShadersSuperResExShaderDefs::sVertexByteCode;
		VertexLength = sizeof(RetroArchSharpenShadersSuperResExShaderDefs::sVertexByteCode);
		FragmentByteCode = RetroArchSharpenShadersSuperResExShaderDefs::sFragmentByteCode;
		FragmentLength = sizeof(RetroArchSharpenShadersSuperResExShaderDefs::sFragmentByteCode);
		Params.push_back(ShaderParam("MVP", 0, 0, 64, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("SourceSize", -1, 0, 16, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("OutputSize", -1, 32, 16, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("FrameCount", -1, 48, 4, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("REFSize", -1, 16, 16, 0.000000f, 0.000000f, 0.000000f));
		Samplers.push_back(ShaderSampler("REF", 3));
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
