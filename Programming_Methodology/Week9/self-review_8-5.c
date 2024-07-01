#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MAX_RESERVATION 10
#define MAX_NAME_LENGTH 50

// ���� ������ ������ �迭
char names[MAX_RESERVATION][MAX_NAME_LENGTH * 2]; // ������ �̸��� �����ϴ� �迭
int roomNumbers[MAX_RESERVATION]; // ���� ��ȣ�� �����ϴ� �迭
int reservationCount = 0; // ����� ���� ���� ��Ÿ���� ����

int main() {
    char choice; // ������� ������ ������ ����

    puts("���� ������ �����ִ� ���α׷��Դϴ�.\n"); // ���α׷� ����

    do {
        printf("\n���� ���α׷�\n");
        printf("1. ���� �߰�\n");
        printf("2. ���� ���\n");
        printf("3. ���� Ȯ��\n");
        printf("4. ����\n");
        printf("�����ϼ���: ");
        scanf_s(" %c", &choice);

        // ����� �Է¿� ���� ��� ����
        switch (choice) {
        case '1':
            if (reservationCount >= MAX_RESERVATION) {
                printf("�� �̻� ������ �߰��� �� �����ϴ�.\n");
                break;
            }

            char inputLastName[MAX_NAME_LENGTH]; // ���� ������ �迭
            char inputFirstName[MAX_NAME_LENGTH]; // �̸��� ������ �迭
            char inputFullName[MAX_NAME_LENGTH * 2]; // ��ü ������ ������ �迭

            // ������ ���� �Է¹���
            printf("������ ���� �Է��ϼ���(����� �Է�): ");
            scanf_s(" %49[^\n]", inputLastName, sizeof(inputLastName));

            // �� �Է��� ��ȿ���� �˻�
            int isValidLastName = 1;
            for (int i = 0; inputLastName[i] != '\0'; i++) {
                if (!isalpha(inputLastName[i]) && !isspace(inputLastName[i])) {
                    isValidLastName = 0;
                    break;
                }
            }

            // �� �Է��� ��ȿ���� ������ �޽����� ����ϰ� �ݺ����� ó������ ���ư�
            if (!isValidLastName) {
                printf("������ ���� ����θ� �Է��ؾ� �մϴ�.\n");
                continue;
            }

            // �������� �̸��� �Է¹���
            printf("������ �̸��� �Է��ϼ���(����� �Է�): ");
            scanf_s(" %49[^\n]", inputFirstName, sizeof(inputFirstName));

            // �̸� �Է��� ��ȿ���� �˻�
            int isValidFirstName = 1;
            for (int i = 0; inputFirstName[i] != '\0'; i++) {
                if (!isalpha(inputFirstName[i]) && !isspace(inputFirstName[i])) {
                    isValidFirstName = 0;
                    break;
                }
            }

            // �̸� �Է��� ��ȿ���� ������ �޽����� ����ϰ� �ݺ����� ó������ ���ư�
            if (!isValidFirstName) {
                printf("������ �̸��� ����θ� �Է��ؾ� �մϴ�.\n");
                continue;
            }

            // ���� ù ���ڸ� �빮�ڷ�, ������ ���ڸ� �ҹ��ڷ� ��ȯ
            if (islower(inputLastName[0])) {
                inputLastName[0] = toupper(inputLastName[0]);
            }
           
            for (int i = 1; inputLastName[i] != '\0'; i++) {
                inputLastName[i] = tolower(inputLastName[i]);
            }

            // �̸��� ù ���ڸ� �빮�ڷ�, ������ ���ڸ� �ҹ��ڷ� ��ȯ
            if (!isupper(inputFirstName[0])) {
                inputFirstName[0] = toupper(inputFirstName[0]);
            }

            for (int i = 1; inputFirstName[i] != '\0'; i++) {
                inputFirstName[i] = tolower(inputFirstName[i]);
            }

            // ���� �̸��� ���ļ� ��ü ���� ����
            strcpy(inputFullName, inputFirstName);
            strcat(inputFullName, " "); // ���� �̸� ���̿� ���� �߰�
            strcat(inputFullName, inputLastName); // ���� �̸��� ���ļ� ��ü ���� ����

            // ��ü ������ names �迭�� ����
            strncpy(names[reservationCount], inputFullName, MAX_NAME_LENGTH - 1);


            char inputRoom[10]; // ����ڷκ��� �Է¹��� ���� ��ȣ�� ������ �迭
            
            // ����ڷκ��� �ִ� 9�ڸ������� ���� ��ȣ�� �Է� ����
            printf("���� ��ȣ�� �Է��ϼ���: ");
            scanf(" %9s", inputRoom);

            int isValidRoom = 1; // �Է¹��� ���� ��ȣ�� ��ȿ���� ��Ÿ���� ����
            for (int i = 0; inputRoom[i] != '\0'; i++) {
                // �Է¹��� ���� ��ȣ�� �� ���ڿ� ���� �˻�
                if (isdigit(inputRoom[i]) == 0 || isblank(inputRoom[i])) {
                    isValidRoom = 0; // ���ڰ� �ƴϰų� ���鹮���� ���
                    break;
                }
            }

            // �Է¹��� ���� ��ȣ�� ��ȿ�ϸ� ���� ������ �����ϰ�
            // ���� ���� ������Ų�� �޽��� ���
            if (isValidRoom && strlen(inputRoom) > 0) {
                roomNumbers[reservationCount] = atoi(inputRoom); // ������ ��ȯ�Ͽ� ����
                reservationCount++;
                printf("������ �߰��Ǿ����ϴ�.\n");
                break;
            }
            else {
                printf("���࿡ �����Ͽ����ϴ�.\n");
            }
            break;
        case '2':
            if (reservationCount > 0) { // ����� ������ �ִ� ��쿡�� ����
                printf("����� �������� ���� ��ȣ�� �Է��ϼ���: ");
                char input[10]; // ����ڷκ��� �Է¹��� ���� ��ȣ�� ������ �迭
                int roomNumber; // ������ ��ȯ�� ���� ��ȣ�� ������ ����

                while (1) { // ��ȿ�� �Է��� ���� ������ ���� ����
                    scanf_s(" %s", input, sizeof(input));

                    int valid = 1; // �Է°��� ��ȿ���� ��Ÿ���� ����

                    for (int i = 0; i < strlen(input); i++) {
                        // �Է°��� �� ���ڿ� ���� ���������� ���� ���θ� �˻�
                        if (!isdigit(input[i])) {
                            valid = 0; 
                            break;
                        }
                    }
                    if (valid && strlen(input) > 0) {
                        roomNumber = atoi(input); // ��ȿ�� ���ڰ� �Էµ� ��� ������ ��ȯ�Ͽ� ����
                        break;
                    }
                    else {
                        printf("��ȿ�� ���ڸ� �Է��ϼ���.\n");
                    }
                }

                int found = 0; // �Է¹��� ���� ��ȣ�� ���� ��Ͽ� �����ϴ��� ���θ� ��Ÿ���� ����

                for (int i = 0; i < reservationCount; i++) {
                    if (roomNumbers[i] == roomNumber) { // ���� ��Ͽ��� �Է¹��� ���� ��ȣ�� ã�� ���
                        found = 1; // ã������ ǥ��

                        // ���� ��� �� �� �ڸ� �޲ٱ�
                        for (int j = i; j < reservationCount - 1; j++) {
                            roomNumbers[j] = roomNumbers[j + 1];
                            strcpy(names[j], names[j + 1]);
                        }
                        reservationCount--; // ���� �� ����
                        printf("������ ��ҵǾ����ϴ�.\n");
                        break;
                    }
                }

                if (!found) {
                    printf("�ش� ���� ��ȣ�� ����� ������ �����ϴ�.\n");
                }
            }
            else {
                printf("���� ����� ������ �����ϴ�.\n");
            }
            break;
        case '3':
            if (reservationCount > 0) { // ����� ������ �ִ� ��쿡�� ����
                printf("-------���� ���-------\n");
                for (int i = 0; i < reservationCount; i++) {
                    printf("������ �̸�: %s\n", names[i]);
                    printf("���� ��ȣ: %d\n", roomNumbers[i]);
                    printf("-----------------------\n");
                }
            }
            else { // ���� ����� ����ִ� ���
                printf("���� ����� ������ �����ϴ�.\n");
            }
            break;
        case '4':
            printf("���α׷��� �����մϴ�.\n");
            break;
        default:
            printf("�߸��� �����Դϴ�. �ٽ� ������ �ּ���.\n");
        }
    } while (choice != '4'); // ����ڰ� ���α׷� ������ '4'�� �Է��� ������ �ݺ�

    return 0;
}