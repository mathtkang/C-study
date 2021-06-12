//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void){
//    복습
//    for문 -> while문 변환
//    for(int i = 1; i <= 10; i++){
//        printf("반복문입니다.\n");
//        printf("현재 i값은 %d입니다.\n", i);
//    }
//    //같은 반복문
//    int i = 1;
//    while(i <= 10){
//        printf("반복문입니다.\n");
//        printf("현재 i값은 %d입니다.\n", i);
//        i++;
//    }
    
    //14-1.실습문제

    //실습1
    int n1, x;
    int n_pos, n_zero, n_neg;
    printf("n >> ");
    scanf("%d", &n1);

    n_pos = n_zero = n_neg = 0;
    int i = 1;
    while (i <= n1) {
        printf("정수를 입력하세요 >> ");
        scanf("%d", &x);

        if (x > 0)
            n_pos++;
        else if (x < 0)
            n_neg++;
        else
            n_zero++;
        i++;
    }

    printf("양의 정수 : %d개\n", n_pos);
    printf("0       : %d개\n", n_zero);
    printf("음의 정수 : %d개\n", n_neg);

    //실습2-1
    int n, m, num = 1;
    printf("n m = ");
    scanf("%d%d", &n, &m);

    while (i <= n*m) {
        printf("%02d ", num);
        if( num % m == 0){
            printf("\n");
        }
        num++;
        i++;
    }

    //실습2-2
    int num1, star;
    printf("n = ");
    scanf("%d", &num1);
    star = num1;
    for(int i = 1; i <= num1; i++){  //행
        for(int j = 1; j <= star; j++){  //열
            printf("*");
        }
        printf("\n");
        star--; //감소되는 변수랑 행의 num변수가 같으면 안된다 (이중으로 감소됨)
    }

    //실습2-3
    int num2, star1;
    printf("n = ");
    scanf("%d", &num2);
    star1 = num2;

    for(int i = 0; i < num2; i++){  //행
        for(int j = 0; j < i; j++){  //열-공백
            printf(" ");
        }
        for(int j = 1; j <= star1; j++){  //열-별
            printf("*");
        }
        printf("\n");
        star1--;
    }

    //실습2-4
    int num3, star2, line;
    printf("n = ");
    scanf("%d", &num3);
    star2 = num3;
    line = 0;

    for(int i = 0; i < num3; i++){  //행

        for(int j = 1; j < star2; j++){  //열-앞 공백
            printf(" ");
        }
        for(int j = 0; j <= line; j++){  //열-별
            printf("*");
        }
        line += 2;
        for(int j = 1; j < star2; j++){  //열-뒤 공백
            printf(" ");
        }
        printf("\n");
        star2--;
    }

    //실습2-5 - 역삼각형 별
    int num4, star3;
    printf("n = ");
    scanf("%d", &num4);
    star3 = num4;

    for(int i = 0; i < num4; i++){  //행

        for(int j = 0; j < i; j++){  //열-앞 공백
            printf(" ");
        }
        for(int j = 0; j < 2*star3-1; j++){  //열-별
            printf("*");
        }
        for(int j = 0; j < i; j++){  //열-뒤 공백
            printf(" ");
        }
        printf("\n");
        star3--;
    }
    
    //실습3-1
    int subject, score = 0;
    char *result;

    for (int i = 1; i <= 5; i++) {
        printf("학생%d의 과목%d 점수 = ", 1, i);
        scanf("%d", &subject);
        if (subject < 60) {
            score++;
        }
    }
    if (score >= 2){
        result = "불합격";
    } else {
        result = "합격";
    }
    printf("과락 = %d개 : %s\n", score, result);
    
    //실습3-2
    int subject1, score1 = 0;
    char *result1, *zero;
    for(int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            printf("학생%d의 과목%d 점수 = ", i, j);
            scanf("%d", &subject);
            if (subject1 < 60) {
                score1++;
            } else if (subject1 == 0){
                break; //가까운 반복문 나옴
            }
        }
        if(subject1 == 0){
            result1 = "불합격";
            zero = "0점 있음";
        } else {
            if (score >= 2){
                result1 = "불합격";
            } else {
                result1 = "합격";
            }
        }
        
        printf("학생%d은(는) %s입니다.(%s)\n\n", score1, result1, zero);
    }
    
    
    
    
    
    

    return 0;
}

