#include <stdio.h>
#include <stdlib.h>

// partial typedef, so you can define your own list type
typedef struct List List;

// COMPLEXITY: O(1)
List* initList();
// COMPLEXITY: O(1)
int getSize(List *list);
// COMPLEXITY: O(n)
void* getAtIndex(List *list, int index);
// COMPLEXITY: O(n)
void freeList(List *list);

#define SECT_D
// COMPLEXITY: O(1)
int insertAtTail(List *list, void *object);
// COMPLEXITY: O(n)
void* getHead(List *list);
// COMPLEXITY: O(n)
void* removeHead(List *list);
