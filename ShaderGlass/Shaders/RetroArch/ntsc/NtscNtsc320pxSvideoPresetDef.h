/*
ShaderGlass preset ntsc / ntsc-320px-svideo imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/master/ntsc/ntsc-320px-svideo.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class NtscNtsc320pxSvideoPresetDef : public PresetDef
{
public:
	NtscNtsc320pxSvideoPresetDef() : PresetDef{}
	{
		Name = "ntsc-320px-svideo";
		Category = "ntsc";
	}

	virtual void Build() {
         	ShaderDefs.push_back(NtscShadersNtscPass1Svideo2phaseShaderDef()
.Param("filter_linear", "false")
.Param("float_framebuffer", "true")
.Param("frame_count_mod", "2")
.Param("scale_type_x", "absolute")
.Param("scale_type_y", "source")
.Param("scale_x", "1280")
.Param("scale_y", "1.0"));
         	ShaderDefs.push_back(NtscShadersNtscPass22phaseGammaShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "source")
.Param("scale_x", "0.5")
.Param("scale_y", "1.0"));
	}
};
}
