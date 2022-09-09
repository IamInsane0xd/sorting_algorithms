#include "includes.h"

int main()
{
	std::vector<int> bubble { 14, 33, 27, 35, 10 };
	printVector(bubble);
	bubbleSort(bubble);
	printVector(bubble);

	std::cout << std::endl;

	std::vector<int> selection { 5, 2, 6, 7, 2, 1, 0, 3 };
	printVector(selection);
	selectionSort(selection);
	printVector(selection);

	std::cout << std::endl;

	return 0;
}
