//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>
#include <math.h>

int main(void){
    //수업내용
//    double a1 = 10.234;
//    printf("%f",a1);
//    double b1;
//    printf("\n 실수를 입력하세요 > ");
//    scanf("%lf", &b1);
//    printf("%f", b1);

    //test
//    unsigned int i = 10;
//    long l2 = 10;
//    long long ll = 10;
//    unsigned long ul = 10;
//    unsigned long long ull = 10;
//
//    printf("%u %ld, %lld, %lu, %llu", i, l2, ll, ul, ull);

    //실습1
    double a,b,c = 0;
    printf("네모 - 동그라미 * 세모 = ? \n");
    printf("네모, 동그라미, 세모에 들어갈 실수를 입력하세요 >> ");
    scanf("%lf %lf %lf", &a, &b, &c);
    printf("%.2f - %.2f * %.2f = %.2f \n", a, b, c, a-b*c);
    
    //실습2
    int kor, eng, math;
    double sum, evr;
    printf("국어 영어 수학 점수 >> ");
    scanf("%d %d %d", &kor, &eng, &math);
    sum = kor + eng + math;
    evr = sum/3;
    printf("\n총점은 %.0f, 평균 점수는 %.2f점 입니다. \n", sum, evr);
    
    //실습3
    double g = 1.5*(-4.5) + (-2.0)*2.3;
    printf("%.2f \n",g);
    
    //실습4
    int x = 1234567890;
    int y = 987654321;
    int z = x * y;
    printf("%d * %d = %d \n",x,y,z);

    long long int llix = x;
    long long int lliy = y;
    long long int lliz = z;

    printf("%lld * %lld = %lld \n", llix, lliy, lliz);
    
    //실습5
    double s,t;
    printf("실수 입력 >> ");
    scanf("%lf",&s);
    t = sqrt(s);
    printf("%.2f의 제곱근은 %.2f입니다.",s,t);
    
    //실습6
    double x1, y1, x2, y2, s1, s2, l;
    printf("x1 y1 = ");
    scanf("%lf%lf", &x1, &y1);
    printf("\nx2 y2 = ");
    scanf("%lf%lf", &x2, &y2);

    s1 = pow((x1-x2),2);
    s2 = pow((y1-y2),2);
    l = sqrt(s1+s2);
    printf("\n두 점 (%.2f,%.2f)와 (%.2f,%.2f) 사이의 거리는 %.2f입니다.", x1, y1, x2, y2, l);
    
    //실습7
    double x3, x4, s3;
    printf("x1 = ");
    scanf("%lf", &x3);
    printf("x2 = ");
    scanf("%lf", &x4);
    
    s3 = sqrt(pow(x3-x4,2));
    printf("x1과 x2 사이의 거리는 %.1f입니다.", s3);
    
    

    return 0;
}
