#include "lab5.h"
int getArraySize(House *array);



/*Clayton Marsh
 * Cs 2050
 * Lab5
 * clmg44
 */


/*Load houses
 * takes a string filename
 * returns an array
 */

House* loadHousesFromFile(const char *filename)
{
	int size, i;

	FILE * fp = fopen(filename, "r");
	if(!fp) {
		fprintf(stderr, "The file [ %s ] was not successfully opened\n", filename);
	
	}
	fscanf(fp, "%d", &size);
	House* array= malloc(sizeof(int)+size*sizeof(House));
	*(int *)array=size;
	(int *) array++;

	for(i=0;i<size; i++)
	{
		fscanf(fp, "%f, %d, %hd", &array[i].squareFeet, &array[i].baths, &array[i].houseNumber);
	}
	printf("Baths from beginning: %d\n",array[3].baths);

	fclose(fp);
	return array;


}

/*get array size
 * 
 *
 * takes a house array 
 * returns the size of that array
 */

int getArraySize(House* array)
{
	int size;	
	(int *)array--;
	
	size=*(int *)array;
	(int *)array++;
	
	return size;
}

House* getHouseByHN(House *houses, short HN)
{
	int size, i;
	size= getArraySize(houses);
	for(i=0;i<size;i++)
	{
		if(houses[i].houseNumber==HN)
		{
			return &houses[i];
		}
	}

	return &houses[0];
}




float getF2(House *house)
{
	return house->squareFeet;
}

void setF2(House *house, float f2)
{
	house->squareFeet=f2;
}

int getBaths(House *house)
{
	
	return house->baths;
}

void setBaths(House *house, int baths)
{
	house->baths=baths;
}

short getHN(House *house)
{
	return house->houseNumber;
}

void setHN(House *house, short HN)
{
	house->houseNumber=HN;
}

void printHouseArray(House *houses)
{
	int i, size;
	size=getArraySize(houses);
	for(i=0; i<size; i++)
	{
		printf("F2: %.2f, Baths: %d, HN: %hd\n", getF2(&houses[i]), getBaths(&houses[i]), getHN(&houses[i]));
	}
}


House* getHouseWithMostBaths(House *houses)
{
	int i, size, bathsM, winnerHN;
	bathsM=0;
	winnerHN=0;
	House* winner;
	size=getArraySize(houses);
	for(i=0; i<size; i++)
	{
		if(getBaths(&houses[i])>bathsM)
		{
			bathsM=getBaths(&houses[i]);
			winnerHN=getHN(&houses[i]);
		}
	}
	winner=(getHouseByHN(houses, winnerHN));
	return winner;
}




float getAverageNumberOfBaths(House *houses)
{
	int i, size, totalBaths;
	totalBaths=0;
	float average;
	size=getArraySize(houses);
	for(i=0; i<size;i++)
	{ 
	
	
		totalBaths+=getBaths(&houses[i]);
	}
	
	average=(float) totalBaths/(float) size;
	return average;
}


void freeArray(House* array)
{
	(int *)array--;
	free(array);
}

