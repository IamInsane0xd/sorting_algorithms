#include "includes.h"

void insertionSort(std::vector<int> &arr)
{
	int i, j, k;

	for (i = 1; i < arr.size(); i++)
	{
		for (j = i - 1, k = i; j >= 0 && arr.at(k) < arr.at(j); j--, k--)
		{
			swap(arr, k, j);
		}
	}
}
