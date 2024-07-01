#include<stdio.h>
#include<time.h>
#include<stdlib.h>

// 난수 생성 부분 테스트
void main() {
    // time.h
    // time(NULL) --> 1970년 1월 1일 0시 0분 0초 이후로 지금까지 경과한 시간을 초로 가져온다.
    printf("%d\n", time(NULL));

    // stdlib.h
    // rand() 0 ~ 32767 사이의 난수(랜덤수)를 가져온다.
    // rand() % 100 --> 0 ~ 99 까지의 난수
    // rand() % 100 + 1 --> 0 ~ 100 까지의 난수

    // seed 값을 바탕으로 랜덤한 수가 나오게 설계되어있다.
    // 따라서 seed값이 같다면 여러번 실행해도 같은 결과가 나오게 된다.
    srand(time(NULL));

    for (int i = 0; i < 10; i++) {
        printf("랜덤으로 받아온 수 : %d\n", rand() % 100 + 1);
    }
}