#include <stdio.h>

int main()
{
	char a;
	
	printf("Your choise (A,B,C): ");
	scanf("%c", &a);
	
	switch(a)
	{
		case 'A':
			puts("Excellent choise!");
			break;
		case 'B':
			puts("This is the most common choise.");
			break;
		case 'C':
			puts("I question your decision.");
			break;
		default:
			puts("That's not a valid choise.");
	}

	return(0);
}
