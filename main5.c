//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>
#include <math.h>
#include <stdlib.h>

int main(void){
    //수업내용 복습
    printf("%d + %d = %f\n", 10, 20, 30.0);
    //format string : 형식문자열 == "%d + %d = %f\n"
    //format specifiers : 형식지정자, 변환문자열, 서식문자, 서식지정자 == "%d", "%f"

    //printf() 서실 지정 : 기본적으로 왼쪽 정렬
    printf("%5d", 333); //__333 //'%'와 'd'사이에 전체 공간의 크기를 적으면 오른쪽 정렬시킬 수 있음
    printf("%05d", 333); //00333 //크기 앞에 0을 넣으면 빈 공간을 0으로 채움
    printf("%05d", 12345678); //12345678 //출력할 내용이 공간의 크기보다 크면 %d와 차이가 없음(0은 우선순위가 아님)

    int x1 = 333;
    char str[10] = "abc";

    printf("0123456789\n");
    printf("----------\n");

    printf("%d\n", x1);
    printf("%5d\n", x1);
    printf("%05d\n", x1);

    printf("%s\n", str);
    printf("%5s\n", str);

    printf("%5d\n", 12345678);
    printf("%5s\n", "abcdefg");

    //연습문제
    int kor1 = 50, eng1 = 5, math1 = 100, sci1 = 95;
    int kor2 = 85, eng2 = 100, math2 = 80, sci2 = 72;
    printf(" 국어  영어  수학  과학\n===================\n");
    printf("%4d %4d %4d %4d\n",kor1, eng1, math1, sci1);
    printf("%4d %4d %4d %4d\n",kor2, eng2, math2, sci2);

    //printf() 서식 지정 - 실수
    double d = 123.456789;
    printf("01234567890123456789\n");
    printf("------------------------\n");

    printf("%f\n",d);      //123.456789
    printf("%20f\n",d);    //          123.456789
    printf("%020f\n",d);   //0000000000123.456789

    printf("%.3f\n",d);    //123.457
    printf("%20.3f\n",d);  //             123.457
    printf("%020.3f\n",d); //0000000000000123.457

    //연습문제
    double a1 = 12.34, a2 = 5.67, a3 = 1.2, a4 = 0.345;
    printf("%8.3f + %8.3f = %8.3f\n", a1, a2, a1+a2);
    printf("%8.3f + %8.3f = %8.3f\n", a3, a4, a3+a4);

    //이스케이프 시퀀스
    printf("큰따옴표는 \"이렇게\" 출력한다.\n"); //큰따옴표 출력
    printf("프로그래밍을 \'코딩\'이라고도 부른다.\n"); //작은따옴표 출력
    printf("그가 말했다. \"비가 오려나보다.\"\n");
    printf("삼만원은 \₩30,000 라고 쓴다.\n"); //원화표시
    printf("오늘 비가 올 확률은 60%%라고 한다.\n"); //퍼센트표시

    //연습문제
    printf("printf()에서 큰 따옴표는 \₩\"를 써서 출력한다.\n");

    //8진수, 16진수
    int dec = 200;
    int oct = 0310; //310 //8진수 : 숫자 앞에 0를 붙여서 표기
    int hex = 0xC8; //C8 //16진수 : 숫자 앞에 0x를 붙여서 표기

    printf("%d %d %d\n", dec, oct, hex); //200 200 200

    printf("%d %o %x\n", dec, oct, hex); //200 310 c8   //8진수 : %o > 8진수로 출력
    printf("%d %o %X\n", dec, oct, hex); //200 310 C8   //16진수 : %x, %X > 16진수로 출력
    printf("%d %o %#X\n", dec, oct, hex); //200 310 0XC8    //% 대신 %# 을 쓰면 > 0,0X 붙여서 전체 출력

    printf("%d %#o %#x\n", dec, dec, dec); //200 0310 0xc8

    //연습문제
    int hex1 = 0xEA, hex2 = 0x4B, hex3 = hex1-hex2;
    printf("%#X - %#X = %#X\n", hex1, hex2, hex3); //0XEA - 0X4B = 0X9F

    //비트 연산자 : 정수를 비트 단위로 연산
    //비트 시프트 연산자 : 좌,우로 n 비트를 시프트
    //비트 논리 연산자 : 비트 단위로 not, and, or, xor 연산
    printf("%d\n", 10 << 1); // 10*2^1 //20
    printf("%d\n", 10 << 2); // 10*2^2 //40
    printf("%d\n", 10 << 3); // 10*2^3 //80

    printf("%d\n", 10 >> 1); // 10/2^1 //5
    printf("%d\n", 10 >> 2); // 10/2^2 //2
    printf("%d\n", 10 >> 3); // 10/2^3 //1

    //연습문제
    int x2;
    printf("정수 x를 입력하세요 >> "); //20
    scanf("%d", &x2);
    printf("x * 2 = %d\n", x2 << 1); //40
    printf("x * 4 = %d\n", x2 << 2); //80
    printf("x * 8 = %d\n", x2 << 3); //160
    printf("x * 16 = %d\n", x2 << 4); //320
    printf("x * 32 = %d\n", x2 << 5); //640
    printf("x * 64 = %d\n", x2 << 6); //1280

    //비트 논리 연산자
//    ~ : bitwise NOT
//    & : bitwise AND
//    | : bitwise OR
//    ^ : bitwise XOR
    unsigned int x = 0xA, y = UINT_MAX; //0xFFFFFFFF
    printf("bitwise NOT : %08X\n", ~x); //FFFFFFF5
    printf("bitwise AND : %08X\n", x&y); //0000000A
    printf("bitwise OR : %08X\n", x|y); //FFFFFFFF
    printf("bitwise XOR : %08X\n", x^y); //FFFFFFF5

//    비트 논리 연산자 - 활용 (예.bitmask)
//    정수 한 개를 입력 받아, 짝수면 0, 홀수면 1을 출력하는 프로그램
//    x에 16진수 1을 곱해서 is_odd를 16진수(1 or 0)으로 만드는 아이디어!
    int x3;
    printf("정수 입력 >> ");
    scanf("%d", &x3);
    int is_odd = x3 & 0x1;//0x1는 16진수의 1
    printf("%d\n", is_odd);
    //x가 짝수면, 0&1=1 true(1), x가 홀수면, 1&1=0 false(0)

//    연습문제
//    정수 한 개를 입력 받고, 밑에서 3번째 비트를 추출해서 0 or 1을 출력
    int x4;
    printf("정수 입력 >> ");
    scanf("%d", &x4);
    printf("3rd LSB = %d\n", (x4 >> 2) & 0x1);


// 9-1.실습문제

    //실습1
    printf("슬래시('/')를 뒤집으면 백슬래시('\\')이다.\n");
    printf("\'₩t'는 탭 키를 뜻한다.\n");
    printf("문자열은 큰 따옴표(\")로 둘러싸서 표현한다.\n");

    //실습2
    int g;
    printf("구구단 몇 단?(2~19) >> ");
    scanf("%d",&g);
    printf("%d * 1 = %3d\n", g, g*1);
    printf("%d * 2 = %3d\n", g, g*2);
    printf("%d * 3 = %3d\n", g, g*3);
    printf("%d * 4 = %3d\n", g, g*4);
    printf("%d * 5 = %3d\n", g, g*5);
    printf("%d * 6 = %3d\n", g, g*6);
    printf("%d * 7 = %3d\n", g, g*7);
    printf("%d * 8 = %3d\n", g, g*8);
    printf("%d * 9 = %3d\n", g, g*9);

    //실습3
    int square, circle, triangle;
    printf("네모 동그라미 세모>> ");
    scanf("%d%d%d", &square, &circle, &triangle);
    printf("%5d + %5d * %5d = %5d\n", square, circle, triangle, square+circle*triangle);
    printf("%#5o + %5#o * %#5o = %5#o\n", square, circle, triangle, square+circle*triangle); //%#3o == %3#o
    printf("%5#X + %#5X * %5#X = %#5X\n", square, circle, triangle, square+circle*triangle);
//    8진수, 16진수에서 동일하게 칸을 맞추려면 %#3o == %3#o 둘다 사용 가능하다

    //실습4
    printf("weekday  temperature(low~high)  rain prob.");
    printf("==========================================");
    printf(" SUNDAY                 9 ~ 24        8.5%");
    printf(" MONDAY                12 ~ 21       22.4%");
    printf("TUESDAY                11 ~ 22       67.0%");

    //실습5-1
    unsigned int u1;
    printf("양의 정수 >> ");
    scanf("%d", &u1);
    printf("LSB = %d\n", u1 & 0x1);

    //실습5-2
    unsigned int u2;
    printf("양의 정수 >> ");
    scanf("%d", &u2);
    printf("LSB1 = %d\n", u2 & 0x1);
    printf("LSB2 = %d\n", (u2 >> 1) & 0x1);
    printf("LSB3 = %d\n", (u2 >> 2) & 0x1);//3번째 lsb는 2번 쉬프트함

    //실습6-1
    int k;
    printf("k = ");
    scanf("%d", &k);
    printf("2의 %d 제곱 = %d\n", k, 1 << k );
    
    //실습6-2
    unsigned long long k2;
    printf("k = ");
    scanf("%llu", &k2);
    printf("2의 %llu 제곱 = %llu\n", k2, 1 << k2 ); // k=31까지는 가능, 32다시 1 입력받는 것처럼 되돌아감, 40은 256 출력
    
//    1이 int형이라 1 << k 또한 32비트가 됨 : 32비트, 즉 31 까지는 입력받음(마지막 1비트는 null자리)
//    그래서 1을 int 대신 unsigned long long 로 인식되도록 해야한다.
    printf("2의 %llu 제곱 = %llu\n", k2, (unsigned long long)1 << k2 );
    
    return 0;
}
