#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *input = malloc(sizeof(char)*64);
	if(input==NULL)
	{
		puts("Unable to allocate memory");
		return(1);
	}

	printf("Type your name: ");
	fgets(input, sizeof(input), stdin);
	
	printf("Hello, %s", input);	 
	
	return(0);
}
