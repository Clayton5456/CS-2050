#include <stdio.h>
#include <stdlib.h>


typedef struct nstruct {
	void* key;
	struct nstruct *next;
} Node;


typedef struct {
	Node *head;
	int listLength;
} ListStuff;


typedef struct {
	ListStuff *p;
} List;




//This function returns an empty List object
List initList();

/* This function inserts the object of the first parameter at the head of the list and returns an error code*/
int insertAtHead(void* object , List list);

//This function returns the object at the index location given by the first parameter. 
void* getAtIndex(int index, List list);

//This function returns the size of the list
int getLength(List list);

//This function clears the list (makes it empty) just like it was after creation
void clearList(List list);


//This function frees all memory allocated for a list
void freeList(List list);


