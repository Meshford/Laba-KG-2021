#pragma once
#include "Filters.h"
namespace Filters_BPP {
	class PerfectReflectorFilter :
		public Filters
	{
	private:
		unsigned int maxR = 0;
		unsigned int maxG = 0;
		unsigned int maxB = 0;
	public:
		Color calculateNewPixelColor(Bitmap^ sourceImage, int x, int y) {
			Color sourceColor = sourceImage->GetPixel(x, y);
			Color resultColor = Color::FromArgb(sourceColor.R * (255 / maxR),
				sourceColor.G * (255 / maxG),
				sourceColor.B * (255 / maxB));
			return resultColor;
		}
		void MaxColor(Bitmap^ sourceImage) {
			for (int i = 0; i < sourceImage->Width; i++)
				for (int j = 0; j < sourceImage->Height; j++) {
					Color sourceColor = sourceImage->GetPixel(i, j);
					maxR = MAX(maxR, sourceColor.R);
					maxG = MAX(maxG, sourceColor.G);
					maxB = MAX(maxB, sourceColor.B);
				}
		}
		Bitmap^ processImage(Bitmap^ sourceImage, ProgressBar^ progress) {
			Bitmap^ resultImage = gcnew Bitmap(sourceImage->Width, sourceImage->Height);

			//  »щем максмимум цвета
			MaxColor(sourceImage);

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

