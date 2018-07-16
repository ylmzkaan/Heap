#include <iostream>
#include <math.h>
#include "Heap.h"
#include "Heapify.h"

int parent(int i) {
	return (int)floor(i / 2);
}

int right(int i) {
	return 2 * i + 1;
}

int left(int i) {
	return 2 * i;
}

void swap(int& i, int& j) {
	int temp = i;
	i = j;
	j = temp;
}

void maxHeapify(Heap& heap, int index) {
	int l = left(index);
	int r = right(index);
	int largest;
	if (l < heap.heapSize && heap.array[l] > heap.array[index]) {
		largest = l;
	} else {
		largest = index;
	}
	if (r < heap.heapSize && heap.array[r] > heap.array[largest]) {
		largest = r;
	}
	if (largest != index) {
		swap(heap.array[largest], heap.array[index]);
		maxHeapify(heap, largest);
	} 
}

Heap buildMaxHeap(std::vector<int> array) {
	Heap heap = Heap(array);
	for (int i = (int)floor(heap.heapSize / 2); i >= 0; i--) {
		maxHeapify(heap, i);
	}
	return heap;
}


