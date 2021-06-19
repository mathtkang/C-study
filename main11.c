#include <stdio.h>
int main(void){
    //프로그래밍실습 기말고사 오답
    //16번
    int x = 255 & 8;
    printf("%d", x);
    
    //28번
    int x1 = 4, abs ;
    if(x1 < 0) {
        abs = -x1;
    }else{
        abs = x1;
    }
    
    (x1 < 0) ? (abs = -x1) : (abs = x1);
    
    printf("%d", abs);
    
    //34번
    int xx1 = 10;
    while(xx1 >= 1){
        printf("%d\n", xx1);
        xx1--;
    }
    printf("\n");
    //똑같이 동작
    int xx2;
    for(xx2 = 10; xx2 >= 1; xx2--){
        printf("%d\n", xx2);
    }
    
    //36번
    //경우1)
    int x2;
    for (x2 = 1; x2 <= 10; x2++) {
        printf("%d\n", x);
    }
    printf("(finally) x = %d\n", x2);

    //경우2)
    for (int x3 = 1; x3 <= 10; x3++) {
        printf("%d\n", x3);
    }
//    printf("(finally) x = %d\n", x3); //에러발생 (x는 지역변수니까) => scope

    
    

    
    return 0;
}
