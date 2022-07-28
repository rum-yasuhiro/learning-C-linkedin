#include <stdio.h>

int main()
{
	char name[200];

	printf("Your name? ");
	scanf("%s", name);
	printf("You are %s.\n", name);
	
	return(0);
}
