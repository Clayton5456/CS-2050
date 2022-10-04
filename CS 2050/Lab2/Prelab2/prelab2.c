#include "prelab2.h"



float * readFloatFileIntoArray(FILE *fptr, int *length){
	
	fscanf(fptr," %d", length);
	float * array=malloc(*length*sizeof(float));
	for(int i=0; i<*length; i++){
		fscanf(fptr," %f", &array[i]);
	}
	return array;
}



void freeFloatArray(float ** array2)
{
	free(*array2);
	*array2=NULL;
}

