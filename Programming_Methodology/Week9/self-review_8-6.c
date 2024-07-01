#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LENGTH 100

void convertCase(char str[], int* status);

int main() {
    char str[MAX_LENGTH];
    int status = 0;
    char continueInput[2]; // 사용자가 계속 입력하길 원할 때 사용하는 문자열

    puts("사용자가 입력한 문자열에서 대문자를 소문자로, 소문자를 대문자로 바꾸어 출력해주는 프로그램입니다.\n");

    do {
        // str 배열 초기화
        memset(str, '\0', sizeof(str));

        printf("텍스트를 입력하세요 (최대 100자): ");
        scanf_s(" %99[^\n]", str, sizeof(str)); // 텍스트를 입력받음 (공백 문자 제외)

        // 입력이 최대 길이보다 길 경우 나머지 입력을 비움
        int ch;
        while ((ch = getchar()) != '\n' && ch != EOF);

        // 입력된 문자열의 길이가 최대 길이를 초과한 경우 오류 표시
        if (strlen(str) >= MAX_LENGTH) {
            status = 1;
        }

        if (status == 0) {
            printf("변환 결과: ");
            convertCase(str, &status);
            printf("\n");
            puts("변환이 완료되었습니다.\n");
            printf("입력한 문자열에서 알파벳이 아닌 문자의 개수: %d\n", status);
        }
        else {
            printf("입력이 최대 길이(%d자)를 초과하였습니다.\n", MAX_LENGTH - 1);
        }

        printf("계속 입력하시겠습니까? (y/n): ");
        scanf_s(" %1s", continueInput, sizeof(continueInput));

        // 입력이 유효한지 확인하고, 유효하지 않으면 재입력 요구
        while (getchar() != '\n');

        status = 0; // status 초기화
    } while (continueInput[0] == 'y');

    return 0;
}


void convertCase(char str[], int* status) {
    for (int i = 0; i < strlen(str); i++) {
        if (isalpha(str[i])) {
            if (islower(str[i])) {
                putchar(toupper(str[i])); // 소문자를 대문자로 변환하여 출력
            }
            else {
                putchar(tolower(str[i])); // 대문자를 소문자로 변환하여 출력
            }
        }
        else {
            putchar(str[i]); // 알파벳이 아닌 경우에는 그대로 출력
            if (str[i] != ' ')
            {
                ++(*status); // 공백 문자가 아닌 경우 알파벳이 아닌 문자 개수 status를 증가시킴
            }
        }
    }
}