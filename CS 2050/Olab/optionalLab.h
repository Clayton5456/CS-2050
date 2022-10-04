#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

/* OPTIONAL FINAL LAB
 *	For this lab, you will implement the heapsort algorithm using a binary
 *	tree heap. You must design a heap structure and implement the
 *	accompanying functions to build and manage a heap using all of the
 *	techniques you have learned in class over the semester. You must use
 *	random choice to maintain balance in the binary tree.
 *
 *	You should re-use the createArray() code from previous labs for this.
 *
 *	You will be scored on:
 *		- Designing a correct implementation of a heap structure
 *		- Correctly performing heap operations (insert and extract)
 *		- Total runtime for your entire program should be O(n*log(n))
 */

typedef struct Heap Heap;

void* createArray(size_t size, size_t elemSize);

Heap* initHeap();

// The return value is used as an error code
int insertHeap(Heap *heap, int key);

// The return value is the extracted key
int extractMin(Heap *heap);

// Sort the array using a heap
void heapSort(int *array);
