//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>
#include <math.h>
#include <stdlib.h>

int main(void){
    // 수업내용 복습

//형변환(TYPE CASTING) : 데이터의 자료형이 변하는 현상

//1.자동 형변환(암묵적 형변환) (작은 자료형 값을 큰 자료형으로 변환)
//  1)데이터의 자료형 < 변수의 자료형 : 정보 손실 없음
    short s = 10;
    //short형 데이터 -> int형 데이터 -> int형 변수에 저장
    int i = s;
    printf("%d \n",i);
//  2)데이터의 자료형 > 변수의 자료형 : 정보 손실 가능 (자료형으로 담을 수 있는 변수의 크기를 넘어가서 정보 손실 발생) //경고발생
    short s1 = 50000; //short형>크기 :2byte : -32768 ~ +32767
    printf("%d \n",s1);

    int i1 = 100000;
    short s2 = i1;
    printf("%d \n", s2);

    double d = 123.45;
    int i2 = d;
    printf("%d \n", i2); //소숫점 이후의 값 버리고 출력

//2.명시적 형변환 : 데이터의 자료형을 프로그래머가 직접 변환 : 넣는 값 앞에 (자료형) 적어줌 //경고없음
    double d1 = 123.45;
    int i3 = (int) d1;
    printf("%d \n", i3);

//  1)더 큰 자료형으로 강제 형변환
    int x = 20, y = 8;
//    double d2 = x/y; //2.00 //노노
    double d2 = x/ (double)y; //2.50 //이렇게 써야함
//    double d2 = (double) x/y; //잘못된 형변환
    printf("%.2f \n", d2);

//  2)더 작은 자료형으로 강제 형변환
    double x1 = 20.5, y1 = 8.5;
//    int i4 = x1/y1; //2
    int i4 = (int) (x1/y1); //2
    printf("%d \n", i4);

    //연습1
    printf("국어 영어 수학 점수 >> ");
    int kor, eng, math;
    scanf("%d %d %d", &kor, &eng, &math);
    double evr = (double) (kor + eng + math)/3;
    printf("총점은 %d, 평균 점수는 %.2f점 입니다.", kor + eng + math, evr);

//문자와 문자열 : 문자는 '작은따옴표,한자리' , 문자열은 "큰따옴표,공백시 끊어읽음"
    char a,b,c;
    a = 'a'; b = 'b'; c = 'c';
    printf("%c,%c,%c", a,b,c);
    printf("문자 세 개 입력 >> ");
    scanf("%c%c%c", &a, &b, &c);
    printf("a=%c, b=%c c=%c \n", a,b,c);

    // 문자열 출력
    char str[100] = "<Hello>";//문자열은 선언와 초기화를 동시에 해야함
//    char str[100]; //선언하면 무조건 scanf 해줘야 함
//    str[100] = "<Hello>"; //오류발생
    printf("문자 배열 str에 저장된 문자열은 : %s \n", str);

    // 문자열 입력 (하나)
    char stri[100];
    printf("문자열 입력 >> "); //공백이 있으면 그 뒤로는 인식 못함
    scanf("%s",stri); //문자열의 입력받음에는 &사용 안함
    printf("문자 배열 str에 저장된 문자열은 : %s \n",stri);

    // 자열 입력 (여러개)
    char str1[100], str2[100], str3[100];
    printf("문자열 세 개 입력 >> "); //공백을 기준으로 문자열 나눔
    scanf("%s%s%s", str1,str2,str3); //문자열의 입력받음에는 &사용 안함
    printf("문자 배열 str에 저장된 문자열은 : %s,%s,%s \n", str1,str2,str3);


    printf("정수 출력 : %d\n", 123+10);
    printf("문자열 출력 : %s\n", "123 + 10");
    printf("%d %d %d %d\n", //atoi()메서드 : 문자열->정수
           atoi("123"),
           atoi("-123"),
           atoi("abc"),
           atoi("123abc"));
    printf("%.2f %.2f\n",
           atof("123"),
           atof("123.45"));

// 7-1.실습문제

    //실습1
    double a1, b1, div;
    printf("정수 두 개 입력 >> ");
    scanf("%lf %lf", &a1, &b1);
    div = a1/b1;
    printf("%.0f 나누기 %.0f는 %.2f입니다.", a1, b1, div);

    //실습2
    char c1, c2, c3;
    printf("문자 세 개 입력 >> ");
    scanf("%c%c%c", &c1, &c2, &c3);
    printf("입력 받은 문자는 '%c', '%c', '%c'입니다.", c1, c2, c3);

    //실습3
    char card1, card2, card3;
    printf("카드 세 장의 이름 >> ");
    scanf("%c%c%c", &card1, &card2, &card3);
    printf("%c-%c-%c \n", card1, card2, card3);
    printf("%c-%c-%c \n", card1, card3, card2);
    printf("%c-%c-%c \n", card2, card1, card3);
    printf("%c-%c-%c \n", card2, card3, card1);
    printf("%c-%c-%c \n", card3, card1, card2);
    printf("%c-%c-%c \n", card3, card2, card1);

    //실습4
    char title[100], writer[100], publisher[100];
    printf("제목>> ");
    scanf("%s", title);
    printf("저자>> ");
    scanf("%s", writer);
    printf("출판사>> ");
    scanf("%s", publisher);
    printf("제목은 %s, 저자는 %s, 출판사는 %s입니다.", title, writer, publisher);

    //실습5
    int num;
    char ch1[100], ch2[100], ch3[100], ch4[100];
    printf("주소>> ");
    scanf("%d%s%s%s%s", &num, ch1, ch2, ch3, ch4);
    printf("주소는 '(%d) %s %s %s %s' 입니다.", num, ch1, ch2, ch3, ch4);

    //실습6
    char a11[10], a2[10], a3[10], a4[10], a5[10];
    printf("수식을 입력하세요>> ");
    scanf("%s%s%s%s%s", a11, a2, a3, a4, a5);
    int num1, num2, num3;
    num1 = atoi(a11);
    num2 = atoi(a3);
    num3 = atoi(a5);
    printf("%d %s %d %s %d = %d \n",
           num1, a2, num2, a4, num3, num1-num2*num3);

    //atoi() 함수사용 예제
    int num4;
    char s3 = "283"; //문자열
    num4 = atoi(s3);
    printf("%d\n", num4); //283(숫자)
//    자료형 확인하는 함수도 알아보면 좋을듯!

    return 0;

}
