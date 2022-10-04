#include "lab3.h"

/*Clayton Marsh
 * CS 2050
 * Lab3
 * clmg44
 * */
/*This is my load stock prices function
 * it takes in a file pointer and two int pointers to be filled with the length and the starting index
 * it returns with an array made and filled to those specifications
 */

float* loadStockPrices(FILE *file, int *startIndex,int *length)
{
	int i;
	
	fscanf(file, "%d", length);
	fscanf(file, "%d", startIndex);
	float* array=malloc(*length*sizeof(float));
	if(array!=NULL)    //I belive my malloc test is slightly unorthodox, but I forgot the method we'd been taught
			   //in lecture, but I think this serves the same purpose?
	{


		for(i=0; i<*length;i++)
		{
			fscanf(file, "%f",&array[i]);
		}	
		
		array-=*startIndex;
	
	}
	else{
		printf("Malloc failure, try again");
	}
	return array;
}
/* this is my free function
 * it takes in the pointer to my array and the start index
 * it outputs nothing
 *
 */

void freeFloatArray(float**array, int startIndex)
{
	*array+=startIndex; //Resetting array pointer back to how it was created
	free(*array);
	*array=NULL;
	
}






















