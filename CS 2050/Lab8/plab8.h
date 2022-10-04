#include <stdio.h>
#include <stdlib.h>



typedef struct{
	char* name;
	int* SSN;
	char* password;
} Mark;


int cmp(void* obj1, void* obj2);







// partial typedef, so the Node type can contain itself
typedef struct Node Node;

struct Node {
	Node *next;
	void *data;
};

typedef struct {
	Node *head;
	int size;
} List;

int insertInOrder(void* object , List list);
int removeEq(void* object, List list);

void* nodeAtIndex(List *list, int index);
void* removeAtIndex(List *list, int index);
List* initList();
int getSize(List *list);
void freeList(List *list);
void* getAtIndex(List *list, int index);

int isValidIndex(List *list, int index);
Node* makeNode(void*data, Node*next);
void* freeNode(Node *node);
void clearList(List *list);
Node* setHead(List *list, Node *newHead);
int indexOf(List *list, void *object);
int insertAtIndex(List *list, void *object, int index);




#define SECT_D
int insertAtHead(List *list, void *object);
int lastIndexOf(List *list, void *object);
void* removeFromtail(List *list);
