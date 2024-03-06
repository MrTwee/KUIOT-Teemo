#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int question[3];
    int answer[3];
    int strike = 0;
    int ball = 0;
    int count = 0;

    srand(time(NULL));

    for (int i = 0; i < 3; i++) {
        int num;
        int found;
        num = rand() % 9 + 1;

        found = 0;
        for (int j = 0; j < i; j++) {
            if (question[j] == num) {
                found = 1;
                break;
            }
        }
        while (found) {
            num = rand() % 9 + 1;
            found = 0;
            for (int j = 0; j < i; j++) {
                if (question[j] == num) {
                    found = 1;
                    break;
                }
            }
        }
        question[i] = num;
    }

    printf("야구 게임을 시작합니다!\n");

    while (strike != 3) {
        strike = 0;
        ball = 0;
        count++;

        printf("세 개의 숫자를 입력하세요: ");
        scanf("%d %d %d", &answer[0], &answer[1], &answer[2]);

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (answer[i] == question[j]) {
                    if (i == j) {
                        strike++;
                    } else {
                        ball++;
                    }
                }
            }
        }

        if (strike == 3) {
            printf("축하합니다! %d번 만에 정답을 맞추셨습니다!\n", count);
        } else {
            printf("[%d회] %d 스트라이크, %d 볼입니다.\n", count, strike, ball);
        }
    }

    return 0;
}

