#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    
//    //과제2-1 : 그대로
    
//    double x, y;
//    // 더하기, 빼기, 곱하기, 나누기
//    double sum, diff, mult, quot;
//    // double sum, diff, mult, quot, rem;
//
//    printf("두 수를 입력하세요 >> ");
//    scanf("%lf%lf", &x, &y);
//    sum = x + y;
//    diff = x - y;
//    mult = x * y;
//    quot = x / y;
//    //rem = x % y;
//
//    printf("%.3lf 더하기 %.3lf은(는) %.3lf 입니다.\n", x, y, sum);
//    printf("%.3lf 빼기 %.3lf은(는) %.3lf 입니다.\n", x, y, diff);
//    printf("%.3lf 곱하기 %.3lf은(는) %.3lf 입니다.\n", x, y, mult);
//    printf("%.3lf을(를) %.3lf로 나눈 값은 %.3lf 입니다.\n", x, y, quot);
//    //printf(".3lf을(를) .3lf로 나눈 나머지는 .3lf 입니다.\n", x, y, rem);
    
    
    
    //과제2-2
//    [조건]
//    – 수, 연산자, 수를 차례로 입력 받는다.
//    – 연산자는+,-,*,/이다.
//    – 두 수 중 하나라도 실수로 입력 되면 실수연산을, 아니라면 정수 연산을 수행하고 결과값을 출력
//        • 나눗셈‘/’연산에주의
//        • 실수는 소수점 이하 두 번째 자리까지 출력
//        • 반드시 switch문을 사용할 것
    
    double num1, num2, result;
    char operator;
    
    printf("number1 >> ");
    scanf("%lf", &num1);
    
//    rewind(stdin);
    printf("operator >> ");
    scanf(" %c", &operator);
    
    printf("number2 >> ");
    scanf("%lf", &num2);
    
//    printf("%lf\n", num1);
//    printf("%c\n", operator);
//    printf("%lf\n", num2);
//    [문제발생] 바로 위 3줄의 printf로 확인 결과, 입력버퍼에 개행문자가 그대로 남아있어서 operator가 제대로 입력되지 않았다.
//    [해결방법] 입력버퍼를 비워주자 -> rewind(stdin) 사용 또는 scanf("%c")에서 %앞에 공백 추가
    
    
    // 정수인지 아닌지 확인하는 작업 // 참고) 'double형 - (int)double형' = 0 이면 '정수'다
    if( (num1-(int)num1) == 0 && (num2-(int)num2) == 0 ){//정수로만 이루어짐
//        printf("정수로만 이루어짐\n");
//        int inum1 = num1;    //컴파일경고발생 -> (int)num1 으로 해야겠다.
        
        switch (operator) {
            case '+':
                result = num1 + num2;
                printf("%d + %d = %d\n", (int)num1, (int)num2, (int)result);
                break;
            case '-':
                result = num1 - num2;
                printf("%d - %d = %d\n", (int)num1, (int)num2, (int)result);
                break;
            case '*':
                result = num1 * num2;
                printf("%d * %d = %d\n", (int)num1, (int)num2, (int)result);
                break;
            case '/':
                if(num2 == 0){
                    printf("0으로 나눌 수 없습니다.\n");
                }else{
                    result = num1 / num2;
                    printf("%d / %d = %d\n", (int)num1, (int)num2, (int)result); //정수일때는 몫만 출력
                }
                break;
        }
    } else { //실수 하나라도 존재
//        printf("실수 하나라도 존재\n");
        
        switch (operator) {
            case '+':
                result = num1 + num2;
                printf("%.2f + %.2f = %.2f\n", num1, num2, result);
                break;
            case '-':
                result = num1 - num2;
                printf("%.2f - %.2f = %.2f\n", num1, num2, result);
                break;
            case '*':
                result = num1 * num2;
                printf("%.2f * %.2f = %.2f\n", num1, num2, result);
                break;
            case '/':
                if(num2 == 0){
                    printf("0으로 나눌 수 없습니다.\n");
                }else{
                    result = num1 / num2;
                    printf("%.2f / %.2f = %.2f\n", num1, num2, result);
                }
                break;
            default:
                printf("사칙연산을 바르게 입력하십시오.\n");
                break;
        }
        
    }
    
    return 0;
}
