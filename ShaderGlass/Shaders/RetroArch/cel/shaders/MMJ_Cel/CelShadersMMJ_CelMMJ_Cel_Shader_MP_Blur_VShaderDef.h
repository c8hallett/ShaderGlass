/*
ShaderGlass shader cel-shaders-MMJ_Cel\MMJ_Cel_Shader_MP_Blur_V imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/master/cel/shaders/MMJ_Cel/MMJ_Cel_Shader_MP_Blur_V.slang
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArchCelShadersMMJ_CelMMJ_Cel_Shader_MP_Blur_VShaderDefs
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
68,88,66,67,54,66,
173,113,24,205,87,26,
70,194,232,183,255,31,
93,204,1,0,0,0,
44,6,0,0,5,0,
0,0,52,0,0,0,
88,2,0,0,140,2,
0,0,192,2,0,0,
144,5,0,0,82,68,
69,70,28,2,0,0,
1,0,0,0,200,0,
0,0,3,0,0,0,
60,0,0,0,0,5,
255,255,0,129,0,0,
244,1,0,0,82,68,
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
0,0,180,0,0,0,
2,0,0,0,5,0,
0,0,4,0,0,0,
255,255,255,255,2,0,
0,0,1,0,0,0,
13,0,0,0,195,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
1,0,0,0,1,0,
0,0,0,0,0,0,
95,77,77,74,95,66,
108,117,114,80,97,115,
115,95,72,95,115,97,
109,112,108,101,114,0,
77,77,74,95,66,108,
117,114,80,97,115,115,
95,72,0,80,117,115,
104,0,195,0,0,0,
3,0,0,0,224,0,
0,0,48,0,0,0,
0,0,0,0,0,0,
0,0,88,1,0,0,
0,0,0,0,16,0,
0,0,0,0,0,0,
124,1,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
160,1,0,0,16,0,
0,0,16,0,0,0,
2,0,0,0,124,1,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,180,1,
0,0,32,0,0,0,
4,0,0,0,2,0,
0,0,208,1,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,112,97,114,97,
109,115,95,77,77,74,
95,66,108,117,114,80,
97,115,115,95,72,83,
105,122,101,0,102,108,
111,97,116,52,0,171,
171,171,1,0,3,0,
1,0,4,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,114,1,
0,0,112,97,114,97,
109,115,95,79,114,105,
103,105,110,97,108,83,
105,122,101,0,112,97,
114,97,109,115,95,66,
108,117,114,87,101,105,
103,104,116,86,0,102,
108,111,97,116,0,171,
171,171,0,0,3,0,
1,0,1,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,199,1,
0,0,77,105,99,114,
111,115,111,102,116,32,
40,82,41,32,72,76,
83,76,32,83,104,97,
100,101,114,32,67,111,
109,112,105,108,101,114,
32,49,48,46,49,0,
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
200,2,0,0,80,0,
0,0,178,0,0,0,
106,8,0,1,89,0,
0,4,70,142,32,0,
1,0,0,0,3,0,
0,0,90,0,0,3,
0,96,16,0,2,0,
0,0,88,24,0,4,
0,112,16,0,2,0,
0,0,85,85,0,0,
98,16,0,3,50,16,
16,0,0,0,0,0,
101,0,0,3,242,32,
16,0,0,0,0,0,
104,0,0,2,6,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,242,0,16,0,
0,0,0,0,70,16,
16,0,0,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,54,0,
0,5,18,0,16,0,
1,0,0,0,1,64,
0,0,0,0,0,0,
54,0,0,5,242,0,
16,0,2,0,0,0,
70,14,16,0,0,0,
0,0,54,0,0,5,
66,0,16,0,1,0,
0,0,1,64,0,0,
1,0,0,0,48,0,
0,1,43,0,0,5,
130,0,16,0,1,0,
0,0,42,0,16,0,
1,0,0,0,49,0,
0,8,18,0,16,0,
3,0,0,0,10,128,
32,0,1,0,0,0,
2,0,0,0,58,0,
16,0,1,0,0,0,
3,0,4,3,10,0,
16,0,3,0,0,0,
14,0,0,10,18,0,
16,0,3,0,0,0,
2,64,0,0,0,0,
128,63,0,0,128,63,
0,0,128,63,0,0,
128,63,58,0,16,0,
1,0,0,0,56,0,
0,8,130,0,16,0,
1,0,0,0,58,0,
16,0,1,0,0,0,
58,128,32,0,1,0,
0,0,1,0,0,0,
56,0,0,7,34,0,
16,0,1,0,0,0,
58,0,16,0,1,0,
0,0,1,64,0,0,
0,0,0,63,0,0,
0,7,98,0,16,0,
3,0,0,0,6,1,
16,0,1,0,0,0,
6,17,16,0,0,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,242,0,16,0,
4,0,0,0,150,5,
16,0,3,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,0,0,
0,8,162,0,16,0,
1,0,0,0,6,4,
16,128,65,0,0,0,
1,0,0,0,6,20,
16,0,0,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
242,0,16,0,5,0,
0,0,214,5,16,0,
1,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,0,0,0,8,
242,0,16,0,5,0,
0,0,70,14,16,128,
65,0,0,0,4,0,
0,0,70,14,16,0,
5,0,0,0,50,0,
0,12,242,0,16,0,
4,0,0,0,70,14,
16,0,5,0,0,0,
2,64,0,0,0,0,
0,63,0,0,0,63,
0,0,0,63,0,0,
0,63,70,14,16,0,
4,0,0,0,0,0,
0,8,242,0,16,0,
4,0,0,0,70,14,
16,128,65,0,0,0,
2,0,0,0,70,14,
16,0,4,0,0,0,
50,0,0,9,242,0,
16,0,2,0,0,0,
6,0,16,0,3,0,
0,0,70,14,16,0,
4,0,0,0,70,14,
16,0,2,0,0,0,
30,0,0,7,66,0,
16,0,1,0,0,0,
42,0,16,0,1,0,
0,0,1,64,0,0,
1,0,0,0,22,0,
0,1,54,0,0,5,
242,32,16,0,0,0,
0,0,70,14,16,0,
2,0,0,0,62,0,
0,1,83,84,65,84,
148,0,0,0,23,0,
0,0,6,0,0,0,
0,0,0,0,2,0,
0,0,10,0,0,0,
1,0,0,0,0,0,
0,0,1,0,0,0,
1,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
3,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,4,0,0,0,
0,0,0,0,1,0,
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

}

namespace RetroArch
{
class CelShadersMMJ_CelMMJ_Cel_Shader_MP_Blur_VShaderDef : public ShaderDef
{
public:
	CelShadersMMJ_CelMMJ_Cel_Shader_MP_Blur_VShaderDef() : ShaderDef{}
	{
		Name = "MMJ_Cel_Shader_MP_Blur_V";
		VertexByteCode = RetroArchCelShadersMMJ_CelMMJ_Cel_Shader_MP_Blur_VShaderDefs::sVertexByteCode;
		VertexLength = sizeof(RetroArchCelShadersMMJ_CelMMJ_Cel_Shader_MP_Blur_VShaderDefs::sVertexByteCode);
		FragmentByteCode = RetroArchCelShadersMMJ_CelMMJ_Cel_Shader_MP_Blur_VShaderDefs::sFragmentByteCode;
		FragmentLength = sizeof(RetroArchCelShadersMMJ_CelMMJ_Cel_Shader_MP_Blur_VShaderDefs::sFragmentByteCode);
		Params.push_back(ShaderParam("BlurWeightV", -1, 32, 4, 0.000000f, 16.000000f, 0.000000f));
		Params.push_back(ShaderParam("MVP", 0, 0, 64, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("OriginalSize", -1, 16, 16, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("MMJ_BlurPass_HSize", -1, 0, 16, 0.000000f, 0.000000f, 0.000000f));
		Samplers.push_back(ShaderSampler("MMJ_BlurPass_H", 2));
/*
VertexSource = %*VERTEX_SOURCE*%;
*/
/*
FragmentSource = %*FRAGMENT_SOURCE*%;
*/
	}
};
}
