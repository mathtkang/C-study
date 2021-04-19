#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


// 5장 실습문제


int main(void) {
	// 코드를 블록({ })으로 묶어서 구분해줄 수 있다.
	// 이름이 같은 변수를 두 번 선언하면 오류가 나지만
	// 서로 다른 블록 안이라면 이름이 같은 변수도 따로따로 사용 가능하다.
	// 이에 대해서는 함수 파트에서 배운다.

	/*
	{
		printf("\n=============실습1=============\n");

		int n;
		printf("0이상 9이하 정수를 입력하세요>> ");
		scanf("%d", &n);
		printf("   %d%d%d   \n", n, n, n);
		printf("   %d%d%d   \n", n, n, n);
		printf("%d%d%d%d%d%d%d%d%d\n", n, n, n, n, n, n, n, n, n);
	}

	{
		printf("\n=============실습2=============\n");

		// 입력
		int square, circle, triangle, result;

		printf("네모 - 동그라미 * 세모 = ?");
		printf("네모, 동그라미, 세모에 들어갈 정수를 입력하세요>> ");
		scanf("%d%d%d", &square, &circle, &triangle);

		// 계산
		result = square - circle * triangle;

		// 출력
		printf("%d - %d * %d = %d\n", square, circle, triangle, result);
	}

	{
		printf("\n=============실습3=============\n");

		// 입력
		int x = 100, y = 200, tmp;
		printf("초기값: x=%d, y=%d\n", x, y);

		// 계산
		tmp = x;
		x = y;
		y = tmp;

		// 출력
		printf("교화 후: x=%d, y=%d\n", x, y);
	}

	{
		printf("\n=============실습4=============\n");

		// 입력
		int width, height, area_tri, area_rect;

		printf("너비(밑변)의 길이는 얼마입니까? ");
		scanf("%d", &width);

		printf("높이는 얼마입니까? ");
		scanf("%d", &height);

		// 계산
		area_tri = width * height / 2;
		area_rect = width * height;

		// 출력
		printf("밑변이 %d, 높이가 %d인 삼각형의 넓이는 %d입니다.\n", width, height, area_tri);
		printf("밑변이 %d, 높이가 %d인 사각형의 넓이는 %d입니다.\n", width, height, area_rect);
	}

	{
		printf("\n=============실습5=============\n");
		int cast_days;
		printf("무인도에 며칠동안 표류했습니까? ");
		scanf("%d", &cast_days);

		int years, months, days;
		years = cast_days / 360;

		int months_n_days = cast_days % 360; // 360*(년 수)를 뺀 날짜만 남는다.
		months = months_n_days / 30;
		days = months_n_days % 30;

		printf("%d일은 %d년 %d개월 %d일입니다.\n", cast_days, years, months, days);
	}

	{
		printf("\n=============실습6=============\n");
		// 더 정확히 하자면 단가를 unit_price, 
		// 지불할 금액(단가 * 수량)을 price라고 이름붙여야 함
		int money = 10000;
		int price = 1500;
		int qty = 2;

		int pay = price * qty;	// 지불할 금액
		int change = money - pay;

		printf("현재 소지금은 %d원입니다.\n", money);
		printf("아이스크림은 개당 %d원입니다.\n", price);
		printf("아이스크림 %d개는 %d원입니다.\n", qty, pay);
		printf("%d원을 내면 거스름돈은 %d원입니다.\n", money, change);
	}*/

	{
		printf("\n=============실습7~8=============\n");
		int money = 10000;
		int price, qty;

		printf("현재 소지금은 %d원입니다.\n", money);
		printf("아이스크림 단가는 얼마입니까? ");
		scanf("%d", &price);
		printf("아이스크림 몇 개를 삽니까? ");
		scanf("%d", &qty);

		int pay = price * qty;	// 지불할 금액
		int change = money - pay;

		printf("아이스크림 %d개는 %d원입니다.\n", qty, pay);
		printf("%d원을 내면 거스름돈은 %d원입니다.\n", money, change);
	
	
		// ============실습8===============
		// 실습 7에 이어서 계산
		int five_thd, one_thd, five_hnd;

		five_thd = change / 5000;

		change = change % 5000; // 5천원권 빼고 거슬러줄 금액
		one_thd = change / 1000;

		change = change % 1000; // 5천원권, 1천원권 빼고 거슬러줄 금액
		five_hnd = change / 500;

		printf("5천원권 %d장, 1천원권 %d장, 5백원 동전 %d개입니다.\n", 
			five_thd, one_thd, five_hnd);
	}
}