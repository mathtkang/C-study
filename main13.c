//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

//함수의 순서 : 선언 -> 정의 -> 호출

int sum(int, int); //매개변수의 자료형을 선언

int sum(int a, int b){ //매개변수 대입 후 함수 자체를 정의해줌
    int res = a + b;
    return res;
};


int main(void){ //메인 함수를 통해서 작동하도록 만든다
    int result = sum(10, 20);
    printf("%d\n", result);
    
    return 0;
}

//KISS(Keep It Simple, Stupid)
//Simple : 한 가지 일만 수행하는 단순한 함수를 만들고, 직관적이고 명확한 이름을 부여한다.
//Stupid : 똑똑한 함수 한 개 보다는 멍청한 함수 여러 개를 만들자.

//1. 매개변수가 없는 함수 : void : 명시할 내용이 없음을 나타내는 예약어
n = get_positive(); //아예 겟포지티브 함수를 정의해준다

int get_positive(void){ //아니면 아예 매개변수 자리를 공백으로 놓아도 된다.
    return pos;
}

//2. 반환값이 없는 함수
void print_char(char ch, int n){
    
    return; //리턴 자체를 생략할 수 있다.
}

//3. 매개변수, 반환값 둘 다 없는 함수
void print_title(void){
    printf("");
    printf("");
}


int acc(int n)
{
    int sum, i;
    
    if (n < 0 ){
        printf("잘못된 입력입니다.\n");
        return 0; //함수는 return값이 나오면 동작하던 것을 끝내고 호출한 (메인함수)로 다시 돌아간다.
    }
    sum = 0;
    for(i = 1; i <= n; i++){
        sum += 1;
    }
    printf("1부터 %d까지의 합은 %d 입니다.\n", n, sum);
    return  sum;
}


//실습1

