#include <stdio.h>
int main(void)
{
	char ASC;
	printf("문자를 입력해주세요\n");
	scanf("%c", &ASC);
	
	int result = (65 <= ASC && ASC <= 90);
	printf("입력된 문자는 %d입니다 (대문자 : 1 대문자가 아닌경우 : 0)\n", result);

	return 0;
}
