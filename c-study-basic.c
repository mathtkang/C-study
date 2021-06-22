#include <stdio.h>

#define ASCII_BEGIN 0
#define ASCII_END   255

main() {
    //ex38
    int i1;
    
    for(i1 = ASCII_BEGIN; i1 <= ASCII_END; i1++) {
        printf("ASCII 코드 (%3d), 문자 = '%c'\n", i1, i1);
    }
    //ex39
    int kor[10] = {100, 90, 35, 60, 75, 55, 95, 80, 90, 70};
    int i2;
    for(i2 = 0; i2<10; i2++){
        printf("%d \n", kor[i2]);
    }
    //ex40
    int i = 0;
    int j = 1;
    
    printf("값 = %d, 메모리주소 = %p \n", i, &i); //값 = 0, 메모리주소 = 0012FF7C
    //&i : i의 값이 아닌, i가 저장되어 있는 메모리 번지를 printf()함수에 넘겨주라는 뜻
    printf("값 = %d, 메모리주소 = %p \n", j, &j); //값 = 1, 메모리주소 = 0012FF78
    
    
    
}

