#include <stdio.h>

int main()
{
	char a, b, c, *p;
	
	a = 'A';
	p = &a;
	b = *p;
	
	p = &c;
	*p = 'Z';
	
	printf("a = %c\n", a);
	printf("b = %c\n", b);
	printf("c = %c\n", c);

	return(0);
}
