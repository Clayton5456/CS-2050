#include "lab6.h"

/* init offset list creates an offsetList with maxSize elemenrts and returns it to the user
 * takes, two inte, one the maximum size, and one the start index
 * returns the offset List
 */

OffsetList* initOffsetList(int maxSize, int startIndex)
{
	OffsetList *list;
	void ary[maxSize];
	list=malloc(sizeof(OffsetList));
	
	list->maxSize=maxSize;
	list->startIndex=startIndex;
	
        ary-=startIndex;
	list->array=ary;
	list->size= 0;
	return list;
}

/* Getter function for size
 * takes: an offset list
 * returns: the size
 */
	
int getOffsetListSize(OffsetList *list)
{
	return list->size;
}

/*Free offset list frees all the elements of the array, and the list itself
 * takes: an offset list
 * returns: nothing
 */
void freeOffsetList(OffsetList *list)
{
	int i,size;
	void *ary;
	size= getOffsetlistSize(list);
	ary=list->array;
	if(size>0)
	{

		for(int i=0; i<size;i++)
		{
			free(ary[i+list->startIndex]);
		}
	}		
	free(list);


}

/*Gets the element at the specified index
 * takes: offset list, an int index;
 * returns, the object at that index
 * assumes that indext> start index
 */

void* getOAtIndex(OffsetList *list, int index)
{
	int i, size;
	void *object, *ary;
        size=getOffsetListSize(list);

	ary=list->array;
	for(i=0;i<size;i++)
	{
		if(i=index)
		{
			object=&ary[i+startIndex];
		}
	}
	return object;
}


/* Puts an element into the list at specified index
 * takes: an offset list, an object, and an int index
 * returns, an error code showing success or failure
 * assumes index>start&& index<size+startindex
 */ 

int insertInOffsetList(OffsetList *list, void *object, int index)
{
	void *ary;
	int start;
	start=list->startindex;
	ary=list->array;
	ary[index]=malloc(sizeof(object)); 
	if(ary[index]==NULL)                               
	{                                              
		return 0;                            
	}
	ary[index]=object;
	list->size++;
	return 1;
	

}

	


/* shows if the list array contains anything
 * takes: offset list
 * returns true or false
 */
int hasNoObjects(OffsetList *list)
{
	if(getOffsetListSize(list)==0)
	{
		return 0;
	}
	return 1;
}

/*Returns the index where the object is last seen
 * takes; an offset list and a pointer to an object.
 * returns the index, -1 if it fails
 */
int lastIndexOf(OffsetList *list, void *object)
{
	int size, start, i;
	void *ary;
	ary=list->array;
	size=getOffsetListSize(list);
	start=list->startIndex;
	for(i=size;i>=0; i--)
	{
		if(ary[i+start]==object)
		{
			return i;
		}
	}
	return -1;
}


			






/*removes an element from the list
 * takes: an offset list and an int index
 * returns the object that was removed
 * assumes index>startIndex && < size+startIndex
 */

void* removeFromList(OffsetList *list, int index)
{
	void *ary, object;
	int size, i, start;
	ary=list->array;
	size=getOffsetListSize(list);
	start= list->startIndex;
	object=&array[index];
	for(i=index; i<size+start-1; i++)
	{
		array[i]=array[i+1];
	}
	free(array[size]);
	size--;
	return object;

}


		






