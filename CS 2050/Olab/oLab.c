#include "optionalLab.h"


int insertRight(Node* mid, Node* insert);
int insertLeft(Node* mid, Node* insert);
int cmp(int* a, int *b);
void extractedRight(Node* mid);
void ExtractedLeft(Node* mid);





struct Heap{
	Node* min;
	int* size;
};

typedef struct Node {
	int* key;
	struct Node* back;
	struct Node* left;
	struct Node* right;
} Node;


void* createArray(size_t size, size_t elemSize){
	void* array=malloc(size*elemSize);
	((int*) array)[0]=size;
	
	return ((int*) array+1);
}


Heap* initHeap()
{
	Heap* heap=malloc(sizeof(Heap));
	heap=(Heap){NULL, 0};
	return heap;
}

int cmp( int* a, int*b)
{
	return ((int)a)-((int) b);
}

int insertRight(struct Node* mid, Node* insert)
{
	Node* temp;
	if(cmp(mid->key, insert->key)>0)
	{
		temp=mid;
		insert->back=mid->back;
		mid->back->right=insert;
		insert->left=mid->left;
		insert->right=mid->right;
		float rand =drand84();
		if(rand<.5 )
		{
			return insertRight(insert->right,mid);
		}
		else if(rand>=.5)
		{
			return insertLeft(insert->left, mid);
		}
	}

	if(mid->right=NULL)
	{
		mid->right=insert;
		insert->back=mid;
		return 1;
	}
	else if(mid->left=NULL)
	{
		mid->left=insert;
		insert->back=mid;
		return 1;
	}
	float rand =drand84();
	if(rand<.5 )
	{
		return insertRight(mid->right,insert);
	}
	else if(rand>=.5)
	{
		return insertLeft(mid->left, insert);
	}
	return 0;
}

int insertLeft(Node* mid, Node* insert)
{
	Node* temp;
	if(cmp(mid->key, insert->key)>0)
	{
		temp=mid;
		insert->back=mid->back;
		mid->back->left=insert;
		insert->left=mid->left;
		insert->right=mid->right;
		float rand =drand84();
		if(rand<.5 )
		{
			return insertRight(insert->right,mid);
		}
		else if(rand>=.5)
		{
			return insertLeft(insert->left, mid);
		}
	}

	if(mid->right=NULL)
	{
		mid->right=insert;
		insert->back=mid;
		return 1;
	}
	else if(mid->left=NULL)
	{
		mid->left=insert;
		insert->back=mid;
		return 1;
	}
	float rand =drand84();
	if(rand<.5 )
	{
		return insertRight(mid->right,insert);
	}
	else if(rand>=.5)
	{
		
		return insertLeft(mid->left, insert);
	}
	return 0;
}
		

// The return value is used as an error code
int insertHeap(Heap *heap, int key)
{
	Node* insert=malloc(sizeof(Node));
	insert=(Node){(int*) key, NULL, NULL};
	Node* temp;
	if(!(heap->size))
	{
		heap->min=insert;
	}

	if(cmp(heap->min->key, insert->key)>0)
	{
		temp=heap->min;
		heap->min=insert;
		insert->left=temp->left;
		insert->right=temp->right;
		float rand =drand84();
		if(rand<.5 )
		{
			heap->size++;
			return insertRight(insert->right,temp);
		}
		else if(rand>=.5)
		{
			heap->size++;
			return insertLeft(insert->left, temp);
		}
	}
	float rand =drand84();
	if(rand<.5 )
	{
		heap->size++
		return insertRight(heap->min->right,insert);
	}
	else if(rand>=.5)
	{
		heap->size++;
		return insertLeft(heap->min->left, insert);
	}
}

void extractedRight(mid)
{
	if(mid->right==NULL)
	{
		mid->right==mid->left;
	}
	if(cmp(mid->left->key, mid->right->key)<0)
	{ 
		mid->left->back=mid->back;
		mid->back->left=mid->left;

		extractedLeft(mid->left)
		mid->left->right=mid->right;
	}
	else if(cmp(mid->left->key,mid->right->key)>0)
	{
		mid->right->back=mid->back;
		mid->back->right=mid->right;

		extractedRight(mid->right);
		mid->right->left=mid->left;
	}
	return;
}

void extractedLeft(mid)
{
	if(mid->left==NULL)
	{
		mid->left==mid->right;
	}
	if(cmp(mid->left->key, mid->right->key)<0)
	{ 
		mid->left->back=mid->back;
		mid->back->left=mid->left;

		extractedLeft(mid->left)
		mid->left->right=mid->right;
	}
	else if(cmp(mid->left->key,mid->right->key)>0)
	{
		mid->right->back=mid->back;
		mid->back->right=mid->right;

		extractedRight(mid->right);
		mid->right->left=mid->left;
	}
	return;
}	


// The return value is the extracted key
int extractMin(Heap *heap)
{
	Node* temp=heap->min;
	if(cmp(temp->left->key, temp->right->key)<0)
	{ 
		temp->left=heap->min;
	}
	if(cmp(mid->left->key, mid->right->key)<0)
	{ 
		mid->left->back=mid->back;
		mid->back->left=mid->left;

		extractedLeft(mid->left)
		mid->left->right=mid->right;
	}
	else if(cmp(mid->left->key,mid->right->key)>0)
	{
		mid->right->back=mid->back;
		mid->back->right=mid->right;

		extractedRight(mid->right);
		mid->right->left=mid->left;
	}		
	int *tempI=temp->key;
	free(temp);
	return tempI;
}

// Sort the array using a heap
void heapSort(int *array)
{
	int size=array[-1];
	
	Heap* heap=initHeap()
	for(int i=0;i<size;i++)
	{
		heapInsert(heap,array[i]);
	}

	for(int j=0;j<size;i++)
	{
		array[i]=extractMin(heap);
	}
}


