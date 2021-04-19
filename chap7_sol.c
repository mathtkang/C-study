#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


 // 7장 실습문제

int main(void) {
	{
		printf("\n============실습1============\n"); 
		int x, y;
		printf("정수 두 개 입력>> ");
		scanf("%d%d", &x, &y);
		printf("%d 나누기 %d는 %.2f입니다.\n", x, y, (double)x / y);
	}

	{
		printf("\n============실습2============\n");
		char ch1, ch2, ch3;
		printf("문자 세 개 입력>> ");
		scanf("%c%c%c", &ch1, &ch2, &ch3);
		printf("입력 받은 문자는 '%c', '%c', '%c'입니다.\n", ch1, ch2, ch3);
	}

	{
		printf("\n============실습3============\n");
		char card1, card2, card3;
		printf("카드 세 장의 이름>> ");
		scanf("%c%c%c", &card1, &card2, &card3);
		
		printf("%c-%c-%c\n", card1, card2, card3);
		printf("%c-%c-%c\n", card1, card3, card2);
		printf("%c-%c-%c\n", card2, card1, card3);
		printf("%c-%c-%c\n", card2, card3, card1);
		printf("%c-%c-%c\n", card3, card1, card2);
		printf("%c-%c-%c\n", card3, card2, card1);
	}

	{
		printf("\n============실습4============\n");
		char title[100], author[100], publisher[100];
		printf("제목>> ");
		scanf("%s", title);
		printf("저자>> ");
		scanf("%s", author);
		printf("출판사>> ");
		scanf("%s", publisher);

		printf("제목은 %s, 저자는 %s, 출판사는 %s입니다.\n",  title, author, publisher);
	}

	{
		printf("\n============실습5============\n");
		int post;
		char si[100], gu[100], dong[100], addr[100];
		printf("주소>> ");
		scanf("%d%s%s%s%s", &post, si, gu, dong, addr);
		printf("주소는 '(%d) %s %s %s %s'입니다.", post, si, gu, dong, addr);
	}

	{
		printf("\n============실습6============\n"); 
		char a[100], b[100], c[100], d[100], e[100];
		printf("수식을 입력하세요>> ");
		scanf("%s%s%s%s%s", &a, &b, &c, &d, &e);
		
		int n1, n2, n3, result;
		n1 = atoi(a);
		n2 = atoi(c);
		n3 = atoi(e);
		result = n1 - n2 * n3;
		printf("%d - %d * %d = %d 입니다.\n", n1, n2, n3, result);
	}
}
