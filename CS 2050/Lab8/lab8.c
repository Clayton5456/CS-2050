#include "lab8.h"
#include "LinkedList.h"

/* Clayton M.
 * CS 2050
 * Lab 8
 * clegos5588
 */






/*This puts the house into the list in ascending order based on house number
 * Paramaters: list, a list of houses. house, a house to be inserted
 * Returns: an error code
 */

int insertHouseAscending(List *list, House *house)
{
	int i, size ;
	size=list->size;
	if(!size||compareHouses(house, list->head->data)<0)
	{
		insertAtIndex(list, house,0);
		return 1;
	
	} else{

		for(i=0;i<size;i++)
		{
			if(compareHouses(house, getAtIndex(list, i))>0||compareHouses(house, getAtIndex(list, i))==0)
			{
				insertAtIndex(list, house, i+1);
	
				return 1;
			}
		}
	}
	return 0;
}
/* Counts all houses greater than it
 * Parameters: list, list of houses. house, a house to test against.
 * returns: number of houses
 */

int countAllGreaterHouses(List *list, House *house)
{
	int i, size, count=0 ;
	size=list->size;

	for(i=0;i<size;i++)
	{
		if(compareHouses(house, getAtIndex(list, i))<0)
		{
			++count;
		}
	}
	return count;
}

/*Prints out all houses
 * Paramaters: a list of houses
 * Returns: nothing
 */	
void printHouses(List *list)
{

	int i, size ;
	House* house;
	size=list->size;

	for(i=0;i<size;i++)
	{
		house=getAtIndex(list, i);
		printf("House #%d, Baths: %d", (int) house->houseNumber, house->baths);
		printf(" Square footage: %f\n", house->squareFeet);
	}
}



int compareHouses(House * a, House *b)
{
	
	
	return (a->houseNumber-b->houseNumber);
}
