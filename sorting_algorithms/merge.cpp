#include "includes.h"

void merge(std::vector<int> &arr, int s, int m, int e)
{
	int *t = (int *)calloc(e - s + 1, sizeof(int));
	int i = s, j = m + 1, k = 0;

	while (i <= m && j <= e)
	{
		if (arr.at(i) <= arr.at(j))
		{
			t[k] = arr.at(i);
			k++;
			i++;
		}

		else
		{
			t[k] = arr.at(j);
			k++;
			j++;
		}
	}

	while (i <= m)
	{
		t[k] = arr.at(i);
		k++;
		i++;
	}

	while (j <= e)
	{
		t[k] = arr.at(j);
		k++;
		j++;
	}

	for (i = s; i <= e; i++)
		arr.at(i) = t[i - s];
}

void mergeSort(std::vector<int> &arr, int s, int e)
{
	int m;

	if (s < e)
	{
		m = (s + e) / 2;

		mergeSort(arr, s, m);
		mergeSort(arr, m + 1, e);
		merge(arr, s, m, e);
	}
}
