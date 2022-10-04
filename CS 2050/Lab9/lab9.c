#include "lab9.h"
/*Clayton Marsh
 *Lab9
 *
 * clmg44
 */


typedef struct Node {
	void* key;
	
	struct Node* previous;
} Node;
//I went with tail because all the functions at head wer o(n)
struct List {
	
	Node* tail;
	int size;

};
/* Returns an initialized list
 *
 * takes: nothing
 * returns: a list pointer
 */
List* initList()
{
	
	List* list =malloc(sizeof(List));	
	if(list)
	{ 
		list->tail=NULL;
		list->size=0;
	}

	return list;
}

/*Returns the size of the list
 *
 * Takes: a list pointer
 * Returns: an int size;
 */

int getSize(List* list)
{
	return list->size;
}



/*Returns the node object at that index
 *
 *takes: an list ointer and an int index
 *returns: the object at that index
 */

void* getAtIndex(List* list, int index)
{

	int size;
	Node* c;
	size=getSize(list);
	c=list->tail;
	if(!(index>0&&index<size))
	{
		return NULL;
	}
	size-=index;
	while(size--)
	{
		c->previous=c;;
	
	}
	return c->key;
}
/* Frees the list
 *
 * Takes: a list pointer
 *
 * returns: nothing
 */
void freeList(List* list)
{
	Node* c,* f;
	
	c=list->tail;
	while(c)
	{
		f=c;
		c->previous=c;
		free(f);
	}
	free(list);
}
/* Inserts the selected obect at the tail
 *
 * Takes a list and an object
 * returns an error code
 */
int insertAtTail(List* list, void* object)
{
	Node* insert=malloc(sizeof(Node));
	insert->key=object;
	if(!(getSize(list)))
	{
		list->tail=insert;
		list->size++;
		return 1;
	}
	else{
		insert->previous=list->tail;
		list->tail=insert;
		list->size++;
		return 1;
	}
	return 0;
}
/*Returns the object at the head
 *Takes: a ,ust
 returns an object
 */
void* getHead(List* list)
{
	Node* c= list->tail;
	
	while(c->previous)
	{
		
		c->previous=c;
	}
	return c;
}
/*removes the head
 *
 * takes a list
 * returns the object at head
 */
void* removeHead(List* list)
{
	Node* c=list->tail, *temp;
	while(c->previous->previous)
	{
		c->previous=c;
	}
	temp =c->previous;
	
	free(c->previous);
	c->previous=NULL;
	list->size--;
	return temp;
}




	
		
	

