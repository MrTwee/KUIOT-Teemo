#include <stdio.h>

int main(void)
{
	char alpha;
	printf("문자를 입력해주세요\n");
	scanf("%c", &alpha);
	
	//int result = (65 <= alpha && alpha <= 122) 잘못됨;
	int result = (alpha >= 'A' && alpha <= 'Z') || (alpha >= 'a' && alpha <= 'z');
	
	printf("[입력된 문자는 알파벳입니다 : %d]\n", result);

	return 0;
}
