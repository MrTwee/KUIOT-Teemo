#include <stdio.h>
int main(void)
{
	int num;
	printf("숫자를 입력해주세요\n");
	scanf("%d", &num);

	if (num > 0) {
		printf("%d is positive num\n", num);
	} else if (num == 0) {
		printf("%d is zero num\n", num);
	} else {
		printf("%d is negative num\n", num);
	}

//	printf("%d is %s num\n", num, (num > 0 ) ? "positive" : (num == 0) ? "zero" : "negative");	
	return 0;
}
