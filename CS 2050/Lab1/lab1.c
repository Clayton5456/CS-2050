#include "lab1.h"

// Required code goes here


/* Clayton Marsh
 * CS 2050
 * Lab1
 * clmg44*/



int avgBefore(float *array, int size, float *result, int index)
{
	int i; //Initializes the number for the for loop
	float totalB; //Creates a variable to store the total before it is averaged
	if(index>0&&index<size) //Checks if the index is actually in the function, returns 0 if doesn't work
	{
		for(i=0; i<size&&i<=index; i++)  //For loop running through the array until it hits the index
		{
			totalB+=array[i]; // adds numbers to the total
		}
		*result=totalB/index; //Calculates the average
		printf("Result= %.2f\n", *result) ;  //Tests by printing out result (will be matched against result in main)
		return 1; //Returns success
	}
	return 0; //Returns failure if doesn't get through if statement
}




		
