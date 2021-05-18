#pragma once
#include "Filters.h"
namespace Filters_BPP {
 class GrayWorldFilter :public Filters
{
private:
	float averageR = 0;
	float averageG = 0;
	float averageB = 0;
public:
	Color AverageBrightness(Bitmap^ sourceImage) {
		for (int i = 0; i < sourceImage->Width; i++)
			for (int j = 0; j < sourceImage->Height; j++) {
				Color sourceColor = sourceImage->GetPixel(i, j);
				averageR += sourceColor.R;
				averageG += sourceColor.G;
				averageB += sourceColor.B;
			}
		averageR /= (sourceImage->Width * sourceImage->Height);
		averageG /= (sourceImage->Width * sourceImage->Height);
		averageB /= (sourceImage->Width * sourceImage->Height);
		Color resultColor = Color::FromArgb(averageR,
			averageG,
			averageB);
		return resultColor;
	}
	Color calculateNewPixelColor(Bitmap^ sourceImage, int x, int y) {
		float Avg = (averageR + averageG + averageB) / 3;
		Color sourceColor = sourceImage->GetPixel(x, y);
		Color resultColor = Color::FromArgb(Clamp(sourceColor.R * (Avg / averageR), 0, 255),
			Clamp(sourceColor.G * (Avg / averageG), 0, 255),
			Clamp(sourceColor.B * (Avg / averageB), 0, 255));
		return resultColor;
	}
	Bitmap^ processImage(Bitmap^ sourceImage, ProgressBar^ progress) {
		Bitmap^ resultImage = gcnew Bitmap(sourceImage->Width, sourceImage->Height);

		//  »щем среднюю €ркость
		AverageBrightness(sourceImage);

		for (int i = 0; i < sourceImage->Width; i++) {
			for (int j = 0; j < sourceImage->Height; j++) {
				resultImage->SetPixel(i, j, calculateNewPixelColor(sourceImage, i, j));
				progress->PerformStep();
			}
		}

		return resultImage;
	}
};
};

