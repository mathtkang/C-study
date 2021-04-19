#include <stdio.h>

// 8장 실습문제

int main(void) {
	//========== 실습문제1============
	printf("문자 '%c'의 아스키코드 값은 %d\n", 'A', 'A');
	printf("문자 '%c'의 아스키코드 값은 %d\n", 'Z', 'Z');
	printf("알파벳 대문자의 아스키코드 값 범위는 %d ~ %d\n", 'A', 'Z');

	printf("문자 '%c'의 아스키코드 값은 %d\n", 'a', 'a');
	printf("문자 '%c'의 아스키코드 값은 %d\n", 'z', 'z');
	printf("알파벳 소문자의 아스키코드 값 범위는 %d ~ %d\n", 'a', 'z');

	printf("문자 '%c'의 아스키코드 값은 %d\n", '0', '0');
	printf("문자 '%c'의 아스키코드 값은 %d\n", '9', '9');
	printf("숫자의 아스키코드 값 범위는 %d ~ %d\n", '0', '9');


	//========== 실습문제2============
	char str1[100], str2[100], str3[100];

	printf("문자열을 입력하세요>> ");
	gets_s(str1, sizeof(str1));
	printf("문자열을 입력하세요>> ");
	gets_s(str2, sizeof(str2));
	printf("문자열을 입력하세요>> ");
	gets_s(str3, sizeof(str3));

	printf("%s%s%s\n", str1, str2, str3);


	//========== 실습문제3============
	int square, circle, triangle;
	printf("네모 동그라미 세모>> ");
	scanf_s("%d%d%d", &square, &circle, &triangle);
	printf("%c - %c * %c\n", 'A' + square, 'A' + circle, 'A' + triangle);


	//========== 실습문제4============
	char ch1, ch2, ch3;

	printf("알파벳 대문자 세 개를 입력하세요>> ");
	scanf_s("%c%c%c", &ch1, 1, &ch2, 1, &ch3, 1);
	// ch1 = getchar(); ch2 = getchar(); ch3 = getchar();  // 똑같은 결과

	printf("평문: %c%c%c\n", ch1, ch2, ch3);
	printf("암호문: %d, %d, %d\n", ch1 - 'A', ch2 - 'A', ch3 - 'A');
	return 0;
}
