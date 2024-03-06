#include <stdio.h>

int main(void)
{
	int score;
	printf("input score : ");
	scanf("%d", &score);
	
	char grade;
	switch (score / 10) {
	case 10:
	case 9:	
		grade = 'A';
		break;
	case 8:
		grade = 'B';
		break;
	case 7:
		grade = 'C';
		break;
	case 6:
		grade = 'D';	
		break;
	default:
		grade = 'F';
	}
	printf("score : %d --- grade %c\n", score, grade);
/*	
	if (score >= 90) {
	printf("Grade A\n");
	} else if (score >= 80) {
	printf("Grade B\n");
	} else if (score >= 70) {
	printf("Grade C\n");
	} else if (score >= 60) {
	printf("Grade D\n");
	} else if (score >= 50) {
	printf("Grade F\n");
	} else {
	printf("공부해\n");
	}
*/
	return 0;
}
