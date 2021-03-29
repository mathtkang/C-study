//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main1(void)
//{
//    //실습 1
//    int a = 0;
//    
//    printf("0이상 9사이의 정수를 입력하세요 >> ");
//    scanf("%d", &a);
//    printf("코끼리를 삼킨 보아뱀 \n");
//    printf("   %d%d%d   \n", a,a,a);
//    printf("   %d%d%d   \n", a,a,a);
//    printf("%d%d%d%d%d%d%d%d%d\n", a,a,a,a,a,a,a,a,a);
//
//    //실습 2
//    int b,c,d = 0;
//    printf("네모 - 동그라미 * 세모 = ? \n");
//    printf("네모, 동그라미, 세모에 들어갈 정수를 입력하세요 >> ");
//    scanf("%d %d %d", &b, &c, &d);
//
//    printf("%d - %d * %d = %d \n", b, c, d, b-c*d);
//    
//    //실습 3
//    int x = 100, y = 200, z;
//    printf("초기값 : x=%d, y=%d \n", x, y);
//    z = x;
//    x = y;
//    y = z;
//    printf("교환후 : x=%d, y=%d \n", x, y);
//
//    //실습 4
//    int width, height, area_tri, area_rect;
//    
//    printf("너비(밑변)의 길이는 얼마입니까? ");
//    scanf("%d", &width);
//    printf("높이는 얼마입니까? ");
//    scanf("%d", &height);
//
//    area_tri = width*height*0.5;
//    area_rect = width*height;
//    
//    printf("밑변이 %d, 높이가 %d인 삼각형의 넓이는 %d입니다. \n", width, height, area_tri);
//    printf("밑변이 %d, 높이가 %d인 사각형의 넓이는 %d입니다. \n", width, height, area_rect);
//
//    //실습 5
//    int day = 0, year = 0, month = 0, days = 0;
//    
//    printf("무인도에 며칠동안 표류했습니까? ");
//    scanf("%d", &day);
//    
//    year = day/360;
//    month = (day%360)/30;
//    days = day%30;
//    
//    printf("%d일은 %d년 %d개월 %d일입니다.", day, year, month, days);
//    
//    //실습 6
//    int money = 10000; //소지금
//    int price = 1500; //아이스크림 가격
//    int qty = 2; //구매한 아이스크림 갯수
//    int change = money-(price*qty); //거스름 돈
//    
//    printf("현재 소지금은 %d원입니다. \n", money);
//    printf("아이스크림은 개당 %d원입니다. \n", price);
//    printf("아이스크림 %d개는 %d원입니다. \n", qty, price*qty);
//    printf("%d원을 내면 거스름돈은 %d원입니다. \n", money, change);
//    
//    //실습 7
//    printf("현재 소지금은 %d원입니다. \n", money);
//    printf("아이스크림 단가는 얼마입니까? ");
//    scanf("%d", &price);
//    printf("아이스크림 몇 개를 삽니까? ");
//    scanf("%d", &qty);
//    printf("아이스크림 %d개는 %d원입니다. \n", qty, price*qty);
//    change = money-(price*qty);
//    printf("%d원을 내면 거스름돈은 %d원입니다. \n", money, change);
//    
//    //실습 8
//    printf("현재 소지금은 %d원입니다. \n", money);
//    printf("아이스크림 단가는 얼마입니까? ");
//    scanf("%d", &price);
//    printf("아이스크림 몇 개를 삽니까? ");
//    scanf("%d", &qty);
//    printf("아이스크림 %d개를 사면 %d원입니다. \n", qty, price*qty);
//    change = money-(price*qty);
//    printf("%d원을 내면 거스름돈은 %d원입니다. \n", money, change);
//
//    int fivethousand, thousand, fivehundred;
//    
//    fivethousand = change/5000;
//    thousand = (change%5000)/1000;
//    fivehundred = (change%1000)/500;
//    printf("5천원권 %d장, 1천원권 %d장, 5백원 동전 %d개입니다.", fivethousand, thousand, fivehundred);
//    
//    return 0;
//}
