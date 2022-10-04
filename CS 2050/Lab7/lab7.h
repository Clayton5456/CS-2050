#include <stdio.h>
#include <stdlib.h>

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
