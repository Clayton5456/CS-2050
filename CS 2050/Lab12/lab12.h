#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef struct BST BST;

// Complexity: O(1)
BST* initBST();

// Complexity: O(n)
size_t BSTSize(BST *tree);

// Complexity: O(n)
void freeBST(BST *tree);

#define SECT_D

typedef struct {
	float squareFeet;
	int baths;
	int houseNumber;
} House;

// Complexity: O(log(n))
int insertHouse(BST *tree, House *house);

// Complexity: O(log(n))
int searchHouses(BST *tree, House *query);

// Complexity: O(n)
void postOrderPrintHouses(BST *tree);
