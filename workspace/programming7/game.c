#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void main() {
    int choice, answer, score;
    int difficulty = 0;
    int totalScore = 0;

    srand(time(NULL));

    while (1) {
        printf("1. 난이도 설정  2. 게임하기  3. 내 점수 보기  4. 종료하기\n");
        printf("입력 >>>>> ");

        scanf_s("%d", &choice);
        if (choice == 4) {
            printf("게임은 재밌었나요~?? %d점으로 마무리되었네요!", totalScore);
            break;
        }
        else if (choice == 1) { // 난이도 설정
            printf("1. 상  2. 중  3. 하\n번호입력 >>>>> ");
            scanf_s("%d", &choice);
            switch (choice) {
            case 1:
                difficulty = 3;
                printf("난이도가 상으로 설정되었습니다.\n");
                break;
            case 2:
                difficulty = 2;
                printf("난이도가 중으로 설정되었습니다.\n");
                break;
            case 3:
                difficulty = 1;
                printf("난이도가 하으로 설정되었습니다.\n");
                break;
            }
        }
        else if (choice == 2) { // 게임하기
            if (difficulty == 3) { // 난이도가 상일 때
                answer = rand() % 100 + 1;
                score = 100;
            }
            else if (difficulty == 2) { // 난이도가 중일 때
                answer = rand() % 20 + 1;
                score = 50;
            }
            else if (difficulty == 1) {// 난이도가 하일 때
                answer = rand() % 5 + 1;
                score = 20;
            }
            else {
                printf("난이도를 먼저 설정하세요!\n");
                continue;
            }
            printf("정답을 입력해보세요 >>>>> ");
            scanf_s("%d", &choice);
            if (answer == choice) {
                printf("정답!, %d점이 추가됩니다!\n", score);
                totalScore += score;
            }
            else {
                printf("땡! 정답은 %d 였습니다!\n", answer);
            }
        }
        else if (choice == 3) { // 내 점수 보기
            printf("점수 총합 : %d점\n", totalScore);
        }
        else {
            printf("다시 입력해주세요!");
        }
    }
}