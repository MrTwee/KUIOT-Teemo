#include <stdio.h>
int main(void)
{
	int score;
	printf("점수를 입력해주세요 :");
	scanf("%d", &score);
	
	int result = 60 <= score && score <= 100;
	printf("[입력된 점수는 %d점입니다 [합격시 1 : %d]\n", score, result);


	return 0;
}
