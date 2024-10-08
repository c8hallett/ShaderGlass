/*
ShaderGlass preset misc / yiq-hue-adjustment imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/6f921ee4815a7894a33855974285b04545a4fa42/misc/yiq-hue-adjustment.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class MiscYiqHueAdjustmentPresetDef : public PresetDef
{
public:
	MiscYiqHueAdjustmentPresetDef() : PresetDef{}
	{
		Name = "yiq-hue-adjustment";
		Category = "misc";
	}

	virtual void Build() {
         	ShaderDefs.push_back(MiscShadersYiqHueAdjustmentShaderDef()
.Param("scale_type", "source"));
	}
};
}
