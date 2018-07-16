#pragma once
#include "Heap.h"
#include <vector>

std::vector<int> HeapSort(std::vector<int>);
Heap buildMaxHeap(std::vector<int>);
void maxHeapify(Heap&, int);
int parent(int);
int right(int);
int left(int);
void swap(int&, int&);
