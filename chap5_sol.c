#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


// 5�� �ǽ�����


int main(void) {
	// �ڵ带 ���({ })���� ��� �������� �� �ִ�.
	// �̸��� ���� ������ �� �� �����ϸ� ������ ������
	// ���� �ٸ� ��� ���̶�� �̸��� ���� ������ ���ε��� ��� �����ϴ�.
	// �̿� ���ؼ��� �Լ� ��Ʈ���� ����.

	/*
	{
		printf("\n=============�ǽ�1=============\n");

		int n;
		printf("0�̻� 9���� ������ �Է��ϼ���>> ");
		scanf("%d", &n);
		printf("   %d%d%d   \n", n, n, n);
		printf("   %d%d%d   \n", n, n, n);
		printf("%d%d%d%d%d%d%d%d%d\n", n, n, n, n, n, n, n, n, n);
	}

	{
		printf("\n=============�ǽ�2=============\n");

		// �Է�
		int square, circle, triangle, result;

		printf("�׸� - ���׶�� * ���� = ?");
		printf("�׸�, ���׶��, ���� �� ������ �Է��ϼ���>> ");
		scanf("%d%d%d", &square, &circle, &triangle);

		// ���
		result = square - circle * triangle;

		// ���
		printf("%d - %d * %d = %d\n", square, circle, triangle, result);
	}

	{
		printf("\n=============�ǽ�3=============\n");

		// �Է�
		int x = 100, y = 200, tmp;
		printf("�ʱⰪ: x=%d, y=%d\n", x, y);

		// ���
		tmp = x;
		x = y;
		y = tmp;

		// ���
		printf("��ȭ ��: x=%d, y=%d\n", x, y);
	}

	{
		printf("\n=============�ǽ�4=============\n");

		// �Է�
		int width, height, area_tri, area_rect;

		printf("�ʺ�(�غ�)�� ���̴� ���Դϱ�? ");
		scanf("%d", &width);

		printf("���̴� ���Դϱ�? ");
		scanf("%d", &height);

		// ���
		area_tri = width * height / 2;
		area_rect = width * height;

		// ���
		printf("�غ��� %d, ���̰� %d�� �ﰢ���� ���̴� %d�Դϴ�.\n", width, height, area_tri);
		printf("�غ��� %d, ���̰� %d�� �簢���� ���̴� %d�Դϴ�.\n", width, height, area_rect);
	}

	{
		printf("\n=============�ǽ�5=============\n");
		int cast_days;
		printf("���ε��� ��ĥ���� ǥ���߽��ϱ�? ");
		scanf("%d", &cast_days);

		int years, months, days;
		years = cast_days / 360;

		int months_n_days = cast_days % 360; // 360*(�� ��)�� �� ��¥�� ���´�.
		months = months_n_days / 30;
		days = months_n_days % 30;

		printf("%d���� %d�� %d���� %d���Դϴ�.\n", cast_days, years, months, days);
	}

	{
		printf("\n=============�ǽ�6=============\n");
		// �� ��Ȯ�� ���ڸ� �ܰ��� unit_price, 
		// ������ �ݾ�(�ܰ� * ����)�� price��� �̸��ٿ��� ��
		int money = 10000;
		int price = 1500;
		int qty = 2;

		int pay = price * qty;	// ������ �ݾ�
		int change = money - pay;

		printf("���� �������� %d���Դϴ�.\n", money);
		printf("���̽�ũ���� ���� %d���Դϴ�.\n", price);
		printf("���̽�ũ�� %d���� %d���Դϴ�.\n", qty, pay);
		printf("%d���� ���� �Ž������� %d���Դϴ�.\n", money, change);
	}*/

	{
		printf("\n=============�ǽ�7~8=============\n");
		int money = 10000;
		int price, qty;

		printf("���� �������� %d���Դϴ�.\n", money);
		printf("���̽�ũ�� �ܰ��� ���Դϱ�? ");
		scanf("%d", &price);
		printf("���̽�ũ�� �� ���� ��ϱ�? ");
		scanf("%d", &qty);

		int pay = price * qty;	// ������ �ݾ�
		int change = money - pay;

		printf("���̽�ũ�� %d���� %d���Դϴ�.\n", qty, pay);
		printf("%d���� ���� �Ž������� %d���Դϴ�.\n", money, change);
	
	
		// ============�ǽ�8===============
		// �ǽ� 7�� �̾ ���
		int five_thd, one_thd, five_hnd;

		five_thd = change / 5000;

		change = change % 5000; // 5õ���� ���� �Ž����� �ݾ�
		one_thd = change / 1000;

		change = change % 1000; // 5õ����, 1õ���� ���� �Ž����� �ݾ�
		five_hnd = change / 500;

		printf("5õ���� %d��, 1õ���� %d��, 5��� ���� %d���Դϴ�.\n", 
			five_thd, one_thd, five_hnd);
	}
}