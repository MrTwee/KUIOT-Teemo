#include <stdio.h>

int main(void)

{
	int i;
	
	while (i < 26) {
	printf("%c", 'A' + i);
	++i;
	}
	
	printf("\n");
	return 0;
}
/*
{

	char c = 'A';
	while (c <= 'Z') {
		printf("%c", c);
		++c;
	}
	printf("\n");
	
	return 0;
}
*/
