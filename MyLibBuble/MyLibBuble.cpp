#include "mylibbuble.h"
#include <algorithm>
#include <iostream>

void executableBuble(std::vector<int>& array)
{
	int n = array.size();

	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++) 
		{
			if (array[j] > array[j + 1])
			{
				std::swap(array[j], array[j + 1]);
			}
		}
	}
}

int binarySearch(int list[], int element)
{
	int sizeList = sizeof(list) / sizeof(list[0]);
	int left = 0;
	int right = sizeList - 1;

	while (left <= right) {
		int meio = (left + right) / 2;

		if (list[meio] == element)
		{
			std::cout << element;
			return element;
		}

		if (list[meio] < element)
		{
			left = 1 + meio;
		}

		else {
			right = meio;
		}
	}

	return -1;
}
