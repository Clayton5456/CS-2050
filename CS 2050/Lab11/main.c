#include "lab11.h"


House one,two,three, four, five, *harray;

int main()
{
	one =(House){32, 4, 1};
	two=(House){ 44, 4, 2};
	three=(House){5400, 66, 3};
	four=(House){888, 0, 4};
	five=(House){12, 1200, 5};
	

	House q=(House){2,2,3};

	harray=createArray(5, sizeof(House));
	harray[0]=one;
	harray[1]= two;
	harray[2]=three;
	harray[3]=four;
	harray[4]=five;
	printf("%d\n", (int)(sizeof(harray)));
	size_t search=searchHouses(harray, &q);

	int searcher=search/sizeof(House);
	printf("%d\n",searcher);
}


	

