//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void){
    //13-1.실습문제

    //실습1
    int num1 = 1;
    for(int i = 1; i <= 8; i++){
        printf("%d ",num1);
        num1 += 2;
    }
    printf("\n");
    int num2 = 10;
    for(int i = 1; i <= 10; i++){
        printf("%d ",num2);
        num2 -= 1;
    }
    printf("\n");
    int num3 = 4;
    for(int i = 1; i <= 8; i++){
        printf("%d ",num3);
        num3 += 4;
    }
    printf("\n");
    int num4 = 18;
    for(int i = 1; i <= 7; i++){
        printf("%d ",num4);
        num4 -= 3;
    }
    printf("\n");
    int num5 = 3;
    for(int i = 1; i <= 6; i++){
        printf("%d ",num5);
        num5 *= 3;
    }
    printf("\n");
    int num6 = 80;
    for(int i = 1; i <= 7; i++){
        printf("%d ",num6);
        num6 -= 30;
    }
    printf("\n");
    int num7 = 256;
    for(int i = 1; i <= 9; i++){
        printf("%d ",num7);
        num7 /= 2;
    }
    printf("\n");

    //실습2
    int n, j, k;
    printf("n = ");
    scanf("%d", &n);

    printf("A1 = 1\n");
    j = 1;
    k = 2;
    for (int i = 1; i < 5; i++){
        printf("A%d = A%d + %d * %d = %d\n", k, k-1, k, k+1, j+k*(k+1) );
        j = j+k*(k+1);
        k++;
    }
    
    //실습3
    int nn, i, flag = 0;
    printf("n = ");
    scanf("%d", &nn);
    //flag변수 이용 > 소수 판별
    for (i = 2; i <= sqrt(nn); i++) {
        if (nn % i == 0) { //소수가 아님
            flag = 1;
            break;
        }
    }
    //판별한 값 출력
    if (nn == 1) {
        printf("1 is NOT a prime number\n");
    }
    else {
        if (flag == 0){ //소수
            printf("%d IS a prime number\n", nn);
        } else { //소수아님
            printf("%d is NOT a prime number\n", nn);
        }

    }
    
    //실습4
    printf("<구구단 짝수단 출력>\n");

    for(int d = 2; d <= 8; d+=2 ){
        printf("<구구단 %d단>\n", d);

        for(int i = 1; i <= 9; i++){
            printf("%d * %d = %d\n", d, i, d*i);
        }
        printf("\n");
    }
    

    //실습5
    int n1, m1;
    printf("n m = ");
    scanf("%d%d", &n1, &m1);

    for(int i = 1; i <= m1; i++){ //첫줄
        printf("*");
    }
    printf("\n");
    for(int i = 1; i <= n1-2; i++){
        printf("*");
        for(int j = 1; j <= m1-2; j++){
            printf(" ");
        }
        printf("*");
        printf("\n");
    }

    for(int i = 1; i <= m1; i++){ //마지막줄
        printf("*");
    }
    printf("\n");
    
    //실습6-1
    int n2, m2;
    printf("n m = ");
    scanf("%d%d", &n2, &m2);

    for(int i = 1; i <= n2; i++){ //행의 갯수
        for(int j = 1; j <= m2; j++){ //열의 갯수
            printf("1");
        }
        printf("\n");
    }

    //실습6-2
    int n3, m3;
    printf("n m = ");
    scanf("%d%d", &n3, &m3);

    for(int i = 1; i <= n3; i++){ //행
        for(int j = 1; j <= m3; j++){ //열
            printf("%d", j);
        }
        printf("\n");
    }
    
    //실습6-3
    
    

    

    
    
    
    return 0;
}

