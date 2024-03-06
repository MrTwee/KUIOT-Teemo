#include <stdio.h>
int main(void)
{
	char ch;
	printf("input char : ");
	scanf("%c", &ch);
	
	if (ch >= 'A' && ch <= 'Z') {
	printf("%c는 알파벳 대문자입니다\n", ch);
	} else {
	printf("%c는 알파벳 대문자가 아닙니다\n", ch);
	}
	return 0;
}
