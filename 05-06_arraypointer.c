#include <stdio.h>

int main()
{
	int array[] = { 11, 13, 17, 19 };
	int x;
	int *aptr;

	aptr = array;
	
	for(x=0;x<4;x++)
	{
		printf("Element %d: %d\n", x+1, *aptr);
		aptr++;
	}
	
	aptr = array;
	printf("The element is %d\n", *(aptr+3));
	printf("The element is %d\n", array[3]);
	return(0);
}
