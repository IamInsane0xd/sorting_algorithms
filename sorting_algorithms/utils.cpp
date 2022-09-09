
#include "utils.h"

#include "includes.h"

void swap(std::vector<int> &arr, int i1, int i2)
{
	int t;

	t = arr.at(i1);
	arr.at(i1) = arr.at(i2);
	arr.at(i2) = t;
}

void printVector(std::vector<int> arr)
{
	int i;

	for (i = 0; i < arr.size() - 1; i++)
		std::cout << arr.at(i) << " ";

	std::cout << arr.at(i) << std::endl;
}

int minIndex(std::vector<int> arr, int l, int r)
{
	int i, mi;

	for (i = l, mi = l; i <= r; i++)
	{
		if (arr.at(i) < arr.at(mi))
			mi = i;
	}

	return mi;
}
