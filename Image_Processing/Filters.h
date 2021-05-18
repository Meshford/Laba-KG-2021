#pragma once

#include <vector>
#include <string>
#include <cmath>
#include<algorithm>

namespace Filters_BPP {

#define MAX(a, b) a>=b ? a : b
#define MIN(a, b) a>=b ? b : a
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	//  Базовый класс фильтра
	class Filters {

	protected:
		virtual Color calculateNewPixelColor(Bitmap^ sourceImage, int x, int y) = 0;

	public:
		Bitmap^ processImage( Bitmap^ sourceImage, ProgressBar^ progress) {
			Bitmap^ resultImage = gcnew Bitmap  (sourceImage->Width, sourceImage->Height);
			for (int i = 0; i < sourceImage->Width; i++) {
				for (int j = 0; j <sourceImage->Height; j++) {
					resultImage->SetPixel(i, j, calculateNewPixelColor(sourceImage, i, j));
					progress->PerformStep();
				}
			}

			return resultImage;
		}
		
		int Clamp(int value, int min, int max) {
			if (value < min)
				return min;
			if (value > max)
				return max;
			return value;
		}
	};

	//  Базовый класс матричных фильтров
	class MatrixFilter : public Filters {
	protected:
		std::vector<std::vector<float>> kernel;
		MatrixFilter() {}

	public:
		MatrixFilter(std::vector<std::vector<float>> _kernel) {
			this->kernel = _kernel;
		}

	protected:
		Color calculateNewPixelColor(Bitmap^ sourceImage, int x, int y) {

			int radiusX = kernel.size()/2;
			int radiusY = kernel[0].size()/2;

			float resultR = 0;
			float resultG = 0;
			float resultB = 0;
			for (int l = -radiusY; l <= radiusY; l++) {
				for (int k = -radiusX; k <= radiusX; k++) {
					int idX = Clamp(x + k, 0, sourceImage->Width - 1);
					int idY = Clamp(y + k, 0, sourceImage->Height - 1);

					Color neighColor = sourceImage->GetPixel(idX, idY);
					resultR += neighColor.R * kernel[k + radiusX][l + radiusY];
					resultG += neighColor.G * kernel[k + radiusX][l + radiusY];
					resultB += neighColor.B * kernel[k + radiusX][l + radiusY];
				}
			}
			return Color::FromArgb(Clamp((int)resultR, 0, 255), Clamp((int)resultG, 0, 255), Clamp((int)resultB, 0, 255));
		}
	};

}
