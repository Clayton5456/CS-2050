#include "lab11.h"

int binarySearch(House* array, int first, int last, House* query);





// Complexity: O(1)
void* createArray(size_t size, size_t elemSize)
{
	void* array=malloc(sizeof(int)+size*elemSize);
	array=(int *)size;
	
	return (array+1);
}

	

// Complexity: O(1)
size_t arraySize(void *array)
{
	int *harray=array;
	int size=harray[-1];
	return size*sizeof(House);
}

// Complexity: O(1)
void freeArray(void *array)
{
	
	free(array-1);
}



// Complexity: O(1)
int compareHouses(House *a, House *b)
{
	return(a->houseNumber-b->houseNumber);
}







size_t searchHouses(House* array, House *query)
{
	int search;
	int size=arraySize(array)/sizeof(House);
	int first=0;
	int last=size-1;
	search=binarySearch(array, first, last, query);
	if(search==-1)
	{
		printf("i");
		return SIZE_MAX;
	}
	return search*sizeof(House);
}

int binarySearch(House* array, int first,int last,House* query)
{
	if(first>last)
	{
		printf("i");
		return -1;
	}
	int mid=(first+last)/2;
	if(compareHouses(query, &array[mid])<0)
	{
		printf("b");
	

		return binarySearch(array, first, mid-1, query);
	}
	else if(compareHouses(query, &array[mid])>0)
	{
		return binarySearch(array, mid+1, last, query);
	}
	return mid;
}
