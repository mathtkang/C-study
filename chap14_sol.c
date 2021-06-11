#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main(void) {
	// �ǽ�����1: while�� --> for��
	{
		int n, x;
		int n_pos, n_zero, n_neg;
		printf("n>> ");
		scanf_s("%d", &n);

		n_pos = n_zero = n_neg = 0;
		int i = 1;
		while (i <= n) {
			printf("������ �Է��ϼ���>> ");
			scanf_s("%d", &x);

			if (x > 0)
				n_pos++;
			else if (x < 0)
				n_neg++;
			else
				n_zero++;

			i++;
		}

		printf("���� ����: %d��\n", n_pos);
		printf("0        : %d��\n", n_zero);
		printf("���� ����: %d��\n", n_neg);
		printf("\n");
	}


	// �ǽ����� 2-1)
	{
		int n, m;
		printf("n m = ");
		scanf_s("%d%d", &n, &m);

		// 2-1-A) for�� �ϳ��� ����ϱ�
		for (int i = 1; i <= n * m; i++) {
			printf("%02d ", i);
			if (i % m == 0)
				printf("\n");
		}
		printf("\n");

		// 2-1-B) ��°��� ������ ����
		int cnt = 0;
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= m; j++) {
				cnt++;
				printf("%02d ", cnt);
			}
			printf("\n");
		}
		printf("\n");

		// 2-1-C) i, j�� ����ϱ�
		// n=4, m=6�̸�
		// 1��: 0*6+1 ... 0*6+6
		// 2��: 1*6+1 ... 1*6+6
		// 3��: 2*6+1 ... 2*6+6
		// 4��: 3*6+1 ... 3*6+6
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= m; j++) {
				printf("%02d ", (i - 1) * 6 + j);
			}
			printf("\n");
		}
		printf("\n");

		// 2-1-D) ���� ���� �ڵ�. ��, i = 0 to (n-1)
		for (int i = 0; i < n; i++) {
			for (int j = 1; j <= m; j++) {
				printf("%02d ", i * 6 + j);
			}
			printf("\n");
		}
		printf("\n");
	}


	// �ǽ����� 2-2), 2-3), 2-4)
	{
		int n;
		printf("n = ");
		scanf_s("%d", &n);

		// 2-2)
		// i = 0 to (n-1)
		//
		// i = 0	: j = 1 to (n-0)
		// i = 1	: j = 1 to (n-1)
		// ...
		// i = n-1	: j = 1 to (n-(n-1)) = 1 to 1

		for (int i = 0; i < n; i++) {
			for (int j = 1; j <= n - i; j++) {
				printf("*");
			}
			printf("\n");
		}
		printf("\n");

		// 2-3)
		for (int i = 0; i < n; i++) {
			for (int j = 0; j <= i; j++) {
				printf(" ");
			}
			for (int j = 1; j <= n - i; j++) {
				printf("*");
			}
			printf("\n");
		}
		printf("\n");

		// 2-4)
		for (int i = 1; i <= n; i++) {
			// ' ' (n-i)��
			for (int j = 1; j <= n - i; j++) {
				printf(" ");
			}
			// '*' (i*2-1)��
			for (int j = 1; j <= i * 2 - 1; j++) {
				printf("*");
			}
			printf("\n");
		}
		printf("\n");
	}

	// �ǽ�����3: ������ �հ� ���հ�
	{
		int score, n_fail;
		bool exist_0;

		for (int stu_no = 1; stu_no <= 5; stu_no++) {
			// �� �л��� ����, ������ �� ��, 0�� �ִ��� ���� üũ
			n_fail = 0;
			exist_0 = false;
			for (int crs_no = 1; crs_no <= 5; crs_no++) {
				printf("�л�%d�� ����%d ����>> ", stu_no, crs_no);
				scanf_s("%d", &score);

				if (score == 0) {
					// 0�� �ԷµǸ� ���� for���� ��������
					exist_0 = true;
					break;
				}

				if (score < 60)
					n_fail++;
			}

			// n_fail, exist_0 ���� ���� ���
			// �պκ� ���
			if (n_fail >= 2 || exist_0) {
				printf("�л� %d��(��) ���հ��Դϴ�", stu_no);
			}
			else {
				printf("�л� %d��(��) �հ��Դϴ�", stu_no);
			}

			// �޺κ� ���
			if (exist_0) {
				printf("(0�� ����).\n\n");
			}
			else {
				printf("(���� %d����).\n\n", n_fail);
			}
		}

		printf("\n");
	}

	// �ǽ�����4: 1���� n���� ��
	{
		int n, sum;
		while (true) {
			printf("n = ");
			scanf_s("%d", &n);

			if (n <= 0)
				break;

			switch (n) {
			case 1: printf("1=1\n"); break;
			case 2: printf("1+2=3\n"); break;
			case 3: printf("1+2+3=6\n"); break;
			default:
				sum = 0;
				for (int i = 1; i <= n; i++) {
					sum += i;
				}
				printf("1+2+...+%d=%d\n", n, sum);
			}
		}
		printf("�����մϴ�.\n\n");
	}

	// �ǽ�����5-1): 200���� ��� �Ҽ�
	{
		bool n_is_prime;

		// ��� ����� ��� ���� 2�� ���� ���
		printf("2");
		for (int n = 3; n <= 200; n++) {
			n_is_prime = true;
			for (int div = 2; div <= sqrt(n); div++) {
				if (n % div == 0)
					n_is_prime = false;
			}
			if (n_is_prime)
				printf(", %d", n);
		}

		printf("\n\n");
	}

	// �ǽ�����5-2): m ������ �Ҽ��� ����
	{
		int m, cnt_prime;
		bool n_is_prime;

		printf("m = ");
		scanf_s("%d", &m);

		cnt_prime = 0;
		for (int n = 2; n <= m; n++) {
			n_is_prime = true;
			for (int div = 2; div <= sqrt(n); div++) {
				if (n % div == 0)
					n_is_prime = false;
			}

			if (n_is_prime)
				cnt_prime++;
		}

		printf("%d���� �Ҽ��� %d��\n\n", m, cnt_prime);
	}

	// �ǽ�����6-1) 1�� �ڸ�, 10�� �ڸ�, ...
	{
		int n;
		printf("n = ");
		scanf_s("%d", &n);

		do {
			printf("%d\n", n % 10);
			n /= 10;
		} while (n > 0);

		// while������ �ۼ��ϸ� n=0�� ��
		// �ݺ����� �� ���� ������ ���� ó���ؾ� ��
		//if (n == 0)
		//	printf("0\n");

		//while (n > 0) {
		//	printf("%d\n", n % 10);
		//	n /= 10;
		//}

		printf("\n");
	}

	// �ǽ�����6-2) 2���� �����ڸ����� ���
	{
		int n;
		printf("n = ");
		scanf_s("%d", &n);

		do {
			printf("%d\n", n % 2);
			n /= 2;
		} while (n > 0);

		printf("\n");
	}

	// �ǽ����� 6-3) k������ 1�� �ڸ�, k�� �ڸ�, ...
	{
		int n, k, rem;
		printf("n k = ");
		scanf_s("%d%d", &n, &k);

		do {
			rem = n % k;
			// 10����~2�����̰ų�, 11���� �̻��̶� ����� ���� 10 �̸�
			if (k <= 10 || rem < 10) {
				printf("%d\n", rem);
			}
			else {
				printf("%c\n", 'A' + (rem - 10));
			}

			n /= k;
		} while (n > 0);

		printf("\n");
	}

	// �ǽ�����7-1) 10���� ���� �ڸ����� ���
	{
		int n;
		printf("n = ");
		scanf_s("%d", &n);

		// n���� �۰ų� ���� 10^? �� ���� ū ���� ã�´�.
		int div = 1;
		while (div * 10 <= n) {
			div *= 10;
		}

		// ���� ���� �ڸ���: n / div
		// div�� 10���� ��� ����
		// div�� 0�� �� ������ �ݺ�
		while (div > 0) {
			printf("%d\n", n / div);
			n %= div;
			div /= 10;
		}

		printf("\n");
	}

	// �ǽ�����7-2) 10����-->k���� ��ȯ, ���� �ڸ����� ���
	{
		int n, k;
		printf("n k = ");
		scanf_s("%d%d", &n, &k);

		// n���� �۰ų� ���� k^? �� ���� ū ���� ã�´�.
		int div = 1;
		while (div * k <= n) {
			div *= k;
		}

		// ���� ���� �ڸ���: n / div
		// div�� k�� ��� ����
		// div�� 0�� �� ������ �ݺ�
		int digit;
		while (div > 0) {
			digit = n / div;
			if (k <= 10 || digit < 10)
				printf("%d", digit);
			else
				printf("%c", 'A' + (digit - 10));

			n %= div;
			div /= k;
		}
		printf("(%d)\n\n", k);
	}

	// �ǽ�����8: �ִ�����, �ּҰ����
	{
		int n, m;
		printf("a b = ");
		scanf_s("%d%d", &n, &m);

		// ó���� �Է� ���� ���� �����ؾ� �ϹǷ�
		// �ٸ� ������ ����ؼ� ���
		int a, b, tmp;
		a = n;
		b = m;
		// gcd(a, b) --> gcd(b, a % b)
		while (b > 0) {
			tmp = a;
			a = b;
			b = tmp % b;
		}

		// b�� 0�� �Ǹ� GCD = a
		printf("GCD = %d\n", a);
		printf("LCM = %d\n", n * m / a);
		printf("\n");
	}

	// �ǽ�����9: ���ĺ� ����
	{
		for (char ch1 = 'a'; ch1 <= 'd'; ch1++) {
			for (char ch2 = 'a'; ch2 <= 'd'; ch2++) {
				for (char ch3 = 'a'; ch3 <= 'd'; ch3++) {
					printf("%c%c%c\n", ch1, ch2, ch3);
				}
			}
		}
		printf("\n");
	}

	// �ǽ�����10: �ֻ��� �� ��(����)
	{
		int n, cnt;
		printf("n = ");
		scanf_s("%d", &n);

		printf("R G B\n");
		cnt = 0;
		for (int R = 1; R <= 6; R++) {
			for (int G = 1; G <= 6; G++) {
				for (int B = 1; B <= 6; B++) {
					if (R + G + B == n) {
						cnt++;
						printf("%d %d %d\n", R, G, B);
					}
				}
			}
		}
		printf("%d caess\n", cnt);
	}

	// �ǽ�����11: �ֻ��� �� ��(����)
	{
		int n, cnt;
		printf("n = ");
		scanf_s("%d", &n);

		cnt = 0;
		for (int d1 = 1; d1 <= 6; d1++) {			// d1 =  1 to 6
			for (int d2 = d1; d2 <= 6; d2++) {		// d2 = d1 to 6
				for (int d3 = d2; d3 <= 6; d3++) {	// d3 = d2 to 6
					if (d1 + d2 + d3 == n) {
						cnt++;
						printf("%d %d %d\n", d1, d2, d3);
					}
				}
			}
		}
		printf("%d caess\n", cnt);
	}

	return 0;
}