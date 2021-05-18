#pragma once
#include "Filters.h" 
namespace Filters_BPP {
class BorderSelectionFilter :public MatrixFilter
{
public:
	void ScharrOperator(void) {
		std::vector<std::vector<float>> tmp(3);
		for (int i = 0; i < tmp.size(); i++)
			tmp[i].resize(3);
		kernel = tmp;

		kernel[0][0] = 3;
		kernel[0][1] = 10;
		kernel[0][2] = 3;
		kernel[1][0] = 0;
		kernel[1][1] = 0;
		kernel[1][2] = 0;
		kernel[2][0] = -3;
		kernel[2][1] = -10;
		kernel[2][2] = -3;
	}
	void PruittOperator(void) {

		std::vector<std::vector<float>> tmp(3);
		for (int i = 0; i < tmp.size(); i++)
			tmp[i].resize(3);
		kernel = tmp;

		kernel[0][0] = -1;
		kernel[0][1] = -1;
		kernel[0][2] = -1;
		kernel[1][0] = 0;
		kernel[1][1] = 0;
		kernel[1][2] = 0;
		kernel[2][0] = 1;
		kernel[2][1] = 1;
		kernel[2][2] = 1;
	}
	Bitmap^ processImage(Bitmap^ sourceImage, ProgressBar^ progressBar1) {

		Bitmap^ InterimImage = gcnew Bitmap(sourceImage->Width, sourceImage->Height);
		ScharrOperator();
		for (int i = 0; i < sourceImage->Width; i++) {
			for (int j = 0; j < sourceImage->Height; j++) {
				InterimImage->SetPixel(i, j, calculateNewPixelColor(sourceImage, i, j));
				progressBar1->PerformStep();
			}
		}

		PruittOperator();
		Bitmap^ resultImage = gcnew Bitmap(InterimImage->Width, InterimImage->Height);
		for (int i = 0; i < InterimImage->Width; i++) {
			for (int j = 0; j < InterimImage->Height; j++) {
				resultImage->SetPixel(i, j, calculateNewPixelColor(InterimImage, i, j));
				progressBar1->PerformStep();
			}
		}

		return resultImage;
	}

};
};

