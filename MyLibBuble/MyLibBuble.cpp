#include "mylibbuble.h"
#include <algorithm>
#include <iostream>

vector<int> executableBuble(std::vector<int>& array)
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

	return array;
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

template<typename T>
int search_low_number(const vector<T>& arr) {
	T menor = arr[0]; 
	int menorIndice = 0;

	for (int i = 0; i < arr.size(); i++)
	{
		if(arr[i] < menor) 
		{
			menor = arr[i];
			menorIndice = i;
		}
	}

	return menorIndice;
}

template<typename T>
vector<T> qSort(vector<T> arr) {
	vector<T> sorted;

	while (!arr.empty()) {
		int menor_indice = search_low_number(arr);
		sorted.push_back(arr[menor_indice]);
		arr.erase(arr.begin() + menor_indice);
	}
}