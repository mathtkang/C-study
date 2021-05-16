#include <stdio.h>
#include <stdbool.h>

int main(void) {
	// 실습문제1
	{
		char ch;
		printf("input a character>> ");
		scanf_s("%c", &ch, 1);
		if ('a' <= ch && ch <= 'z') {
			ch += 'A' - 'a';
		}
		printf("%c\n", ch);
	}

	// 실습문제2
	printf("\n");
	{
		int a, b, tmp;
		printf("a b>> ");
		scanf_s("%d%d", &a, &b);
		if (a > b) {
			tmp = a;
			a = b;
			b = tmp;
		}
		printf("a = %d, b = %d\n", a, b);
	}

	// 실습문제3
	printf("\n");
	{
		double x;
		printf("x>> ");
		scanf_s("%lf", &x);

		if (x == (int)x) {
			printf("x IS an integer\n");
		}
		else {
			printf("x IS NOT an integer\n");
		}

		// 참고) 위 if문과 같은 코드
		// printf("x IS %s an integer\n", x == (int)x ? "" : "NOT");
	}

	// 실습문제4
	printf("\n");
	{
		int a, b;
		printf("a b>> ");
		scanf_s("%d%d", &a, &b);
		printf("%d\n", a >= b ? a : b);
	}

	// 실습문제5
	printf("\n");
	{
		int x, y, z;
		printf("input 3 integers>> ");
		scanf_s("%d%d%d", &x, &y, &z);

		// 6가지 경우를 각각 처리하는 방법
		// x >= y >= z
		// x >= z >= y
		// y >= x >= z
		// y >= z >= x
		// z >= x >= y
		// z >= y >= x
	
		//if (x >= y && y >= z)
		//	printf("%d %d %d\n", x, y, z);
		//else if (x >= z && z >= y)
		//	printf("%d %d %d\n", x, z, y);
		//else if (y >= x && x >= z)
		//	printf("%d %d %d\n", y, x, z);
		//else if (y >= z && z >= x)
		//	printf("%d %d %d\n", y, z, x);
		//else if (z >= x && x >= y)
		//	printf("%d %d %d\n", z, x, y);
		//else
		//	printf("%d %d %d\n", z, y, x);

		// 중첩 if문을 사용하는 방법
		// 최대값을 먼저 찾고, 나머지 둘을 비교한다.
		int high, mid, low;
		if (x >= y && x >= z) {
			high = x;
			if (y >= z) { mid = y; low = z; }
			else		{ mid = z; low = y; }
		} else {
			if (y >= x && y >= z) {
				high = y;
				if (x >= z) { mid = x; low = z; }
				else		{ mid = z; low = x; }
			}
			else {
				high = z;
				if (x >= y) { mid = x; low = y; }
				else		{ mid = y; low = x; }
			}
		}

		printf("%d %d %d\n", high, mid, low);
	}

	// 실습문제6
	printf("\n");
	{
		int l1, l2, l3, tmp;
		printf("세 변의 길이>> ");
		scanf_s("%d%d%d", &l1, &l2, &l3);

		// l1 > l2이면 l1 <= l2 가 되도록 교환한다.
		// l2 > l3이면 l2 <= l3가 되도록 교환한다.
		// => l1 <= l2 <= l3
		if (l1 > l2) { tmp = l1; l1 = l2; l2 = tmp; }
		if (l2 > l3) { tmp = l2; l2 = l3; l3 = tmp; }

		if (l1 + l2 <= l3) {
			printf("삼각형이 아님\n");
		}
		else if (l1 == l2 && l2 == l3) {
			printf("정삼각형\n");
		}
		else if (l1 == l2) {
			printf("이등변삼각형\n");
		}
		else {
			printf("삼각형\n");
		}
	}

	// 실습문제7
	printf("\n");
	{
		double weight, height, BMI;
		printf("체중(kg) 키(cm)>> ");
		scanf_s("%lf%lf", &weight, &height);
	
		height /= 100;	// cm -> m
		BMI = weight / (height * height);
		printf("BMI = %.2f\n", BMI);

		if (BMI < 20.0) {
			printf("저체중입니다.\n");		
		}
		else if (BMI < 25.0) {
			printf("표준체중입니다.\n");
		}
		else {
			printf("과체중입니다.\n");
		}
	}

	// 실습문제8
	printf("\n");
	{
		int score, absent;
		printf("시험점수 결석일수>> ");
		scanf_s("%d%d", &score, &absent);

		if (score >= 80 && absent == 0 ||
			score >= 60 && absent <= 5) {
			printf("S\n");
		}
		else {
			printf("U\n");
		}
	}

	// 실습문제9
	printf("\n");
	{
		int year;
		printf("year = ");
		scanf_s("%d", &year);
		
		bool is_leaf = (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);

		if (is_leaf) {
			printf("%d is a leaf year\n", year);
		}
		else {
			printf("%d is NOT a leaf year\n", year);
		}			
	}
}
