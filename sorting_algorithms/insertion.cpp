#include "includes.h"

void insertionSort(std::vector<int> &arr)
{
	int i, j;

	for (i = 0; i < arr.size(); i++)
	{
		if (i == 0 && arr.at(i) > arr.at(i + 1))
		{
			swap(arr, i, i + 1);
			continue;
		}

		if (i == 1)
			continue;

		for (j = i; j > 0; j--)
		{
			if (arr.at(j) < arr.at(j - 1))
				swap(arr, j, j - 1);
		}
	}
}
