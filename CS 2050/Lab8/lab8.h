#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"

#define SECT_D
typedef struct {
	float squareFeet;
	int baths;
	short houseNumber;
} House;

int compareHouses(House *a, House *b);
int insertHouseAscending(List *list, House *house);
int countAllGreaterHouses(List *list, House *house);
void printHouses(List *list);
