#include <stdio.h>
#include <math.h>

int main()
{
	float a, b;
	printf("Type first number: ");
	scanf("%f", &a);
	printf("Type second number: ");
	scanf("%f", &b);

	printf("\nAddition: %lf+%lf=%lf\n", a, b, a+b);
	printf("Subtraction: %lf-%lf=%lf\n", a, b, a-b);
	printf("Multiplication: %lf*%lf=%lf\n", a, b, a*b);
	printf("Division: %lf/%lf=%lf\n", a, b, a/b);
	printf("%lf to the power of %f is equal to %lf\n", a, b, pow(a, b));
	printf("Squre root of %lf is equal to %lf\n", a, sqrt(a));
	printf("Squre root of %lf is equal to %lf\n", b, sqrt(b));
	
	return(0);
}
