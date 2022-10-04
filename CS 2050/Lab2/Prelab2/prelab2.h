#include <stdio.h>
#include <stdlib.h>


float * readFloatFileIntoArray( FILE *fptr, int *length);
//Set the ptr to null on a failure, check to see if ptr is set to null in calling program.
//Also ptrs return null on a failure. or something like that


void freeFloatArray(float** array);
	//Need to assign a ptr to array, this will allow me to free the array and set it to null
	
void printArray(float *array,int *length);
void freeFloatArray(float ** array);
