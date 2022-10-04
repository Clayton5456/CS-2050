#include "lab2.h"

void printShortArray(short *array, int size) {
	printf("[ ");
	for(int i = 0; i < size; ++i) {
		printf("%hd%s", array[i], ((i + 1 == size) ? "" : ", "));
	}
	printf(" ]\n");
}
char *filename= "integers.txt";
short * array;
int*length, lengt;

int main() {
	length=&lengt;


	FILE *fptr = fopen(filename, "r");
	if(!fptr) {
		fprintf(stderr, "The file [ %s ] was not successfully opened\n", filename);
		
	}

	array=readShortFromFile(fptr, length);
	printShortArray(array,*length);
	short **array2=&array;
	freeShortArray(array2);
	if(array!=NULL)
	{
		printf("Check Free Function\n");
	
	}





	if(array==NULL){
		printf("You did it!\n");
	}
	

	

	







}
