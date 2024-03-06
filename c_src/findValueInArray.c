#include <stdio.h>

int main(void)
{
	int nums[10] = {50, 90, 10, 20, 40, 80, 70, 100, 30, 60};
	
	int Value;
	printf("input value : ");
	scanf("%d", &Value);
	
	int i;
	for (i = 0; i < 10; ++i) {
		if (Value == nums[i]) {
			break;		
		} 
	}
	
	if (i != 10) {
	printf("%d is found. index : %d\n", Value, i);
		} else {
	printf("%d is not found\n", Value);
}
	return 0;
}
