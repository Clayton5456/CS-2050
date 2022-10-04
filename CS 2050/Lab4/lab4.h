#include <stdio.h>
#include <stdlib.h>

#define SECT_D
void calculateArrayMedian(short *array);
float getArrayMedian(short *array);
void *createArray(int size, size_t elemSize, size_t extraBytes);
int getArraySize(void *array);
void freeArray(void *array);
