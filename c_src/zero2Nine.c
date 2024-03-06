#include <stdio.h>

int main(void)
{
	int num;
	printf("input num : \n");
	scanf("%d", &num);
	
	//int result = (0 <= num <= 9); 잘못된 
	int result = (0 <= num && num <= 9);
	
	printf("[0, 9] : %d\n", result);
	return 0;
}
