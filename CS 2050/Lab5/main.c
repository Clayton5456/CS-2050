#include "lab5.h"


char *filename="houses.txt";
House* houses;
House* winner;

int main()
{

	houses=loadHousesFromFile(filename);


	printHouseArray(houses);


	winner=getHouseWithMostBaths(houses) ;
	printf("Winner's baths: %d\n", getBaths(winner));
	printf("Average baths: %.2f\n", getAverageNumberOfBaths(houses));

	printf("House1 #: %hd\n", getHN(&houses[0]));
	setHN(&houses[0], 25);	

	printf("House1 #: %hd\n", getHN(&houses[0]));

	printf("House1 baths: %d\n", getBaths(&houses[0]));
	setBaths(&houses[0], 100);	

	printf("House1 baths: %d\n", getBaths(&houses[0]));	




	
	printf("House1 f2: %.2f\n", getF2(&houses[0]));
	setF2(&houses[0], 4.5);	

	printf("House1 f2: %.2f\n", getF2(&houses[0]));

	freeArray(houses);
	


















}





