#include "plab11.h"





float question;

int main()
{



	float array[12]={3.4,3.5,5,5.4,6,8.9,9.0,9.1,12,13,14.44,20};
	question= 14.44;

	if(binarySearch(array, 0,12, question))
	{
		printf("You got 'em!");
	}


	if(!(binarySearch(array,0,12,8.2)))
	{
		printf("You don't got 'em!");
	}


}
