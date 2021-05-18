#pragma once
#include "Filters.h"
namespace Filters_BPP {
    class GrayScaleFilter :public Filters
    {
	public:
		Color calculateNewPixelColor(Bitmap^ sourceImage, int x, int y) {
			Color sourceColor = sourceImage->GetPixel(x, y);
			float intensity = 0.299 * sourceColor.R + 0.587 * sourceColor.G + 0.114 * sourceColor.B;
			Color resultColor = Color::FromArgb(intensity, intensity, intensity);
			return resultColor;
		}
    };
};
