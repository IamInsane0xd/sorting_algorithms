#include "includes.h"

void bubbleSort(std::vector<int> &arr)
{
	int n = arr.size(), i, j;
	bool s;

	for (i = 0; i < n - 1; i++)
	{
		s = false;

		for (j = 0; j < n - i - 1; j++)
		{
			if (arr.at(j) > arr.at(j + 1))
			{
				swap(arr, j, j + 1);
				s = true;
			}
		}

		if (!s)
			break;
	}
}
