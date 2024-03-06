#include <stdio.h>
int main(void)
{
	int a, b, c;
	printf("숫자 3개를 입력하세요\n");
	
	scanf("%d %d %d", &a, &b, &c);
	
	if (a > b && a > c && b > c) {
		printf("max : %d  mid : %d min : %d\n", a, b, c);
	} else if (a > b && c > b && a > c) {
		printf("max : %d  mid : %d min : %d\n", a, c, b);	
	} else if (b > a && b > c && a > c) {
		printf("max : %d  mid : %d min : %d\n", b, a, c);	
	} else if (b > a && c > a && b > c) {
		printf("max : %d  mid : %d min : %d\n", b, c, a);	
	} else if (c > a && c > b && a > b) {
		printf("max : %d  mid : %d min : %d\n", c, a, b);	
	} else {
		printf("max : %d  mid : %d min : %d\n", c, b, a);	
	}
	return 0;
}
