#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void main() {
	// strcmp(문자열1, 문자열2);
	// 문자열 1과 문자열 2가 같다면 0
	// 문자열 1이 문자열 2보다 아스키코드값이 빠르다면 -1
	// 문자열 1이 문자열 2보다 아스키코드값이 느리다면 1

	printf("%d\n", strcmp("apple", "apple")); // 결과: 0 -> 같다
	printf("%d\n", strcmp("apple", "banana")); // 결과: -1 -> 다르다,  앞에 있는 애가 더 빠르다
	printf("%d\n", strcmp("banana", "apple")); // 결과: 1 -> 다르다, 뒤에 있는 애가 더 빠르다

	// strcat(변수명, 문자열 값)
	// 해당 변수에 들어있는 문자열과 뒤에 전달해준 문자열을 연결해서 해당 변수에 저장해준다.
	char target[10] = "hi";
	strcat(target, "bye");
	printf("결과: %s\n", target); // 중간에 null문자는 어떻게 되지?

	char str1[] = "korea";
	/*str1 = "singapore";*/ // 불가능
	//strcpy(바꿔줄 변수, 바꿀 문자열 값); 문자열 값을 변경시켜준다.
	strcpy(str1, "singapore");
	printf("바뀐 값: %s\n", str1);


}