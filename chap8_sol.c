#include <stdio.h>

// 8�� �ǽ�����

int main(void) {
	//========== �ǽ�����1============
	printf("���� '%c'�� �ƽ�Ű�ڵ� ���� %d\n", 'A', 'A');
	printf("���� '%c'�� �ƽ�Ű�ڵ� ���� %d\n", 'Z', 'Z');
	printf("���ĺ� �빮���� �ƽ�Ű�ڵ� �� ������ %d ~ %d\n", 'A', 'Z');

	printf("���� '%c'�� �ƽ�Ű�ڵ� ���� %d\n", 'a', 'a');
	printf("���� '%c'�� �ƽ�Ű�ڵ� ���� %d\n", 'z', 'z');
	printf("���ĺ� �ҹ����� �ƽ�Ű�ڵ� �� ������ %d ~ %d\n", 'a', 'z');

	printf("���� '%c'�� �ƽ�Ű�ڵ� ���� %d\n", '0', '0');
	printf("���� '%c'�� �ƽ�Ű�ڵ� ���� %d\n", '9', '9');
	printf("������ �ƽ�Ű�ڵ� �� ������ %d ~ %d\n", '0', '9');


	//========== �ǽ�����2============
	char str1[100], str2[100], str3[100];

	printf("���ڿ��� �Է��ϼ���>> ");
	gets_s(str1, sizeof(str1));
	printf("���ڿ��� �Է��ϼ���>> ");
	gets_s(str2, sizeof(str2));
	printf("���ڿ��� �Է��ϼ���>> ");
	gets_s(str3, sizeof(str3));

	printf("%s%s%s\n", str1, str2, str3);


	//========== �ǽ�����3============
	int square, circle, triangle;
	printf("�׸� ���׶�� ����>> ");
	scanf_s("%d%d%d", &square, &circle, &triangle);
	printf("%c - %c * %c\n", 'A' + square, 'A' + circle, 'A' + triangle);


	//========== �ǽ�����4============
	char ch1, ch2, ch3;

	printf("���ĺ� �빮�� �� ���� �Է��ϼ���>> ");
	scanf_s("%c%c%c", &ch1, 1, &ch2, 1, &ch3, 1);
	// ch1 = getchar(); ch2 = getchar(); ch3 = getchar();  // �Ȱ��� ���

	printf("��: %c%c%c\n", ch1, ch2, ch3);
	printf("��ȣ��: %d, %d, %d\n", ch1 - 'A', ch2 - 'A', ch3 - 'A');
	return 0;
}
