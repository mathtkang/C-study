#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


 // 7�� �ǽ�����

int main(void) {
	{
		printf("\n============�ǽ�1============\n"); 
		int x, y;
		printf("���� �� �� �Է�>> ");
		scanf("%d%d", &x, &y);
		printf("%d ������ %d�� %.2f�Դϴ�.\n", x, y, (double)x / y);
	}

	{
		printf("\n============�ǽ�2============\n");
		char ch1, ch2, ch3;
		printf("���� �� �� �Է�>> ");
		scanf("%c%c%c", &ch1, &ch2, &ch3);
		printf("�Է� ���� ���ڴ� '%c', '%c', '%c'�Դϴ�.\n", ch1, ch2, ch3);
	}

	{
		printf("\n============�ǽ�3============\n");
		char card1, card2, card3;
		printf("ī�� �� ���� �̸�>> ");
		scanf("%c%c%c", &card1, &card2, &card3);
		
		printf("%c-%c-%c\n", card1, card2, card3);
		printf("%c-%c-%c\n", card1, card3, card2);
		printf("%c-%c-%c\n", card2, card1, card3);
		printf("%c-%c-%c\n", card2, card3, card1);
		printf("%c-%c-%c\n", card3, card1, card2);
		printf("%c-%c-%c\n", card3, card2, card1);
	}

	{
		printf("\n============�ǽ�4============\n");
		char title[100], author[100], publisher[100];
		printf("����>> ");
		scanf("%s", title);
		printf("����>> ");
		scanf("%s", author);
		printf("���ǻ�>> ");
		scanf("%s", publisher);

		printf("������ %s, ���ڴ� %s, ���ǻ�� %s�Դϴ�.\n",  title, author, publisher);
	}

	{
		printf("\n============�ǽ�5============\n");
		int post;
		char si[100], gu[100], dong[100], addr[100];
		printf("�ּ�>> ");
		scanf("%d%s%s%s%s", &post, si, gu, dong, addr);
		printf("�ּҴ� '(%d) %s %s %s %s'�Դϴ�.", post, si, gu, dong, addr);
	}

	{
		printf("\n============�ǽ�6============\n"); 
		char a[100], b[100], c[100], d[100], e[100];
		printf("������ �Է��ϼ���>> ");
		scanf("%s%s%s%s%s", &a, &b, &c, &d, &e);
		
		int n1, n2, n3, result;
		n1 = atoi(a);
		n2 = atoi(c);
		n3 = atoi(e);
		result = n1 - n2 * n3;
		printf("%d - %d * %d = %d �Դϴ�.\n", n1, n2, n3, result);
	}
}
