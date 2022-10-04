#include "lab10.h"

House one, two, three, four, five;
void printHouse(House* house);
int getSize(Queue* pq);
int main(){
	
	


	one =(House){32, 4, 1};
	two=(House){ 44, 4, 2};
	three=(House){5400, 66, 3};
	four=(House){888, 0, 4};
	five=(House){12, 1200, 5};
	
	Queue* pq =initPQ();

	insertHouseDescendingPQ(pq, &one);
	printf("%d\n",getSize(pq));
	insertHouseDescendingPQ(pq, &two);
	printf("%d\n",pq->size);
	insertHouseDescendingPQ(pq, &three);
	printf("%d\n", pq->size);
	insertHouseDescendingPQ(pq, &four);
	printf("%d\n", pq->size);
	insertHouseDescendingPQ(pq, &five);
	printf("%d\n", pq->size);

	for(int i=0;i<pq->size;i++)
	{

		printHouse(peekMinHouse(pq));
		printHouse(deQueueMinHouse(pq));
	}
	printf("%d\n", pq->size);

	insertHouseDescendingPQ(pq, &five);
	printf("%d\n",pq->size);
	insertHouseDescendingPQ(pq, &four);
	printf("%d\n",pq->size);
	insertHouseDescendingPQ(pq, &three);
	printf("%d\n", pq->size);
	insertHouseDescendingPQ(pq, &two);
	printf("%d\n", pq->size);
	insertHouseDescendingPQ(pq, &one);
	printf("%d\n", pq->size);

	for(int i=0;i<pq->size;i++)
	{

		printHouse(peekMinHouse(pq));
		printHouse(deQueueMinHouse(pq));
	}
	printf("%d\n", pq->size);
	
	













	freePQ(pq);
}
	
void printHouse(House* house)
{
	printf("House Number:%d\n", (int)house->houseNumber);
	
	printf("Square feet: %f\nBaths: %d\n", house->squareFeet,house->baths); 
}
int getSize(Queue* pq)
{
	return pq->size;

}

