#include "lab10.h"

typedef struct node {
	void* obj;
	struct node* next;
	struct node* previous;
} Node;

/*I used tail because the only functions that had o(1) were aroubd the min priority
 */
struct Queue
{
	Node* tail;
	int size;
};

/* Initioalizes a queue
 * takes: nothing
 * returns: a queue pointer
 */
Queue* initPQ()
{
	Queue* q=malloc(sizeof(Queue));
	Node dummy=(Node){NULL, NULL, NULL}; 
	if(q)
	{
		*q=(Queue){&dummy, 0};
	}

	
	return q;
}

			       
/*Frees a queue
 * takes: a queue
 * returns, nothing
 */
void freePQ(Queue *pq)
{
	Node* cursor=pq->tail->previous, *temp;
	while(cursor->previous)
	{
		temp=cursor;
		cursor=cursor->previous;
		free(temp);
	}
	free(cursor);
	free(pq);
}

/*A function that compares two houses
 * Takes: two void pointers (that are actually houses)
 * Retruns the difference
 */ 
int cmpHN(void* h1, void* h2)
{
	House* hh1, *hh2;
	hh1=(House*) h1; 
	hh2=(House*) h2;
	return(hh1->houseNumber-hh2->houseNumber);
}




/*Inserts the house in order
 * Takes: an que, and a house
 * Returns: an error code
 */
 int insertHouseDescendingPQ(Queue *pq, House *house)
{
	Node* insert=malloc(sizeof(Node)),*cursor, *temp;
	if(!insert)
	{
		return 0;
	}

	*insert=(Node){house, NULL, NULL};
	int* size= &pq->size;
	if(!size)
	{
		pq->tail->previous=insert;
		insert->next=pq->tail;
		size++;
		return 1;
	}
	cursor=pq->tail->previous;
	while(cmpHN(insert->obj,cursor->obj)>0&&cursor->previous)
	{
		cursor=cursor->previous;
	}
	if(!cursor->previous)
	{
		cursor->previous=insert;
		insert->next=cursor;
		size++;
		return 1;
	}
	temp=cursor;
	insert->next=temp->next;
	insert->previous=temp;
	temp->next=insert;
	size++;
	return 1;
}


 /* Returns the min value
  * Takes: a queue
  * Returns: The min value
  */
 House* peekMinHouse(Queue *pq)
{
	return pq->tail->previous->obj;
}

 /* Deques the min value
  * Takes: a queue
  * Returns: the min value of said queue
  */
 House* deQueueMinHouse(Queue *pq)
{
	Node* temp;
	void* tempO;
	int* size=&pq->size;
	temp= pq->tail->previous;
	tempO=temp->obj;
	temp->previous->next=pq->tail;
	pq->tail->previous=temp->previous;
	free(temp);
	size--;
	return tempO;
}

