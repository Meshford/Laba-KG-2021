#pragma once
#include "Filters.h"
namespace Filters_BPP {
class TransferFilter : public Filters
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
		int number_bit = (sourceImage->Width) / 5;
		Bitmap^ resultImage = gcnew Bitmap(sourceImage->Width, sourceImage->Height);
		for (int i = number_bit; i < sourceImage->Width; i++) {
			for (int j = 0; j < sourceImage->Height; j++) {
				resultImage->SetPixel(i - number_bit, j, calculateNewPixelColor(sourceImage, i, j));
				progress->PerformStep();
			}
		}
		for (int i = sourceImage->Width - number_bit; i < sourceImage->Width; i++) {
			for (int j = 0; j < sourceImage->Height; j++) {
				resultImage->SetPixel(i, j, Color::FromArgb(0, 0, 0));
			}
		}

		return resultImage;
	}

};
};

