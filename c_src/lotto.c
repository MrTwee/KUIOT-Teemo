#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

	int lotto[7];
	
	srand(time(NULL));
	for (int i = 0; i < 7;) {
		lotto[i] = rand() % 45 + 1;		//unique [1, 45]
		
		int j;
		for (j = 0; j < i; ++j) {
			if (lotto[i] == lotto[j]) {
				break;
			}
		}
		if (j == i) {
			++i; //not found
		}
	}
	
	for (int i = 0; i < 7; ++i) {
		printf("%d ", lotto[i]);
	}
	printf("\n");

	return 0;
}
