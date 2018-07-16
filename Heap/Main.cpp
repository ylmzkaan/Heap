#include "Heap.h"
#include "Heapify.h"
#include <vector>

int main() {
	std::vector<int> array = { 5,1,2,95,10,2,5,6,4,8,2,14,20 };
	Heap heap = buildMaxHeap(array);
	heap.print();
}