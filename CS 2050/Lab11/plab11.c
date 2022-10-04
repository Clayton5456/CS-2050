#include "plab11.h"






int binarySearch(float* array, int first, int last, float query)
{
	if(first>last)
	{
		return 0;
	}
	int mid=(first+last)/2;
	if(query<array[mid])
	{
		return binarySearch(array, first, mid-1, query);
	}
	else if(array[mid]<query)
	{
		return binarySearch(array, mid+1, last, query);
	}
	return 1;
}





