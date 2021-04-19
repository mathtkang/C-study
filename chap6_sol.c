#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>


// 6장 실습문제

int main(void) {
	{
		printf("\n=================실습1=================\n");
		double square, circle, triangle, result;

		printf("네모 - 동그라미 * 세모 = ?\n");
		printf("네모, 동그라미, 세모에 들어갈 실수를 입력하세요>> ");
		scanf("%lf%lf%lf", &square, &circle, &triangle);
		result = square - circle * triangle;
		printf("%.2f - %.2f * %.2f = %.2f 입니다.\n", square, circle, triangle, result);
	}

	{
		printf("\n=================실습2=================\n");
		int kor, eng, math;
		printf("국어 영어 수학 점수>> ");
		scanf("%d%d%d", &kor, &eng, &math);
		
		int tot = kor + eng + math;
		double avg = tot / 3.;

		printf("총점은 %d, 평균 점수는 %.2f점 입니다.\n", tot, avg);
	}

	{
		printf("\n=================실습3=================\n");
		double b = 1.5 * (-4.5) + (-2.0) * 2.3;
		printf("%.2lf\n", b);
	}

	{
		printf("\n=================실습4=================\n");
		//int x, y, z;
		long long int x, y, z;

		x = 1234567890;
		y = 987654321;
		z = x * y;

		//printf("%d * %d = %d\n", x, y, z);
		printf("%lld * %lld = %lld\n", x, y, z);
	}

	{
		printf("\n=================실습5=================\n");
		double x;

		printf("실수 입력>> ");
		scanf("%lf", &x);		
		printf("%.2f의 제곱근은 %.2f입니다.\n", x, sqrt(x));
	}

	{
		printf("\n=================실습6=================\n");
		double x1, y1, x2, y2;
		double dist;

		printf("x1 y1 = ");
		scanf("%lf%lf", &x1, &y1);
		printf("x2 y2 = ");
		scanf("%lf%lf", &x2, &y2);

		double dx, dy;	// delta-x, delta-y
		dx = x1 - x2;
		dy = y1 - y2;
		dist = sqrt(dx * dx + dy * dy);

		printf("두 점 (%.2f, %.2f)와 (%.2f, %.2f) 사이의 거리는 %.2f입니다.",
			x1, y1, x2, y2, dist);
	}

	{
		printf("\n=================실습7=================\n");
		double x1, x2;

		printf("x1 = ");
		scanf("%lf", &x1);
		printf("x2 = ");
		scanf("%lf", &x2);

		double dx = x1 - x2;
		double dist = sqrt(dx * dx);
		
		printf("x1과 x2 사이의 거리는 %.2lf입니다.\n", dist);
	}
}