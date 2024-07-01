#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	FILE* cfPtr; // 파일 포인터 선언 부분

	if ((cfPtr = fopen("clients.txt", "w")) == NULL) {	// 파일이 잘 안열렸을 때
		puts("File could not be opened");
	}
	else {												// 파일이 잘 열렸을 때. 만약 파일이 없으면 만들고 그게 열림.
		puts("Enter the account, name, and balance.");	// 만약 같은 경로에 같은 이름의 파일이 있다면 경고 없이 그 파일안에 모든 것이 없어지고 새로 쓰이는 것
		puts("Enter EOF to end input.");
		printf("%s", "? ");

		unsigned int account;
		char name[30];
		double balance;

		scanf("%d%29s%lf", &account, name, &balance);

		while (!feof(stdin)) { // 사용자가 eof를 입력한 것이 아니라면 nonzero 리턴. while 실행
			fprintf(cfPtr, "%d %s %.2f\n", account, name, balance);
			printf("%s", "? ");
			scanf("%d%29s%lf", &account, name, &balance);
		}

		fclose(cfPtr); // 작업 종료 시 파일과 연결 끊음
	}
}