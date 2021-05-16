#include <stdio.h>
#include <stdbool.h>
#include <limits.h>

int main(void) {

	// �ǽ�����1
	{
		unsigned int x, k;
		printf("x k >> ");
		scanf_s("%d%d", &x, &k);
				
		unsigned int mask = 0x1 << (k - 1);
		x = x | mask;
		printf("%d\n", x);
	}

	// �ǽ�����2
	puts("");
	{
		unsigned int x, k;
		printf("x k>> ");
		scanf_s("%d%d", &x, &k);
		
		unsigned int mask, lsb;
		mask = 0x1 << (k - 1);
		lsb = (x & mask) >> (k - 1);

		printf("%uth LSB = %u\n", k, lsb);
	}

	// �ǽ�����3
	puts("");
	{
		double x, product = 1.;

		printf("�Ǽ� �Է�>> ");
		scanf_s("%lf", &x);
		product *= x;
		printf("prudct = %f\n", product);

		printf("�Ǽ� �Է�>> ");
		scanf_s("%lf", &x);
		product *= x;
		printf("prudct = %f\n", product);

		printf("�Ǽ� �Է�>> ");
		scanf_s("%lf", &x);
		product *= x;
		printf("prudct = %f\n", product);
	}

	// �ǽ�����4
	puts("");
	{
		char ch1, ch2, ch3, ch4;
		printf(">> ");
		scanf_s("%c%c%c%c", &ch1, 1, &ch2, 1, &ch3, 1, &ch4, 1);

		int cnt = 0;
		cnt += 'A' <= ch1 && ch1 <= 'Z';
		cnt += 'A' <= ch1 && ch2 <= 'Z';
		cnt += 'A' <= ch1 && ch3 <= 'Z';
		cnt += 'A' <= ch1 && ch4 <= 'Z';
		printf("no. of uppercase letters = %d\n", cnt);
	}

	// �ǽ�����5
	puts("");
	{
		int birth_year;
		printf("�¾ �⵵ >> ");
		scanf_s("%d", &birth_year);

		bool is_adult = birth_year <= 2002;
		bool is_old = birth_year <= 1956;
		bool drink_allowed = is_adult && !is_old;

		printf("�� �մ��� ���� ���� �� �ִ�: %d\n", drink_allowed);
	}
	return 0;
}
