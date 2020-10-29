/*
ShaderGlass shader crt-shaders-guest-crt-sm\d65-d50-sm imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/master/crt/shaders/guest/crt-sm/d65-d50-sm.slang
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArchCrtShadersGuestCrtSmD65D50SmShaderDefs
{
static const BYTE sVertexByteCode[] =
{
68,88,66,67,137,55,
81,184,224,246,92,107,
15,230,208,49,247,77,
66,240,1,0,0,0,
244,6,0,0,5,0,
0,0,52,0,0,0,
248,3,0,0,68,4,
0,0,156,4,0,0,
88,6,0,0,82,68,
69,70,188,3,0,0,
2,0,0,0,136,0,
0,0,2,0,0,0,
60,0,0,0,0,5,
254,255,0,129,0,0,
147,3,0,0,82,68,
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
0,0,9,0,0,0,
24,1,0,0,80,0,
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
235,0,0,0,128,2,
0,0,0,0,0,0,
16,0,0,0,0,0,
0,0,156,2,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,192,2,0,0,
16,0,0,0,16,0,
0,0,0,0,0,0,
156,2,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
212,2,0,0,32,0,
0,0,16,0,0,0,
0,0,0,0,156,2,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,230,2,
0,0,48,0,0,0,
4,0,0,0,0,0,
0,0,0,3,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,36,3,0,0,
52,0,0,0,4,0,
0,0,0,0,0,0,
52,3,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
88,3,0,0,56,0,
0,0,4,0,0,0,
0,0,0,0,52,3,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,109,3,
0,0,60,0,0,0,
4,0,0,0,2,0,
0,0,52,3,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,121,3,0,0,
64,0,0,0,4,0,
0,0,2,0,0,0,
52,3,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
134,3,0,0,68,0,
0,0,4,0,0,0,
2,0,0,0,52,3,
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
0,0,0,0,146,2,
0,0,112,97,114,97,
109,115,95,79,114,105,
103,105,110,97,108,83,
105,122,101,0,112,97,
114,97,109,115,95,79,
117,116,112,117,116,83,
105,122,101,0,112,97,
114,97,109,115,95,70,
114,97,109,101,67,111,
117,110,116,0,100,119,
111,114,100,0,171,171,
0,0,19,0,1,0,
1,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,248,2,0,0,
112,97,114,97,109,115,
95,87,80,0,102,108,
111,97,116,0,0,0,
3,0,1,0,1,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
46,3,0,0,112,97,
114,97,109,115,95,119,
112,95,115,97,116,117,
114,97,116,105,111,110,
0,112,97,114,97,109,
115,95,116,97,116,101,
0,112,97,114,97,109,
115,95,102,108,105,112,
104,0,112,97,114,97,
109,115,95,102,108,105,
112,118,0,77,105,99,
114,111,115,111,102,116,
32,40,82,41,32,72,
76,83,76,32,83,104,
97,100,101,114,32,67,
111,109,112,105,108,101,
114,32,49,48,46,49,
0,171,73,83,71,78,
68,0,0,0,2,0,
0,0,8,0,0,0,
56,0,0,0,0,0,
0,0,0,0,0,0,
3,0,0,0,0,0,
0,0,15,15,0,0,
56,0,0,0,1,0,
0,0,0,0,0,0,
3,0,0,0,1,0,
0,0,3,3,0,0,
84,69,88,67,79,79,
82,68,0,171,171,171,
79,83,71,78,80,0,
0,0,2,0,0,0,
8,0,0,0,56,0,
0,0,0,0,0,0,
0,0,0,0,3,0,
0,0,0,0,0,0,
3,12,0,0,65,0,
0,0,0,0,0,0,
1,0,0,0,3,0,
0,0,1,0,0,0,
15,0,0,0,84,69,
88,67,79,79,82,68,
0,83,86,95,80,111,
115,105,116,105,111,110,
0,171,171,171,83,72,
69,88,180,1,0,0,
80,0,1,0,109,0,
0,0,106,8,0,1,
89,0,0,4,70,142,
32,0,0,0,0,0,
4,0,0,0,89,0,
0,4,70,142,32,0,
1,0,0,0,5,0,
0,0,95,0,0,3,
242,16,16,0,0,0,
0,0,95,0,0,3,
50,16,16,0,1,0,
0,0,101,0,0,3,
50,32,16,0,0,0,
0,0,103,0,0,4,
242,32,16,0,1,0,
0,0,1,0,0,0,
104,0,0,2,2,0,
0,0,54,0,0,5,
50,32,16,0,0,0,
0,0,70,16,16,0,
1,0,0,0,56,0,
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
242,0,16,0,0,0,
0,0,246,31,16,0,
0,0,0,0,70,142,
32,0,0,0,0,0,
3,0,0,0,70,14,
16,0,0,0,0,0,
0,0,0,11,50,0,
16,0,1,0,0,0,
2,64,0,0,0,0,
128,191,0,0,128,191,
0,0,0,0,0,0,
0,0,22,133,32,0,
1,0,0,0,4,0,
0,0,54,0,0,8,
194,0,16,0,1,0,
0,0,2,64,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,50,0,
0,13,242,0,16,0,
1,0,0,0,246,143,
32,0,1,0,0,0,
3,0,0,0,70,14,
16,0,1,0,0,0,
2,64,0,0,0,0,
128,63,0,0,128,63,
0,0,128,63,0,0,
128,63,56,0,0,7,
242,32,16,0,1,0,
0,0,70,14,16,0,
0,0,0,0,70,14,
16,0,1,0,0,0,
62,0,0,1,83,84,
65,84,148,0,0,0,
10,0,0,0,2,0,
0,0,0,0,0,0,
4,0,0,0,7,0,
0,0,0,0,0,0,
0,0,0,0,1,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,2,0,
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
68,88,66,67,79,244,
222,4,140,45,217,170,
68,147,156,156,37,225,
241,67,1,0,0,0,
252,9,0,0,5,0,
0,0,52,0,0,0,
176,3,0,0,228,3,
0,0,24,4,0,0,
96,9,0,0,82,68,
69,70,116,3,0,0,
1,0,0,0,184,0,
0,0,3,0,0,0,
60,0,0,0,0,5,
255,255,0,129,0,0,
75,3,0,0,82,68,
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
0,0,9,0,0,0,
208,0,0,0,80,0,
0,0,0,0,0,0,
0,0,0,0,56,2,
0,0,0,0,0,0,
16,0,0,0,0,0,
0,0,84,2,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,120,2,0,0,
16,0,0,0,16,0,
0,0,0,0,0,0,
84,2,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
140,2,0,0,32,0,
0,0,16,0,0,0,
0,0,0,0,84,2,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,158,2,
0,0,48,0,0,0,
4,0,0,0,0,0,
0,0,184,2,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,220,2,0,0,
52,0,0,0,4,0,
0,0,2,0,0,0,
236,2,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
16,3,0,0,56,0,
0,0,4,0,0,0,
2,0,0,0,236,2,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,37,3,
0,0,60,0,0,0,
4,0,0,0,2,0,
0,0,236,2,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,49,3,0,0,
64,0,0,0,4,0,
0,0,0,0,0,0,
236,2,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
62,3,0,0,68,0,
0,0,4,0,0,0,
0,0,0,0,236,2,
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
0,0,0,0,74,2,
0,0,112,97,114,97,
109,115,95,79,114,105,
103,105,110,97,108,83,
105,122,101,0,112,97,
114,97,109,115,95,79,
117,116,112,117,116,83,
105,122,101,0,112,97,
114,97,109,115,95,70,
114,97,109,101,67,111,
117,110,116,0,100,119,
111,114,100,0,171,171,
0,0,19,0,1,0,
1,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,176,2,0,0,
112,97,114,97,109,115,
95,87,80,0,102,108,
111,97,116,0,0,0,
3,0,1,0,1,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
230,2,0,0,112,97,
114,97,109,115,95,119,
112,95,115,97,116,117,
114,97,116,105,111,110,
0,112,97,114,97,109,
115,95,116,97,116,101,
0,112,97,114,97,109,
115,95,102,108,105,112,
104,0,112,97,114,97,
109,115,95,102,108,105,
112,118,0,77,105,99,
114,111,115,111,102,116,
32,40,82,41,32,72,
76,83,76,32,83,104,
97,100,101,114,32,67,
111,109,112,105,108,101,
114,32,49,48,46,49,
0,171,73,83,71,78,
44,0,0,0,1,0,
0,0,8,0,0,0,
32,0,0,0,0,0,
0,0,0,0,0,0,
3,0,0,0,0,0,
0,0,3,3,0,0,
84,69,88,67,79,79,
82,68,0,171,171,171,
79,83,71,78,44,0,
0,0,1,0,0,0,
8,0,0,0,32,0,
0,0,0,0,0,0,
0,0,0,0,3,0,
0,0,0,0,0,0,
15,0,0,0,83,86,
95,84,97,114,103,101,
116,0,171,171,83,72,
69,88,64,5,0,0,
80,0,0,0,80,1,
0,0,106,8,0,1,
89,0,0,4,70,142,
32,0,1,0,0,0,
4,0,0,0,90,0,
0,3,0,96,16,0,
2,0,0,0,88,24,
0,4,0,112,16,0,
2,0,0,0,85,85,
0,0,98,16,0,3,
50,16,16,0,0,0,
0,0,101,0,0,3,
242,32,16,0,0,0,
0,0,104,0,0,2,
4,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,0,0,0,0,
70,16,16,0,0,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
0,0,0,10,114,0,
16,0,1,0,0,0,
70,2,16,0,0,0,
0,0,2,64,0,0,
23,183,209,56,23,183,
209,56,23,183,209,56,
0,0,0,0,16,0,
0,7,18,0,16,0,
0,0,0,0,70,2,
16,0,0,0,0,0,
70,2,16,0,0,0,
0,0,75,0,0,5,
18,0,16,0,0,0,
0,0,10,0,16,0,
0,0,0,0,47,0,
0,5,226,0,16,0,
0,0,0,0,6,9,
16,0,1,0,0,0,
56,0,0,8,226,0,
16,0,0,0,0,0,
86,14,16,0,0,0,
0,0,166,138,32,0,
1,0,0,0,3,0,
0,0,25,0,0,5,
226,0,16,0,0,0,
0,0,86,14,16,0,
0,0,0,0,16,0,
0,7,18,0,16,0,
1,0,0,0,150,7,
16,0,0,0,0,0,
150,7,16,0,0,0,
0,0,68,0,0,5,
18,0,16,0,1,0,
0,0,10,0,16,0,
1,0,0,0,56,0,
0,7,226,0,16,0,
0,0,0,0,86,14,
16,0,0,0,0,0,
6,0,16,0,1,0,
0,0,56,0,0,7,
114,0,16,0,0,0,
0,0,6,0,16,0,
0,0,0,0,150,7,
16,0,0,0,0,0,
47,0,0,5,114,0,
16,0,0,0,0,0,
70,2,16,0,0,0,
0,0,56,0,0,10,
114,0,16,0,0,0,
0,0,70,2,16,0,
0,0,0,0,2,64,
0,0,154,153,25,64,
154,153,25,64,154,153,
25,64,0,0,0,0,
25,0,0,5,114,0,
16,0,0,0,0,0,
70,2,16,0,0,0,
0,0,16,0,0,10,
18,0,16,0,1,0,
0,0,70,2,16,0,
0,0,0,0,2,64,
0,0,27,26,233,62,
131,47,188,62,57,201,
16,62,0,0,0,0,
16,0,0,10,34,0,
16,0,1,0,0,0,
70,2,16,0,0,0,
0,0,2,64,0,0,
181,224,109,62,24,50,
53,63,178,91,117,61,
0,0,0,0,16,0,
0,10,66,0,16,0,
1,0,0,0,70,2,
16,0,0,0,0,0,
2,64,0,0,22,81,
110,60,227,221,214,61,
246,171,52,63,0,0,
0,0,16,0,0,10,
130,0,16,0,0,0,
0,0,70,2,16,0,
1,0,0,0,2,64,
0,0,130,6,68,64,
177,83,178,191,186,149,
243,190,0,0,0,0,
16,0,0,10,18,0,
16,0,2,0,0,0,
70,2,16,0,0,0,
0,0,2,64,0,0,
24,122,220,62,148,222,
174,62,169,150,54,62,
0,0,0,0,16,0,
0,10,34,0,16,0,
2,0,0,0,70,2,
16,0,0,0,0,0,
2,64,0,0,231,93,
99,62,65,230,52,63,
28,18,146,61,0,0,
0,0,16,0,0,10,
66,0,16,0,2,0,
0,0,70,2,16,0,
0,0,0,0,2,64,
0,0,164,91,165,60,
220,168,4,62,126,104,
112,63,0,0,0,0,
16,0,0,10,130,0,
16,0,1,0,0,0,
70,2,16,0,2,0,
0,0,2,64,0,0,
26,119,61,64,146,226,
187,191,156,224,239,190,
0,0,0,0,49,0,
0,8,130,0,16,0,
2,0,0,0,26,128,
32,0,1,0,0,0,
3,0,0,0,1,64,
0,0,0,0,0,0,
55,0,0,9,18,0,
16,0,3,0,0,0,
58,0,16,0,2,0,
0,0,58,0,16,0,
1,0,0,0,58,0,
16,0,0,0,0,0,
16,0,0,10,130,0,
16,0,0,0,0,0,
70,2,16,0,1,0,
0,0,2,64,0,0,
209,33,120,191,31,33,
240,63,160,54,42,61,
0,0,0,0,16,0,
0,10,18,0,16,0,
1,0,0,0,70,2,
16,0,1,0,0,0,
2,64,0,0,92,3,
139,61,234,88,106,190,
110,224,136,63,0,0,
0,0,16,0,0,10,
34,0,16,0,1,0,
0,0,70,2,16,0,
2,0,0,0,2,64,
0,0,145,144,122,191,
32,68,245,63,16,7,
9,61,0,0,0,0,
16,0,0,10,66,0,
16,0,1,0,0,0,
70,2,16,0,2,0,
0,0,2,64,0,0,
187,7,173,61,148,90,
130,190,143,247,181,63,
0,0,0,0,55,0,
0,9,66,0,16,0,
3,0,0,0,58,0,
16,0,2,0,0,0,
42,0,16,0,1,0,
0,0,10,0,16,0,
1,0,0,0,55,0,
0,9,34,0,16,0,
3,0,0,0,58,0,
16,0,2,0,0,0,
26,0,16,0,1,0,
0,0,58,0,16,0,
0,0,0,0,0,0,
0,8,114,0,16,0,
1,0,0,0,70,2,
16,128,65,0,0,0,
0,0,0,0,70,2,
16,0,3,0,0,0,
56,0,0,9,130,0,
16,0,0,0,0,0,
1,64,0,0,10,215,
35,60,26,128,32,128,
129,0,0,0,1,0,
0,0,3,0,0,0,
50,0,0,9,114,0,
16,0,0,0,0,0,
246,15,16,0,0,0,
0,0,70,2,16,0,
1,0,0,0,70,2,
16,0,0,0,0,0,
47,0,0,5,114,0,
16,0,0,0,0,0,
70,2,16,0,0,0,
0,0,56,0,0,10,
114,0,16,0,0,0,
0,0,70,2,16,0,
0,0,0,0,2,64,
0,0,85,85,213,62,
85,85,213,62,85,85,
213,62,0,0,0,0,
25,0,0,5,114,32,
16,0,0,0,0,0,
70,2,16,0,0,0,
0,0,49,0,0,8,
18,0,16,0,0,0,
0,0,1,64,0,0,
0,0,0,63,58,128,
32,0,1,0,0,0,
3,0,0,0,1,0,
0,7,130,32,16,0,
0,0,0,0,10,0,
16,0,0,0,0,0,
1,64,0,0,0,0,
0,63,62,0,0,1,
83,84,65,84,148,0,
0,0,39,0,0,0,
4,0,0,0,0,0,
0,0,2,0,0,0,
33,0,0,0,0,0,
0,0,1,0,0,0,
1,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,1,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,3,0,
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
class CrtShadersGuestCrtSmD65D50SmShaderDef : public ShaderDef
{
public:
	CrtShadersGuestCrtSmD65D50SmShaderDef() : ShaderDef{}
	{
		Name = "d65-d50-sm";
		VertexByteCode = RetroArchCrtShadersGuestCrtSmD65D50SmShaderDefs::sVertexByteCode;
		VertexLength = sizeof(RetroArchCrtShadersGuestCrtSmD65D50SmShaderDefs::sVertexByteCode);
		FragmentByteCode = RetroArchCrtShadersGuestCrtSmD65D50SmShaderDefs::sFragmentByteCode;
		FragmentLength = sizeof(RetroArchCrtShadersGuestCrtSmD65D50SmShaderDefs::sFragmentByteCode);
		Params.push_back(ShaderParam("tate", -1, 60, 4, 0.000000f, 1.000000f, 0.000000f));
		Params.push_back(ShaderParam("fliph", -1, 64, 4, -1.000000f, 1.000000f, -1.000000f));
		Params.push_back(ShaderParam("flipv", -1, 68, 4, -1.000000f, 1.000000f, 1.000000f));
		Params.push_back(ShaderParam("WP", -1, 52, 4, -100.000000f, 100.000000f, 0.000000f));
		Params.push_back(ShaderParam("wp_saturation", -1, 56, 4, 0.000000f, 2.000000f, 1.000000f));
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
