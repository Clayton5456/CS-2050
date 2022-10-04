#include "lab4.h"
//void printArray(short* array);
void copyArray(short* arrayA, short* array);
int size1, size2, size3, size4;
short * array1, * array2, * array3,* array4;
int main() {

	printf("Program Start");
	size1=4;
	size2=5;
	size3=14;
	size4=21;
	array1=(short*) createArray(size1,sizeof(short),sizeof(float));
	array1[0]=1;
	array1[1]=2;
	array1[2]=3;
	array2[3]=4;
	
//	printArray(array1);
	calculateArrayMedian(array1);
	printf("size= %d\n", getArraySize(array1));
	printf("size direct from array: %d\n", array1[-1]);
	printf("Original size: %d\n", size1);
	printf("Median from Function: %f\n", getArrayMedian(array1));
	printf("Median from Array %f\n",(float) array1[size1+1]);
	freeArray(array1);

	array2=(short*) createArray(size2,sizeof(short),sizeof(float));
	short array2A[]={1,2,3,4,5};
	copyArray(array2A, array2);
//	printArray(array2);
	calculateArrayMedian(array2);
	printf("size= %d\n", getArraySize(array2));
	printf("size direct from array: %d\n", array2[-1]);
	printf("Original size: %d\n", size2);
	printf("Median from Function: %f\n", getArrayMedian(array2));
	printf("Median from Array %f\n",(float) array2[size2+1]);
	freeArray(array2);

	array3=(short*) createArray(size3,sizeof(short),sizeof(float));
	short array3A[]={1, 4, 9, 12, 13, 15, 20, 21, 23, 25, 27, 29, 30, 34};

	copyArray(array3A, array3);
//	printArray(array3);
	calculateArrayMedian(array3);
	printf("size= %d\n", getArraySize(array3));
	printf("size direct from array: %d\n", array3[-1]);
	printf("Original size: %d\n", size3);
	printf("Median from Function: %f\n", getArrayMedian(array3));
	printf("Median from Array %f\n",(float) array3[size1+1]);
	freeArray(array3);


	array4=(short*) createArray(size4,sizeof(short),sizeof(float));
	short array4A[]={ 1, 2, 4, 5, 6, 8,  9, 15, 16, 17, 19, 20, 24, 27, 29, 33, 36, 37, 41, 44, 45} ;

	copyArray(array4A, array4);
//	printArray(array4);
	calculateArrayMedian(array4);
	printf("size= %d\n", getArraySize(array4));
	printf("size direct from array: %d\n", array4[-1]);
	printf("Median from Function: %f\n", getArrayMedian(array4));
	printf("Median from Array %f\n",(float) array4[size1+1]);
	freeArray(array4);
	

	







	
    
}
/*
void printArray(short* array)
{
	int size,i;
	size=getArraySize(array);
	for(i=0;i<size;i++)
	{
		printf("array[%d]: %d\n", i, array[i]);
	}
}*/
void copyArray(short* arrayA, short* array)
{
	int i;
	for(i=0; i<getArraySize(array);i++)
	{
		array[i]=arrayA[i];
	}
}

	
