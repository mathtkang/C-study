////#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <limits.h>
//#include <math.h>
//#include <stdlib.h>
//#include <stdbool.h>
//
//int main(void){
//    double operand, old = 0, new;
//    char cmd[100], operator;
//    
//    printf("%d", (int)old);
//    
//        while (true) {
//            printf("\n");
//            printf(">> ");
////            scanf_s("%s", cmd, sizeof(cmd)); //scanf_s 함수 : xcode에서는 사용 불가 (VS에서만 사용되는 비표준함수)
//            scanf("%s", cmd);
//            operator = cmd[0]; //연산자
//            operand = atof(cmd + 1); //실수값
//            
//            if( (operand-(int)operand) == 0){//정수로만 이루어짐
//                
//                switch (operator) {
//                    case '+':
//                        new = old + operand;
//                        printf("%d + %d = %d\n", (int)old, (int)operand, (int)new);
//                        old = new;
//                        break;
//                    case '-':
//                        new = old - operand;
//                        printf("%d - %d = %d\n", (int)old, (int)operand, (int)new);
//                        old = new;
//                        break;
//                    case '*':
//                        new = old * operand;
//                        printf("%d * %d = %d\n", (int)old, (int)operand, (int)new);
//                        old = new;
//                        break;
//                    case '/':
//                        if(operand == 0){
//                            printf("0으로 나눌 수 없습니다.\n");
//                        }else{
//                            new = old / operand;
//                            printf("%d / %d = %d\n", (int)old, (int)operand, (int)new); //정수일때는 몫만 출력
//                            old = new;
//                        }
//                        break;
//                }
//                
//            } else { //실수 하나라도 존재
//                
//                switch (operator) {
//                    case '+':
//                        new = old + operand;
//                        printf("%.2lf + %.2lf = %.2lf\n", old, operand, new);
//                        old = new;
//                        break;
//                    case '-':
//                        new = old - operand;
//                        printf("%.2lf - %.2lf = %.2lf\n", old, operand, new);
//                        old = new;
//                        break;
//                    case '*':
//                        new = old * operand;
//                        printf("%.2lf * %.2lf = %.2lf\n", old, operand, new);
//                        old = new;
//                        break;
//                    case '/':
//                        if(operand == 0){
//                            printf("0으로 나눌 수 없습니다.\n");
//                        }else{
//                            new = old / operand;
//                            printf("%.2lf / %.2lf = %.2lf\n", old, operand, new);
//                            old = new;
//                        }
//                        break;
//                }
//            }
//    //        printf("operator = %c, operand = %.2lf\n", operator, operand);
//        }
//    
////    //힌트
////        int x = 0;
////        int x_old;
////
////        for (int i = 1; i <= 10; i++) {
////            x_old = x;
////            x++;
////            printf("x : %d --> %d\n", x_old, x);
////        }
////
////        int x1 = 0;
////        int x_new;
////
////        for (int i = 1; i <= 10; i++) {
////            x_new = x1 + 1;
////            printf("x : %d --> %d\n", x1, x_new);
////            x1 = x_new;
////        }
//    
//    return 0;
//}
//
//
