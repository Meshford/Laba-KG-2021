#pragma once
#include "Filters.h"
namespace Filters_BPP {
 class SobelFilter :public MatrixFilter
{
public:
	SobelFilter() {
		std::vector<std::vector<float>> tmp(3);
		for (int i = 0; i < tmp.size(); i++)
			tmp[i].resize(3);
		kernel = tmp;

		kernel[0][0] = -1;
		kernel[0][1] = -2;
		kernel[0][2] = -1;
		kernel[1][0] = 0;
		kernel[1][1] = 0;
		kernel[1][2] = 0;
		kernel[2][0] = 1;
		kernel[2][1] = 2;
		kernel[2][2] = 1;
	}
 };
};

