#include <stdio.h>

int findValueInArray(const int *pArr, int size, int value)
{
	int i;
	
	for(i = 0; i < size; ++i) {
		if (value == pArr[i]) {
			break;
		}
	}
		
	int index = (i < size) ? i : -1;
	return index;
}

int main(void)
{
	int nums[10] = {50, 90, 10, 20, 40, 80, 70, 100, 30, 60};
	
	int Value;
	printf("input value : ");
	scanf("%d", &Value);
	
	int index = findValueInArray(nums, 10, Value);
	
	if (index != -1) {
	printf("%d is found. index : %d\n", Value, index);
		} else {
	printf("%d is not found\n", Value);
}
	return 0;
}
/*
#include <stdio.h>

int findValueInArray(const int *pArr, int size, int value)
{
    for (int i = 0; i < size; ++i) {
        if (pArr[i] == value) {
            return i; // 값을 찾으면 인덱스 반환
        }
    }
    return -1; // 값을 찾지 못하면 -1 반환
}

int main(void)
{
    int nums[10] = {50, 90, 10, 20, 40, 80, 70, 100, 30, 60};
    
    int Value;
    printf("input value : ");
    scanf("%d", &Value);
    
    int index = findValueInArray(nums, 10, Value);
    
    if (index != -1) {
        printf("%d is found. index : %d\n", Value, index);
    } else {
        printf("%d is not found\n", Value);
    }
    
    return 0;
}
*/
