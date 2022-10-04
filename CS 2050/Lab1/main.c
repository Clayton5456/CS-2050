#include "lab1.h"

void readArray(FILE *file, int size, float *array);
void printArray(float *array, int size);
float * resultP; 
float result;
int beforeIndex;



char *filename = "numbers.txt";

int main() {
    // opening the file
	FILE *file = fopen(filename, "r");
	if(!file) {
		fprintf(stderr, "The file [ %s ] was not successfully opened\n", filename);
		return -1;
		
	
	}
		
		
		
		

    // reading the array size and creating the array
	int size;
	fscanf(file, "%d", &size);
	float array[size];
	readArray(file, size, array);
	printArray(array, size);

    // --- Your function call goes here ---
beforeIndex= 5; //Hard Code index
resultP=&result;
printf("Index= %d\n", beforeIndex);
if(avgBefore(array, size ,resultP, beforeIndex)==0) //Call program and test if successful
      printf("Index %d not found, please try again", beforeIndex); //Prints out error message if program fails

printf("Result= %.2f\n", *resultP); //Prints result


	fclose(file);
}

void readArray(FILE *file, int size, float *array) {
	if(!file) {
		return;
	}
	for(int i = 0; i < size; ++i) {
		fscanf(file, "%f", (array + i));
	}
}

void printArray(float *array, int size) {
    printf("[ ");
	for(int i = 0; i < size; ++i) {
		printf("%.2f%s", array[i], ((i + 1 == size) ? "" : ", "));
	}
    puts(" ]");
}
