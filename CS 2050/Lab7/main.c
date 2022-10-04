#include "lab7.h"

int first, second, third, i, ec;
List *intList;
int main()
{
	
	intList=initList();
	first=1;
	second=20;
	third=12;

	printf("Size: %d\n", getSize(intList));
	




	printf("Size: %d\n", getSize(intList));
	


	ec=insertAtHead(intList, &first);
	printf("Ahhh");

	for(i=0; i<getSize(intList);i++)
	{
		printf("%d =%d ", i ,*((int *) getAtIndex(intList, i)));
	}

	printf("Size: %d\n", getSize(intList));

	if(!insertAtHead(intList, &second))
	{
		printf("Err, Err, Malloc Failure");
	}


	for(i=0; i<getSize(intList);i++)
	{
		printf("test 2: %d =%d ", i ,*((int *) getAtIndex(intList, i )));
	}

	printf("Size: %d\n", getSize(intList));


	if(insertAtHead(intList, &third)==0)
	{
		printf("Err, Err, Malloc Failure");
	}

	for(i=0; i<getSize(intList);i++)
	{
		printf("Test 3:%d =%d ", i ,*((int *) getAtIndex(intList, i)));

	}


	printf("Size: %d\n", getSize(intList));

	freeList(intList);
/*
	for(i=0; i<getSize(intList);i++)
	{
		printf("%d =%d ", i ,*((int *) getAtIndex(intList, i)));
	}
*/	
}
