#include <stdio.h>

int main()
{
	struct person {
		char name[32];
		int age;
	};
	struct person president = {
		"George Washingotn",
		67
	};
	
	printf("%s was %d years old\n", president.name, president.age);
	
	return(0);
}
