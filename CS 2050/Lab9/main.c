#include "lab9.h"
void printIntList(List* list);







int main()
{
	List* list;
 	
		

	printf("start");
	printf(" ");
	printf("is it starting???");

	list=initList();
	printf("list init");
	insertAtTail(list,(int *) 1);
	printf("first insert");
	printIntList(list);
	insertAtTail(list,(int *) 2);
	printIntList(list);
	insertAtTail(list, (int *) 3);
	printIntList(list);
	insertAtTail(list,(int *) 4);
	printIntList(list);
	insertAtTail(list, (int *) 5);
	printIntList(list);

	freeList(list);












}


void printIntList(List* list)
{
	int i, size=getSize(list);

	for(i=0; i<size;i++)
	{
		printf("%d: %d\n", i,*(int*) getAtIndex(list, i));
	}
}






