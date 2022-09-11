#include "includes.h"

void selectionSort(std::vector<int> &arr)
{
	int n = arr.size(), i, mi;

	for (i = 0; i < n - 1; i++)
	{
		mi = minIndex(arr, i, n - 1);

		if (i != mi)
			swap(arr, i, mi);
	}
}
