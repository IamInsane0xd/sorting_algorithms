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

	std::vector<int> insertion { 25, 17, 31, 13, 2 };
	printVector(insertion);
	insertionSort(insertion);
	printVector(insertion);

	std::cout << std::endl;

	std::vector<int> merge { 6, 3, 7, 2, 8, 4, 9, 1 };
	printVector(merge);
	mergeSort(merge, 0, merge.size() - 1);
	printVector(merge);

	std::cout << std::endl;

	std::vector<int> cocktail { 5, 1, 4, 2, 8, 0, 2 };
	printVector(cocktail);
	cocktailSort(cocktail);
	printVector(cocktail);

	return 0;
}
