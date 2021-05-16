#include <stdio.h>
#include <stdbool.h>
#include <limits.h>

int main(void) {

	// 실습문제1
	{
		unsigned int x, k;
		printf("x k >> ");
		scanf_s("%d%d", &x, &k);
				
		unsigned int mask = 0x1 << (k - 1);
		x = x | mask;
		printf("%d\n", x);
	}

	// 실습문제2
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

	// 실습문제3
	puts("");
	{
		double x, product = 1.;

		printf("실수 입력>> ");
		scanf_s("%lf", &x);
		product *= x;
		printf("prudct = %f\n", product);

		printf("실수 입력>> ");
		scanf_s("%lf", &x);
		product *= x;
		printf("prudct = %f\n", product);

		printf("실수 입력>> ");
		scanf_s("%lf", &x);
		product *= x;
		printf("prudct = %f\n", product);
	}

	// 실습문제4
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

	// 실습문제5
	puts("");
	{
		int birth_year;
		printf("태어난 년도 >> ");
		scanf_s("%d", &birth_year);

		bool is_adult = birth_year <= 2002;
		bool is_old = birth_year <= 1956;
		bool drink_allowed = is_adult && !is_old;

		printf("이 손님은 술을 마실 수 있다: %d\n", drink_allowed);
	}
	return 0;
}
