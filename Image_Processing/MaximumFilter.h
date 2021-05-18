#pragma once
#include "Filters.h"
namespace Filters_BPP {
	class MaximumFilter : public Filters
	{
	private:
		int radius = 2;
	public:
		Color calculateNewPixelColor(Bitmap^ sourceImage, int x, int y) {
			int n = (2 * radius + 1) * (2 * radius + 1);
			std::vector<int> cR(n + 1, 0);
			std::vector<int> cG(n + 1, 0);
			std::vector<int> cB(n + 1, 0);

			int k = 1;
			for (int i = x - radius; i < x + radius + 1; i++)
			{
				for (int j = y - radius; j < y + radius + 1; j++)
				{
					System::Drawing::Color c = sourceImage->GetPixel(i, j);
					cR[k] = c.R;
					cG[k] = c.G;
					cB[k] = c.B;
					k++;

				}
			}
			std::sort(begin(cR), end(cR) - 1);
			std::sort(begin(cG), end(cG) - 1);
			std::sort(begin(cB), end(cB) - 1);

			int n_ = cR.size() - 1;


			return Color::FromArgb(cR[n_], cG[n_], cB[n_]);
		}

		Bitmap^ processImage(Bitmap^ sourceImage, ProgressBar^ progressBar1) {
			Bitmap^ resultImage = gcnew Bitmap(sourceImage->Width, sourceImage->Height);
			for (int i = radius + 1; i < sourceImage->Width - radius; i++) {
				for (int j = radius + 1; j < sourceImage->Height - radius; j++) {
					resultImage->SetPixel(i, j, calculateNewPixelColor(sourceImage, i, j));
					progressBar1->PerformStep();
				}
			}

			return resultImage;
		}
	
};
};

