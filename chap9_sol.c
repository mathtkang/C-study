#include <stdio.h>
#include <stdlib.h>

int main(void) {

	// �ǽ�����1
	printf("������(\'/\')�� �������� �齽����(\'\\\')�̴�.\n");
	printf("\'\\t\'�� �� Ű�� ���Ѵ�.\n");
	printf("���ڿ��� ū ����ǥ(\")�� �ѷ��μ� ǥ���Ѵ�.\n");


	// �ǽ�����2
	puts("");	// puts("")�� printf("\n")�� ����.

	int gugu;
	printf("������ �� ��?(2~19)>> ");
	scanf_s("%d", &gugu);

	// ���Ĺ��ڿ�(format string)�� ���ڿ��̱� ������,
	// ���� ���Ĺ��ڿ��� �ݺ��ؼ� ����� �Ŷ��
	// �̸� ����� �ΰ� ����� �� �ִ�.
	char fmt_str[100] = "%3d * %3d = %3d\n";
	printf(fmt_str, gugu, 1, gugu * 1);
	printf(fmt_str, gugu, 2, gugu * 2);
	printf(fmt_str, gugu, 3, gugu * 3);
	printf(fmt_str, gugu, 4, gugu * 4);
	printf(fmt_str, gugu, 5, gugu * 5);
	printf(fmt_str, gugu, 6, gugu * 6);
	printf(fmt_str, gugu, 7, gugu * 7);
	printf(fmt_str, gugu, 8, gugu * 8);
	printf(fmt_str, gugu, 9, gugu * 9);


	// �ǽ�����3
	puts("");
	int rect, circle, tri, result;
	printf("�׸� ���׶�� ���� >> ");
	scanf_s("%d%d%d", &rect, &circle, &tri);
	
	result = rect + circle * tri;

	printf("%5d + %5d * %5d = %5d\n", rect, circle, tri, result);
	printf("%#5o + %#5o * %#5o = %#5o\n", rect, circle, tri, result);
	printf("%#5X + %#5X * %#5X = %#5X\n", rect, circle, tri, result);

	
	// �ǽ�����4
	puts("");
	int sun_low = 9, sun_high = 24;
	int mon_low = 12, mon_high = 21;
	int tue_low = 11, tue_high = 22;
	double sun_rain = 8.5, mon_rain = 22.4, tue_rain = 67.0;

	printf("weekday  temperature(low ~ high)  rain prob.\n");
	printf("============================================\n");

	char fmt_str2[100] = "%7s  %10d ~ %3d  %13.1f%%\n";
	printf(fmt_str2, "SUNDAY", sun_low, sun_high, sun_rain);
	printf(fmt_str2, "MONDAY", mon_low, mon_high, mon_rain);
	printf(fmt_str2, "TUESDAY", tue_low, tue_high, tue_rain);
	

	// �ǽ�����5
	puts("");
	
	unsigned int u;
	printf("���� ����>> ");
	scanf_s("%u", &u);
	printf("LSB1 = %u\n", u & 0x1);
	u = u >> 1;
	printf("LSB2 = %u\n", u & 0x1);
	u = u >> 1;
	printf("LSB3 = %u\n", u & 0x1);
	u = u >> 1;

	// �ǽ�����6
	puts("");
	unsigned long long pow2 = 1;
	int k;

	printf("k = ");
	scanf_s("%d", &k);
	printf("2�� %d ���� = %llu\n", k, pow2 << k);

	return 0;
}
