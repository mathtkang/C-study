#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>


// 6�� �ǽ�����

int main(void) {
	{
		printf("\n=================�ǽ�1=================\n");
		double square, circle, triangle, result;

		printf("�׸� - ���׶�� * ���� = ?\n");
		printf("�׸�, ���׶��, ���� �� �Ǽ��� �Է��ϼ���>> ");
		scanf("%lf%lf%lf", &square, &circle, &triangle);
		result = square - circle * triangle;
		printf("%.2f - %.2f * %.2f = %.2f �Դϴ�.\n", square, circle, triangle, result);
	}

	{
		printf("\n=================�ǽ�2=================\n");
		int kor, eng, math;
		printf("���� ���� ���� ����>> ");
		scanf("%d%d%d", &kor, &eng, &math);
		
		int tot = kor + eng + math;
		double avg = tot / 3.;

		printf("������ %d, ��� ������ %.2f�� �Դϴ�.\n", tot, avg);
	}

	{
		printf("\n=================�ǽ�3=================\n");
		double b = 1.5 * (-4.5) + (-2.0) * 2.3;
		printf("%.2lf\n", b);
	}

	{
		printf("\n=================�ǽ�4=================\n");
		//int x, y, z;
		long long int x, y, z;

		x = 1234567890;
		y = 987654321;
		z = x * y;

		//printf("%d * %d = %d\n", x, y, z);
		printf("%lld * %lld = %lld\n", x, y, z);
	}

	{
		printf("\n=================�ǽ�5=================\n");
		double x;

		printf("�Ǽ� �Է�>> ");
		scanf("%lf", &x);		
		printf("%.2f�� �������� %.2f�Դϴ�.\n", x, sqrt(x));
	}

	{
		printf("\n=================�ǽ�6=================\n");
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

		printf("�� �� (%.2f, %.2f)�� (%.2f, %.2f) ������ �Ÿ��� %.2f�Դϴ�.",
			x1, y1, x2, y2, dist);
	}

	{
		printf("\n=================�ǽ�7=================\n");
		double x1, x2;

		printf("x1 = ");
		scanf("%lf", &x1);
		printf("x2 = ");
		scanf("%lf", &x2);

		double dx = x1 - x2;
		double dist = sqrt(dx * dx);
		
		printf("x1�� x2 ������ �Ÿ��� %.2lf�Դϴ�.\n", dist);
	}
}