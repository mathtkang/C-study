#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main(void) {
	// 실습문제1: while문 --> for문
	{
		int n, x;
		int n_pos, n_zero, n_neg;
		printf("n>> ");
		scanf_s("%d", &n);

		n_pos = n_zero = n_neg = 0;
		int i = 1;
		while (i <= n) {
			printf("정수를 입력하세요>> ");
			scanf_s("%d", &x);

			if (x > 0)
				n_pos++;
			else if (x < 0)
				n_neg++;
			else
				n_zero++;

			i++;
		}

		printf("양의 정수: %d개\n", n_pos);
		printf("0        : %d개\n", n_zero);
		printf("음의 정수: %d개\n", n_neg);
		printf("\n");
	}


	// 실습문제 2-1)
	{
		int n, m;
		printf("n m = ");
		scanf_s("%d%d", &n, &m);

		// 2-1-A) for문 하나로 출력하기
		for (int i = 1; i <= n * m; i++) {
			printf("%02d ", i);
			if (i % m == 0)
				printf("\n");
		}
		printf("\n");

		// 2-1-B) 출력값을 변수에 저장
		int cnt = 0;
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= m; j++) {
				cnt++;
				printf("%02d ", cnt);
			}
			printf("\n");
		}
		printf("\n");

		// 2-1-C) i, j로 계산하기
		// n=4, m=6이면
		// 1행: 0*6+1 ... 0*6+6
		// 2행: 1*6+1 ... 1*6+6
		// 3행: 2*6+1 ... 2*6+6
		// 4행: 3*6+1 ... 3*6+6
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= m; j++) {
				printf("%02d ", (i - 1) * 6 + j);
			}
			printf("\n");
		}
		printf("\n");

		// 2-1-D) 위와 같은 코드. 단, i = 0 to (n-1)
		for (int i = 0; i < n; i++) {
			for (int j = 1; j <= m; j++) {
				printf("%02d ", i * 6 + j);
			}
			printf("\n");
		}
		printf("\n");
	}


	// 실습문제 2-2), 2-3), 2-4)
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
			// ' ' (n-i)개
			for (int j = 1; j <= n - i; j++) {
				printf(" ");
			}
			// '*' (i*2-1)개
			for (int j = 1; j <= i * 2 - 1; j++) {
				printf("*");
			}
			printf("\n");
		}
		printf("\n");
	}

	// 실습문제3: 과락과 합격 불합격
	{
		int score, n_fail;
		bool exist_0;

		for (int stu_no = 1; stu_no <= 5; stu_no++) {
			// 각 학생에 대해, 과락은 몇 개, 0이 있는지 각각 체크
			n_fail = 0;
			exist_0 = false;
			for (int crs_no = 1; crs_no <= 5; crs_no++) {
				printf("학생%d의 과목%d 점수>> ", stu_no, crs_no);
				scanf_s("%d", &score);

				if (score == 0) {
					// 0이 입력되면 안쪽 for문을 빠져나감
					exist_0 = true;
					break;
				}

				if (score < 60)
					n_fail++;
			}

			// n_fail, exist_0 값에 따라서 출력
			// 앞부분 출력
			if (n_fail >= 2 || exist_0) {
				printf("학생 %d은(는) 불합격입니다", stu_no);
			}
			else {
				printf("학생 %d은(는) 합격입니다", stu_no);
			}

			// 뒷부분 출력
			if (exist_0) {
				printf("(0점 있음).\n\n");
			}
			else {
				printf("(과락 %d과목).\n\n", n_fail);
			}
		}

		printf("\n");
	}

	// 실습문제4: 1부터 n까지 합
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
		printf("종료합니다.\n\n");
	}

	// 실습문제5-1): 200이하 모든 소수
	{
		bool n_is_prime;

		// 출력 모양을 잡기 위해 2를 먼저 출력
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

	// 실습문제5-2): m 이하인 소수의 개수
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

		printf("%d이하 소수는 %d개\n\n", m, cnt_prime);
	}

	// 실습문제6-1) 1의 자리, 10의 자리, ...
	{
		int n;
		printf("n = ");
		scanf_s("%d", &n);

		do {
			printf("%d\n", n % 10);
			n /= 10;
		} while (n > 0);

		// while문으로 작성하면 n=0일 때
		// 반복문을 못 들어가기 때문에 따로 처리해야 함
		//if (n == 0)
		//	printf("0\n");

		//while (n > 0) {
		//	printf("%d\n", n % 10);
		//	n /= 10;
		//}

		printf("\n");
	}

	// 실습문제6-2) 2진수 낮은자리부터 출력
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

	// 실습문제 6-3) k진수의 1의 자리, k의 자리, ...
	{
		int n, k, rem;
		printf("n k = ");
		scanf_s("%d%d", &n, &k);

		do {
			rem = n % k;
			// 10진수~2진수이거나, 11진수 이상이라도 출력할 값이 10 미만
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

	// 실습문제7-1) 10진수 높은 자리부터 출력
	{
		int n;
		printf("n = ");
		scanf_s("%d", &n);

		// n보다 작거나 같은 10^? 중 가장 큰 값을 찾는다.
		int div = 1;
		while (div * 10 <= n) {
			div *= 10;
		}

		// 가장 높은 자리수: n / div
		// div는 10으로 계속 나눔
		// div가 0이 될 때까지 반복
		while (div > 0) {
			printf("%d\n", n / div);
			n %= div;
			div /= 10;
		}

		printf("\n");
	}

	// 실습문제7-2) 10진수-->k진수 변환, 높은 자리부터 출력
	{
		int n, k;
		printf("n k = ");
		scanf_s("%d%d", &n, &k);

		// n보다 작거나 같은 k^? 중 가장 큰 값을 찾는다.
		int div = 1;
		while (div * k <= n) {
			div *= k;
		}

		// 가장 높은 자리수: n / div
		// div는 k로 계속 나눔
		// div가 0이 될 때까지 반복
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

	// 실습문제8: 최대공약수, 최소공배수
	{
		int n, m;
		printf("a b = ");
		scanf_s("%d%d", &n, &m);

		// 처음에 입력 받은 값을 보존해야 하므로
		// 다른 변수를 사용해서 계산
		int a, b, tmp;
		a = n;
		b = m;
		// gcd(a, b) --> gcd(b, a % b)
		while (b > 0) {
			tmp = a;
			a = b;
			b = tmp % b;
		}

		// b가 0이 되면 GCD = a
		printf("GCD = %d\n", a);
		printf("LCM = %d\n", n * m / a);
		printf("\n");
	}

	// 실습문제9: 알파벳 순열
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

	// 실습문제10: 주사위 세 개(순열)
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

	// 실습문제11: 주사위 세 개(조합)
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