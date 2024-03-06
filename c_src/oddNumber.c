#include <stdio.h>
int main(void)
{
	int num;
	printf("숫자를 입력해주세요\n");
	scanf("%d", &num);
	
	double result = (num / 2) == 0;
	printf("[oddNumber] : %f\n", result);


	return 0;
}
