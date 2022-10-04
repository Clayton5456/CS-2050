#include "prelab7.h"

int first, second, third, i;
List intList;
int main()
{
	
	intList=initList();
	first=1;
	second=20;
	third=12;


	if(insertAtHead(&first, intList)==0)
	{
		printf("Err, Err, Malloc Failure");
	}

	for(i=0; i<getLength(intList);i++)
	{
		printf("%d =%d ", i ,*((int *) getAtIndex(i,intList)));
	}

	if(insertAtHead(&second, intList)==0)
	{
		printf("Err, Err, Malloc Failure");
	}


	for(i=0; i<getLength(intList);i++)
	{
		printf("%d =%d ", i ,*((int *) getAtIndex(i,intList )));
	}


	if(insertAtHead(&third, intList)==0)
	{
		printf("Err, Err, Malloc Failure");
	}

	for(i=0; i<getLength(intList);i++)
	{
		printf("%d =%d ", i ,*((int *) getAtIndex(i,intList)));

	}


	clearList(intList);
/*
	for(i=0; i<getLength(intList);i++)
	{
		printf("%d =%d ", i ,*((int *) getAtIndex(i,intList)));

	}*/	
}
