#include "prelab2.h"


char * filename ="Floats.txt";

int  main() {

	int * length, lengt;
	length=&lengt;

	FILE *fptr = fopen(filename, "r");
	if(!fptr) {
		fprintf(stderr, "The file [ %s ] was not successfully opened\n", filename);
		

	}


	
	float * array =readFloatFileIntoArray(fptr, length);
	printArray(array, length);

	float ** array2=&array;
	freeFloatArray(array2);

	fclose(fptr);


	



	
}

void printArray(float *array,int* length)
{
	int lengt=*length;
	int i;
	for (i=0; i<lengt;i++)
	{
	
		printf("%d: %f\n", i, array[i]);
	}



}

