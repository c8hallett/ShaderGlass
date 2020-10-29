/*
ShaderGlass shader pal-shaders\pal-singlepass imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/master/pal/shaders/pal-singlepass.slang
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArchPalShadersPalSinglepassShaderDefs
{
static const BYTE sVertexByteCode[] =
{
68,88,66,67,29,148,
77,60,16,150,158,22,
233,205,70,203,43,204,
133,6,1,0,0,0,
208,4,0,0,5,0,
0,0,52,0,0,0,
128,2,0,0,204,2,
0,0,36,3,0,0,
52,4,0,0,82,68,
69,70,68,2,0,0,
1,0,0,0,96,0,
0,0,1,0,0,0,
60,0,0,0,0,5,
254,255,0,129,0,0,
28,2,0,0,82,68,
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
92,0,0,0,5,0,
0,0,120,0,0,0,
128,0,0,0,0,0,
0,0,0,0,0,0,
64,1,0,0,0,0,
0,0,64,0,0,0,
2,0,0,0,84,1,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,120,1,
0,0,64,0,0,0,
16,0,0,0,0,0,
0,0,148,1,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,184,1,0,0,
80,0,0,0,16,0,
0,0,0,0,0,0,
148,1,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
204,1,0,0,96,0,
0,0,16,0,0,0,
0,0,0,0,148,1,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,222,1,
0,0,112,0,0,0,
4,0,0,0,0,0,
0,0,248,1,0,0,
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
75,1,0,0,103,108,
111,98,97,108,95,79,
117,116,112,117,116,83,
105,122,101,0,102,108,
111,97,116,52,0,171,
171,171,1,0,3,0,
1,0,4,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,138,1,
0,0,103,108,111,98,
97,108,95,79,114,105,
103,105,110,97,108,83,
105,122,101,0,103,108,
111,98,97,108,95,83,
111,117,114,99,101,83,
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
0,0,240,1,0,0,
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
68,88,66,67,162,20,
38,186,221,76,144,117,
110,15,110,222,19,243,
147,247,1,0,0,0,
0,52,0,0,5,0,
0,0,52,0,0,0,
240,3,0,0,36,4,
0,0,88,4,0,0,
100,51,0,0,82,68,
69,70,180,3,0,0,
2,0,0,0,220,0,
0,0,4,0,0,0,
60,0,0,0,0,5,
255,255,0,129,0,0,
138,3,0,0,82,68,
49,49,60,0,0,0,
24,0,0,0,32,0,
0,0,40,0,0,0,
36,0,0,0,12,0,
0,0,0,0,0,0,
188,0,0,0,3,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,2,0,0,0,
1,0,0,0,1,0,
0,0,204,0,0,0,
2,0,0,0,5,0,
0,0,4,0,0,0,
255,255,255,255,2,0,
0,0,1,0,0,0,
13,0,0,0,211,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,1,0,
0,0,1,0,0,0,
215,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,1,0,0,0,
1,0,0,0,0,0,
0,0,95,83,111,117,
114,99,101,95,115,97,
109,112,108,101,114,0,
83,111,117,114,99,101,
0,85,66,79,0,80,
117,115,104,0,211,0,
0,0,5,0,0,0,
12,1,0,0,128,0,
0,0,0,0,0,0,
0,0,0,0,215,0,
0,0,3,0,0,0,
176,2,0,0,16,0,
0,0,0,0,0,0,
0,0,0,0,212,1,
0,0,0,0,0,0,
64,0,0,0,0,0,
0,0,232,1,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,12,2,0,0,
64,0,0,0,16,0,
0,0,0,0,0,0,
40,2,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
76,2,0,0,80,0,
0,0,16,0,0,0,
0,0,0,0,40,2,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,96,2,
0,0,96,0,0,0,
16,0,0,0,2,0,
0,0,40,2,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,114,2,0,0,
112,0,0,0,4,0,
0,0,2,0,0,0,
140,2,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
103,108,111,98,97,108,
95,77,86,80,0,102,
108,111,97,116,52,120,
52,0,2,0,3,0,
4,0,4,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,223,1,
0,0,103,108,111,98,
97,108,95,79,117,116,
112,117,116,83,105,122,
101,0,102,108,111,97,
116,52,0,171,171,171,
1,0,3,0,1,0,
4,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,30,2,0,0,
103,108,111,98,97,108,
95,79,114,105,103,105,
110,97,108,83,105,122,
101,0,103,108,111,98,
97,108,95,83,111,117,
114,99,101,83,105,122,
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
132,2,0,0,40,3,
0,0,0,0,0,0,
4,0,0,0,2,0,
0,0,64,3,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,100,3,0,0,
4,0,0,0,4,0,
0,0,2,0,0,0,
64,3,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
119,3,0,0,8,0,
0,0,4,0,0,0,
2,0,0,0,64,3,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,112,97,
114,97,109,115,95,70,
73,82,95,71,65,73,
78,0,102,108,111,97,
116,0,171,171,0,0,
3,0,1,0,1,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
56,3,0,0,112,97,
114,97,109,115,95,70,
73,82,95,73,78,86,
71,65,73,78,0,112,
97,114,97,109,115,95,
80,72,65,83,69,95,
78,79,73,83,69,0,
77,105,99,114,111,115,
111,102,116,32,40,82,
41,32,72,76,83,76,
32,83,104,97,100,101,
114,32,67,111,109,112,
105,108,101,114,32,49,
48,46,49,0,171,171,
73,83,71,78,44,0,
0,0,1,0,0,0,
8,0,0,0,32,0,
0,0,0,0,0,0,
0,0,0,0,3,0,
0,0,0,0,0,0,
3,3,0,0,84,69,
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
4,47,0,0,80,0,
0,0,193,11,0,0,
106,8,0,1,89,0,
0,4,70,142,32,0,
0,0,0,0,8,0,
0,0,89,0,0,4,
70,142,32,0,1,0,
0,0,1,0,0,0,
90,0,0,3,0,96,
16,0,2,0,0,0,
88,24,0,4,0,112,
16,0,2,0,0,0,
85,85,0,0,98,16,
0,3,50,16,16,0,
0,0,0,0,101,0,
0,3,242,32,16,0,
0,0,0,0,104,0,
0,2,9,0,0,0,
0,0,0,10,242,0,
16,0,0,0,0,0,
70,20,16,0,0,0,
0,0,2,64,0,0,
3,90,16,188,0,0,
0,0,156,234,1,188,
0,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,1,0,0,0,
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
0,0,16,0,0,10,
130,0,16,0,0,0,
0,0,70,2,16,0,
1,0,0,0,2,64,
0,0,164,112,29,63,
115,214,3,191,11,210,
204,189,0,0,0,0,
16,0,0,10,130,0,
16,0,1,0,0,0,
70,2,16,0,1,0,
0,0,2,64,0,0,
135,22,153,62,162,69,
22,63,213,120,233,61,
0,0,0,0,16,0,
0,10,18,0,16,0,
1,0,0,0,70,2,
16,0,1,0,0,0,
2,64,0,0,63,169,
22,190,117,229,147,190,
100,59,223,62,0,0,
0,0,0,0,0,10,
242,0,16,0,2,0,
0,0,6,16,16,0,
0,0,0,0,2,64,
0,0,3,90,16,188,
156,234,1,188,107,246,
230,187,158,23,202,187,
56,0,0,8,242,0,
16,0,2,0,0,0,
70,14,16,0,2,0,
0,0,6,128,32,0,
0,0,0,0,6,0,
0,0,56,0,0,10,
242,0,16,0,2,0,
0,0,70,14,16,0,
2,0,0,0,2,64,
0,0,219,15,201,64,
219,15,201,64,219,15,
201,64,219,15,201,64,
56,0,0,8,34,0,
16,0,1,0,0,0,
1,64,0,0,107,246,
102,59,10,128,32,0,
0,0,0,0,6,0,
0,0,14,0,0,7,
242,0,16,0,2,0,
0,0,70,14,16,0,
2,0,0,0,86,5,
16,0,1,0,0,0,
77,0,0,6,242,0,
16,0,3,0,0,0,
0,208,0,0,70,14,
16,0,2,0,0,0,
50,0,0,9,18,0,
16,0,1,0,0,0,
10,0,16,0,1,0,
0,0,26,0,16,0,
3,0,0,0,58,0,
16,0,1,0,0,0,
50,0,0,9,66,0,
16,0,1,0,0,0,
26,16,16,0,0,0,
0,0,1,64,0,0,
0,0,156,67,1,64,
0,0,0,0,0,63,
65,0,0,5,66,0,
16,0,1,0,0,0,
42,0,16,0,1,0,
0,0,56,0,0,7,
130,0,16,0,1,0,
0,0,42,0,16,0,
1,0,0,0,1,64,
0,0,0,0,0,63,
65,0,0,5,130,0,
16,0,1,0,0,0,
58,0,16,0,1,0,
0,0,50,0,0,10,
66,0,16,0,1,0,
0,0,58,0,16,128,
65,0,0,0,1,0,
0,0,1,64,0,0,
0,0,0,64,42,0,
16,0,1,0,0,0,
50,0,0,12,242,0,
16,0,4,0,0,0,
166,10,16,0,1,0,
0,0,2,64,0,0,
219,15,73,64,219,15,
73,64,219,15,73,64,
219,15,73,64,70,14,
16,0,2,0,0,0,
77,0,0,6,0,208,
0,0,242,0,16,0,
4,0,0,0,70,14,
16,0,4,0,0,0,
50,32,0,9,130,0,
16,0,0,0,0,0,
58,0,16,0,0,0,
0,0,26,0,16,0,
4,0,0,0,10,0,
16,0,1,0,0,0,
86,0,0,6,18,0,
16,0,1,0,0,0,
10,128,32,0,0,0,
0,0,7,0,0,0,
56,0,0,7,18,0,
16,0,1,0,0,0,
10,0,16,0,1,0,
0,0,26,16,16,0,
0,0,0,0,15,0,
0,10,18,0,16,0,
1,0,0,0,6,0,
16,0,1,0,0,0,
2,64,0,0,57,214,
79,65,76,119,156,66,
0,0,0,0,0,0,
0,0,56,0,0,7,
130,0,16,0,1,0,
0,0,10,0,16,0,
1,0,0,0,1,64,
0,0,172,14,163,62,
65,0,0,5,130,0,
16,0,1,0,0,0,
58,0,16,0,1,0,
0,0,50,0,0,10,
18,0,16,0,1,0,
0,0,58,0,16,128,
65,0,0,0,1,0,
0,0,1,64,0,0,
195,245,72,64,10,0,
16,0,1,0,0,0,
77,0,0,6,18,0,
16,0,1,0,0,0,
0,208,0,0,10,0,
16,0,1,0,0,0,
56,0,0,7,18,0,
16,0,1,0,0,0,
10,0,16,0,1,0,
0,0,1,64,0,0,
140,238,42,71,26,0,
0,5,18,0,16,0,
1,0,0,0,10,0,
16,0,1,0,0,0,
0,0,0,7,18,0,
16,0,1,0,0,0,
10,0,16,0,1,0,
0,0,1,64,0,0,
0,0,0,191,50,0,
0,10,242,0,16,0,
2,0,0,0,166,138,
32,0,1,0,0,0,
0,0,0,0,6,0,
16,0,1,0,0,0,
70,14,16,0,2,0,
0,0,77,0,0,6,
242,0,16,0,5,0,
0,0,0,208,0,0,
134,13,16,0,2,0,
0,0,50,0,0,12,
242,0,16,0,2,0,
0,0,166,10,16,0,
1,0,0,0,2,64,
0,0,219,15,73,64,
219,15,73,64,219,15,
73,64,219,15,73,64,
70,14,16,0,2,0,
0,0,77,0,0,6,
0,208,0,0,242,0,
16,0,2,0,0,0,
70,11,16,0,2,0,
0,0,54,0,0,5,
34,0,16,0,6,0,
0,0,42,0,16,0,
5,0,0,0,54,0,
0,5,66,0,16,0,
6,0,0,0,26,0,
16,0,2,0,0,0,
54,0,0,5,34,0,
16,0,7,0,0,0,
26,0,16,0,3,0,
0,0,54,0,0,5,
66,0,16,0,7,0,
0,0,26,0,16,0,
4,0,0,0,57,0,
0,8,130,0,16,0,
1,0,0,0,1,64,
0,0,0,0,0,0,
42,128,32,0,1,0,
0,0,0,0,0,0,
55,0,0,9,50,0,
16,0,6,0,0,0,
246,15,16,0,1,0,
0,0,150,5,16,0,
6,0,0,0,150,5,
16,0,7,0,0,0,
56,0,0,7,50,0,
16,0,6,0,0,0,
246,15,16,0,0,0,
0,0,70,0,16,0,
6,0,0,0,56,0,
0,8,50,0,16,0,
6,0,0,0,70,0,
16,0,6,0,0,0,
6,128,32,0,1,0,
0,0,0,0,0,0,
56,0,0,10,50,0,
16,0,6,0,0,0,
70,0,16,0,6,0,
0,0,2,64,0,0,
3,174,75,59,3,174,
75,59,0,0,0,0,
0,0,0,0,16,0,
0,10,130,0,16,0,
0,0,0,0,70,2,
16,0,0,0,0,0,
2,64,0,0,164,112,
29,63,115,214,3,191,
11,210,204,189,0,0,
0,0,16,0,0,10,
34,0,16,0,3,0,
0,0,70,2,16,0,
0,0,0,0,2,64,
0,0,135,22,153,62,
162,69,22,63,213,120,
233,61,0,0,0,0,
16,0,0,10,18,0,
16,0,0,0,0,0,
70,2,16,0,0,0,
0,0,2,64,0,0,
63,169,22,190,117,229,
147,190,100,59,223,62,
0,0,0,0,50,0,
0,9,18,0,16,0,
0,0,0,0,10,0,
16,0,0,0,0,0,
10,0,16,0,3,0,
0,0,26,0,16,0,
3,0,0,0,50,32,
0,9,18,0,16,0,
0,0,0,0,58,0,
16,0,0,0,0,0,
10,0,16,0,4,0,
0,0,10,0,16,0,
0,0,0,0,54,0,
0,5,34,0,16,0,
0,0,0,0,10,0,
16,0,5,0,0,0,
54,0,0,5,66,0,
16,0,0,0,0,0,
10,0,16,0,2,0,
0,0,54,0,0,5,
34,0,16,0,7,0,
0,0,10,0,16,0,
3,0,0,0,54,0,
0,5,66,0,16,0,
7,0,0,0,10,0,
16,0,4,0,0,0,
55,0,0,9,98,0,
16,0,0,0,0,0,
246,15,16,0,1,0,
0,0,86,6,16,0,
0,0,0,0,86,6,
16,0,7,0,0,0,
56,0,0,7,50,0,
16,0,0,0,0,0,
150,5,16,0,0,0,
0,0,6,0,16,0,
0,0,0,0,56,0,
0,8,50,0,16,0,
0,0,0,0,70,0,
16,0,0,0,0,0,
6,128,32,0,1,0,
0,0,0,0,0,0,
50,0,0,12,50,0,
16,0,0,0,0,0,
70,0,16,0,0,0,
0,0,2,64,0,0,
102,145,3,188,102,145,
3,188,0,0,0,0,
0,0,0,0,70,0,
16,0,6,0,0,0,
0,0,0,10,242,0,
16,0,6,0,0,0,
70,20,16,0,0,0,
0,0,2,64,0,0,
107,246,230,187,0,0,
0,0,158,23,202,187,
0,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,7,0,0,0,
70,0,16,0,6,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,6,0,
0,0,230,10,16,0,
6,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,16,0,0,10,
66,0,16,0,0,0,
0,0,70,2,16,0,
7,0,0,0,2,64,
0,0,135,22,153,62,
162,69,22,63,213,120,
233,61,0,0,0,0,
16,0,0,10,130,0,
16,0,0,0,0,0,
70,2,16,0,7,0,
0,0,2,64,0,0,
63,169,22,190,117,229,
147,190,100,59,223,62,
0,0,0,0,16,0,
0,10,18,0,16,0,
2,0,0,0,70,2,
16,0,7,0,0,0,
2,64,0,0,164,112,
29,63,115,214,3,191,
11,210,204,189,0,0,
0,0,50,0,0,9,
66,0,16,0,0,0,
0,0,58,0,16,0,
0,0,0,0,42,0,
16,0,3,0,0,0,
42,0,16,0,0,0,
0,0,50,32,0,9,
66,0,16,0,0,0,
0,0,10,0,16,0,
2,0,0,0,42,0,
16,0,4,0,0,0,
42,0,16,0,0,0,
0,0,54,0,0,5,
34,0,16,0,2,0,
0,0,58,0,16,0,
5,0,0,0,54,0,
0,5,66,0,16,0,
5,0,0,0,58,0,
16,0,2,0,0,0,
54,0,0,5,34,0,
16,0,4,0,0,0,
42,0,16,0,3,0,
0,0,55,0,0,9,
146,0,16,0,2,0,
0,0,246,15,16,0,
1,0,0,0,86,9,
16,0,5,0,0,0,
86,9,16,0,4,0,
0,0,56,0,0,7,
194,0,16,0,0,0,
0,0,166,10,16,0,
0,0,0,0,6,12,
16,0,2,0,0,0,
56,0,0,8,194,0,
16,0,0,0,0,0,
166,14,16,0,0,0,
0,0,6,128,32,0,
1,0,0,0,0,0,
0,0,50,0,0,12,
50,0,16,0,0,0,
0,0,230,10,16,0,
0,0,0,0,2,64,
0,0,224,246,137,60,
224,246,137,60,0,0,
0,0,0,0,0,0,
70,0,16,0,0,0,
0,0,16,0,0,10,
66,0,16,0,0,0,
0,0,70,2,16,0,
6,0,0,0,2,64,
0,0,135,22,153,62,
162,69,22,63,213,120,
233,61,0,0,0,0,
16,0,0,10,130,0,
16,0,0,0,0,0,
70,2,16,0,6,0,
0,0,2,64,0,0,
63,169,22,190,117,229,
147,190,100,59,223,62,
0,0,0,0,16,0,
0,10,18,0,16,0,
2,0,0,0,70,2,
16,0,6,0,0,0,
2,64,0,0,164,112,
29,63,115,214,3,191,
11,210,204,189,0,0,
0,0,50,0,0,9,
66,0,16,0,0,0,
0,0,58,0,16,0,
0,0,0,0,58,0,
16,0,3,0,0,0,
42,0,16,0,0,0,
0,0,54,0,0,5,
34,0,16,0,4,0,
0,0,58,0,16,0,
3,0,0,0,50,32,
0,9,66,0,16,0,
0,0,0,0,10,0,
16,0,2,0,0,0,
58,0,16,0,4,0,
0,0,42,0,16,0,
0,0,0,0,55,0,
0,9,50,0,16,0,
2,0,0,0,246,15,
16,0,1,0,0,0,
150,5,16,0,2,0,
0,0,214,5,16,0,
4,0,0,0,56,0,
0,7,194,0,16,0,
0,0,0,0,166,10,
16,0,0,0,0,0,
6,4,16,0,2,0,
0,0,56,0,0,8,
194,0,16,0,0,0,
0,0,166,14,16,0,
0,0,0,0,6,128,
32,0,1,0,0,0,
0,0,0,0,50,0,
0,12,50,0,16,0,
0,0,0,0,230,10,
16,0,0,0,0,0,
2,64,0,0,19,78,
5,61,19,78,5,61,
0,0,0,0,0,0,
0,0,70,0,16,0,
0,0,0,0,0,0,
0,10,242,0,16,0,
2,0,0,0,70,20,
16,0,0,0,0,0,
2,64,0,0,208,56,
173,187,0,0,0,0,
3,90,144,187,0,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
3,0,0,0,70,0,
16,0,2,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,2,0,0,0,
230,10,16,0,2,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
16,0,0,10,66,0,
16,0,0,0,0,0,
70,2,16,0,3,0,
0,0,2,64,0,0,
164,112,29,63,115,214,
3,191,11,210,204,189,
0,0,0,0,16,0,
0,10,130,0,16,0,
0,0,0,0,70,2,
16,0,3,0,0,0,
2,64,0,0,135,22,
153,62,162,69,22,63,
213,120,233,61,0,0,
0,0,16,0,0,10,
130,0,16,0,2,0,
0,0,70,2,16,0,
3,0,0,0,2,64,
0,0,63,169,22,190,
117,229,147,190,100,59,
223,62,0,0,0,0,
0,0,0,10,242,0,
16,0,3,0,0,0,
6,16,16,0,0,0,
0,0,2,64,0,0,
208,56,173,187,3,90,
144,187,107,246,102,187,
208,56,45,187,56,0,
0,8,242,0,16,0,
3,0,0,0,70,14,
16,0,3,0,0,0,
6,128,32,0,0,0,
0,0,6,0,0,0,
56,0,0,10,242,0,
16,0,3,0,0,0,
70,14,16,0,3,0,
0,0,2,64,0,0,
219,15,201,64,219,15,
201,64,219,15,201,64,
219,15,201,64,14,0,
0,7,242,0,16,0,
3,0,0,0,70,14,
16,0,3,0,0,0,
86,5,16,0,1,0,
0,0,77,0,0,6,
242,0,16,0,4,0,
0,0,0,208,0,0,
70,14,16,0,3,0,
0,0,50,0,0,9,
130,0,16,0,0,0,
0,0,58,0,16,0,
2,0,0,0,10,0,
16,0,4,0,0,0,
58,0,16,0,0,0,
0,0,50,0,0,12,
242,0,16,0,5,0,
0,0,166,10,16,0,
1,0,0,0,2,64,
0,0,219,15,73,64,
219,15,73,64,219,15,
73,64,219,15,73,64,
70,14,16,0,3,0,
0,0,50,0,0,10,
242,0,16,0,3,0,
0,0,166,138,32,0,
1,0,0,0,0,0,
0,0,6,0,16,0,
1,0,0,0,70,14,
16,0,3,0,0,0,
77,0,0,6,0,208,
0,0,242,0,16,0,
5,0,0,0,70,14,
16,0,5,0,0,0,
50,32,0,9,66,0,
16,0,0,0,0,0,
42,0,16,0,0,0,
0,0,10,0,16,0,
5,0,0,0,58,0,
16,0,0,0,0,0,
77,0,0,6,242,0,
16,0,6,0,0,0,
0,208,0,0,134,13,
16,0,3,0,0,0,
50,0,0,12,242,0,
16,0,3,0,0,0,
166,10,16,0,1,0,
0,0,2,64,0,0,
219,15,73,64,219,15,
73,64,219,15,73,64,
219,15,73,64,70,14,
16,0,3,0,0,0,
77,0,0,6,0,208,
0,0,242,0,16,0,
3,0,0,0,70,11,
16,0,3,0,0,0,
54,0,0,5,34,0,
16,0,7,0,0,0,
10,0,16,0,6,0,
0,0,54,0,0,5,
66,0,16,0,7,0,
0,0,10,0,16,0,
3,0,0,0,54,0,
0,5,34,0,16,0,
8,0,0,0,10,0,
16,0,4,0,0,0,
54,0,0,5,66,0,
16,0,8,0,0,0,
10,0,16,0,5,0,
0,0,55,0,0,9,
50,0,16,0,7,0,
0,0,246,15,16,0,
1,0,0,0,150,5,
16,0,7,0,0,0,
150,5,16,0,8,0,
0,0,56,0,0,7,
194,0,16,0,0,0,
0,0,166,10,16,0,
0,0,0,0,6,4,
16,0,7,0,0,0,
56,0,0,8,194,0,
16,0,0,0,0,0,
166,14,16,0,0,0,
0,0,6,128,32,0,
1,0,0,0,0,0,
0,0,50,0,0,12,
50,0,16,0,0,0,
0,0,230,10,16,0,
0,0,0,0,2,64,
0,0,219,45,74,61,
219,45,74,61,0,0,
0,0,0,0,0,0,
70,0,16,0,0,0,
0,0,16,0,0,10,
66,0,16,0,0,0,
0,0,70,2,16,0,
2,0,0,0,2,64,
0,0,164,112,29,63,
115,214,3,191,11,210,
204,189,0,0,0,0,
16,0,0,10,130,0,
16,0,0,0,0,0,
70,2,16,0,2,0,
0,0,2,64,0,0,
135,22,153,62,162,69,
22,63,213,120,233,61,
0,0,0,0,16,0,
0,10,18,0,16,0,
2,0,0,0,70,2,
16,0,2,0,0,0,
2,64,0,0,63,169,
22,190,117,229,147,190,
100,59,223,62,0,0,
0,0,50,0,0,9,
130,0,16,0,0,0,
0,0,10,0,16,0,
2,0,0,0,26,0,
16,0,4,0,0,0,
58,0,16,0,0,0,
0,0,50,32,0,9,
66,0,16,0,0,0,
0,0,42,0,16,0,
0,0,0,0,26,0,
16,0,5,0,0,0,
58,0,16,0,0,0,
0,0,54,0,0,5,
34,0,16,0,2,0,
0,0,42,0,16,0,
6,0,0,0,54,0,
0,5,66,0,16,0,
2,0,0,0,26,0,
16,0,3,0,0,0,
54,0,0,5,34,0,
16,0,7,0,0,0,
26,0,16,0,4,0,
0,0,54,0,0,5,
66,0,16,0,7,0,
0,0,26,0,16,0,
5,0,0,0,55,0,
0,9,50,0,16,0,
2,0,0,0,246,15,
16,0,1,0,0,0,
150,5,16,0,2,0,
0,0,150,5,16,0,
7,0,0,0,56,0,
0,7,194,0,16,0,
0,0,0,0,166,10,
16,0,0,0,0,0,
6,4,16,0,2,0,
0,0,56,0,0,8,
194,0,16,0,0,0,
0,0,166,14,16,0,
0,0,0,0,6,128,
32,0,1,0,0,0,
0,0,0,0,50,0,
0,12,50,0,16,0,
0,0,0,0,230,10,
16,0,0,0,0,0,
2,64,0,0,154,177,
135,61,154,177,135,61,
0,0,0,0,0,0,
0,0,70,0,16,0,
0,0,0,0,0,0,
0,10,242,0,16,0,
2,0,0,0,70,20,
16,0,0,0,0,0,
2,64,0,0,107,246,
102,187,0,0,0,0,
208,56,45,187,0,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
7,0,0,0,70,0,
16,0,2,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,2,0,0,0,
230,10,16,0,2,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
16,0,0,10,66,0,
16,0,0,0,0,0,
70,2,16,0,7,0,
0,0,2,64,0,0,
135,22,153,62,162,69,
22,63,213,120,233,61,
0,0,0,0,16,0,
0,10,130,0,16,0,
0,0,0,0,70,2,
16,0,7,0,0,0,
2,64,0,0,63,169,
22,190,117,229,147,190,
100,59,223,62,0,0,
0,0,16,0,0,10,
130,0,16,0,2,0,
0,0,70,2,16,0,
7,0,0,0,2,64,
0,0,164,112,29,63,
115,214,3,191,11,210,
204,189,0,0,0,0,
50,0,0,9,66,0,
16,0,0,0,0,0,
58,0,16,0,0,0,
0,0,42,0,16,0,
4,0,0,0,42,0,
16,0,0,0,0,0,
50,32,0,9,66,0,
16,0,0,0,0,0,
58,0,16,0,2,0,
0,0,42,0,16,0,
5,0,0,0,42,0,
16,0,0,0,0,0,
54,0,0,5,34,0,
16,0,3,0,0,0,
58,0,16,0,6,0,
0,0,54,0,0,5,
66,0,16,0,6,0,
0,0,58,0,16,0,
3,0,0,0,54,0,
0,5,34,0,16,0,
5,0,0,0,42,0,
16,0,4,0,0,0,
55,0,0,9,146,0,
16,0,3,0,0,0,
246,15,16,0,1,0,
0,0,86,9,16,0,
6,0,0,0,86,9,
16,0,5,0,0,0,
56,0,0,7,194,0,
16,0,0,0,0,0,
166,10,16,0,0,0,
0,0,6,12,16,0,
3,0,0,0,56,0,
0,8,194,0,16,0,
0,0,0,0,166,14,
16,0,0,0,0,0,
6,128,32,0,1,0,
0,0,0,0,0,0,
50,0,0,12,50,0,
16,0,0,0,0,0,
230,10,16,0,0,0,
0,0,2,64,0,0,
156,46,168,61,156,46,
168,61,0,0,0,0,
0,0,0,0,70,0,
16,0,0,0,0,0,
16,0,0,10,66,0,
16,0,0,0,0,0,
70,2,16,0,2,0,
0,0,2,64,0,0,
135,22,153,62,162,69,
22,63,213,120,233,61,
0,0,0,0,16,0,
0,10,130,0,16,0,
0,0,0,0,70,2,
16,0,2,0,0,0,
2,64,0,0,63,169,
22,190,117,229,147,190,
100,59,223,62,0,0,
0,0,16,0,0,10,
18,0,16,0,2,0,
0,0,70,2,16,0,
2,0,0,0,2,64,
0,0,164,112,29,63,
115,214,3,191,11,210,
204,189,0,0,0,0,
50,0,0,9,66,0,
16,0,0,0,0,0,
58,0,16,0,0,0,
0,0,58,0,16,0,
4,0,0,0,42,0,
16,0,0,0,0,0,
54,0,0,5,34,0,
16,0,5,0,0,0,
58,0,16,0,4,0,
0,0,50,32,0,9,
66,0,16,0,0,0,
0,0,10,0,16,0,
2,0,0,0,58,0,
16,0,5,0,0,0,
42,0,16,0,0,0,
0,0,55,0,0,9,
50,0,16,0,2,0,
0,0,246,15,16,0,
1,0,0,0,150,5,
16,0,3,0,0,0,
214,5,16,0,5,0,
0,0,56,0,0,7,
194,0,16,0,0,0,
0,0,166,10,16,0,
0,0,0,0,6,4,
16,0,2,0,0,0,
56,0,0,8,194,0,
16,0,0,0,0,0,
166,14,16,0,0,0,
0,0,6,128,32,0,
1,0,0,0,0,0,
0,0,50,0,0,12,
50,0,16,0,0,0,
0,0,230,10,16,0,
0,0,0,0,2,64,
0,0,47,76,196,61,
47,76,196,61,0,0,
0,0,0,0,0,0,
70,0,16,0,0,0,
0,0,0,0,0,10,
242,0,16,0,2,0,
0,0,6,16,16,0,
0,0,0,0,2,64,
0,0,107,246,230,186,
107,246,102,186,107,246,
102,58,107,246,230,58,
56,0,0,8,242,0,
16,0,2,0,0,0,
70,14,16,0,2,0,
0,0,6,128,32,0,
0,0,0,0,6,0,
0,0,56,0,0,10,
242,0,16,0,2,0,
0,0,70,14,16,0,
2,0,0,0,2,64,
0,0,219,15,201,64,
219,15,201,64,219,15,
201,64,219,15,201,64,
14,0,0,7,242,0,
16,0,2,0,0,0,
70,14,16,0,2,0,
0,0,86,5,16,0,
1,0,0,0,50,0,
0,10,242,0,16,0,
3,0,0,0,166,138,
32,0,1,0,0,0,
0,0,0,0,6,0,
16,0,1,0,0,0,
70,14,16,0,2,0,
0,0,77,0,0,6,
242,0,16,0,4,0,
0,0,0,208,0,0,
134,13,16,0,3,0,
0,0,50,0,0,12,
242,0,16,0,3,0,
0,0,166,10,16,0,
1,0,0,0,2,64,
0,0,219,15,73,64,
219,15,73,64,219,15,
73,64,219,15,73,64,
70,14,16,0,3,0,
0,0,77,0,0,6,
0,208,0,0,242,0,
16,0,3,0,0,0,
70,11,16,0,3,0,
0,0,54,0,0,5,
34,0,16,0,5,0,
0,0,10,0,16,0,
4,0,0,0,54,0,
0,5,66,0,16,0,
5,0,0,0,10,0,
16,0,3,0,0,0,
50,0,0,12,242,0,
16,0,6,0,0,0,
166,10,16,0,1,0,
0,0,2,64,0,0,
219,15,73,64,219,15,
73,64,219,15,73,64,
219,15,73,64,70,14,
16,0,2,0,0,0,
77,0,0,6,242,0,
16,0,2,0,0,0,
0,208,0,0,70,14,
16,0,2,0,0,0,
77,0,0,6,0,208,
0,0,242,0,16,0,
6,0,0,0,70,14,
16,0,6,0,0,0,
54,0,0,5,66,0,
16,0,7,0,0,0,
10,0,16,0,6,0,
0,0,54,0,0,5,
34,0,16,0,7,0,
0,0,10,0,16,0,
2,0,0,0,55,0,
0,9,194,0,16,0,
0,0,0,0,246,15,
16,0,1,0,0,0,
86,9,16,0,5,0,
0,0,86,9,16,0,
7,0,0,0,0,0,
0,10,242,0,16,0,
5,0,0,0,70,20,
16,0,0,0,0,0,
2,64,0,0,107,246,
230,186,0,0,0,0,
107,246,102,186,0,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
7,0,0,0,70,0,
16,0,5,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,5,0,0,0,
230,10,16,0,5,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
16,0,0,10,18,0,
16,0,3,0,0,0,
70,2,16,0,7,0,
0,0,2,64,0,0,
135,22,153,62,162,69,
22,63,213,120,233,61,
0,0,0,0,16,0,
0,10,18,0,16,0,
4,0,0,0,70,2,
16,0,7,0,0,0,
2,64,0,0,63,169,
22,190,117,229,147,190,
100,59,223,62,0,0,
0,0,16,0,0,10,
130,0,16,0,5,0,
0,0,70,2,16,0,
7,0,0,0,2,64,
0,0,164,112,29,63,
115,214,3,191,11,210,
204,189,0,0,0,0,
50,0,0,9,18,0,
16,0,2,0,0,0,
10,0,16,0,4,0,
0,0,10,0,16,0,
2,0,0,0,10,0,
16,0,3,0,0,0,
50,32,0,9,18,0,
16,0,2,0,0,0,
58,0,16,0,5,0,
0,0,10,0,16,0,
6,0,0,0,10,0,
16,0,2,0,0,0,
56,0,0,7,194,0,
16,0,0,0,0,0,
166,14,16,0,0,0,
0,0,6,0,16,0,
2,0,0,0,56,0,
0,8,194,0,16,0,
0,0,0,0,166,14,
16,0,0,0,0,0,
6,128,32,0,1,0,
0,0,0,0,0,0,
50,0,0,12,50,0,
16,0,0,0,0,0,
230,10,16,0,0,0,
0,0,2,64,0,0,
10,4,218,61,10,4,
218,61,0,0,0,0,
0,0,0,0,70,0,
16,0,0,0,0,0,
16,0,0,10,66,0,
16,0,0,0,0,0,
70,2,16,0,5,0,
0,0,2,64,0,0,
164,112,29,63,115,214,
3,191,11,210,204,189,
0,0,0,0,16,0,
0,10,130,0,16,0,
0,0,0,0,70,2,
16,0,5,0,0,0,
2,64,0,0,135,22,
153,62,162,69,22,63,
213,120,233,61,0,0,
0,0,16,0,0,10,
18,0,16,0,2,0,
0,0,70,2,16,0,
5,0,0,0,2,64,
0,0,63,169,22,190,
117,229,147,190,100,59,
223,62,0,0,0,0,
50,0,0,9,130,0,
16,0,0,0,0,0,
10,0,16,0,2,0,
0,0,26,0,16,0,
2,0,0,0,58,0,
16,0,0,0,0,0,
50,32,0,9,66,0,
16,0,0,0,0,0,
42,0,16,0,0,0,
0,0,26,0,16,0,
6,0,0,0,58,0,
16,0,0,0,0,0,
54,0,0,5,34,0,
16,0,5,0,0,0,
42,0,16,0,4,0,
0,0,54,0,0,5,
66,0,16,0,5,0,
0,0,26,0,16,0,
3,0,0,0,54,0,
0,5,34,0,16,0,
7,0,0,0,26,0,
16,0,2,0,0,0,
54,0,0,5,66,0,
16,0,7,0,0,0,
26,0,16,0,6,0,
0,0,55,0,0,9,
50,0,16,0,2,0,
0,0,246,15,16,0,
1,0,0,0,150,5,
16,0,5,0,0,0,
150,5,16,0,7,0,
0,0,56,0,0,7,
194,0,16,0,0,0,
0,0,166,10,16,0,
0,0,0,0,6,4,
16,0,2,0,0,0,
56,0,0,8,194,0,
16,0,0,0,0,0,
166,14,16,0,0,0,
0,0,6,128,32,0,
1,0,0,0,0,0,
0,0,50,0,0,12,
50,0,16,0,0,0,
0,0,230,10,16,0,
0,0,0,0,2,64,
0,0,239,187,231,61,
239,187,231,61,0,0,
0,0,0,0,0,0,
70,0,16,0,0,0,
0,0,56,0,0,8,
66,0,16,0,0,0,
0,0,10,16,16,0,
0,0,0,0,10,128,
32,0,0,0,0,0,
6,0,0,0,56,0,
0,7,66,0,16,0,
0,0,0,0,42,0,
16,0,0,0,0,0,
1,64,0,0,219,15,
201,64,14,0,0,7,
66,0,16,0,0,0,
0,0,42,0,16,0,
0,0,0,0,26,0,
16,0,1,0,0,0,
50,0,0,10,130,0,
16,0,0,0,0,0,
42,128,32,0,1,0,
0,0,0,0,0,0,
10,0,16,0,1,0,
0,0,42,0,16,0,
0,0,0,0,77,0,
0,6,34,0,16,0,
5,0,0,0,0,208,
0,0,58,0,16,0,
0,0,0,0,50,0,
0,9,130,0,16,0,
0,0,0,0,42,0,
16,0,1,0,0,0,
1,64,0,0,219,15,
73,64,58,0,16,0,
0,0,0,0,77,0,
0,6,0,208,0,0,
66,0,16,0,5,0,
0,0,58,0,16,0,
0,0,0,0,50,0,
0,9,130,0,16,0,
0,0,0,0,42,0,
16,0,1,0,0,0,
1,64,0,0,219,15,
73,64,42,0,16,0,
0,0,0,0,77,0,
0,6,34,0,16,0,
7,0,0,0,0,208,
0,0,42,0,16,0,
0,0,0,0,77,0,
0,6,0,208,0,0,
66,0,16,0,7,0,
0,0,58,0,16,0,
0,0,0,0,55,0,
0,9,194,0,16,0,
0,0,0,0,246,15,
16,0,1,0,0,0,
86,9,16,0,5,0,
0,0,86,9,16,0,
7,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,5,0,0,0,
70,16,16,0,0,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
16,0,0,10,18,0,
16,0,2,0,0,0,
70,2,16,0,5,0,
0,0,2,64,0,0,
135,22,153,62,162,69,
22,63,213,120,233,61,
0,0,0,0,16,0,
0,10,34,0,16,0,
2,0,0,0,70,2,
16,0,5,0,0,0,
2,64,0,0,63,169,
22,190,117,229,147,190,
100,59,223,62,0,0,
0,0,16,0,0,10,
18,0,16,0,3,0,
0,0,70,2,16,0,
5,0,0,0,2,64,
0,0,164,112,29,63,
115,214,3,191,11,210,
204,189,0,0,0,0,
50,0,0,9,18,0,
16,0,2,0,0,0,
26,0,16,0,2,0,
0,0,26,0,16,0,
7,0,0,0,10,0,
16,0,2,0,0,0,
50,32,0,9,18,0,
16,0,2,0,0,0,
10,0,16,0,3,0,
0,0,42,0,16,0,
7,0,0,0,10,0,
16,0,2,0,0,0,
56,0,0,7,194,0,
16,0,0,0,0,0,
166,14,16,0,0,0,
0,0,6,0,16,0,
2,0,0,0,56,0,
0,8,194,0,16,0,
0,0,0,0,166,14,
16,0,0,0,0,0,
6,128,32,0,1,0,
0,0,0,0,0,0,
50,0,0,12,50,0,
16,0,0,0,0,0,
230,10,16,0,0,0,
0,0,2,64,0,0,
198,108,236,61,198,108,
236,61,0,0,0,0,
0,0,0,0,70,0,
16,0,0,0,0,0,
0,0,0,10,242,0,
16,0,5,0,0,0,
70,20,16,0,0,0,
0,0,2,64,0,0,
107,246,102,58,0,0,
0,0,107,246,230,58,
0,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,8,0,0,0,
70,0,16,0,5,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,5,0,
0,0,230,10,16,0,
5,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,16,0,0,10,
66,0,16,0,0,0,
0,0,70,2,16,0,
8,0,0,0,2,64,
0,0,135,22,153,62,
162,69,22,63,213,120,
233,61,0,0,0,0,
16,0,0,10,130,0,
16,0,0,0,0,0,
70,2,16,0,8,0,
0,0,2,64,0,0,
63,169,22,190,117,229,
147,190,100,59,223,62,
0,0,0,0,16,0,
0,10,34,0,16,0,
2,0,0,0,70,2,
16,0,8,0,0,0,
2,64,0,0,164,112,
29,63,115,214,3,191,
11,210,204,189,0,0,
0,0,50,0,0,9,
66,0,16,0,0,0,
0,0,58,0,16,0,
0,0,0,0,42,0,
16,0,2,0,0,0,
42,0,16,0,0,0,
0,0,50,32,0,9,
66,0,16,0,0,0,
0,0,26,0,16,0,
2,0,0,0,42,0,
16,0,6,0,0,0,
42,0,16,0,0,0,
0,0,54,0,0,5,
34,0,16,0,3,0,
0,0,58,0,16,0,
4,0,0,0,54,0,
0,5,66,0,16,0,
4,0,0,0,58,0,
16,0,3,0,0,0,
54,0,0,5,34,0,
16,0,6,0,0,0,
42,0,16,0,2,0,
0,0,55,0,0,9,
98,0,16,0,2,0,
0,0,246,15,16,0,
1,0,0,0,86,6,
16,0,4,0,0,0,
86,6,16,0,6,0,
0,0,56,0,0,7,
194,0,16,0,0,0,
0,0,166,10,16,0,
0,0,0,0,86,9,
16,0,2,0,0,0,
56,0,0,8,194,0,
16,0,0,0,0,0,
166,14,16,0,0,0,
0,0,6,128,32,0,
1,0,0,0,0,0,
0,0,50,0,0,12,
50,0,16,0,0,0,
0,0,230,10,16,0,
0,0,0,0,2,64,
0,0,239,187,231,61,
239,187,231,61,0,0,
0,0,0,0,0,0,
70,0,16,0,0,0,
0,0,16,0,0,10,
66,0,16,0,0,0,
0,0,70,2,16,0,
5,0,0,0,2,64,
0,0,135,22,153,62,
162,69,22,63,213,120,
233,61,0,0,0,0,
16,0,0,10,130,0,
16,0,0,0,0,0,
70,2,16,0,5,0,
0,0,2,64,0,0,
63,169,22,190,117,229,
147,190,100,59,223,62,
0,0,0,0,16,0,
0,10,34,0,16,0,
2,0,0,0,70,2,
16,0,5,0,0,0,
2,64,0,0,164,112,
29,63,115,214,3,191,
11,210,204,189,0,0,
0,0,50,0,0,9,
66,0,16,0,0,0,
0,0,58,0,16,0,
0,0,0,0,58,0,
16,0,2,0,0,0,
42,0,16,0,0,0,
0,0,54,0,0,5,
34,0,16,0,6,0,
0,0,58,0,16,0,
2,0,0,0,50,32,
0,9,66,0,16,0,
0,0,0,0,26,0,
16,0,2,0,0,0,
58,0,16,0,6,0,
0,0,42,0,16,0,
0,0,0,0,55,0,
0,9,98,0,16,0,
2,0,0,0,246,15,
16,0,1,0,0,0,
86,6,16,0,3,0,
0,0,86,7,16,0,
6,0,0,0,56,0,
0,7,194,0,16,0,
0,0,0,0,166,10,
16,0,0,0,0,0,
86,9,16,0,2,0,
0,0,56,0,0,8,
194,0,16,0,0,0,
0,0,166,14,16,0,
0,0,0,0,6,128,
32,0,1,0,0,0,
0,0,0,0,50,0,
0,12,50,0,16,0,
0,0,0,0,230,10,
16,0,0,0,0,0,
2,64,0,0,10,4,
218,61,10,4,218,61,
0,0,0,0,0,0,
0,0,70,0,16,0,
0,0,0,0,0,0,
0,10,242,0,16,0,
3,0,0,0,6,16,
16,0,0,0,0,0,
2,64,0,0,208,56,
45,59,107,246,102,59,
3,90,144,59,208,56,
173,59,56,0,0,8,
242,0,16,0,3,0,
0,0,70,14,16,0,
3,0,0,0,6,128,
32,0,0,0,0,0,
6,0,0,0,56,0,
0,10,242,0,16,0,
3,0,0,0,70,14,
16,0,3,0,0,0,
2,64,0,0,219,15,
201,64,219,15,201,64,
219,15,201,64,219,15,
201,64,14,0,0,7,
242,0,16,0,3,0,
0,0,70,14,16,0,
3,0,0,0,86,5,
16,0,1,0,0,0,
50,0,0,10,242,0,
16,0,4,0,0,0,
166,138,32,0,1,0,
0,0,0,0,0,0,
6,0,16,0,1,0,
0,0,70,14,16,0,
3,0,0,0,50,0,
0,12,242,0,16,0,
5,0,0,0,166,10,
16,0,1,0,0,0,
2,64,0,0,219,15,
73,64,219,15,73,64,
219,15,73,64,219,15,
73,64,70,14,16,0,
4,0,0,0,77,0,
0,6,242,0,16,0,
4,0,0,0,0,208,
0,0,134,13,16,0,
4,0,0,0,77,0,
0,6,0,208,0,0,
242,0,16,0,5,0,
0,0,70,11,16,0,
5,0,0,0,54,0,
0,5,66,0,16,0,
2,0,0,0,10,0,
16,0,5,0,0,0,
54,0,0,5,34,0,
16,0,2,0,0,0,
10,0,16,0,4,0,
0,0,50,0,0,12,
242,0,16,0,6,0,
0,0,166,10,16,0,
1,0,0,0,2,64,
0,0,219,15,73,64,
219,15,73,64,219,15,
73,64,219,15,73,64,
70,14,16,0,3,0,
0,0,77,0,0,6,
242,0,16,0,3,0,
0,0,0,208,0,0,
134,13,16,0,3,0,
0,0,77,0,0,6,
0,208,0,0,242,0,
16,0,6,0,0,0,
70,11,16,0,6,0,
0,0,54,0,0,5,
66,0,16,0,8,0,
0,0,10,0,16,0,
6,0,0,0,54,0,
0,5,34,0,16,0,
8,0,0,0,10,0,
16,0,3,0,0,0,
55,0,0,9,194,0,
16,0,0,0,0,0,
246,15,16,0,1,0,
0,0,86,9,16,0,
2,0,0,0,86,9,
16,0,8,0,0,0,
0,0,0,10,242,0,
16,0,8,0,0,0,
70,20,16,0,0,0,
0,0,2,64,0,0,
208,56,45,59,0,0,
0,0,107,246,102,59,
0,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,226,0,
16,0,2,0,0,0,
70,0,16,0,8,0,
0,0,54,121,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,8,0,
0,0,230,10,16,0,
8,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,16,0,0,10,
18,0,16,0,4,0,
0,0,150,7,16,0,
2,0,0,0,2,64,
0,0,135,22,153,62,
162,69,22,63,213,120,
233,61,0,0,0,0,
16,0,0,10,18,0,
16,0,5,0,0,0,
150,7,16,0,2,0,
0,0,2,64,0,0,
63,169,22,190,117,229,
147,190,100,59,223,62,
0,0,0,0,16,0,
0,10,34,0,16,0,
2,0,0,0,150,7,
16,0,2,0,0,0,
2,64,0,0,164,112,
29,63,115,214,3,191,
11,210,204,189,0,0,
0,0,50,0,0,9,
66,0,16,0,2,0,
0,0,10,0,16,0,
5,0,0,0,10,0,
16,0,3,0,0,0,
10,0,16,0,4,0,
0,0,50,32,0,9,
34,0,16,0,2,0,
0,0,26,0,16,0,
2,0,0,0,10,0,
16,0,6,0,0,0,
42,0,16,0,2,0,
0,0,56,0,0,7,
194,0,16,0,0,0,
0,0,166,14,16,0,
0,0,0,0,86,5,
16,0,2,0,0,0,
56,0,0,8,194,0,
16,0,0,0,0,0,
166,14,16,0,0,0,
0,0,6,128,32,0,
1,0,0,0,0,0,
0,0,50,0,0,12,
50,0,16,0,0,0,
0,0,230,10,16,0,
0,0,0,0,2,64,
0,0,47,76,196,61,
47,76,196,61,0,0,
0,0,0,0,0,0,
70,0,16,0,0,0,
0,0,16,0,0,10,
66,0,16,0,0,0,
0,0,70,2,16,0,
8,0,0,0,2,64,
0,0,135,22,153,62,
162,69,22,63,213,120,
233,61,0,0,0,0,
16,0,0,10,130,0,
16,0,0,0,0,0,
70,2,16,0,8,0,
0,0,2,64,0,0,
63,169,22,190,117,229,
147,190,100,59,223,62,
0,0,0,0,16,0,
0,10,34,0,16,0,
2,0,0,0,70,2,
16,0,8,0,0,0,
2,64,0,0,164,112,
29,63,115,214,3,191,
11,210,204,189,0,0,
0,0,50,0,0,9,
66,0,16,0,0,0,
0,0,58,0,16,0,
0,0,0,0,42,0,
16,0,3,0,0,0,
42,0,16,0,0,0,
0,0,50,32,0,9,
66,0,16,0,0,0,
0,0,26,0,16,0,
2,0,0,0,26,0,
16,0,6,0,0,0,
42,0,16,0,0,0,
0,0,54,0,0,5,
34,0,16,0,2,0,
0,0,42,0,16,0,
4,0,0,0,54,0,
0,5,66,0,16,0,
2,0,0,0,26,0,
16,0,5,0,0,0,
54,0,0,5,66,0,
16,0,8,0,0,0,
26,0,16,0,6,0,
0,0,54,0,0,5,
34,0,16,0,8,0,
0,0,42,0,16,0,
3,0,0,0,55,0,
0,9,98,0,16,0,
2,0,0,0,246,15,
16,0,1,0,0,0,
86,6,16,0,2,0,
0,0,86,6,16,0,
8,0,0,0,56,0,
0,7,194,0,16,0,
0,0,0,0,166,10,
16,0,0,0,0,0,
86,9,16,0,2,0,
0,0,56,0,0,8,
194,0,16,0,0,0,
0,0,166,14,16,0,
0,0,0,0,6,128,
32,0,1,0,0,0,
0,0,0,0,50,0,
0,12,50,0,16,0,
0,0,0,0,230,10,
16,0,0,0,0,0,
2,64,0,0,156,46,
168,61,156,46,168,61,
0,0,0,0,0,0,
0,0,70,0,16,0,
0,0,0,0,54,0,
0,5,34,0,16,0,
5,0,0,0,58,0,
16,0,4,0,0,0,
54,0,0,5,66,0,
16,0,4,0,0,0,
58,0,16,0,5,0,
0,0,54,0,0,5,
66,0,16,0,3,0,
0,0,58,0,16,0,
6,0,0,0,55,0,
0,9,194,0,16,0,
0,0,0,0,246,15,
16,0,1,0,0,0,
86,9,16,0,4,0,
0,0,86,9,16,0,
3,0,0,0,0,0,
0,10,242,0,16,0,
4,0,0,0,70,20,
16,0,0,0,0,0,
2,64,0,0,3,90,
144,59,0,0,0,0,
208,56,173,59,0,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,226,0,16,0,
2,0,0,0,70,0,
16,0,4,0,0,0,
54,121,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,4,0,0,0,
230,10,16,0,4,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
16,0,0,10,18,0,
16,0,3,0,0,0,
150,7,16,0,2,0,
0,0,2,64,0,0,
135,22,153,62,162,69,
22,63,213,120,233,61,
0,0,0,0,16,0,
0,10,130,0,16,0,
4,0,0,0,150,7,
16,0,2,0,0,0,
2,64,0,0,63,169,
22,190,117,229,147,190,
100,59,223,62,0,0,
0,0,16,0,0,10,
34,0,16,0,2,0,
0,0,150,7,16,0,
2,0,0,0,2,64,
0,0,164,112,29,63,
115,214,3,191,11,210,
204,189,0,0,0,0,
50,0,0,9,66,0,
16,0,2,0,0,0,
58,0,16,0,4,0,
0,0,26,0,16,0,
3,0,0,0,10,0,
16,0,3,0,0,0,
50,32,0,9,34,0,
16,0,2,0,0,0,
26,0,16,0,2,0,
0,0,42,0,16,0,
3,0,0,0,42,0,
16,0,2,0,0,0,
56,0,0,7,194,0,
16,0,0,0,0,0,
166,14,16,0,0,0,
0,0,86,5,16,0,
2,0,0,0,56,0,
0,8,194,0,16,0,
0,0,0,0,166,14,
16,0,0,0,0,0,
6,128,32,0,1,0,
0,0,0,0,0,0,
50,0,0,12,50,0,
16,0,0,0,0,0,
230,10,16,0,0,0,
0,0,2,64,0,0,
154,177,135,61,154,177,
135,61,0,0,0,0,
0,0,0,0,70,0,
16,0,0,0,0,0,
16,0,0,10,66,0,
16,0,0,0,0,0,
70,2,16,0,4,0,
0,0,2,64,0,0,
135,22,153,62,162,69,
22,63,213,120,233,61,
0,0,0,0,16,0,
0,10,130,0,16,0,
0,0,0,0,70,2,
16,0,4,0,0,0,
2,64,0,0,63,169,
22,190,117,229,147,190,
100,59,223,62,0,0,
0,0,16,0,0,10,
34,0,16,0,2,0,
0,0,70,2,16,0,
4,0,0,0,2,64,
0,0,164,112,29,63,
115,214,3,191,11,210,
204,189,0,0,0,0,
50,0,0,9,66,0,
16,0,0,0,0,0,
58,0,16,0,0,0,
0,0,58,0,16,0,
3,0,0,0,42,0,
16,0,0,0,0,0,
54,0,0,5,34,0,
16,0,6,0,0,0,
58,0,16,0,3,0,
0,0,50,32,0,9,
66,0,16,0,0,0,
0,0,26,0,16,0,
2,0,0,0,42,0,
16,0,6,0,0,0,
42,0,16,0,0,0,
0,0,55,0,0,9,
98,0,16,0,2,0,
0,0,246,15,16,0,
1,0,0,0,86,6,
16,0,5,0,0,0,
86,6,16,0,6,0,
0,0,56,0,0,7,
194,0,16,0,0,0,
0,0,166,10,16,0,
0,0,0,0,86,9,
16,0,2,0,0,0,
56,0,0,8,194,0,
16,0,0,0,0,0,
166,14,16,0,0,0,
0,0,6,128,32,0,
1,0,0,0,0,0,
0,0,50,0,0,12,
50,0,16,0,0,0,
0,0,230,10,16,0,
0,0,0,0,2,64,
0,0,219,45,74,61,
219,45,74,61,0,0,
0,0,0,0,0,0,
70,0,16,0,0,0,
0,0,0,0,0,10,
226,0,16,0,2,0,
0,0,6,16,16,0,
0,0,0,0,2,64,
0,0,0,0,0,0,
158,23,202,59,107,246,
230,59,156,234,1,60,
56,0,0,8,226,0,
16,0,2,0,0,0,
86,14,16,0,2,0,
0,0,6,128,32,0,
0,0,0,0,6,0,
0,0,56,0,0,10,
226,0,16,0,2,0,
0,0,86,14,16,0,
2,0,0,0,2,64,
0,0,0,0,0,0,
219,15,201,64,219,15,
201,64,219,15,201,64,
14,0,0,7,226,0,
16,0,2,0,0,0,
86,14,16,0,2,0,
0,0,86,5,16,0,
1,0,0,0,50,0,
0,10,114,0,16,0,
3,0,0,0,166,138,
32,0,1,0,0,0,
0,0,0,0,6,0,
16,0,1,0,0,0,
150,7,16,0,2,0,
0,0,50,0,0,12,
114,0,16,0,4,0,
0,0,166,10,16,0,
1,0,0,0,2,64,
0,0,219,15,73,64,
219,15,73,64,219,15,
73,64,0,0,0,0,
70,2,16,0,3,0,
0,0,77,0,0,6,
114,0,16,0,3,0,
0,0,0,208,0,0,
134,1,16,0,3,0,
0,0,50,0,0,12,
114,0,16,0,1,0,
0,0,166,10,16,0,
1,0,0,0,2,64,
0,0,219,15,73,64,
219,15,73,64,219,15,
73,64,0,0,0,0,
150,7,16,0,2,0,
0,0,77,0,0,6,
114,0,16,0,5,0,
0,0,0,208,0,0,
214,6,16,0,2,0,
0,0,77,0,0,6,
0,208,0,0,114,0,
16,0,6,0,0,0,
70,2,16,0,1,0,
0,0,77,0,0,6,
0,208,0,0,114,0,
16,0,4,0,0,0,
70,2,16,0,4,0,
0,0,54,0,0,5,
130,0,16,0,3,0,
0,0,10,0,16,0,
4,0,0,0,54,0,
0,5,130,0,16,0,
5,0,0,0,10,0,
16,0,6,0,0,0,
55,0,0,9,194,0,
16,0,0,0,0,0,
246,15,16,0,1,0,
0,0,6,12,16,0,
3,0,0,0,6,12,
16,0,5,0,0,0,
0,0,0,10,242,0,
16,0,8,0,0,0,
70,20,16,0,0,0,
0,0,2,64,0,0,
158,23,202,59,0,0,
0,0,107,246,230,59,
0,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,1,0,0,0,
70,0,16,0,8,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
226,0,16,0,2,0,
0,0,230,10,16,0,
8,0,0,0,54,121,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,16,0,0,10,
18,0,16,0,3,0,
0,0,70,2,16,0,
1,0,0,0,2,64,
0,0,135,22,153,62,
162,69,22,63,213,120,
233,61,0,0,0,0,
16,0,0,10,130,0,
16,0,3,0,0,0,
70,2,16,0,1,0,
0,0,2,64,0,0,
63,169,22,190,117,229,
147,190,100,59,223,62,
0,0,0,0,16,0,
0,10,18,0,16,0,
1,0,0,0,70,2,
16,0,1,0,0,0,
2,64,0,0,164,112,
29,63,115,214,3,191,
11,210,204,189,0,0,
0,0,50,0,0,9,
34,0,16,0,1,0,
0,0,58,0,16,0,
3,0,0,0,10,0,
16,0,5,0,0,0,
10,0,16,0,3,0,
0,0,50,32,0,9,
18,0,16,0,1,0,
0,0,10,0,16,0,
1,0,0,0,10,0,
16,0,6,0,0,0,
26,0,16,0,1,0,
0,0,56,0,0,7,
194,0,16,0,0,0,
0,0,166,14,16,0,
0,0,0,0,6,0,
16,0,1,0,0,0,
56,0,0,8,194,0,
16,0,0,0,0,0,
166,14,16,0,0,0,
0,0,6,128,32,0,
1,0,0,0,0,0,
0,0,50,0,0,12,
50,0,16,0,0,0,
0,0,230,10,16,0,
0,0,0,0,2,64,
0,0,19,78,5,61,
19,78,5,61,0,0,
0,0,0,0,0,0,
70,0,16,0,0,0,
0,0,16,0,0,10,
66,0,16,0,0,0,
0,0,150,7,16,0,
2,0,0,0,2,64,
0,0,135,22,153,62,
162,69,22,63,213,120,
233,61,0,0,0,0,
16,0,0,10,130,0,
16,0,0,0,0,0,
150,7,16,0,2,0,
0,0,2,64,0,0,
63,169,22,190,117,229,
147,190,100,59,223,62,
0,0,0,0,16,0,
0,10,18,0,16,0,
1,0,0,0,150,7,
16,0,2,0,0,0,
2,64,0,0,164,112,
29,63,115,214,3,191,
11,210,204,189,0,0,
0,0,50,0,0,9,
66,0,16,0,0,0,
0,0,58,0,16,0,
0,0,0,0,42,0,
16,0,5,0,0,0,
42,0,16,0,0,0,
0,0,50,32,0,9,
66,0,16,0,0,0,
0,0,10,0,16,0,
1,0,0,0,26,0,
16,0,6,0,0,0,
42,0,16,0,0,0,
0,0,54,0,0,5,
130,0,16,0,4,0,
0,0,42,0,16,0,
3,0,0,0,54,0,
0,5,130,0,16,0,
6,0,0,0,42,0,
16,0,5,0,0,0,
55,0,0,9,50,0,
16,0,1,0,0,0,
246,15,16,0,1,0,
0,0,118,15,16,0,
4,0,0,0,118,15,
16,0,6,0,0,0,
54,0,0,5,66,0,
16,0,3,0,0,0,
42,0,16,0,4,0,
0,0,56,0,0,7,
194,0,16,0,0,0,
0,0,166,10,16,0,
0,0,0,0,6,4,
16,0,1,0,0,0,
56,0,0,8,194,0,
16,0,0,0,0,0,
166,14,16,0,0,0,
0,0,6,128,32,0,
1,0,0,0,0,0,
0,0,50,0,0,12,
50,0,16,0,0,0,
0,0,230,10,16,0,
0,0,0,0,2,64,
0,0,224,246,137,60,
224,246,137,60,0,0,
0,0,0,0,0,0,
70,0,16,0,0,0,
0,0,54,0,0,5,
66,0,16,0,5,0,
0,0,42,0,16,0,
6,0,0,0,55,0,
0,9,194,0,16,0,
0,0,0,0,246,15,
16,0,1,0,0,0,
86,9,16,0,3,0,
0,0,86,9,16,0,
5,0,0,0,0,0,
0,10,50,0,16,0,
1,0,0,0,70,16,
16,0,0,0,0,0,
2,64,0,0,156,234,
1,60,0,0,0,0,
0,0,0,0,0,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
1,0,0,0,70,0,
16,0,1,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,16,0,
0,10,130,0,16,0,
1,0,0,0,70,2,
16,0,1,0,0,0,
2,64,0,0,135,22,
153,62,162,69,22,63,
213,120,233,61,0,0,
0,0,16,0,0,10,
34,0,16,0,2,0,
0,0,70,2,16,0,
1,0,0,0,2,64,
0,0,63,169,22,190,
117,229,147,190,100,59,
223,62,0,0,0,0,
16,0,0,10,18,0,
16,0,1,0,0,0,
70,2,16,0,1,0,
0,0,2,64,0,0,
164,112,29,63,115,214,
3,191,11,210,204,189,
0,0,0,0,50,0,
0,9,34,0,16,0,
1,0,0,0,26,0,
16,0,2,0,0,0,
26,0,16,0,5,0,
0,0,58,0,16,0,
1,0,0,0,50,32,
0,9,18,0,16,0,
1,0,0,0,10,0,
16,0,1,0,0,0,
42,0,16,0,5,0,
0,0,26,0,16,0,
1,0,0,0,56,0,
0,7,194,0,16,0,
0,0,0,0,166,14,
16,0,0,0,0,0,
6,0,16,0,1,0,
0,0,56,0,0,8,
194,0,16,0,0,0,
0,0,166,14,16,0,
0,0,0,0,6,128,
32,0,1,0,0,0,
0,0,0,0,50,0,
0,12,98,0,16,0,
0,0,0,0,166,11,
16,0,0,0,0,0,
2,64,0,0,0,0,
0,0,3,174,75,59,
3,174,75,59,0,0,
0,0,6,1,16,0,
0,0,0,0,15,0,
0,7,130,0,16,0,
0,0,0,0,150,5,
16,0,0,0,0,0,
150,5,16,0,7,0,
0,0,50,0,0,11,
18,0,16,0,0,0,
0,0,26,128,32,128,
65,0,0,0,1,0,
0,0,0,0,0,0,
58,0,16,0,0,0,
0,0,10,0,16,0,
2,0,0,0,15,0,
0,10,18,32,16,0,
0,0,0,0,134,0,
16,0,0,0,0,0,
2,64,0,0,0,0,
128,63,243,229,145,63,
0,0,0,0,0,0,
0,0,16,0,0,10,
34,32,16,0,0,0,
0,0,70,2,16,0,
0,0,0,0,2,64,
0,0,0,0,128,63,
145,15,202,190,52,162,
20,191,0,0,0,0,
15,0,0,10,66,32,
16,0,0,0,0,0,
70,0,16,0,0,0,
0,0,2,64,0,0,
0,0,128,63,23,14,
2,64,0,0,0,0,
0,0,0,0,54,0,
0,5,130,32,16,0,
0,0,0,0,1,64,
0,0,0,0,128,63,
62,0,0,1,83,84,
65,84,148,0,0,0,
97,1,0,0,9,0,
0,0,0,0,0,0,
2,0,0,0,0,1,
0,0,0,0,0,0,
0,0,0,0,1,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,20,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,55,0,
0,0,20,0,0,0,
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
0,0,0,0
};

}

namespace RetroArch
{
class PalShadersPalSinglepassShaderDef : public ShaderDef
{
public:
	PalShadersPalSinglepassShaderDef() : ShaderDef{}
	{
		Name = "pal-singlepass";
		VertexByteCode = RetroArchPalShadersPalSinglepassShaderDefs::sVertexByteCode;
		VertexLength = sizeof(RetroArchPalShadersPalSinglepassShaderDefs::sVertexByteCode);
		FragmentByteCode = RetroArchPalShadersPalSinglepassShaderDefs::sFragmentByteCode;
		FragmentLength = sizeof(RetroArchPalShadersPalSinglepassShaderDefs::sFragmentByteCode);
		Params.push_back(ShaderParam("FIR_GAIN", -1, 0, 4, 0.000000f, 5.000000f, 1.500000f));
		Params.push_back(ShaderParam("FIR_INVGAIN", -1, 4, 4, 0.000000f, 5.000000f, 1.100000f));
		Params.push_back(ShaderParam("PHASE_NOISE", -1, 8, 4, 0.000000f, 5.000000f, 1.000000f));
		Params.push_back(ShaderParam("MVP", 0, 0, 64, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("SourceSize", 0, 96, 16, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("OriginalSize", 0, 80, 16, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("OutputSize", 0, 64, 16, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("FrameCount", 0, 112, 4, 0.000000f, 0.000000f, 0.000000f));
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
