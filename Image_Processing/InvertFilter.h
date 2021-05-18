#pragma once
//  Инверсия
#include "Filters.h"
namespace Filters_BPP {
	class InvertFilter : public Filters
	{
	public:
		Color calculateNewPixelColor(Bitmap^ sourceImage, int x, int y) {
			Color sourceColor = sourceImage->GetPixel(x, y);
			Color resultColor = Color::FromArgb(255 - sourceColor.R,
				255 - sourceColor.G,
				255 - sourceColor.B);
			return resultColor;
		}
	};
};

