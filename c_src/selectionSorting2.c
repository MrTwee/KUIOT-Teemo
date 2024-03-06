/*
#include <stdio.h>

void sorting(int *pArr, int size)
{


} 

int main(void)
{
	int nums[10] = {50, 90, 10, 20, 40, 80, 70, 100, 30, 60};
	
	// selection sorting
	sorting(nums, 10);
	
	for (int i = 0; i < 10; ++i) {
		printf("%d ", nums[i]);
	}
	printf("\n");
	return 0;
}
*/

#include <stdio.h>

void sorting(int *pArr, int size)
{
    // 배열의 크기가 1 이하이면 이미 정렬된 상태이므로 정렬할 필요 없음
    if (size <= 1) {
        return;
    }

    // 선택 정렬 알고리즘을 사용하여 배열을 정렬
    for (int i = 0; i < size - 1; ++i) {
        int min_index = i; // 최솟값을 찾기 위한 인덱스를 초기화
        
        // 현재 인덱스부터 배열의 끝까지 순회하면서 최솟값을 찾음
        for (int j = i + 1; j < size; ++j) {
            if (pArr[j] < pArr[min_index]) {
                min_index = j;
            }
        }
        
        // 최솟값을 현재 인덱스와 교환
        if (min_index != i) {
            int temp = pArr[i];
            pArr[i] = pArr[min_index];
            pArr[min_index] = temp;
        }
    }
}

int main(void)
{
    int nums[10] = {50, 90, 10, 20, 40, 80, 70, 100, 30, 60};
    
    // selection sorting
    sorting(nums, 10);
    
    for (int i = 0; i < 10; ++i) {
        printf("%d ", nums[i]);
    }
    printf("\n");
    
    return 0;
}

