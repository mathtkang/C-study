#include <stdio.h>
#include <stdlib.h>

int main(void) {

	// 실습문제1
	printf("슬래시(\'/\')를 뒤집으면 백슬래시(\'\\\')이다.\n");
	printf("\'\\t\'는 탭 키를 뜻한다.\n");
	printf("문자열은 큰 따옴표(\")로 둘러싸서 표현한다.\n");


	// 실습문제2
	puts("");	// puts("")는 printf("\n")과 같다.

	int gugu;
	printf("구구단 몇 단?(2~19)>> ");
	scanf_s("%d", &gugu);

	// 형식문자열(format string)도 문자열이기 때문에,
	// 같은 형식문자열을 반복해서 사용할 거라면
	// 미리 만들어 두고 사용할 수 있다.
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


	// 실습문제3
	puts("");
	int rect, circle, tri, result;
	printf("네모 동그라미 세모 >> ");
	scanf_s("%d%d%d", &rect, &circle, &tri);
	
	result = rect + circle * tri;

	printf("%5d + %5d * %5d = %5d\n", rect, circle, tri, result);
	printf("%#5o + %#5o * %#5o = %#5o\n", rect, circle, tri, result);
	printf("%#5X + %#5X * %#5X = %#5X\n", rect, circle, tri, result);

	
	// 실습문제4
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
	

	// 실습문제5
	puts("");
	
	unsigned int u;
	printf("양의 정수>> ");
	scanf_s("%u", &u);
	printf("LSB1 = %u\n", u & 0x1);
	u = u >> 1;
	printf("LSB2 = %u\n", u & 0x1);
	u = u >> 1;
	printf("LSB3 = %u\n", u & 0x1);
	u = u >> 1;

	// 실습문제6
	puts("");
	unsigned long long pow2 = 1;
	int k;

	printf("k = ");
	scanf_s("%d", &k);
	printf("2의 %d 제곱 = %llu\n", k, pow2 << k);

	return 0;
}
