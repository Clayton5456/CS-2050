#include <stdio.h>
#include <stdlib.h>

#define SECT_D
float* loadStockPrices(FILE *file, int *startIndex, int *length);
void freeFloatArray(float **array, int startIndex);
void printArray(float *array, int length, int startIndex);







