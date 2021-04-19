//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>
#include <math.h>
#include <stdlib.h>

int main(void){
    //수업내용 복습
    
    //문자체계
//    문자는 2진수로 변환해서 저장, 각 문자에 고유 번호를 부여한 코드표 사용 - 아스키(ASCII)코드
    
    char i = 65;
    printf("%d %c \n", 65, 65); //%d : 65를 정수로 출력 / %c : 65를 문자 'A'로 변환해서 출력
    printf("%d %c \n", i, i);

    char ch = 'A'; //정수 65가 저장됨
    printf("%d %c \n", 'A', 'A');
    printf("%d %c \n", ch, ch);

    //연습문제
    char ch_;
    printf("문자 하나를 입력하세요>> ");
    scanf("%c", &ch_);
    printf("문자 %c의 아스키 코드는 %d입니다. \n", ch_,ch_);

    //문자 상수 표현 예제
    char ch1 = '1'; //정수 49가 저장됨
    printf("문자 '%c'의 아스키 코드는 %d입니다. \n", ch1, ch1); //문자 '1'의 아스키 코드는 49입니다.

    char i1 = 1; //정수 1이 저장됨 > 아스키코드 1은 문자로 null값이다.
    printf("문자 '%c'의 아스키 코드는 %d입니다. \n", i1, i1); //문자 ''의 아스키 코드는 1입니다.

    //문자 상수의 연산 : 문자 상수는 정수값이니까 정수 연산 가능
    char ch2 = 'A'; // 65 : A
    char ch3 = ch2 + 3; // 65+3=68 : D
    //한번에 'A' + 3 해도 가능
    printf("%c + 3 = %c \n", ch2, ch3); //A + 3 = D

    //연습문제
    printf("%d %d \n", 'A', 'a'); //65 97
    char ch4;
    printf("알파벳 대문자 입력>> ");
    scanf("%c", &ch4);
    char ch4s = ch4 + 32;
    printf("알파벳 '%c'의 소문자는 '%c'입니다.", ch4, ch4s);
    
    //scanf_s() 함수 : xcode에서는 scanf_s를 쓸 수 없어 scanf로 작성하였습니다 (https://hello2.tistory.com/24)
//    정수, 실수 입력받기 : scanf()와 동일
    int x, y;
    scanf("%d%d", &x, &y);
    printf("x=%d y=%d \n", x, y);
    
//    문자, 문자열 입력받기 : 변수이름 뒤에 저장 공간의 크기 적어줌 scanf_s(,,sizeof())
    
    //문자열 입출력 (기타)
//    -문자 입출력 함수
//    getchar() : 문자를 입력 받아서 반환해줌
//    putchar(문자) : 문자를 출력
    
    printf("문자 두 개 입력>> ");
    char ch5 = getchar(); //scanf 역할
    char ch6 = getchar();

    printf("입력 받은 문자는 : ");
    putchar(ch5); //printf 역할
    putchar(ch6);
    
//    -문자열 입력 함수
//    gets_s(배열이름, 배열크기) : 공백 '포함'해서 한 줄 입력 받음 //마찬가지로 xcode 사용 불가
    char str[100];
    printf("문자열 입력>> ");
    gets(str);
    printf("<%s> \n",str);

//    -문자열 출력 함수
//    puts(문자열상수) or puts(배열이름) : 화면에 한 줄을 출력, 문자열을 출력한 후 자동으로 줄바꿈('\n')이 일어난다.

    
    
// 8-1.실습문제
    
    //실습1
    printf("문자 두 개를 입력하시오");
    char c1, c2;
    scanf("%c%c",&c1,&c2);
    printf("문자 '%c'의 아스키코드 값은 %d",c1,c1);
    printf("문자 '%c'의 아스키코드 값은 %d",c2,c2);
    printf("알파벳 대문자의 아스키코드 값 범위는 %d ~ %d",c1,c2);
    
    //실습2
    char str1[100], str2[100], str3[100];
    printf("문자열을 입력하세요>> ");
//    gets(str1); // warning: this program uses gets(), which is unsafe.
    printf("문자열을 입력하세요>> ");
//    gets(str2);
    printf("문자열을 입력하세요>> ");
//    gets(str3);
    printf("%s%s%s\n", str1, str2, str3);
    
    //실습3
    int square, circle, triangle;
    printf("네모 동그라미 세모>> ");
    scanf("%d%d%d", &square, &circle, &triangle);
    printf("%c - %c * %c \n", square+'A', circle+'A', triangle+'A'); //각각에 'A'만큼을 더 더해준다
    
    //실습4
    char ch7, ch8, ch9;
    printf("알파벳 대문자 세 개를 입력하세요>> ");
    scanf("%c%c%c", &ch7, &ch8, &ch9);
    // ch7 = getchar(); ch8 = getchar(); ch9 = getchar();
    printf("평문 : %c%c%c \n", ch7, ch8, ch9);
    printf("암호문 : %d, %d, %d \n", ch7-'A', ch8-'A', ch9-'A'); //'A'->0 이니까 각 아스키코드에서 'A'만큼을 빼준다.
    
    
    return 0;
}

