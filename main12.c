#include <stdio.h>
//프로그래밍실습 기말고사 오답
//49번

void f1(int);
void f2(void);

int x = 10;

void f1(int a) {
    x += a;
    printf("%d\n", x);
}

void f2() {
    printf("%d\n", ++x);
}

int main(void) {
    f1(10);
    f2();
    printf("%d\n", ++x);
    
    return 0;
}
