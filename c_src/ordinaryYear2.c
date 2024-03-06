#include <stdio.h>
int main(void)
{
	int year;
	printf("해당년도를 입력해주세요\n");
	scanf("%d", &year);
	
	//if (!year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
	if (year % 4 != 0 || year % 100 == 0 && year % 400 != 0) {
	printf("%d년은 평년입니다\n", year);
	} else {
	printf("%d년은 윤년입니다\n", year);
	}
	return 0;
}
