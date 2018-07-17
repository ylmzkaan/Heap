#include "HeapSort.h"
#include <vector>
#include <iostream>

void printArray(std::vector<int>);

int main() {
	std::vector<int> array = { 5,1,2,95,10,2,5,6,4,8,2,14,20 };
	std::vector<int> sortedArray = HeapSort(array);
	printVector(sortedArray);

	std::cin.get();
	return 0;
}

void printVector(std::vector<int> array) {
	for (std::vector<int>::const_iterator i = array.begin(); i != array.end(); ++i)
		std::cout << *i << ' ';
}