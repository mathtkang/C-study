#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main(void) {
    {        
        // 실습문제1
        for (int i = 1; i <= 15; i += 2) printf("%d ", i);
        printf("\n");

        for (int i = 10; i >= 1; i--) printf("%d ", i);
        printf("\n");

        for (int i = 4; i <= 32; i += 4) printf("%d ", i);
        printf("\n");

        for (int i = 18; i >= 0; i -= 3) printf("%d ", i);
        printf("\n");

        for (int i = 3; i <= 729; i *= 3) printf("%d ", i);
        printf("\n");

        for (int i = 80; i >= -100; i -= 30) printf("%d ", i);
        printf("\n");

        for (int i = 256; i >= 1; i /= 2) printf("%d ", i);
        printf("\n");
    }

    {
        // 실습문제2
        printf("\n");

        int n;
        printf("n = ");
        scanf_s("%d", &n);

        int a = 1;
        printf("A1 = %d\n", a);
        for (int i = 2; i <= n; i++) {
            a = a + i * (i + 1);    // i = 2 --> 현재 a값은 a1
            printf("A%d = A%d + %d * %d = %d\n", i, i - 1, i, i + 1, a);
        }
    }

    {
        // 실습문제3
        printf("\n");

        int n;
        printf("n = ");
        scanf_s("%d", &n);

        bool is_prime = true;

        if (n == 1) {
            is_prime = false;
        }
        else {
            for (int i = 2; i <= sqrt(n); i++) {
                if (n % i == 0) {
                    is_prime = false;
                }
            }
        }
        
        // n이 1이면 조건식이 (2 <= 1)이 되어서 for문이 아예 실행되지 않는다.
        // 따라서 아래와 같이 for문만 써도 관계없다.
        /*
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                is_prime = false;
            }
        }
        */
        if (is_prime) {
            printf("%d IS a prime number\n", n);
        } else {
            printf("%d is NOT a prime number\n", n);
        }
    }

    {
        // 실습문제4
        for (int i = 2; i <= 9; i += 2) {
            printf("\n<구구단 %d단>\n", i);
            for (int j = 1; j <= 9; j++) {
                printf("%d * %d = %d\n", i, j, i * j);
            }
        }

        // 또는
        /*for (int i = 1; i <= 9; i++) {
            if (i % 2 == 0) {
                printf("\n<구구단 %d단>\n", i);
                for (int j = 1; j <= 9; j++) {
                    printf("%d * %d = %d\n", i, j, i * j);
                }
            }
        }*/

        // 또는
        /*for (int i = 1; i <= 9; i++) {
            if (i % 2 == 1)
                continue;

            printf("\n<구구단 %d단>\n", i);
            for (int j = 1; j <= 9; j++) {
                printf("%d * %d = %d\n", i, j, i * j);
            }
        }*/
    }

    {
        // 실습문제5
        printf("\n");

        int n, m;
        printf("n m = ");
        scanf_s("%d%d", &n, &m);
        
        // 1행
        for (int j = 1; j <= m; j++) printf("*");
        printf("\n");

        // 2행 ~ (n - 1)행
        for (int i = 2; i <= n - 1; i++) {
            // 1열
            printf("*");

            // 2 ~ (m-1)열
            for (int j = 2; j <= m - 1; j++) {
                printf(" ");
            }

            // m열
            printf("*\n");
        }

        // n행
        for (int j = 1; j <= m; j++) printf("*");
        printf("\n");
    }

    {
        // 실습문제6
        printf("\n");

        int n, m;
        printf("n m = ");
        scanf_s("%d%d", &n, &m);

        // 1)
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                printf("1");
            }
            printf("\n");
        }

        // 2)
        printf("\n");
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                printf("%d", j);
            }
            printf("\n");
        }

        // 3)
        printf("\n");
        for (int i = 1; i <= n; i++) {
            if (i % 2 == 1) {   // 홀수 행
                for (int j = 1; j <= m; j++) {
                    printf("%d", j);
                }
            }
            else {              // 짝수 행
                for (int j = m; j >= 1; j--) {
                    printf("%d", j);
                }
            }
            printf("\n");
        }

        // 3) 다른 방법
        printf("\n");
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                if (i % 2 == 1) {
                    // j = 1, 2, 3, 4, ... m-1, m
                    printf("%d", j);
                } else {
                    // j = m, m-1, m-2, ... 2, 1
                    printf("%d", m - j + 1);
                }
            }
            printf("\n");
        }

        // 4)
        printf("\n");
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                printf("%02d ", j);
            }
            printf("\n");
        }

    }

    {
        // 실습문제7 1)
        printf("\n");

        int n_lecture;
        int score, total;
        double average;

        printf("과목 개수 = ");
        scanf_s("%d", &n_lecture);

        total = 0;
        for (int i = 1; i <= n_lecture; i++) {
            printf("과목%d 점수 = ", i);
            scanf_s("%d", &score);
            total += score;
        }
        average = total / n_lecture;

        printf("총점 = %d/%d\n", total, n_lecture * 100);
        printf("평균 = %.2f/100.0\n", average);
    }

    {
        // 실습문제7 2)
        printf("\n");

        int n_lecture, n_student;
        int score, total;
        double average;

        printf("학생 수 = ");
        scanf_s("%d", &n_student);
        printf("과목 개수 = ");
        scanf_s("%d", &n_lecture);

        // **제어 변수 이름이 겹치지 않게 주의하자**
        for (int j = 1; j <= n_student; j++) {
            total = 0;
            for (int i = 1; i <= n_lecture; i++) {
                printf("과목%d 점수 = ", i);
                scanf_s("%d", &score);
                total += score;
            }
            average = total / n_lecture;

            printf("총점 = %d/%d\n", total, n_lecture * 100);
            printf("평균 = %.2f/100.0\n", average);
        }
    }

    {
        // 피보나치
        printf("\n");

        int n;
        printf("n = ");
        scanf_s("%d", &n);

        if (n == 1) {
            printf("1\n");
        }
        else {
            printf("1 1 ");
            int a = 1, b = 1;
            for (int i = 3; i <= n; i++) {
                int next = a + b;
                a = b;
                b = next;
                printf("%d ", b);
            }
            printf("\n");
        }
    }

    {
        // 피보나치-치킨
        // pass
    }

    return 0;
}