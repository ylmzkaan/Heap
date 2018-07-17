#include "Heap.h"

Heap::Heap(std::vector<int> array) {
	this->array = array;
	this->heapSize = array.size();
}

void Heap::print() {
	for (auto& item : this->array)
		std::cout << item << ", ";
	std::cout << std::endl;
}