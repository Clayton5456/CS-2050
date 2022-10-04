#include "lab4.h"
/*Clayton Marsh
 * CS 2050
 * Lab 4
 * clmg44
 */


void *createArray(int size, size_t elemSize, size_t extraBytes)
{
	int * array= malloc(sizeof(int)+size*elemSize+extraBytes);
	if(!array)
	{
		return NULL;
	}
	*array =size;
	return ++array;
}

		
	
	
	

	




void calculateArrayMedian(short *array)
{
	int size, middle;
	float median;

	size =getArraySize(array);
	middle =size/2;
	if(size%2==0)
	{
		median= array[middle]+array[middle-1];
		median/=2;
	}
	if(size%2==1)
	{
	       median=array[middle];	
		
	}		
	float *medianPtr= (float*)(array+getArraySize(array));
	*medianPtr=median;

		
		

}




float getArrayMedian(short *array)
{
	float *medianPtr= (float *)(array+getArraySize(array));
	return *medianPtr;
}


int getArraySize(void *array)
{
	
	short*arrayA= array;
	int size=arrayA[-1];
	
	return size;

}



void freeArray(void *array)
{
	array-=1;
	free(array);
}

