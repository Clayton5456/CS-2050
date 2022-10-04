#include "plab8.h"


//---------------------------------------------PRELAB FUNCTIONS


int insertInOrder(void* object, List list)
{
	int i, size ;
	size=list.size;

	for(i=0;i<size;i++)
	{
		if(cmp(object, getAtIndex(&list, i))>0)
		{
			insertAtIndex(&list, object, i+1);
	
			return 1;
		}
	}
	return 0;
}

	






int removeEq(void* object, List list)
{
	int i, size, count=0;
	size=list.size;

	for(i=0;i<size;i++)
	{
		if(cmp(object, getAtIndex(&list, i))==0)
		{
			removeAtIndex(&list, i);
			++count;
		}	
	}
	return count;
}


void* removeAtIndex(List *list, int index)
{
	void* object;
	if(!isValidIndex(list, index) && (index !=list->size))
	{
		return NULL;
	}else if(!index){
	
		Node* newHead;
		newHead=nodeAtIndex(list, 1);
		object= list->head->data;
		free(setHead(list, newHead));
	} else {
		Node *previous =nodeAtIndex(list, index-1), *next= nodeAtIndex(list, index+1);
		object =freeNode(previous->next);
		previous->next=next;
	}
	--list->size;
	return object;
}



	       	


//-----------------------------------------------HELPER FUNCTIONS


int isValidIndex(List *list, int index)
{
	return index >=0 && index<list->size;
}


Node* makeNode(void *data, Node *next)
{

	Node *node =malloc(sizeof(Node));
	if(node) 
	{
		*node=(Node){ next, data};
	}
	return node;
}

void * freeNode(Node *node)
{
	void *temp = node->data;
	free(node);
	return temp;
}

void* nodeAtIndex(List *list, int index)
{
	if(!isValidIndex(list, index))
	{
		return NULL;
	}
	Node *cursor =list->head;

	while(index--)
	{
		cursor =cursor->next;
	}

	return cursor;
}


void clearList(List *list)
{
	Node *cursor=list->head;
	while(cursor)
	{
		Node *temp=cursor;
		cursor=cursor->next;
		free(temp);
	}
	list->head =NULL;
	list->size=0;
}

Node* setHead(List *list, Node *newHead)
{
	Node *oldHead =list->head;
	list->head=newHead;
	return oldHead;
}

int indexOf(List *list, void *object)
{
	Node *cursor=list->head;
	int count =0;
	while(cursor)
	{
		if(cursor->data==object)
		{
			return count;
		}
		++count;
		cursor = cursor->next;
	}
	return -1;
}

int insertAtIndex(List *list, void *object, int index)
{
	if(!isValidIndex(list, index) && (index !=list->size)) 
	{ 
		printf("a");
		return 0;
	} else if(!index) {
		Node *new =makeNode(object, NULL);
		printf("b\n");
		if(!new)
		{
			return 0;
		}
		printf("b succ\n");
		new->next=setHead(list, new);
	}else {
		Node *previous=nodeAtIndex(list, index -1);
		Node *new=makeNode(object, previous->next);
		printf("c");
		if(!new)
			return 0;
		previous->next=new;
	}
	printf("presize\n");
	++list->size;
	printf("postsize\n");
	return 1;
}









//This function returns an empty List object
List* initList()
{
	List* list;
	list=malloc(sizeof(list));
	if(list){
		*list=(List){NULL, 0};
	}

	return list;


}

/* This function inserts the object of the first parameter at the head of the list and returns an error code*/
int insertAtHead(List *list, void * object)
{

	return insertAtIndex(list, object, 0);
}

//This function returns the object at the index location given by the first parameter. 
//This function returns the object at the index location given by the first parameter. 
void* getAtIndex(List *list, int index)
{
	Node *node=nodeAtIndex(list, index);
	if(node)
	{
		return node->data;
	}
	return NULL;

}

//This function returns the size of the list
int getSize(List *list)
{
	return list->size;


}

//This function frees all memory allocated for a list
void freeList(List *list)
{
	clearList(list);
	
	free(list);

}	


int lastIndexOf(List *list, void *object)
{
	Node*p;
	int i=0, index=-1;
	p=list->head;
	while(p)
	{
		if(p->data==object)
		{
			index=i;
		}
		p=p->next;
		++i;



	}
	return index;
}
//This function  removes the last element of the 
void* removeFromtail(List *list)
{
	if(!list->size){
		return NULL;
	}
void *object;
	if(list->size==1)
	{
		object=list->head->data;
		free(setHead(list, NULL));
		list->head=NULL;
	} else{
		Node *previous=nodeAtIndex(list, list->size-2);
		object=freeNode(previous->next);
		previous->next=NULL;
	}
	--list->size;
	return object;
	
}

