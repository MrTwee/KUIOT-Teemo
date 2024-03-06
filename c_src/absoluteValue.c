#include <stdio.h>
int main(void)
{
	int num;
	scanf("%d", &num);
	
	int absoluteValue;
/*
	if (num >= 0) {
	printf("절대값은 : %d\n", num);
	} else {
	printf("절대값은 : %d\n", num * -1);
	}
	//absoluteValue = num;
*/	
	absoluteValue = (num >= 0) ? num : -num;
	
	printf("absoluteValue : %d\n", absoluteValue);



	return 0;
}
