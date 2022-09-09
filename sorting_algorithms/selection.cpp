#include "includes.h"

void selectionSort(std::vector<int> &arr)
{
	int i, mi;

	for (i = 0; i < arr.size() - 1; i++)
	{
		mi = minIndex(arr, i, arr.size() - 1);

		if (i != mi)
			swap(arr, i, mi);
	}
}
