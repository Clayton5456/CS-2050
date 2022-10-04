#include "lab12.h"

void traversalRight(Node* mid);
void traversalLeft(Node *mid);
void traversalBack(Node* mid);
void printHouses(House* house);
int compareHouses(House* a, House*b);
int treeIn(Node* start, Node*insert);
int binarySearch(Node* mide, House* query);
void traversalRightL(Node* mid);

struct BST {
	Node* left;
	Node* right;
	Node* lowest;
	Node* middle;
	Node*highest;	
	int size;

};

typedef struct Node Node;
struct Node{
	void * object;
	Node* left;
	Node* right;
	Node* back;
}




BST* initBST()
{
	BST* b =malloc(sizeof(BST));
	b=(BST){NULL, NULL,NULL, NULL, 0}

	return b;
}


size_t BSTSize(BST *tree)
{
	return sizeof(BST)*tree->size;
}

void freeBST(BST *tree)
{
	Node* mid;
	Node* p;
	Node* cursor;

	
	cursor=tree->lowest->back;
	while(cursor->back)
	{

		free(cursor->left);
		free(cursor->right);

		cursor =cursor->back;
	}
	cursor=tree->highest->back;
	while(cursor->back)
	{
		free(cursor->left);
		free(cursor->right);

		cursor=cursor->back;
	}


	free(tree->middle->left);
	free(tree->middle->right);
	free(tree->middle);
	free(tree);
}


int compareHouses(House *a, House *b)
{
	return(a->houseNumber-b->houseNumber);
}

int treeIn(Node* start, Node* insert);
{
	Node* temp;
	if(compareHouses((House*)insert->object,(House*) start->object)==0)
	{
		return 0;
	}

	if(compareHouses((House*)insert->object,(House*) start->object)>0)
	{
		
		insert->back=start;
		if(!start->right)
		{
			start->right=insert;
			return 1;
		}
		temp=start->right;

		start->right=insert;
		return treeIn(temp, insert);
	}
	else if(compareHouses((House*)insert->object,(House*) start->object)<0)
	{
		insert->back=start;
		if(!start->left)
		{
			start->left=insert;
			return 1;
		}
		temp->start->left;

		start->left=insert;
		return treeIn(temp, insert);
	}
	return 0;
}



		


int insertHouse(BST *tree, House *house)
{
	Node* insert=malloc(sizeof(Node));
	insert=(Node){house,NULL, NULL, NULL};
	if(tree->size==0)
	{
		tree->middle=insert;
		tree->size++;
		return 1;
	}
	int ec=treeIn(tree->middle, insert);
	return ec;
}


int binarySearch(Node* mid, House* query)
{
	if(compareHouses(query,mid->object)==0)
	{
		return 1;
	}
	else if(compareHouses(query, mid->object)<0)
	{
	

		return binarySearch(mid->left , query);
	}
	else if(compareHouses(query, mid->object)>0)
	{
		return binarySearch(mid->right query);
	}
	return 0;
}
int searchHouses(BST* tree, House* query)
{
	return binarySearch(tree->mid, query);
}

void printHouse(house* house)
{
	printf("Square Footage: %f\nBaths: %d\nHouse Number: %d\n", house->squareFeet, house->bath, house->houseNumber);
}



void traversalRight(Node* mid)
{
	printHouse((House) *mid->object)
	if(!mid->right)
	{

		return;
	}

	traversalRight(mid->right);
}
void traversalLeft(Node* mid)
{
	printHouse((House) *mid->object)
	if(!mid->left)
	{

		return;
	}

	traversalRight(mid->left);
}

void traversalBack(Node* mid)
{
	if(!mid->back)
	{
		return;
	}
	traversalRight(mid);
	traversalBack(mid);
}


void traversalRightL(Node* mid)
{
	printHouse((House) *mid->object)
	if(!mid->right)
	{

		return;
	}
	traversalLeft(mid->left);

	traversalRight(mid->right);
}


void postOrderPrintHouses(BST* tree)
{
	printHouse((House*) tree->lowest->object);
	traversalBack(tree->lowest->back);
	traversalRightL(tree->middle);
}


























