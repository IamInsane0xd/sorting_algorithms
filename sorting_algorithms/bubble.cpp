#include "includes.h"

void bubbleSort(std::vector<int> &arr)
{
	int n = arr.size(), i, j, t;
	bool swapped;

	for (i = 0; i < n - 1; i++)
	{
		swapped = false;

		for (j = 0; j < n - i - 1; j++)
		{
			if (arr.at(j) > arr.at(j + 1))
			{
				swap(arr, j, j + 1);
				swapped = true;
			}
		}

		if (!swapped)
			break;
	}
}
