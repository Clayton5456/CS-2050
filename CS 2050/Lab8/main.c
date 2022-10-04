#include "lab8.h"
#include "LinkedList.h"

List* houses;
House house1, house2, house3, house4, testHouse;

int main()
{
	houses=initList();
	house1=(House){69.2, 4, 2};
	house2=(House){1000000, 87, 3};
	house3=(House){25, 1, 4};
	house4=(House){12345, 6, 1};
	testHouse=(House){4, 6, 0};	
	insertHouseAscending(houses, &house1);
	printf("First round\n");
	printHouses(houses);
	insertHouseAscending(houses, &house2);
	printf("Second\n");
	printHouses(houses);
	insertHouseAscending(houses, &house3);
	printf("third\n");
	printHouses(houses);
	insertHouseAscending(houses, &house4);
	printf("last\n");
	printHouses(houses);
	printf("greater %d\n", countAllGreaterHouses(houses, &testHouse));

	clearList(houses);



 



}
