//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int A();
int B();

int A(int x) {
    int a = B() + x;
    return a;
}

int B() {
    int b = 2021;
    return b;
}

int main(void) {
    int ret = A(10);
    printf("%d\n", ret);
    return 0;
}
