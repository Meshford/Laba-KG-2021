#pragma once
#include "Filters.h"
namespace Filters_BPP {
class BrightnessFilter :public Filters
{
public:
	Color calculateNewPixelColor(Bitmap^ sourceImage, int x, int y) {
		Color sourceColor = sourceImage->GetPixel(x, y);
		float Br = 45;
		Color resultColor = Color::FromArgb(Clamp(sourceColor.R + Br, 0, 255),
			Clamp(sourceColor.G + Br, 0, 255),
			Clamp(sourceColor.B + Br, 0, 255));
		return resultColor;
	}
};
};

