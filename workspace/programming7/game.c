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
        printf("1. ���̵� ����  2. �����ϱ�  3. �� ���� ����  4. �����ϱ�\n");
        printf("�Է� >>>>> ");

        scanf_s("%d", &choice);
        if (choice == 4) {
            printf("������ ��վ�����~?? %d������ �������Ǿ��׿�!", totalScore);
            break;
        }
        else if (choice == 1) { // ���̵� ����
            printf("1. ��  2. ��  3. ��\n��ȣ�Է� >>>>> ");
            scanf_s("%d", &choice);
            switch (choice) {
            case 1:
                difficulty = 3;
                printf("���̵��� ������ �����Ǿ����ϴ�.\n");
                break;
            case 2:
                difficulty = 2;
                printf("���̵��� ������ �����Ǿ����ϴ�.\n");
                break;
            case 3:
                difficulty = 1;
                printf("���̵��� ������ �����Ǿ����ϴ�.\n");
                break;
            }
        }
        else if (choice == 2) { // �����ϱ�
            if (difficulty == 3) { // ���̵��� ���� ��
                answer = rand() % 100 + 1;
                score = 100;
            }
            else if (difficulty == 2) { // ���̵��� ���� ��
                answer = rand() % 20 + 1;
                score = 50;
            }
            else if (difficulty == 1) {// ���̵��� ���� ��
                answer = rand() % 5 + 1;
                score = 20;
            }
            else {
                printf("���̵��� ���� �����ϼ���!\n");
                continue;
            }
            printf("������ �Է��غ����� >>>>> ");
            scanf_s("%d", &choice);
            if (answer == choice) {
                printf("����!, %d���� �߰��˴ϴ�!\n", score);
                totalScore += score;
            }
            else {
                printf("��! ������ %d �����ϴ�!\n", answer);
            }
        }
        else if (choice == 3) { // �� ���� ����
            printf("���� ���� : %d��\n", totalScore);
        }
        else {
            printf("�ٽ� �Է����ּ���!");
        }
    }
}