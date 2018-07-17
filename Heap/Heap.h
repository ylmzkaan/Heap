#pragma once
#include <iostream>
#include <vector>


class Heap {
public:
	std::vector<int> array;
	int heapSize;

	Heap(std::vector<int>);
	void print();
};