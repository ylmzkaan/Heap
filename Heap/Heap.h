#pragma once
#include <vector>
class Heap {
public:
	std::vector<int> array;
	int heapSize;

	Heap(std::vector<int> heapArray);
	void print();
};