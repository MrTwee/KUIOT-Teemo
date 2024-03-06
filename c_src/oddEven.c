#include <stdio.h>
int main(void)
{
	int num;
	printf("숫자를 입력해주세요\n");
	scanf("%d", &num);
	
	int result = ((num % 2) == 1);
	printf("[입력된 숫자 %d가 홀수면 1출력 : %d]\n", num, result);


	return 0;
}
