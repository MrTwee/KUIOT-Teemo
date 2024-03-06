#include <stdio.h>

int main(void)
{
	int nums[10] = {50, 90, 10, 20, 40, 80, 70, 100, 30, 60};
	
	for (int i = 0; i <= 9; ++i) {
		for (int j = i+1; j < 10; ++j) {
			if (nums[i] < nums[j]) {
				int tmp = nums[i];
				nums[i] = nums[j];
				nums[j] = tmp;
	// bubble sorting
/*	for (int i = 9; i >= 1; --i) {
		for (int j = 0; j < i; ++j) {
			if (nums[j] > nums[j+1]) {
				int tmp = nums[j];
				nums[j] = nums[j+1];
				nums[j+1] = tmp;
*/
			}
		}
	}
	
	for (int i = 0; i < 10; ++i) {
		printf("%d ", nums[i]);
	}
	printf("\n");
	return 0;
}
