#pragma once
#include "Filters.h"
namespace Filters_BPP {
class LinearCorrectionFilter :public Filters
{
private:
	unsigned int maxR = 0, minR = 255;
	unsigned int maxG = 0, minG = 255;
	unsigned int maxB = 0, minB = 255;
public:
	void MaxColor(Bitmap^ sourceImage) {
		for (int i = 0; i < sourceImage->Width; i++)
			for (int j = 0; j < sourceImage->Height; j++) {
				Color sourceColor = sourceImage->GetPixel(i, j);
				maxR = MAX(maxR, sourceColor.R);
				maxG = MAX(maxG, sourceColor.G);
				maxB = MAX(maxB, sourceColor.B);
			}
	}
	void MinColor(Bitmap^ sourceImage) {
		for (int i = 0; i < sourceImage->Width; i++)
			for (int j = 0; j < sourceImage->Height; j++) {
				Color sourceColor = sourceImage->GetPixel(i, j);
				minR = MIN(minR, sourceColor.R);
				minG = MIN(minG, sourceColor.G);
				minB = MIN(minB, sourceColor.B);
			}
	}
	Color calculateNewPixelColor(Bitmap^ sourceImage, int x, int y) {
		Color sourceColor = sourceImage->GetPixel(x, y);
		Color resultColor = Color::FromArgb((sourceColor.R - minR) * 255 / (maxR - minR),
			(sourceColor.G - minG) * 255 / (maxG - minG),
			(sourceColor.B - minB) * 255 / (maxB - minB));
		return resultColor;
	}
	Bitmap^ processImage(Bitmap^ sourceImage, ProgressBar^ progress) {
		Bitmap^ resultImage = gcnew Bitmap(sourceImage->Width, sourceImage->Height);

		//  »щем максмимум цвета
		MaxColor(sourceImage);

		// »щем минимуму цвета
		MinColor(sourceImage);

		for (int i = 0; i < sourceImage->Width; i++) {
			for (int j = 0; j < sourceImage->Height; j++) {
				progress->PerformStep();
				resultImage->SetPixel(i, j, calculateNewPixelColor(sourceImage, i, j));
			}
		}

		return resultImage;
	}

};
};

