#include <stdio.h>
#include <stdbool.h>
#include <limits.h>

int main(void) {
	// �ǽ�����1
	{
		for (int i = 1; i <= 10; i++) {
			printf("��ǻ�Ͱ��е��� C���� ������ �����̴�.\n");
		}
	}

	// �ǽ�����2
	printf("\n");
	{
		int twosqr = 1;
		for (int i = 1; i <= 10; i++) {
			twosqr *= 2;
			printf("%d ", twosqr);
		}
		printf("\n");
	}

	// �ǽ�����3
	printf("\n");
	{
		int mult = 1, x;
		for (int i = 1; i <= 5; i++) {
			printf("������ �Է��ϼ���>> ");
			scanf_s("%d", &x);
			mult *= x;
			printf("�� = %d\n", mult);
		}
	}

	// �ǽ�����4
	printf("\n");
	{
		int k, x;
		printf("k>> ");
		scanf_s("%d", &k);

		for (int i = 1; i <= 5; i++) {
			printf("������ �Է��ϼ���>> ");
			scanf_s("%d", &x);
			if (x % k == 0) {
				printf("%d��(��) %d�� ����Դϴ�.\n", x, k);
			}
			else {
				printf("%d��(��) %d�� ����� �ƴմϴ�.\n", x, k);
			}
		}
	}

	// �ǽ�����5
	printf("\n");
	{
		int k, x, acc;
		printf("k>> ");
		scanf_s("%d", &k);

		acc = 0;
		for (int i = 1; i <= 5; i++) {
			printf("������ �Է��ϼ���>> ");
			scanf_s("%d", &x);
			if (x >= k)
				acc += x;
			else
				acc -= x;
			#
			printf("%d\n", acc);
		}
	}

	// �ǽ�����6
	printf("\n");
	{
		int min, x;

		min = INT_MAX; // ������ ���� ū ��
		for (int i = 1; i <= 5; i++) {
			printf("������ �Է��ϼ���>> ");
			scanf_s("%d", &x);

			if (x < min) {
				min = x;
			}
		}

		printf("�ּڰ��� %d�Դϴ�.\n", min);
	}

	// �ǽ�����7
	printf("\n");
	{
		int k, x, cnt;
		printf("k>> ");
		scanf_s("%d", &k);

		cnt = 0;
		for (int i = 1; i <= 5; i++) {
			printf("������ �Է��ϼ���>> ");
			scanf_s("%d", &x);
			if (x % k == 0) {
				cnt++;
			}
		}

		printf("%d�� ����� %d���Դϴ�.\n", k, cnt);
	}


	// �ǽ�����8
	printf("\n");
	{
		int n, x;
		int n_pos, n_zero, n_neg;

		printf("n>> ");
		scanf_s("%d", &n);

		n_pos = 0;
		n_zero = 0;
		n_neg = 0;
		// ��� ���� ���� ������ ���� �Ʒ��� ���� �ۼ��� ���� �ִ�.
		// n_pos = n_zero = n_neg = 0;

		for (int i = 1; i <= n; i++) {
			printf("������ �Է��ϼ���>> ");
			scanf_s("%d", &x);

			if (x > 0)
				n_pos++;
			else if (x < 0)
				n_neg++;
			else
				n_zero++;
		}

		printf("���� ����: %d��\n", n_pos);
		printf("0        : %d��\n", n_zero);
		printf("���� ����: %d��\n", n_neg);
	}

	// �ǽ�����9
	printf("\n");
	{
		int n, k, x;
		int flag;

		printf("n k>> ");
		scanf_s("%d%d", &n, &k);

		flag = false;
		for (int i = 1; i <= n; i++) {
			printf("������ �Է��ϼ���>> ");
			scanf_s("%d", &x);

			if (x % k == 0)
				flag = true;
		}

		if (flag) {
			printf("%d�� ����� �ԷµǾ����ϴ�.\n", k);
		}
		else {
			printf("%d�� ����� �Էµ��� �ʾҽ��ϴ�.\n", k);
		}
	}

	// �ǽ�����10
	printf("\n");
	{
		int n, k, d, a;
		printf("n k d>> ");
		scanf_s("%d%d%d", &n, &k, &d);

		a = k;
		printf("%d\n", a);
		for (int i = 1; i <= n; i++) {
			a += d;
			printf("%d\n", a);
		}
	}

	return 0;
}
