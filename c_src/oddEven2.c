#include <stdio.h>
int main(void)
{
	int num;
	printf("input number\n");
	scanf("%d", &num);
	
//	if(num % 2 /* == 1 */ ) {
//	printf("입력받은 숫자 %d는 짝수입니다\n", num);
//	} else {
//	printf("입력받은 숫자 %d는 홀수입니다\n", num);
//	}

	printf("%d is a %s number\n", num, (num % 2 ) ? "odd" : "even");
	return 0;
}
