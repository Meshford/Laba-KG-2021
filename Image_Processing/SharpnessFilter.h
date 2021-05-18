#pragma once
#include "Filters.h"
namespace Filters_BPP {
class SharpnessFilter :public MatrixFilter
{
public:
	SharpnessFilter() {
		std::vector<std::vector<float>> tmp(3);
		for (int i = 0; i < tmp.size(); i++)
			tmp[i].resize(3);
		kernel = tmp;

		kernel[0][0] = 0;
		kernel[0][1] = -1;
		kernel[0][2] = 0;
		kernel[1][0] = -1;
		kernel[1][1] = 5;
		kernel[1][2] = -1;
		kernel[2][0] = 0;
		kernel[2][1] = -1;
		kernel[2][2] = 0;

	}
};
};

