#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LENGTH 100

void convertCase(char str[], int* status);

int main() {
    char str[MAX_LENGTH];
    int status = 0;
    char continueInput[2]; // ����ڰ� ��� �Է��ϱ� ���� �� ����ϴ� ���ڿ�

    puts("����ڰ� �Է��� ���ڿ����� �빮�ڸ� �ҹ��ڷ�, �ҹ��ڸ� �빮�ڷ� �ٲپ� ������ִ� ���α׷��Դϴ�.\n");

    do {
        // str �迭 �ʱ�ȭ
        memset(str, '\0', sizeof(str));

        printf("�ؽ�Ʈ�� �Է��ϼ��� (�ִ� 100��): ");
        scanf_s(" %99[^\n]", str, sizeof(str)); // �ؽ�Ʈ�� �Է¹��� (���� ���� ����)

        // �Է��� �ִ� ���̺��� �� ��� ������ �Է��� ���
        int ch;
        while ((ch = getchar()) != '\n' && ch != EOF);

        // �Էµ� ���ڿ��� ���̰� �ִ� ���̸� �ʰ��� ��� ���� ǥ��
        if (strlen(str) >= MAX_LENGTH) {
            status = 1;
        }

        if (status == 0) {
            printf("��ȯ ���: ");
            convertCase(str, &status);
            printf("\n");
            puts("��ȯ�� �Ϸ�Ǿ����ϴ�.\n");
            printf("�Է��� ���ڿ����� ���ĺ��� �ƴ� ������ ����: %d\n", status);
        }
        else {
            printf("�Է��� �ִ� ����(%d��)�� �ʰ��Ͽ����ϴ�.\n", MAX_LENGTH - 1);
        }

        printf("��� �Է��Ͻðڽ��ϱ�? (y/n): ");
        scanf_s(" %1s", continueInput, sizeof(continueInput));

        // �Է��� ��ȿ���� Ȯ���ϰ�, ��ȿ���� ������ ���Է� �䱸
        while (getchar() != '\n');

        status = 0; // status �ʱ�ȭ
    } while (continueInput[0] == 'y');

    return 0;
}


void convertCase(char str[], int* status) {
    for (int i = 0; i < strlen(str); i++) {
        if (isalpha(str[i])) {
            if (islower(str[i])) {
                putchar(toupper(str[i])); // �ҹ��ڸ� �빮�ڷ� ��ȯ�Ͽ� ���
            }
            else {
                putchar(tolower(str[i])); // �빮�ڸ� �ҹ��ڷ� ��ȯ�Ͽ� ���
            }
        }
        else {
            putchar(str[i]); // ���ĺ��� �ƴ� ��쿡�� �״�� ���
            if (str[i] != ' ')
            {
                ++(*status); // ���� ���ڰ� �ƴ� ��� ���ĺ��� �ƴ� ���� ���� status�� ������Ŵ
            }
        }
    }
}