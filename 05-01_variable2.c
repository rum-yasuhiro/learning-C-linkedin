#include <stdio.h>

int main()
{
	struct stuff {
		int a;
		float b;
		char c[32];
	};

	printf("The structure 'stuff' occupies %lu bytes\n", sizeof(struct stuff));

	return(0);
}
