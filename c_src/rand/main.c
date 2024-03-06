#include <stdio.h>
//#include <stdlib.h>
#include <time.h>
#include "rand.h"

int main(void)
{
	my_srand(time(NULL));
	for (int i = 1; i <= 10; ++i) {
		int value = my_rand();
		
		printf("value : %d\n", value);
	}		
	return 0;
}
