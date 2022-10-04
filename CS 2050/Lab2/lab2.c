#include "lab2.h"

/*Clayton Marsh
 * CS 2050
 * Lab 2
 * clmg44*/




/*What follows is my read from short function
 * it takes a file pointer and an integer pointer length
 * returns the short array that has been filled with integers read from the file the pointer points to.
 * */

short* readShortFromFile(FILE *fptr, int *length)
{
	fscanf(fptr, "%d", length);
	short *array;

	if(!(array=malloc(*length*sizeof(short))))
	{
		printf("error, malloc failed\n");//This is my test to make sure malloc worked. You can probably tell, 							I just wanted to draw attention to it
	}

	for(int i=0; i<*length; i++)
	{
		fscanf(fptr, "%hi", &array[i]);
	}
	return array;
}

/*The following is the Free Array function. It takes a pointer to an array 
 * it returns nothing, but sets that array to null. */

void freeShortArray(short**array2)
{
	free(*array2);
	*array2=NULL; //The * lets me reference the thing the pointer points to
}


	




