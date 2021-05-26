#include <stdio.h>
#include <stdbool.h>
#include <limits.h>

int main(void) {
	// 실습문제1
	{
		for (int i = 1; i <= 10; i++) {
			printf("컴퓨터공학도와 C언어는 애증의 관계이다.\n");
		}
	}

	// 실습문제2
	printf("\n");
	{
		int twosqr = 1;
		for (int i = 1; i <= 10; i++) {
			twosqr *= 2;
			printf("%d ", twosqr);
		}
		printf("\n");
	}

	// 실습문제3
	printf("\n");
	{
		int mult = 1, x;
		for (int i = 1; i <= 5; i++) {
			printf("정수를 입력하세요>> ");
			scanf_s("%d", &x);
			mult *= x;
			printf("곱 = %d\n", mult);
		}
	}

	// 실습문제4
	printf("\n");
	{
		int k, x;
		printf("k>> ");
		scanf_s("%d", &k);

		for (int i = 1; i <= 5; i++) {
			printf("정수를 입력하세요>> ");
			scanf_s("%d", &x);
			if (x % k == 0) {
				printf("%d은(는) %d의 배수입니다.\n", x, k);
			}
			else {
				printf("%d은(는) %d의 배수가 아닙니다.\n", x, k);
			}
		}
	}

	// 실습문제5
	printf("\n");
	{
		int k, x, acc;
		printf("k>> ");
		scanf_s("%d", &k);

		acc = 0;
		for (int i = 1; i <= 5; i++) {
			printf("정수를 입력하세요>> ");
			scanf_s("%d", &x);
			if (x >= k)
				acc += x;
			else
				acc -= x;
			#
			printf("%d\n", acc);
		}
	}

	// 실습문제6
	printf("\n");
	{
		int min, x;

		min = INT_MAX; // 가능한 가장 큰 값
		for (int i = 1; i <= 5; i++) {
			printf("정수를 입력하세요>> ");
			scanf_s("%d", &x);

			if (x < min) {
				min = x;
			}
		}

		printf("최솟값은 %d입니다.\n", min);
	}

	// 실습문제7
	printf("\n");
	{
		int k, x, cnt;
		printf("k>> ");
		scanf_s("%d", &k);

		cnt = 0;
		for (int i = 1; i <= 5; i++) {
			printf("정수를 입력하세요>> ");
			scanf_s("%d", &x);
			if (x % k == 0) {
				cnt++;
			}
		}

		printf("%d의 배수는 %d개입니다.\n", k, cnt);
	}


	// 실습문제8
	printf("\n");
	{
		int n, x;
		int n_pos, n_zero, n_neg;

		printf("n>> ");
		scanf_s("%d", &n);

		n_pos = 0;
		n_zero = 0;
		n_neg = 0;
		// 모두 같은 값을 대입할 때는 아래와 같이 작성할 수도 있다.
		// n_pos = n_zero = n_neg = 0;

		for (int i = 1; i <= n; i++) {
			printf("정수를 입력하세요>> ");
			scanf_s("%d", &x);

			if (x > 0)
				n_pos++;
			else if (x < 0)
				n_neg++;
			else
				n_zero++;
		}

		printf("양의 정수: %d개\n", n_pos);
		printf("0        : %d개\n", n_zero);
		printf("음의 정수: %d개\n", n_neg);
	}

	// 실습문제9
	printf("\n");
	{
		int n, k, x;
		int flag;

		printf("n k>> ");
		scanf_s("%d%d", &n, &k);

		flag = false;
		for (int i = 1; i <= n; i++) {
			printf("정수를 입력하세요>> ");
			scanf_s("%d", &x);

			if (x % k == 0)
				flag = true;
		}

		if (flag) {
			printf("%d의 배수가 입력되었습니다.\n", k);
		}
		else {
			printf("%d의 배수는 입력되지 않았습니다.\n", k);
		}
	}

	// 실습문제10
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
