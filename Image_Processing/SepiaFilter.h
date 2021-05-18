#pragma once
#include "Filters.h"
namespace Filters_BPP {
class SepiaFilter : public Filters
{
public:
	Color calculateNewPixelColor(Bitmap^ sourceImage, int x, int y) {
		Color sourceColor = sourceImage->GetPixel(x, y);
		float intensity = 0.299 * sourceColor.R + 0.587 * sourceColor.G + 0.114 * sourceColor.B;
		float K = 64;
		Color resultColor = Color::FromArgb(Clamp(intensity + 2 * K, 0, 255),
			Clamp(intensity + 0.5 * K, 0, 255),
			Clamp(intensity - K, 0, 255));
		return resultColor;
	}
};
};

