#include <stdio.h>
#include <stdlib.h>

#define SECT_D
typedef struct {
	float squareFeet;
	int baths;
	short houseNumber;
} House;

float getF2(House *house);
void setF2(House *house, float f2);
int getBaths(House *house);
void setBaths(House *house, int baths);
short getHN(House *house);
void setHN(House *house, short HN);
void printHouseArray(House *houses);
House* loadHousesFromFile(const char *filename);
House* getHouseWithMostBaths(House *houses);
House* getHouseByHN(House *houses, short HN);
float getAverageNumberOfBaths(House *houses);



void freeArray(House *array);
