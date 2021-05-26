//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>
#include <math.h>
#include <stdlib.h>

int main(void){
    //12-1.실습문제
    
    //실습1
    for(int i = 1; i <= 10; i++){
        printf("컴퓨터공학도와 C언어는 애증의 관계이다.\n");
    }

    //실습2
    for(int i = 0; i <= 9; i++){ //i는 지역변수라 for문 마다 사용해도 상관없음
        printf("%d \n", 2 << i);
    }
    
    //실습3
    int mix = 1;
    int input;
    for(int i = 0; i < 5; i++){
        printf("정수를 입력하세요 >> ");
        scanf("%d", &input);
        mix *= input;
        printf("곱 = %d\n", mix);
    }
    
    //실습4
    int num;
    printf("k >> ");
    scanf("%d", &num);
    printf("\n");

    int input1;
    for(int i = 0; i < 5; i++){
        printf("정수를 입력하세요 >> ");
        scanf("%d", &input1);
        if(input1%num == 0){ //input1이 num의 배수
            printf("%d은(는) %d의 배수입니다.\n", input1, num);
        }else{
            printf("%d은(는) %d의 배수가 아닙니다.\n", input1, num);
        }
    }
    
    //실습5
    unsigned int k;
    printf("k >> ");
    scanf("%d", &k);
    printf("\n");

    int x;
    int sum = 0;
    for(int i = 0; i < 5; i++){
        printf("정수를 입력하세요 >> ");
        scanf("%d", &x);
        if(x >= k){
            sum += x;
            printf("%d\n", sum);
        }else{ //x<k
//            sum += -x;
            sum -= x;
            printf("%d\n", sum);
        }
    }
    
    //최댓값, 최솟값 구하기
    int max, x1;

    max = INT_MIN; //가능한 가장 작은 값으로 시작
    for(int i = 1; i <= 5; i++){
        printf("정수를 입력하세요 >> ");
        scanf("%d", &x1);

        if( x1 > max) {
            max = x1;
        }
    }
    printf("최댓값은 %d입니다.\n", max);
    
    //실습6
    int min, x2;

    min = INT_MAX; //가능한 가장 큰 값으로 시작
    for(int i = 1; i <= 5; i++){
        printf("정수를 입력하세요 >> ");
        scanf("%d", &x2);

        if(x2 < min) {
            min = x2;
        }
    }
    printf("최솟값은 %d입니다.\n", min);
    
    
    //실습7 사건의 발생 횟수 카운트 : counter
    int k1, num1, cnt;
    printf("k >> ");
    scanf("%d", &k1);

    cnt = 0;
    for(int i = 1; i <= 5; i++){
        printf("양의 정수를 입력하세요 >> ");
        scanf("%d", &num1);
        if(num1%k1 == 0){
            cnt++;
        }
    }
    printf("%d의 배수는 %d개입니다.\n", k1, cnt);
    
    //실습8
    int n, input2, cnt1, cnt2, cnt3;
    printf("n >> ");
    scanf("%d", &n);

    cnt1 = 0; cnt2 = 0; cnt3 = 0;
    for(int i = 1; i <= n; i++){
        printf("정수를 입력하세요 >> ");
        scanf("%d", &input2);
        if(input2 > 0){//양수
            cnt1++;
        }else if(input2 == 0){
            cnt2++;
        }else{//음수
            cnt3++;
        }
    }
    printf("양의 정수 : %d개\n", cnt1);
    printf("0       : %d개\n", cnt2);
    printf("음의 정수 : %d개\n", cnt3);
    
    //실습9
    int n1, k2, input3, cnt4;
    printf("n k >> ");
    scanf("%d%d", &n1, &k2);

    cnt4 = 0;
    for(int i = 1; i <= n1; i++){
        printf("정수를 입력하세요 >> ");
        scanf("%d", &input3);
        if(input3 % k2 == 0){
            cnt4++;
        }
    }
    if(cnt4 > 0){
        printf("%d의 배수가 입력되었습니다.\n", k2);
    }else{
        printf("%d의 배수가 입력되지 않았습니다.\n", k2);
    }
    
    //실습10 등차수열
    int n2, k3, d, sum1;
    printf("n k d >> ");
    scanf("%d%d%d", &n2, &k3, &d);
    
    sum1 = k3;
    printf("%d\n", sum1);
    for(int i = 1; i < n2; i++){
        sum1 += d;
        printf("%d\n", sum1);
    }
   
    return 0;
}
    
