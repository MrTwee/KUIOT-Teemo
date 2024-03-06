#include <stdio.h>
int main(void)
{
	int a, b, c;
	printf("숫자 3개를 입력하세요\n");
	scanf("%d %d %d", &a, &b, &c);
	
	int max, mid, min;
	
	if (a > b) {
		max = a;
		min = b;
	} else {
		max = b;
		min = a;
	}
	
	if (c > max) {
	
	} else if (c > min) {
	
	} else {
		mid = min;
		min = c;	
	}
	
	printf("max : %d mid : %d\n", max, mid, min);
	
/*	
	if (a > b && a > c && b > c) {
		max =a, mid =b, min =c;
	} else if (a > b && c > b && a > c) {
		max =a, mid =c, min =b;	
	} else if (b > a && b > c && a > c) {
		max =b, mid =a, min =c;
	} else if (b > a && c > a && b > c) {
		max =b, mid =c, min =a;	
	} else if (c > a && c > b && a > b) {
		max =c, mid =a, min =b;	
	} else {
		max =c, mid =b, min =a;		
	}
	printf("max : %d  mid : %d min : %d\n", max, mid, min);	
*/	
	return 0;
}
