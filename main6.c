//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>
#include <math.h>
#include <stdlib.h>

int main(void){

// 10-1.실습문제
    //복합대입연산자 : +=, -=, *=, /=, %=, <<=, >>=, &=, |=, ^=
    int x, sum = 0;
    printf("x = ");
    scanf("%d", &x);
    sum += x;
    printf("sum = %d\n", sum);

    printf("x = ");
    scanf("%d", &x);
    sum += x;
    printf("sum = %d\n", sum);

    printf("x = ");
    scanf("%d", &x);
    sum += x;
    printf("sum = %d\n", sum);

    //연습문제 : A(1) = k, A(n) = A(n-1)*r
    int k, r;
    printf("k r>> ");
    scanf("%d%d", &k, &r);
    printf("%d\n", k);
    k *= r;
    printf("%d\n", k);
    k *= r;
    printf("%d\n", k);
    k *= r;
    printf("%d\n", k);
    k *= r;
    printf("%d\n", k);

    //증감연산자 : ++, -- : 변수의 값을 1 증가/감소 시킴
    int x1 = 10, y = 10;
    printf("x=%d, y=%d\n", x1, y);
    x1++; y--;
    printf("x=%d, y=%d\n", x1, y);
    x1++; y--;
    printf("x=%d, y=%d\n", x1, y);
    x1++; y--;
    printf("x=%d, y=%d\n", x1, y);

    //연습문제
    int n, n1, n2, n3, sum1 = 0;
    printf("정수 입력 >> ");
    scanf("%d", &n);
    if (n%2==1) { //홀수
        sum1++;
    }
    printf("정수 입력 >> ");
    scanf("%d", &n1);
    if (n1%2==1) { //홀수
        sum1++;
    }
    printf("정수 입력 >> ");
    scanf("%d", &n2);
    if (n2%2==1) { //홀수
        sum1++;
    }
    printf("정수 입력 >> ");
    scanf("%d", &n3);
    if (n3%2==1) { //홀수
        sum1++;
    }
    printf("홀수는 %d개입니다.\n", sum1);

    //전위&후위 증감연산자

    //전위
    int x2, y1;
    x2 = 10;
    y1 = ++x2 * 2;
    //같은말
//    x1++;
//    y1 = x1 * 2;
    printf("(전위++x) x=%d y=%d\n", x2, y1);
    
    //후위
    int x3, y2;
    x2 = 10;
    y2 = x3++ * 2;
    //같은말
//    y2 = x2 * 2;
//    x2++;
    printf("(후위x++) x=%d y=%d\n", x3, y2);

    //연습문제
    //전위
    int x4 = 10, y3 = 10;
    printf("x=%d, y=%d\n", x4, y3); //10, 10
    printf("x=%d, y=%d\n", ++x4, --y3); //11, 9
    printf("x=%d, y=%d\n", ++x4, --y3); //12, 8
    printf("x=%d, y=%d\n", ++x4, --y3); //13, 7
    //후위
    int x5 = 10, y4 = 10;
    printf("x=%d, y=%d\n", x5, y4); //10, 10
    printf("x=%d, y=%d\n", x5++, y4--); //10, 10
    printf("x=%d, y=%d\n", x5++, y4--); //11, 9
    printf("x=%d, y=%d\n", x5++, y4--); //12, 8

    //관계연산자, 논리연산자
//    산술연산식 > 정수, 실수 값
//    논리연산식 > 논리값(참, 거짓)
//    참 : 0이 아닌 정수, 거짓 : 0


    return 0;
}

