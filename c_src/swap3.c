#include <stdio.h>

int a, b;		//global var.

void swap()
{
	//swap
	int tmp = a;
	a = b;
	b = tmp;
}

int main(void)
{
	
	a = 100;
	b = 200;
	printf("a : %d\tb: %d\n", a, b);
	
	swap();	
	
	printf("a : %d\tb: %d\n", a, b);

	return 0;
}
