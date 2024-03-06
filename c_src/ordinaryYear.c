#include <stdio.h>
int main(void)
{
	int year;
	printf("년도를 입력해주세요\n");
	scanf("%d", &year);
	
	//int result = !((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0));
	int result = ((year % 4 != 0) || (year % 100 == 0) && (year % 400 != 0));

	printf("입력된 %d년은 평년입니다 : %d\n", year, result);

	return 0;
}
