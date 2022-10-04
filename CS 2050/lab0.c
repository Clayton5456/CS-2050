#include "lab0.h"

/* REQUIRED CODE GOES HERE */
/* Clayton Marsh
 * clmg44
 * lab 0*/

int countOccurrences(int size, int array[], int query)
{
	int i;  //Defined i so the for statement would be shorter
	int count=0;  //Defined count to hold the count
	for(i=0; i<size;i++)  //For statement loops through array
	{
		if(array[i]==query)//If statement tests if the array element currently selected matches the query 
		{
			count++; //If so, it adds 1 to count
		}
	}
	return count; //Count is returned
}


