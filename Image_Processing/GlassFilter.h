#pragma once
#include "Filters.h"
namespace Filters_BPP {
class GlassFilter :public Filters
{
public:
	Color calculateNewPixelColor(Bitmap^ sourceImage, int x, int y) {
		Color sourceColor = sourceImage->GetPixel(x, y);
		Color resultColor = Color::FromArgb(sourceColor.R,
			sourceColor.G,
			sourceColor.B);
		return resultColor;
	}
	Bitmap^ processImage(Bitmap^ sourceImage, ProgressBar^ progress) {
		Bitmap^ resultImage = gcnew Bitmap(sourceImage->Width, sourceImage->Height);
		for (int i = 0; i < sourceImage->Width; i++) {
			for (int j = 0; j < sourceImage->Height; j++) {
				progress->PerformStep();
				int k = Clamp(static_cast<int>(i + (rand() % 2 - 0.5) * 10), 0, sourceImage->Width - 1);
				int l = Clamp(static_cast<int>(j + (rand() % 2 - 0.5) * 10), 0, sourceImage->Height - 1);
				resultImage->SetPixel(i, j, calculateNewPixelColor(sourceImage, k, l));
			}
		}
		return resultImage;
	}
};

};

