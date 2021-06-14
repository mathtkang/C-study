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
    char *result1;
    for(int i = 1; i <= 5; i++) { //학생
        for (int j = 1; j <= 5; j++) { //과목
            printf("학생%d의 과목%d 점수 >> ", i, j);
            scanf("%d", &subject1);

            if(subject1 == 0){
                printf("학생%d은(는) 불합격입니다. (0점 있음)\n", i);
                break; //가까운 반복문을 나온다.
            } else if (subject1 < 60){
                score1++;
            }
        }

        if(subject1 == 0){
            score1 = 0;
            continue; //다음학생으로 넘어간다.
        }
        if (score1 >= 2){
            result1 = "불합격";
        } else {
            result1 = "합격";
        }
        printf("학생%d은(는) %s입니다. (과락 %d과목)\n", i, result1, score1);
        score1 = 0;
    }

    //실습4-1
    int num5, sum = 0;
    printf("n = ");
    scanf("%d", &num5);

    for(int i = 1; i <= num5; i++){
        sum += i;
    }
    printf("%d\n", sum);

    //실습4-2
    int num6, sum1 = 0;
    printf("n = ");
    scanf("%d", &num6);
    if(num6 == 0){
        printf("종료합니다.\n");
    } else {
        //sol1)
        for(int i = 1; i <= num6; i++){
            sum1 += i;
            printf("%d",i);
            if(i == num6){
                printf(" = ");
            }else{
                printf(" + ");
            }
        }
        printf("%d\n", sum1);
    }

    //실습5 - part2) 실습3
    int n2, flag = 0;
    printf("n = ");
    scanf("%d", &n2);
    //flag변수 이용 > 소수 판별
    for (int i = 2; i <= sqrt(n2); i++) { //sqrt : 제곱근 함수
        if (n2 % i == 0) { //소수가 아님
            flag = 1;
            break;
        }
    }
    //판별한 값 출력
    if (n2 == 1) {
        printf("1 is NOT a prime number\n");
    }
    else {
        if (flag == 0){ //소수
            printf("%d IS a prime number\n", n2);
        } else { //소수아님
            printf("%d is NOT a prime number\n", n2);
        }
    }

    //실습5-1) while문
    int pri, cnt, num7; // pri : 소수판정, cnt : 자연수, num : 범위
    cnt = 2; // cnt는 2 이상의 자연수부터 (1은 소수가 아니다)
    printf("최대 어떤 정수 이하 소수까지 출력? : ");
    scanf("%d", &num7); // 최대 출력값을 num으로 설정하기 위해 입력받음

    while(cnt < num7) {
        pri = 1; // pri 소수판정 위해서, 기본값은 1

        for(int i = 2; i < cnt; i++){ // i는 2부터 cnt값이 되기 전까지 증가시킴 (즉, 2 ≤ i ≤ cnt-1)
            if(cnt % i == 0) { //소수 아님
                pri = 0; //소수 아님
                break; //가까운 반복문 탈출
            }
        }
        if(pri == 1) { //소수라면
            printf("%d ", cnt); // 해당 숫자를 출력
        }
        cnt++; // cnt의 값을 1씩 증가, 최대 num이 되기전까지
    }
    printf("\n");

    //실습5-1) for문 + 개수출력
    int num8, flag1, cnt2 = 0;
//    flag1 = 1;
    printf("최대 어떤 정수 이하 소수까지 출력? : ");
    scanf("%d", &num8); // 최대 출력값을 num으로 설정하기 위해 입력받음

    for(int i = 2; i <= num8; i++) {// i는 2 이상의 자연수부터 (1은 소수가 아니다)
        flag1 = 1; //소수판정(기본값 1) : 0이면 소수가 아님
        //위의 줄이 for문 밖에 있으면 안먹고 안에 있어야 정상작동 됨 > for문도 지역전역변수? 근데 이미 밖에서 선언해줬는데 왜 전역변수로 인식이 안되지,,?

        for(int j = 2; j < i; j++){
            if(i % j == 0) { //소수 아님
                flag1 = 0;
                break;
            }
        }

        if(flag1 == 1) { //소수
            printf("%d ", i); // 해당 숫자를 출력
            cnt2++;
        }
    }
    printf("\n");
    printf("%d이하 소수는 %d개\n", num8, cnt2);
    
    //실습6-1
    int num9;
    printf("n = ");
    scanf("%d", &num9);

    while (num9 != 0) {
        printf("%d\n", num9 % 10);
        num9 /= 10;
    }

    //실습6-2
    int num10;
    printf("n = ");
    scanf("%d", &num10);


    //2진수로 변환


    while (num9 != 0) {
        printf("%d\n", num9 % 10);
        num9 /= 10;
    }


    int n3, c = 0, mok, nmg, i1;
    int arr[10];

    printf("100이하의 정수 입력 : ");
    scanf("%d", &n3);

    do {
        mok = n3 / 2;
        nmg = n3 - mok * 2;
        arr[c++] = nmg;
        n3 = mok;
    } while (mok != 0);

    for (i1 = c - 1; i1 >= 0; i1--)
    printf("%d", arr[i1]);
    
    
    
    unsigned int num11;
    printf("정수를 입력해주세요\n");
    scanf("%d", &num11);

    printf("2진수 변환 : ");
    //이진수 출력
    for (int i = 7; i >= 0; --i) { //8자리 숫자까지 나타냄
        int result = num11 >> i & 1;
        printf("%d", result);
        
    }
    

    return 0;
}

