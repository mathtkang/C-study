//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int sum(int, int);

int sum(int a, int b){
    a++;
    b++;
    int res = a + b;
    printf("sum() : a = %d, b = %d, res = %d\n", a, b, res);
    return res;
}

int main(void){
    int x = 10, y = 20;
    int result = sum(x, y);
    printf("main() : x = %d, y = %d, result = %d\n", x, y, result);
    return 0;
}
