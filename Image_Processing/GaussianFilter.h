#pragma once
#include "Filters.h"
namespace Filters_BPP {
class GaussianFilter :public MatrixFilter
{
public:
	void createGaussianKernel(int radius, float sigma) {
		int size = 2 * radius + 1;

		std::vector<std::vector<float>> tmp(size);
		for (int i = 0; i < size; i++)
			tmp[i].resize(size);
		kernel = tmp;

		//  Коэф нормировки ядра
		float norm = 0;

		//  Рассчитать ядро
		for (int i = -radius; i <= radius; i++) {
			for (int j = -radius; j <= radius; j++) {
				kernel[i + radius][j + radius] = static_cast<float>(exp(-(i * i + j * j) / (2 * pow(sigma, 2))));
				norm += kernel[i + radius][j + radius];
			}
		}

		//  Нормируем ядро
		for (int i = 0; i < size; i++)
			for (int j = 0; j < size; j++)
				kernel[i][j] /= norm;
	}

	GaussianFilter() {
		createGaussianKernel(3, 2);
	}
};
};

