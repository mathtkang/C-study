//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>
#include <math.h>
#include <stdlib.h>

int main(void){
    //if문
    int x;
    printf(">> ");
    scanf("%d", &x);
    if(x>0){
        printf("%d는 양의 정수\n", x);
    }
    else {
        printf("%d는 양의 정수가 아님\n", x);
    }
    printf("끝\n");

    
    //조건연산자 - (조건식) ? (표현식1) : (표현식2)
    int n1, n2, big_num;
    
    if(n1 >= n2)
        big_num = n1;
    else
        big_num = n2;
    //같은말
    big_num = (n1 >= n2) ? n1 : n2;

    //switch문
    char output;
    
    switch (x) {
        case 1:
            output = 'A'; break;
        case 2:
            output = 'B'; break;
        case 3:
            output = 'C'; break;
        default:
            output = '?'; break;
    }

// 11-1.실습문제

//    실습1
    char ch;
    printf("input a character >> ");
    scanf("%c", &ch);

    if(ch >='A' && ch <= 'Z'){ //대문자인경우
        printf("%c\n",ch);
    }
    else if(ch >='a' && ch <= 'z'){ //소문자인경우
        printf("%c\n",ch-32);
    }
    else{ //알파벳 외 문자인경우
        printf("%c\n",ch);
    }

//    실습2
    int a,b;
    printf("a b >> ");
    scanf("%d%d",&a,&b);

    if(a<=b){
        printf("a = %d, b = %d\n", a, b);
    }
    else{
        printf("a = %d, b = %d\n", b, a);
    }

//    실습3
    double x1;
    printf("x >> ");
    scanf("%lf", &x1);

    if(x1 == (int)x1 ){
        printf("x IS an integer");
    }
    else{
        printf("x IS NOT an integer");
    }

//    실습4
    int a1, b1, result;
    printf("a b >> ");
    scanf("%d%d", &a1, &b1);
    //if문 이용
    if(a1>=b1){
        printf("%d",a1);
    }else{
        printf("%d",b1);
    }
    //조건연산자 이용 1
    result = (a1>=b1) ? a1 : b1;
    printf("%d", result);
    //조건연산자 이용 2
    (a1>=b1) ? printf("%d",a1) : printf("%d",b1) ;

//    //실습5
//    int i1,i2,i3;
//    printf("input 3 integers >> ");
//    scanf("%d%d%d", &i1, &i2, &i3);
//    if(i1 > i2){ //i1 > i2
//        if(i1 > i3){ //i1 > i2, i1 > i3 (아직 i2, i3 누가 큰지 모른다)
//            if(i2 > i3){ //i1 > i2 > i3
//                printf("%d %d %d\n", i1, i2, i3);
//            }
//            else{ // //i1 > i3 >= i2
//                printf("%d %d %d\n", i1, i3, i2);
//            }
//        }
//        else{ //i3 >= i1 > i2
//            printf("%d %d %d\n", i3, i1, i2);
//        }
//    }
//    else{ //i2 >= i1
//        if(i2 > i3){ //i2 >= i1, i2 > i3 (아직 i1, i3 누가 큰지 모른다)
//            if(i1 > i3){ //i2 >= i1 > i3
//                printf("%d %d %d\n", i2, i1, i3);
//            }
//            else{ //i2 >= i3 >= i1
//                printf("%d %d %d\n", i2, i3, i1);
//            }
//        }
//        else{ //i3 >= i2 >= i1
//            printf("%d %d %d\n", i3, i2, i1);
//        }
//    }
//
////    실습6(1/2)
//    int h1, h2, h3;
//    printf("세 변의 길이 >> ");
//    scanf("%d%d%d", &h1, &h2, &h3);
//    if(h1+h2 <= h3){
//        printf("삼각형이 아님\n");
//    }
//    else{
//        printf("삼각형\n");
//    }
//    if(h1 == h2){
//        if(h2==h3){
//            printf("정삼각형\n");
//        }
//        else{//h2!=h3
//            printf("이등변삼각형\n");
//        }
//    }

    //실습6(2/2) - 실습5, 6-1 합침

    int i1, i2, i3;
    printf("세 변의 길이 >> ");
    scanf("%d%d%d", &i1, &i2, &i3);
    int h1, h2, h3;

    printf("큰 순서로 재배열 : ");
    if(i1 > i2){ //i1 > i2
        if(i1 > i3){ //i1 > i2, i1 > i3 (아직 i2, i3 누가 큰지 모른다)
            if(i2 > i3){ //i1 > i2 > i3
                printf("%d %d %d\n", i1, i2, i3);
                h1 = i1; h2 = i2; h3 = i3;
            }
            else{ // //i1 > i3 >= i2
                printf("%d %d %d\n", i1, i3, i2);
                h1 = i1; h2 = i3; h3 = i2;
            }
        }
        else{ //i3 >= i1 > i2
            printf("%d %d %d\n", i3, i1, i2);
            h1 = i3; h2 = i1; h3 = i2;
        }
    }
    else{ //i2 >= i1
        if(i2 > i3){ //i2 >= i1, i2 > i3 (아직 i1, i3 누가 큰지 모른다)
            if(i1 > i3){ //i2 >= i1 > i3
                printf("%d %d %d\n", i2, i1, i3);
                h1 = i2; h2 = i1; h3 = i3;
            }
            else{ //i2 >= i3 >= i1
                printf("%d %d %d\n", i2, i3, i1);
                h1 = i2; h2 = i3; h3 = i1;
            }
        }
        else{ //i3 >= i2 >= i1
            printf("%d %d %d\n", i3, i2, i1);
            h1 = i3; h2 = i2; h3 = i1;
        }
    }

    if(h1 >= h2+h3){
        printf("삼각형이 아님\n");
    }
    else{
        if(h2 == h3){
            if(h1==h2){
                printf("정삼각형\n");
            }
            else{//h2!=h3
                printf("이등변삼각형\n");
            }
        }else{
            printf("삼각형\n");
        }
    }

    //실습7
    
    

    return 0;
}

