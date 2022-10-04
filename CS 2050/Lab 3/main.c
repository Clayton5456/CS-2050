#include "lab3.h"

int *startIndex, *length, startIndexI, lengthI;
char * filename="stockPrices.txt";
int main() {

	length=&lengthI;
	startIndex=&startIndexI;




	FILE *file = fopen(filename, "r");
	if(!file) {
		fprintf(stderr, "The file [ %s ] was not successfully opened\n", filename);
	}



	float* fArray=loadStockPrices(file, startIndex, length);


	printArray(fArray, *length, *startIndex);

	float **  pFArray=&fArray;
	freeFloatArray(pFArray, *startIndex);
//	printArray(fArray, *length, *startIndex);









		fclose(file);
    
}


void printArray(float * array, int length, int startIndex)
{
	int i;
	for(i=startIndex; i<length+startIndex; i++)
	{ 
		printf("%.2f\n", array[i]);
	}

}
