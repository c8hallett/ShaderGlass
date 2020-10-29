/*
ShaderGlass shader crt-shaders-guest\afterglow imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/master/crt/shaders/guest/afterglow.slang
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArchCrtShadersGuestAfterglowShaderDefs
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
68,88,66,67,172,181,
227,224,62,250,59,240,
184,131,113,150,125,226,
213,243,1,0,0,0,
144,13,0,0,5,0,
0,0,52,0,0,0,
116,5,0,0,168,5,
0,0,220,5,0,0,
244,12,0,0,82,68,
69,70,56,5,0,0,
1,0,0,0,60,3,
0,0,15,0,0,0,
60,0,0,0,0,5,
255,255,0,129,0,0,
15,5,0,0,82,68,
49,49,60,0,0,0,
24,0,0,0,32,0,
0,0,40,0,0,0,
36,0,0,0,12,0,
0,0,0,0,0,0,
28,2,0,0,3,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,2,0,0,0,
1,0,0,0,1,0,
0,0,44,2,0,0,
3,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,3,0,
0,0,1,0,0,0,
1,0,0,0,70,2,
0,0,3,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
4,0,0,0,1,0,
0,0,1,0,0,0,
96,2,0,0,3,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,5,0,0,0,
1,0,0,0,1,0,
0,0,122,2,0,0,
3,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,6,0,
0,0,1,0,0,0,
1,0,0,0,148,2,
0,0,3,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
7,0,0,0,1,0,
0,0,1,0,0,0,
174,2,0,0,3,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,8,0,0,0,
1,0,0,0,1,0,
0,0,200,2,0,0,
2,0,0,0,5,0,
0,0,4,0,0,0,
255,255,255,255,2,0,
0,0,1,0,0,0,
13,0,0,0,207,2,
0,0,2,0,0,0,
5,0,0,0,4,0,
0,0,255,255,255,255,
3,0,0,0,1,0,
0,0,13,0,0,0,
224,2,0,0,2,0,
0,0,5,0,0,0,
4,0,0,0,255,255,
255,255,4,0,0,0,
1,0,0,0,13,0,
0,0,241,2,0,0,
2,0,0,0,5,0,
0,0,4,0,0,0,
255,255,255,255,5,0,
0,0,1,0,0,0,
13,0,0,0,2,3,
0,0,2,0,0,0,
5,0,0,0,4,0,
0,0,255,255,255,255,
6,0,0,0,1,0,
0,0,13,0,0,0,
19,3,0,0,2,0,
0,0,5,0,0,0,
4,0,0,0,255,255,
255,255,7,0,0,0,
1,0,0,0,13,0,
0,0,36,3,0,0,
2,0,0,0,5,0,
0,0,4,0,0,0,
255,255,255,255,8,0,
0,0,1,0,0,0,
13,0,0,0,53,3,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
1,0,0,0,1,0,
0,0,0,0,0,0,
95,83,111,117,114,99,
101,95,115,97,109,112,
108,101,114,0,95,79,
114,105,103,105,110,97,
108,72,105,115,116,111,
114,121,49,95,115,97,
109,112,108,101,114,0,
95,79,114,105,103,105,
110,97,108,72,105,115,
116,111,114,121,50,95,
115,97,109,112,108,101,
114,0,95,79,114,105,
103,105,110,97,108,72,
105,115,116,111,114,121,
51,95,115,97,109,112,
108,101,114,0,95,79,
114,105,103,105,110,97,
108,72,105,115,116,111,
114,121,52,95,115,97,
109,112,108,101,114,0,
95,79,114,105,103,105,
110,97,108,72,105,115,
116,111,114,121,53,95,
115,97,109,112,108,101,
114,0,95,79,114,105,
103,105,110,97,108,72,
105,115,116,111,114,121,
54,95,115,97,109,112,
108,101,114,0,83,111,
117,114,99,101,0,79,
114,105,103,105,110,97,
108,72,105,115,116,111,
114,121,49,0,79,114,
105,103,105,110,97,108,
72,105,115,116,111,114,
121,50,0,79,114,105,
103,105,110,97,108,72,
105,115,116,111,114,121,
51,0,79,114,105,103,
105,110,97,108,72,105,
115,116,111,114,121,52,
0,79,114,105,103,105,
110,97,108,72,105,115,
116,111,114,121,53,0,
79,114,105,103,105,110,
97,108,72,105,115,116,
111,114,121,54,0,80,
117,115,104,0,171,171,
53,3,0,0,8,0,
0,0,84,3,0,0,
32,0,0,0,0,0,
0,0,0,0,0,0,
148,4,0,0,0,0,
0,0,4,0,0,0,
2,0,0,0,164,4,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,200,4,
0,0,4,0,0,0,
4,0,0,0,2,0,
0,0,164,4,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,210,4,0,0,
8,0,0,0,4,0,
0,0,2,0,0,0,
164,4,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
220,4,0,0,12,0,
0,0,4,0,0,0,
2,0,0,0,164,4,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,230,4,
0,0,16,0,0,0,
4,0,0,0,2,0,
0,0,164,4,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,240,4,0,0,
20,0,0,0,4,0,
0,0,2,0,0,0,
164,4,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
250,4,0,0,24,0,
0,0,4,0,0,0,
2,0,0,0,164,4,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,4,5,
0,0,28,0,0,0,
4,0,0,0,2,0,
0,0,164,4,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,112,97,114,97,
109,115,95,83,87,0,
102,108,111,97,116,0,
0,0,3,0,1,0,
1,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,158,4,0,0,
112,97,114,97,109,115,
95,65,82,0,112,97,
114,97,109,115,95,80,
82,0,112,97,114,97,
109,115,95,65,71,0,
112,97,114,97,109,115,
95,80,71,0,112,97,
114,97,109,115,95,65,
66,0,112,97,114,97,
109,115,95,80,66,0,
112,97,114,97,109,115,
95,115,97,116,0,77,
105,99,114,111,115,111,
102,116,32,40,82,41,
32,72,76,83,76,32,
83,104,97,100,101,114,
32,67,111,109,112,105,
108,101,114,32,49,48,
46,49,0,171,73,83,
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
83,72,69,88,16,7,
0,0,80,0,0,0,
196,1,0,0,106,8,
0,1,89,0,0,4,
70,142,32,0,1,0,
0,0,2,0,0,0,
90,0,0,3,0,96,
16,0,2,0,0,0,
90,0,0,3,0,96,
16,0,3,0,0,0,
90,0,0,3,0,96,
16,0,4,0,0,0,
90,0,0,3,0,96,
16,0,5,0,0,0,
90,0,0,3,0,96,
16,0,6,0,0,0,
90,0,0,3,0,96,
16,0,7,0,0,0,
90,0,0,3,0,96,
16,0,8,0,0,0,
88,24,0,4,0,112,
16,0,2,0,0,0,
85,85,0,0,88,24,
0,4,0,112,16,0,
3,0,0,0,85,85,
0,0,88,24,0,4,
0,112,16,0,4,0,
0,0,85,85,0,0,
88,24,0,4,0,112,
16,0,5,0,0,0,
85,85,0,0,88,24,
0,4,0,112,16,0,
6,0,0,0,85,85,
0,0,88,24,0,4,
0,112,16,0,7,0,
0,0,85,85,0,0,
88,24,0,4,0,112,
16,0,8,0,0,0,
85,85,0,0,98,16,
0,3,50,16,16,0,
0,0,0,0,101,0,
0,3,242,32,16,0,
0,0,0,0,104,0,
0,2,7,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,0,0,
0,0,70,16,16,0,
0,0,0,0,70,126,
16,0,6,0,0,0,
0,96,16,0,6,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
1,0,0,0,70,16,
16,0,0,0,0,0,
70,126,16,0,5,0,
0,0,0,96,16,0,
5,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,2,0,0,0,
70,16,16,0,0,0,
0,0,70,126,16,0,
3,0,0,0,0,96,
16,0,3,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,3,0,
0,0,70,16,16,0,
0,0,0,0,70,126,
16,0,4,0,0,0,
0,96,16,0,4,0,
0,0,54,0,0,6,
18,0,16,0,4,0,
0,0,42,128,32,0,
1,0,0,0,0,0,
0,0,54,0,0,6,
98,0,16,0,4,0,
0,0,6,130,32,0,
1,0,0,0,1,0,
0,0,56,0,0,10,
114,0,16,0,5,0,
0,0,70,2,16,0,
4,0,0,0,2,64,
0,0,0,0,128,192,
0,0,128,192,0,0,
128,192,0,0,0,0,
25,0,0,5,114,0,
16,0,5,0,0,0,
70,2,16,0,5,0,
0,0,54,0,0,6,
50,0,16,0,6,0,
0,0,214,133,32,0,
1,0,0,0,0,0,
0,0,54,0,0,6,
66,0,16,0,6,0,
0,0,26,128,32,0,
1,0,0,0,1,0,
0,0,56,0,0,7,
114,0,16,0,5,0,
0,0,70,2,16,0,
5,0,0,0,70,2,
16,0,6,0,0,0,
56,0,0,7,114,0,
16,0,3,0,0,0,
70,2,16,0,3,0,
0,0,70,2,16,0,
5,0,0,0,25,0,
0,6,114,0,16,0,
5,0,0,0,70,2,
16,128,65,0,0,0,
4,0,0,0,56,0,
0,7,114,0,16,0,
5,0,0,0,70,2,
16,0,5,0,0,0,
70,2,16,0,6,0,
0,0,50,0,0,9,
114,0,16,0,2,0,
0,0,70,2,16,0,
2,0,0,0,70,2,
16,0,5,0,0,0,
70,2,16,0,3,0,
0,0,56,0,0,10,
114,0,16,0,3,0,
0,0,70,2,16,0,
4,0,0,0,2,64,
0,0,0,0,16,193,
0,0,16,193,0,0,
16,193,0,0,0,0,
25,0,0,5,114,0,
16,0,3,0,0,0,
70,2,16,0,3,0,
0,0,56,0,0,7,
114,0,16,0,3,0,
0,0,70,2,16,0,
3,0,0,0,70,2,
16,0,6,0,0,0,
50,0,0,9,114,0,
16,0,1,0,0,0,
70,2,16,0,1,0,
0,0,70,2,16,0,
3,0,0,0,70,2,
16,0,2,0,0,0,
56,0,0,10,114,0,
16,0,2,0,0,0,
70,2,16,0,4,0,
0,0,2,64,0,0,
0,0,128,193,0,0,
128,193,0,0,128,193,
0,0,0,0,25,0,
0,5,114,0,16,0,
2,0,0,0,70,2,
16,0,2,0,0,0,
56,0,0,7,114,0,
16,0,2,0,0,0,
70,2,16,0,2,0,
0,0,70,2,16,0,
6,0,0,0,50,0,
0,9,114,0,16,0,
0,0,0,0,70,2,
16,0,0,0,0,0,
70,2,16,0,2,0,
0,0,70,2,16,0,
1,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,1,0,0,0,
70,16,16,0,0,0,
0,0,70,126,16,0,
7,0,0,0,0,96,
16,0,7,0,0,0,
56,0,0,10,114,0,
16,0,2,0,0,0,
70,2,16,0,4,0,
0,0,2,64,0,0,
0,0,200,193,0,0,
200,193,0,0,200,193,
0,0,0,0,56,0,
0,10,114,0,16,0,
3,0,0,0,70,2,
16,0,4,0,0,0,
2,64,0,0,0,0,
16,194,0,0,16,194,
0,0,16,194,0,0,
0,0,25,0,0,5,
114,0,16,0,3,0,
0,0,70,2,16,0,
3,0,0,0,56,0,
0,7,114,0,16,0,
3,0,0,0,70,2,
16,0,3,0,0,0,
70,2,16,0,6,0,
0,0,25,0,0,5,
114,0,16,0,2,0,
0,0,70,2,16,0,
2,0,0,0,56,0,
0,7,114,0,16,0,
2,0,0,0,70,2,
16,0,2,0,0,0,
70,2,16,0,6,0,
0,0,50,0,0,9,
114,0,16,0,0,0,
0,0,70,2,16,0,
1,0,0,0,70,2,
16,0,2,0,0,0,
70,2,16,0,0,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
1,0,0,0,70,16,
16,0,0,0,0,0,
70,126,16,0,8,0,
0,0,0,96,16,0,
8,0,0,0,50,0,
0,9,114,0,16,0,
0,0,0,0,70,2,
16,0,1,0,0,0,
70,2,16,0,3,0,
0,0,70,2,16,0,
0,0,0,0,0,0,
0,10,114,0,16,0,
1,0,0,0,70,2,
16,0,0,0,0,0,
2,64,0,0,111,18,
131,58,111,18,131,58,
111,18,131,58,0,0,
0,0,16,0,0,7,
18,0,16,0,0,0,
0,0,70,2,16,0,
0,0,0,0,70,2,
16,0,0,0,0,0,
75,0,0,5,18,0,
16,0,0,0,0,0,
10,0,16,0,0,0,
0,0,47,0,0,5,
226,0,16,0,0,0,
0,0,6,9,16,0,
1,0,0,0,56,0,
0,8,226,0,16,0,
0,0,0,0,86,14,
16,0,0,0,0,0,
246,143,32,0,1,0,
0,0,1,0,0,0,
25,0,0,5,226,0,
16,0,0,0,0,0,
86,14,16,0,0,0,
0,0,16,0,0,7,
18,0,16,0,1,0,
0,0,150,7,16,0,
0,0,0,0,150,7,
16,0,0,0,0,0,
68,0,0,5,18,0,
16,0,1,0,0,0,
10,0,16,0,1,0,
0,0,56,0,0,7,
226,0,16,0,0,0,
0,0,86,14,16,0,
0,0,0,0,6,0,
16,0,1,0,0,0,
56,0,0,7,114,0,
16,0,0,0,0,0,
6,0,16,0,0,0,
0,0,150,7,16,0,
0,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,1,0,0,0,
70,16,16,0,0,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
0,0,0,7,130,0,
16,0,0,0,0,0,
26,0,16,0,1,0,
0,0,10,0,16,0,
1,0,0,0,0,0,
0,7,130,0,16,0,
0,0,0,0,42,0,
16,0,1,0,0,0,
58,0,16,0,0,0,
0,0,49,0,0,7,
130,0,16,0,0,0,
0,0,1,64,0,0,
225,224,224,60,58,0,
16,0,0,0,0,0,
55,0,0,10,130,0,
16,0,0,0,0,0,
58,0,16,0,0,0,
0,0,1,64,0,0,
0,0,0,0,10,128,
32,0,1,0,0,0,
0,0,0,0,50,0,
0,9,114,32,16,0,
0,0,0,0,70,2,
16,0,0,0,0,0,
246,15,16,0,0,0,
0,0,70,2,16,0,
1,0,0,0,54,0,
0,5,130,32,16,0,
0,0,0,0,1,64,
0,0,0,0,128,63,
62,0,0,1,83,84,
65,84,148,0,0,0,
51,0,0,0,7,0,
0,0,0,0,0,0,
2,0,0,0,37,0,
0,0,0,0,0,0,
0,0,0,0,1,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,7,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,5,0,
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
0,0,0,0
};

}

namespace RetroArch
{
class CrtShadersGuestAfterglowShaderDef : public ShaderDef
{
public:
	CrtShadersGuestAfterglowShaderDef() : ShaderDef{}
	{
		Name = "afterglow";
		VertexByteCode = RetroArchCrtShadersGuestAfterglowShaderDefs::sVertexByteCode;
		VertexLength = sizeof(RetroArchCrtShadersGuestAfterglowShaderDefs::sVertexByteCode);
		FragmentByteCode = RetroArchCrtShadersGuestAfterglowShaderDefs::sFragmentByteCode;
		FragmentLength = sizeof(RetroArchCrtShadersGuestAfterglowShaderDefs::sFragmentByteCode);
		Params.push_back(ShaderParam("SW", -1, 0, 4, 0.000000f, 1.000000f, 1.000000f));
		Params.push_back(ShaderParam("AR", -1, 4, 4, 0.000000f, 1.000000f, 0.070000f));
		Params.push_back(ShaderParam("PR", -1, 8, 4, 0.000000f, 1.000000f, 0.050000f));
		Params.push_back(ShaderParam("AG", -1, 12, 4, 0.000000f, 1.000000f, 0.070000f));
		Params.push_back(ShaderParam("PG", -1, 16, 4, 0.000000f, 1.000000f, 0.050000f));
		Params.push_back(ShaderParam("AB", -1, 20, 4, 0.000000f, 1.000000f, 0.070000f));
		Params.push_back(ShaderParam("PB", -1, 24, 4, 0.000000f, 1.000000f, 0.050000f));
		Params.push_back(ShaderParam("sat", -1, 28, 4, 0.000000f, 1.000000f, 0.100000f));
		Params.push_back(ShaderParam("MVP", 0, 0, 64, 0.000000f, 0.000000f, 0.000000f));
		Samplers.push_back(ShaderSampler("Source", 2));
		Samplers.push_back(ShaderSampler("OriginalHistory1", 3));
		Samplers.push_back(ShaderSampler("OriginalHistory2", 4));
		Samplers.push_back(ShaderSampler("OriginalHistory3", 5));
		Samplers.push_back(ShaderSampler("OriginalHistory4", 6));
		Samplers.push_back(ShaderSampler("OriginalHistory5", 7));
		Samplers.push_back(ShaderSampler("OriginalHistory6", 8));
/*
VertexSource = %*VERTEX_SOURCE*%;
*/
/*
FragmentSource = %*FRAGMENT_SOURCE*%;
*/
	}
};
}
