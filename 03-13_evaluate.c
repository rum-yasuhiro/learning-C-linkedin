#include <stdio.h>

void evaluate(float a);

int main()
{	
	float x;
	printf("Type any number: ");
	scanf("%f", &x);

	evaluate(x);
	
	return(0);
}

void evaluate(float a)
{
	if(a>10)
	{

		printf("%f is greater than %d\n", a, 10);
	}
	else if(a<10)
	{
		printf("%f is less than %d\n", a, 10);
	}
	else if(a == 10)
	{	
		printf("%f is equal to %d\n", a, 10);
	}
		
}
