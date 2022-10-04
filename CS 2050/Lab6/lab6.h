#include <stdio.h>
#include <stdlib.h>

#define COMMON_2
typedef struct {
	void **array;
	int size;
	int maxSize;
	int startIndex;
} OffsetList;

OffsetList* initOffsetList(int maxSize, int startIndex);
int getOffsetListSize(OffsetList *list);
void freeOffsetList(OffsetList *list);
void* getOAtIndex(OffsetList *list, int index);

#define SECT_D
int insertInOffsetList(OffsetList *list, void *object, int index);
int hasNoObjects(OffsetList *list);
int lastIndexOf(OffsetList *list, void *object);
void* removeFromList(OffsetList *list, int index);
