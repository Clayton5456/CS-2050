#include <stdio.h>
#include <stdlib.h>

typedef struct nStruct{
	void* object;
	double* priority;
	struct nStruct* next;
	struct nStruct* previous;
} Node;

typedef struct q{
	Node* head;
	Node* tail;
	int* size;
} PQueue;
int getSizePQ(PQueue q)
{
	return q->size;
}

int isValidIndex(PQueue q, int index)
{
	int size=getSizePQ;
	return(index<size && index>=0);
}

double compareP(double * p1, double* p2)
{
	return (p1-p2);
}

PQueue initPQueue(int *eCode)
{
	PQueue q =malloc(sizeof(PQueue));
	if(q)
	{
		q= (PQueue){NULL, NULL, 0};


		Node* head= (Node){NULL,0,NULL,NULL};


		return 1;
	}

	return 0;
}

int insertPQ(void* obj, double priority, PQueue q)
{
	size= getSizePQ(q);
	Node* insert =malloc(sizeof(Node));
	if(Node)
	{
		insert=(Node){ obj, priority, NULL, NULL}
	}


	if(!size)
	{
		q->head->next=insert;
		q->tail=insert;
		size++;
	}
	else if( size=1)
	{
		Node* temp;
		if(compareP(insert->priority, q->head->priority)<0)
		{
			temp= q->head->next;
			q->head->next= insert;
			temp->previous=insert;
			insert->next=temp;
			size++;
		}
		else
		{
			q->tail=insert;
			q->head->next->next=insert;
			insert->previous=q->head->next;
			size++;
		}
	}
	else 
	{
		int i;
		Node* cursor, temp;
		cursor=q->head->next;
		while(compareP(insert->priority, cursor->priority)<0)
		{
			cursor=cursor->next;
		}
		if(!cursor)
		{
			cursor->previous=insert->previous;
			cursor->previous->next=insert;
			size++;
		}
		temp=cursor->next;
		cursor->previous=insert->previous;
		cursor->previous->next=insert;
		insert->next=temp;
		temp->previous=insert;
		size++;
	}
}

void* minDeletePQ(PQueue q)
{
	Node* temp;
	void* object;
	temp= q->head->next;
	q->head->next=q->head->next->next;
	q->head->previous=NULL;
	object=temp->object;
	free(temp);
	size--;
	return object;
}

void* maxDeletePQ(PQueue q)
{

	Node* temp;
	void* object;
	temp= q->tail;
	q->tail=q->tail->previous;
	q->tail->next=NULL;
	object=temp->object;
	free(temp);
	size--;
	return object;
}

double getMinPriority(PQueue q)
{
	return q->head->priority;
}

double getMaxPriority(PQueue q)
{
	return q->tail->priority;
}

void freePQ(PQueue q)
{
	Node* cursor;
	cursor=q->head->next->next;
	while(cursor->next)
	{
		free(cursor->previous);
		cursor=cursor->next;
	}
	free(cursor);
	free(q);
}



	


			

	





