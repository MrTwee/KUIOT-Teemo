#include <stdio.h>
int main(void)
{
	int male, female;
	
	scanf("%d %d", &male, &female);
	
	//double maleRatio = (male * 100.0 / (male + female));
	//double femaleRatio = (female * 100.0 / (male + female));
	
	double maleRatio = (double)male / (double)(male + female) * (double)100;
	double femaleRatio = (double)female / (male + female) * 100;
	
	printf("남성 %d명의 비율 = %.2f%%\n", male, maleRatio);
	printf("여성 %d명의 비율 = %.2f%%\n", female, femaleRatio);

	return 0;
}
