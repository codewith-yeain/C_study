#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MAX_RESERVATION 10
#define MAX_NAME_LENGTH 50

// 예약 정보를 저장할 배열
char names[MAX_RESERVATION][MAX_NAME_LENGTH * 2]; // 예약자 이름을 저장하는 배열
int roomNumbers[MAX_RESERVATION]; // 객실 번호를 저장하는 배열
int reservationCount = 0; // 예약된 객실 수를 나타내는 변수

int main() {
    char choice; // 사용자의 선택을 저장할 변수

    puts("객실 예약을 도와주는 프로그램입니다.\n"); // 프로그램 설명

    do {
        printf("\n예약 프로그램\n");
        printf("1. 예약 추가\n");
        printf("2. 예약 취소\n");
        printf("3. 예약 확인\n");
        printf("4. 종료\n");
        printf("선택하세요: ");
        scanf_s(" %c", &choice);

        // 사용자 입력에 따른 기능 수행
        switch (choice) {
        case '1':
            if (reservationCount >= MAX_RESERVATION) {
                printf("더 이상 예약을 추가할 수 없습니다.\n");
                break;
            }

            char inputLastName[MAX_NAME_LENGTH]; // 성을 저장할 배열
            char inputFirstName[MAX_NAME_LENGTH]; // 이름을 저장할 배열
            char inputFullName[MAX_NAME_LENGTH * 2]; // 전체 성함을 저장할 배열

            // 예약자 성을 입력받음
            printf("예약자 성을 입력하세요(영어로 입력): ");
            scanf_s(" %49[^\n]", inputLastName, sizeof(inputLastName));

            // 성 입력의 유효성을 검사
            int isValidLastName = 1;
            for (int i = 0; inputLastName[i] != '\0'; i++) {
                if (!isalpha(inputLastName[i]) && !isspace(inputLastName[i])) {
                    isValidLastName = 0;
                    break;
                }
            }

            // 성 입력이 유효하지 않으면 메시지를 출력하고 반복문의 처음으로 돌아감
            if (!isValidLastName) {
                printf("예약자 성은 영어로만 입력해야 합니다.\n");
                continue;
            }

            // 예약자의 이름을 입력받음
            printf("예약자 이름을 입력하세요(영어로 입력): ");
            scanf_s(" %49[^\n]", inputFirstName, sizeof(inputFirstName));

            // 이름 입력의 유효성을 검사
            int isValidFirstName = 1;
            for (int i = 0; inputFirstName[i] != '\0'; i++) {
                if (!isalpha(inputFirstName[i]) && !isspace(inputFirstName[i])) {
                    isValidFirstName = 0;
                    break;
                }
            }

            // 이름 입력이 유효하지 않으면 메시지를 출력하고 반복문의 처음으로 돌아감
            if (!isValidFirstName) {
                printf("예약자 이름은 영어로만 입력해야 합니다.\n");
                continue;
            }

            // 성의 첫 글자를 대문자로, 나머지 글자를 소문자로 변환
            if (islower(inputLastName[0])) {
                inputLastName[0] = toupper(inputLastName[0]);
            }
           
            for (int i = 1; inputLastName[i] != '\0'; i++) {
                inputLastName[i] = tolower(inputLastName[i]);
            }

            // 이름의 첫 글자를 대문자로, 나머지 글자를 소문자로 변환
            if (!isupper(inputFirstName[0])) {
                inputFirstName[0] = toupper(inputFirstName[0]);
            }

            for (int i = 1; inputFirstName[i] != '\0'; i++) {
                inputFirstName[i] = tolower(inputFirstName[i]);
            }

            // 성과 이름을 합쳐서 전체 성함 생성
            strcpy(inputFullName, inputFirstName);
            strcat(inputFullName, " "); // 성과 이름 사이에 공백 추가
            strcat(inputFullName, inputLastName); // 성과 이름을 합쳐서 전체 성함 생성

            // 전체 성함을 names 배열에 복사
            strncpy(names[reservationCount], inputFullName, MAX_NAME_LENGTH - 1);


            char inputRoom[10]; // 사용자로부터 입력받을 객실 번호를 저장할 배열
            
            // 사용자로부터 최대 9자리까지의 객실 번호를 입력 받음
            printf("객실 번호를 입력하세요: ");
            scanf(" %9s", inputRoom);

            int isValidRoom = 1; // 입력받은 객실 번호의 유효성을 나타내는 변수
            for (int i = 0; inputRoom[i] != '\0'; i++) {
                // 입력받은 객실 번호의 각 문자에 대해 검사
                if (isdigit(inputRoom[i]) == 0 || isblank(inputRoom[i])) {
                    isValidRoom = 0; // 숫자가 아니거나 공백문자인 경우
                    break;
                }
            }

            // 입력받은 객실 번호가 유효하면 예약 정보를 저장하고
            // 예약 수를 증가시킨후 메시지 출력
            if (isValidRoom && strlen(inputRoom) > 0) {
                roomNumbers[reservationCount] = atoi(inputRoom); // 정수로 변환하여 저장
                reservationCount++;
                printf("예약이 추가되었습니다.\n");
                break;
            }
            else {
                printf("예약에 실패하였습니다.\n");
            }
            break;
        case '2':
            if (reservationCount > 0) { // 예약된 정보가 있는 경우에만 실행
                printf("취소할 예약자의 객실 번호를 입력하세요: ");
                char input[10]; // 사용자로부터 입력받을 객실 번호를 저장할 배열
                int roomNumber; // 정수로 변환한 객실 번호를 저장할 변수

                while (1) { // 유효한 입력을 받을 때까지 루프 실행
                    scanf_s(" %s", input, sizeof(input));

                    int valid = 1; // 입력값의 유효성을 나타내는 변수

                    for (int i = 0; i < strlen(input); i++) {
                        // 입력값의 각 문자에 대해 숫자인지에 대한 여부를 검사
                        if (!isdigit(input[i])) {
                            valid = 0; 
                            break;
                        }
                    }
                    if (valid && strlen(input) > 0) {
                        roomNumber = atoi(input); // 유효한 숫자가 입력된 경우 정수로 변환하여 저장
                        break;
                    }
                    else {
                        printf("유효한 숫자를 입력하세요.\n");
                    }
                }

                int found = 0; // 입력받은 객실 번호가 예약 목록에 존재하는지 여부를 나타내는 변수

                for (int i = 0; i < reservationCount; i++) {
                    if (roomNumbers[i] == roomNumber) { // 예약 목록에서 입력받은 객실 번호를 찾은 경우
                        found = 1; // 찾았음을 표시

                        // 예약 취소 후 빈 자리 메꾸기
                        for (int j = i; j < reservationCount - 1; j++) {
                            roomNumbers[j] = roomNumbers[j + 1];
                            strcpy(names[j], names[j + 1]);
                        }
                        reservationCount--; // 예약 수 감소
                        printf("예약이 취소되었습니다.\n");
                        break;
                    }
                }

                if (!found) {
                    printf("해당 객실 번호로 예약된 정보가 없습니다.\n");
                }
            }
            else {
                printf("현재 예약된 정보가 없습니다.\n");
            }
            break;
        case '3':
            if (reservationCount > 0) { // 예약된 정보가 있는 경우에만 실행
                printf("-------예약 목록-------\n");
                for (int i = 0; i < reservationCount; i++) {
                    printf("예약자 이름: %s\n", names[i]);
                    printf("객실 번호: %d\n", roomNumbers[i]);
                    printf("-----------------------\n");
                }
            }
            else { // 예약 목록이 비어있는 경우
                printf("현재 예약된 정보가 없습니다.\n");
            }
            break;
        case '4':
            printf("프로그램을 종료합니다.\n");
            break;
        default:
            printf("잘못된 선택입니다. 다시 선택해 주세요.\n");
        }
    } while (choice != '4'); // 사용자가 프로그램 종료인 '4'를 입력할 때까지 반복

    return 0;
}