#pragma once
#include "Filters.h"
namespace Filters_BPP {
 class BlurFilter :public MatrixFilter
{
public:
	BlurFilter() {
		int sizeX = 3;
		int sizeY = 3;
		float mean = 1.0f / (static_cast<float>(sizeX * sizeY));

		std::vector<std::vector<float>> tmp(sizeX);
		for (int i = 0; i < tmp.size(); i++)
			tmp[i].resize(sizeX);
		kernel = tmp;

		for (int i = 0; i < kernel.size(); i++) {
			for (int j = 0; j < kernel[i].size(); j++) {
				kernel[i][j] = mean;
			}
		}

	}
 };
};

