#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

// Complexity: O(1)
void* createArray(size_t size, size_t elemSize);

// Complexity: O(1)
size_t arraySize(void *array);

// Complexity: O(1)
void freeArray(void *array);

#define SECT_D

typedef struct {
	float squareFeet;
	int baths;
	int houseNumber;
} House;

// Complexity: O(log(n))
size_t searchHouses(House *array, House *query);

// Complexity: O(1)
int compareHouses(House *a, House *b);
