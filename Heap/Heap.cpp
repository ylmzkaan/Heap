#include "Heap.h"

Heap::Heap(std::vector<int> array) {
	this->array = array;
	this->heapSize = array.size();
}

void Heap::print() {
	for (std::vector<int>::const_iterator i = this->array.begin(); i != this->array.end(); ++i)
		std::cout << *i << ' ';
}