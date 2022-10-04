#include "prelab7.h"


//This function returns an empty List object
List initList()
{
	List list;
	ListStuff listy;
	Node top;
	
	top.next=NULL;
	top.key=NULL;

	listy.head=&top;
	listy.listLength=0;
	list.p=&listy;

	return list;


}

/* This function inserts the object of the first parameter at the head of the list and returns an error code*/
int insertAtHead(void* object , List list)
{
	Node* insert=malloc(sizeof(object));
	if(insert==NULL)
	{
		return 0;
	}


	insert->key=object;
	insert->next=NULL; 
	if(list.p->head->next==NULL)
	{

		list.p->head->next=insert;
	
	}
	else{
		Node *q;
		q=list.p->head->next;
		list.p->head->next=insert;
		list.p->head->next->next=q;
	}
	list.p->listLength++;	
	return 1;

}

//This function returns the object at the index location given by the first parameter. 
void* getAtIndex(int index, List list)
{
	int i ;
	Node *p;
        
	p=list.p->head->next;
	for(i=0;(i<index)&&(p->next!=NULL);p=p->next, i++)
	{
		if(i==index)
		{
			return p;
		}



	}


	return 0;
}

//This function returns the size of the list
int getLength(List list)
{
	return list.p->listLength;


}

//This function clears the list (makes it empty) just like it was after creation
void clearList(List list)
{
	Node *p;
	int size, i;
	size=list.p->listLength;
	p=list.p->head->next;
	for(i=0;(i<size)&&(p->next!=NULL);p=p->next, i++)
	{
		free(p->next);



	}
	list.p->head->next=NULL;
	list.p->listLength=0;
	



}


//This function frees all memory allocated for a list
void freeList(List list)
{
	int i, size;
	size=getLength(list);
	Node *p;
	p=list.p->head->next;
	for(i=0;(i<size)&&(p->next!=NULL);p=p->next, i++)
	{
		free(p->next);



	}

}
