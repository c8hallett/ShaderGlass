/*
ShaderGlass shader scalefx-shaders\scalefx-pass1 imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/master/scalefx/shaders/scalefx-pass1.slang
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArchScalefxShadersScalefxPass1ShaderDefs
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
68,88,66,67,187,54,
238,178,22,178,46,150,
151,160,33,54,63,146,
80,207,1,0,0,0,
248,13,0,0,5,0,
0,0,52,0,0,0,
56,2,0,0,108,2,
0,0,160,2,0,0,
92,13,0,0,82,68,
69,70,252,1,0,0,
1,0,0,0,184,0,
0,0,3,0,0,0,
60,0,0,0,0,5,
255,255,0,129,0,0,
211,1,0,0,82,68,
49,49,60,0,0,0,
24,0,0,0,32,0,
0,0,40,0,0,0,
36,0,0,0,12,0,
0,0,0,0,0,0,
156,0,0,0,3,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,1,0,0,0,
1,0,0,0,1,0,
0,0,172,0,0,0,
2,0,0,0,5,0,
0,0,4,0,0,0,
255,255,255,255,1,0,
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
0,0,3,0,0,0,
208,0,0,0,32,0,
0,0,0,0,0,0,
0,0,0,0,72,1,
0,0,0,0,0,0,
16,0,0,0,0,0,
0,0,100,1,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,136,1,0,0,
16,0,0,0,4,0,
0,0,2,0,0,0,
160,1,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
196,1,0,0,20,0,
0,0,4,0,0,0,
2,0,0,0,160,1,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,112,97,
114,97,109,115,95,83,
111,117,114,99,101,83,
105,122,101,0,102,108,
111,97,116,52,0,171,
171,171,1,0,3,0,
1,0,4,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,90,1,
0,0,112,97,114,97,
109,115,95,83,70,88,
95,67,76,82,0,102,
108,111,97,116,0,171,
171,171,0,0,3,0,
1,0,1,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,151,1,
0,0,112,97,114,97,
109,115,95,83,70,88,
95,83,65,65,0,77,
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
83,72,69,88,180,10,
0,0,80,0,0,0,
173,2,0,0,106,8,
0,1,89,0,0,4,
70,142,32,0,1,0,
0,0,2,0,0,0,
90,0,0,3,0,96,
16,0,1,0,0,0,
88,24,0,4,0,112,
16,0,1,0,0,0,
85,85,0,0,98,16,
0,3,50,16,16,0,
0,0,0,0,101,0,
0,3,242,32,16,0,
0,0,0,0,104,0,
0,2,4,0,0,0,
69,0,0,140,1,2,
0,128,194,0,0,128,
67,85,21,0,50,0,
16,0,0,0,0,0,
70,16,16,0,0,0,
0,0,70,126,16,0,
1,0,0,0,0,96,
16,0,1,0,0,0,
0,0,0,9,66,0,
16,0,0,0,0,0,
10,0,16,128,65,0,
0,0,0,0,0,0,
10,128,32,0,1,0,
0,0,1,0,0,0,
52,0,0,7,66,0,
16,0,0,0,0,0,
42,0,16,0,0,0,
0,0,1,64,0,0,
0,0,0,0,14,0,
0,8,66,0,16,0,
0,0,0,0,42,0,
16,0,0,0,0,0,
10,128,32,0,1,0,
0,0,1,0,0,0,
69,0,0,140,1,224,
1,128,194,0,0,128,
67,85,21,0,130,0,
16,0,0,0,0,0,
70,16,16,0,0,0,
0,0,70,126,16,0,
1,0,0,0,0,96,
16,0,1,0,0,0,
69,0,0,140,1,0,
0,128,194,0,0,128,
67,85,21,0,50,0,
16,0,1,0,0,0,
70,16,16,0,0,0,
0,0,214,120,16,0,
1,0,0,0,0,96,
16,0,1,0,0,0,
51,0,0,7,162,0,
16,0,0,0,0,0,
86,13,16,0,0,0,
0,0,6,4,16,0,
1,0,0,0,0,0,
0,7,162,0,16,0,
0,0,0,0,6,4,
16,0,1,0,0,0,
86,13,16,0,0,0,
0,0,49,0,0,7,
34,0,16,0,0,0,
0,0,26,0,16,0,
0,0,0,0,58,0,
16,0,0,0,0,0,
0,0,0,8,130,0,
16,0,0,0,0,0,
10,0,16,128,65,0,
0,0,1,0,0,0,
26,0,16,0,1,0,
0,0,55,0,0,10,
34,0,16,0,0,0,
0,0,26,0,16,0,
0,0,0,0,58,0,
16,0,0,0,0,0,
58,0,16,128,65,0,
0,0,0,0,0,0,
0,0,0,8,34,0,
16,0,0,0,0,0,
10,0,16,128,65,0,
0,0,0,0,0,0,
26,0,16,0,0,0,
0,0,0,0,0,7,
18,0,16,0,0,0,
0,0,10,0,16,0,
0,0,0,0,10,0,
16,0,0,0,0,0,
0,32,0,7,34,0,
16,0,0,0,0,0,
26,0,16,0,0,0,
0,0,1,64,0,0,
0,0,128,63,56,0,
0,7,34,0,16,0,
0,0,0,0,26,0,
16,0,0,0,0,0,
42,0,16,0,0,0,
0,0,56,0,0,7,
66,0,16,0,0,0,
0,0,10,0,16,0,
1,0,0,0,26,0,
16,0,1,0,0,0,
56,0,0,7,34,0,
16,0,0,0,0,0,
42,0,16,0,0,0,
0,0,26,0,16,0,
0,0,0,0,0,0,
0,7,66,0,16,0,
0,0,0,0,10,0,
16,0,1,0,0,0,
26,0,16,0,1,0,
0,0,49,0,0,7,
18,0,16,0,0,0,
0,0,10,0,16,0,
0,0,0,0,42,0,
16,0,0,0,0,0,
57,0,0,8,66,0,
16,0,0,0,0,0,
1,64,0,0,0,0,
128,63,26,128,32,0,
1,0,0,0,1,0,
0,0,55,0,0,9,
18,0,16,0,0,0,
0,0,42,0,16,0,
0,0,0,0,10,0,
16,0,0,0,0,0,
1,64,0,0,255,255,
255,255,1,0,0,7,
34,32,16,0,0,0,
0,0,26,0,16,0,
0,0,0,0,10,0,
16,0,0,0,0,0,
69,0,0,140,1,254,
1,128,194,0,0,128,
67,85,21,0,18,0,
16,0,0,0,0,0,
70,16,16,0,0,0,
0,0,54,121,16,0,
1,0,0,0,0,96,
16,0,1,0,0,0,
69,0,0,140,1,30,
0,128,194,0,0,128,
67,85,21,0,114,0,
16,0,2,0,0,0,
70,16,16,0,0,0,
0,0,150,115,16,0,
1,0,0,0,0,96,
16,0,1,0,0,0,
51,0,0,7,18,0,
16,0,0,0,0,0,
10,0,16,0,0,0,
0,0,42,0,16,0,
2,0,0,0,0,0,
0,7,18,0,16,0,
0,0,0,0,42,0,
16,0,2,0,0,0,
10,0,16,0,0,0,
0,0,51,0,0,7,
34,0,16,0,0,0,
0,0,10,0,16,0,
1,0,0,0,10,0,
16,0,2,0,0,0,
0,0,0,7,34,0,
16,0,0,0,0,0,
10,0,16,0,1,0,
0,0,26,0,16,0,
0,0,0,0,49,0,
0,7,18,0,16,0,
0,0,0,0,26,0,
16,0,0,0,0,0,
10,0,16,0,0,0,
0,0,0,0,0,8,
34,0,16,0,0,0,
0,0,10,0,16,128,
65,0,0,0,1,0,
0,0,42,0,16,0,
2,0,0,0,55,0,
0,10,18,0,16,0,
0,0,0,0,10,0,
16,0,0,0,0,0,
26,0,16,0,0,0,
0,0,26,0,16,128,
65,0,0,0,0,0,
0,0,0,0,0,8,
18,0,16,0,0,0,
0,0,26,0,16,128,
65,0,0,0,2,0,
0,0,10,0,16,0,
0,0,0,0,0,32,
0,7,18,0,16,0,
0,0,0,0,10,0,
16,0,0,0,0,0,
1,64,0,0,0,0,
128,63,0,0,0,9,
34,0,16,0,0,0,
0,0,26,0,16,128,
65,0,0,0,2,0,
0,0,10,128,32,0,
1,0,0,0,1,0,
0,0,52,0,0,7,
34,0,16,0,0,0,
0,0,26,0,16,0,
0,0,0,0,1,64,
0,0,0,0,0,0,
14,0,0,8,34,0,
16,0,0,0,0,0,
26,0,16,0,0,0,
0,0,10,128,32,0,
1,0,0,0,1,0,
0,0,56,0,0,7,
18,0,16,0,0,0,
0,0,10,0,16,0,
0,0,0,0,26,0,
16,0,0,0,0,0,
56,0,0,7,34,0,
16,0,0,0,0,0,
10,0,16,0,1,0,
0,0,42,0,16,0,
2,0,0,0,56,0,
0,7,18,0,16,0,
0,0,0,0,26,0,
16,0,0,0,0,0,
10,0,16,0,0,0,
0,0,0,0,0,7,
34,0,16,0,0,0,
0,0,26,0,16,0,
2,0,0,0,26,0,
16,0,2,0,0,0,
0,0,0,7,130,0,
16,0,0,0,0,0,
10,0,16,0,1,0,
0,0,42,0,16,0,
2,0,0,0,49,0,
0,7,34,0,16,0,
0,0,0,0,26,0,
16,0,0,0,0,0,
58,0,16,0,0,0,
0,0,55,0,0,9,
34,0,16,0,0,0,
0,0,42,0,16,0,
0,0,0,0,26,0,
16,0,0,0,0,0,
1,64,0,0,255,255,
255,255,1,0,0,7,
18,32,16,0,0,0,
0,0,10,0,16,0,
0,0,0,0,26,0,
16,0,0,0,0,0,
69,0,0,140,1,62,
0,128,194,0,0,128,
67,85,21,0,50,0,
16,0,0,0,0,0,
70,16,16,0,0,0,
0,0,214,120,16,0,
1,0,0,0,0,96,
16,0,1,0,0,0,
51,0,0,7,34,0,
16,0,0,0,0,0,
26,0,16,0,0,0,
0,0,42,0,16,0,
2,0,0,0,0,0,
0,7,34,0,16,0,
0,0,0,0,42,0,
16,0,2,0,0,0,
26,0,16,0,0,0,
0,0,69,0,0,140,
1,32,0,128,194,0,
0,128,67,85,21,0,
242,0,16,0,3,0,
0,0,70,16,16,0,
0,0,0,0,70,126,
16,0,1,0,0,0,
0,96,16,0,1,0,
0,0,51,0,0,7,
18,0,16,0,0,0,
0,0,10,0,16,0,
0,0,0,0,26,0,
16,0,3,0,0,0,
0,0,0,7,18,0,
16,0,0,0,0,0,
26,0,16,0,3,0,
0,0,10,0,16,0,
0,0,0,0,49,0,
0,7,18,0,16,0,
0,0,0,0,10,0,
16,0,0,0,0,0,
26,0,16,0,0,0,
0,0,0,0,0,8,
34,0,16,0,0,0,
0,0,42,0,16,0,
2,0,0,0,26,0,
16,128,65,0,0,0,
3,0,0,0,55,0,
0,10,18,0,16,0,
0,0,0,0,10,0,
16,0,0,0,0,0,
26,0,16,0,0,0,
0,0,26,0,16,128,
65,0,0,0,0,0,
0,0,0,0,0,8,
18,0,16,0,0,0,
0,0,10,0,16,128,
65,0,0,0,3,0,
0,0,10,0,16,0,
0,0,0,0,0,32,
0,7,18,0,16,0,
0,0,0,0,10,0,
16,0,0,0,0,0,
1,64,0,0,0,0,
128,63,0,0,0,9,
162,0,16,0,0,0,
0,0,166,2,16,128,
65,0,0,0,3,0,
0,0,6,128,32,0,
1,0,0,0,1,0,
0,0,52,0,0,10,
162,0,16,0,0,0,
0,0,86,13,16,0,
0,0,0,0,2,64,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
14,0,0,8,162,0,
16,0,0,0,0,0,
86,13,16,0,0,0,
0,0,6,128,32,0,
1,0,0,0,1,0,
0,0,56,0,0,7,
18,0,16,0,0,0,
0,0,10,0,16,0,
0,0,0,0,58,0,
16,0,0,0,0,0,
56,0,0,7,130,0,
16,0,0,0,0,0,
42,0,16,0,2,0,
0,0,26,0,16,0,
3,0,0,0,0,0,
0,7,18,0,16,0,
1,0,0,0,42,0,
16,0,2,0,0,0,
26,0,16,0,3,0,
0,0,56,0,0,7,
18,0,16,0,0,0,
0,0,58,0,16,0,
0,0,0,0,10,0,
16,0,0,0,0,0,
0,0,0,7,194,0,
16,0,1,0,0,0,
166,2,16,0,3,0,
0,0,166,2,16,0,
3,0,0,0,49,0,
0,7,130,0,16,0,
0,0,0,0,58,0,
16,0,1,0,0,0,
10,0,16,0,1,0,
0,0,55,0,0,9,
130,0,16,0,0,0,
0,0,42,0,16,0,
0,0,0,0,58,0,
16,0,0,0,0,0,
1,64,0,0,255,255,
255,255,1,0,0,7,
130,32,16,0,0,0,
0,0,10,0,16,0,
0,0,0,0,58,0,
16,0,0,0,0,0,
69,0,0,140,1,34,
0,128,194,0,0,128,
67,85,21,0,18,0,
16,0,0,0,0,0,
70,16,16,0,0,0,
0,0,22,126,16,0,
1,0,0,0,0,96,
16,0,1,0,0,0,
51,0,0,7,18,0,
16,0,0,0,0,0,
10,0,16,0,0,0,
0,0,26,0,16,0,
3,0,0,0,0,0,
0,7,18,0,16,0,
0,0,0,0,26,0,
16,0,3,0,0,0,
10,0,16,0,0,0,
0,0,51,0,0,7,
130,0,16,0,0,0,
0,0,26,0,16,0,
1,0,0,0,58,0,
16,0,3,0,0,0,
0,0,0,7,130,0,
16,0,0,0,0,0,
26,0,16,0,1,0,
0,0,58,0,16,0,
0,0,0,0,49,0,
0,7,18,0,16,0,
0,0,0,0,10,0,
16,0,0,0,0,0,
58,0,16,0,0,0,
0,0,0,0,0,8,
130,0,16,0,0,0,
0,0,26,0,16,0,
1,0,0,0,26,0,
16,128,65,0,0,0,
3,0,0,0,55,0,
0,10,18,0,16,0,
0,0,0,0,10,0,
16,0,0,0,0,0,
58,0,16,0,0,0,
0,0,58,0,16,128,
65,0,0,0,0,0,
0,0,0,0,0,8,
18,0,16,0,0,0,
0,0,42,0,16,128,
65,0,0,0,3,0,
0,0,10,0,16,0,
0,0,0,0,0,32,
0,7,18,0,16,0,
0,0,0,0,10,0,
16,0,0,0,0,0,
1,64,0,0,0,0,
128,63,56,0,0,7,
18,0,16,0,0,0,
0,0,10,0,16,0,
0,0,0,0,26,0,
16,0,0,0,0,0,
56,0,0,7,34,0,
16,0,0,0,0,0,
26,0,16,0,1,0,
0,0,26,0,16,0,
3,0,0,0,0,0,
0,7,130,0,16,0,
0,0,0,0,26,0,
16,0,1,0,0,0,
26,0,16,0,3,0,
0,0,49,0,0,7,
130,0,16,0,0,0,
0,0,42,0,16,0,
1,0,0,0,58,0,
16,0,0,0,0,0,
55,0,0,9,66,0,
16,0,0,0,0,0,
42,0,16,0,0,0,
0,0,58,0,16,0,
0,0,0,0,1,64,
0,0,255,255,255,255,
56,0,0,7,18,0,
16,0,0,0,0,0,
26,0,16,0,0,0,
0,0,10,0,16,0,
0,0,0,0,1,0,
0,7,66,32,16,0,
0,0,0,0,10,0,
16,0,0,0,0,0,
42,0,16,0,0,0,
0,0,62,0,0,1,
83,84,65,84,148,0,
0,0,84,0,0,0,
4,0,0,0,0,0,
0,0,2,0,0,0,
63,0,0,0,0,0,
0,0,4,0,0,0,
1,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,8,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,8,0,
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

}

namespace RetroArch
{
class ScalefxShadersScalefxPass1ShaderDef : public ShaderDef
{
public:
	ScalefxShadersScalefxPass1ShaderDef() : ShaderDef{}
	{
		Name = "scalefx-pass1";
		VertexByteCode = RetroArchScalefxShadersScalefxPass1ShaderDefs::sVertexByteCode;
		VertexLength = sizeof(RetroArchScalefxShadersScalefxPass1ShaderDefs::sVertexByteCode);
		FragmentByteCode = RetroArchScalefxShadersScalefxPass1ShaderDefs::sFragmentByteCode;
		FragmentLength = sizeof(RetroArchScalefxShadersScalefxPass1ShaderDefs::sFragmentByteCode);
		Params.push_back(ShaderParam("SFX_CLR", -1, 16, 4, 0.010000f, 1.000000f, 0.500000f));
		Params.push_back(ShaderParam("SFX_SAA", -1, 20, 4, 0.000000f, 1.000000f, 1.000000f));
		Params.push_back(ShaderParam("MVP", 0, 0, 64, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("SourceSize", -1, 0, 16, 0.000000f, 0.000000f, 0.000000f));
		Samplers.push_back(ShaderSampler("Source", 1));
/*
VertexSource = %*VERTEX_SOURCE*%;
*/
/*
FragmentSource = %*FRAGMENT_SOURCE*%;
*/
	}
};
}
