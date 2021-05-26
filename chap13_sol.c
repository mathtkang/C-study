#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main(void) {
    {        
        // �ǽ�����1
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
        // �ǽ�����2
        printf("\n");

        int n;
        printf("n = ");
        scanf_s("%d", &n);

        int a = 1;
        printf("A1 = %d\n", a);
        for (int i = 2; i <= n; i++) {
            a = a + i * (i + 1);    // i = 2 --> ���� a���� a1
            printf("A%d = A%d + %d * %d = %d\n", i, i - 1, i, i + 1, a);
        }
    }

    {
        // �ǽ�����3
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
        
        // n�� 1�̸� ���ǽ��� (2 <= 1)�� �Ǿ for���� �ƿ� ������� �ʴ´�.
        // ���� �Ʒ��� ���� for���� �ᵵ �������.
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
        // �ǽ�����4
        for (int i = 2; i <= 9; i += 2) {
            printf("\n<������ %d��>\n", i);
            for (int j = 1; j <= 9; j++) {
                printf("%d * %d = %d\n", i, j, i * j);
            }
        }

        // �Ǵ�
        /*for (int i = 1; i <= 9; i++) {
            if (i % 2 == 0) {
                printf("\n<������ %d��>\n", i);
                for (int j = 1; j <= 9; j++) {
                    printf("%d * %d = %d\n", i, j, i * j);
                }
            }
        }*/

        // �Ǵ�
        /*for (int i = 1; i <= 9; i++) {
            if (i % 2 == 1)
                continue;

            printf("\n<������ %d��>\n", i);
            for (int j = 1; j <= 9; j++) {
                printf("%d * %d = %d\n", i, j, i * j);
            }
        }*/
    }

    {
        // �ǽ�����5
        printf("\n");

        int n, m;
        printf("n m = ");
        scanf_s("%d%d", &n, &m);
        
        // 1��
        for (int j = 1; j <= m; j++) printf("*");
        printf("\n");

        // 2�� ~ (n - 1)��
        for (int i = 2; i <= n - 1; i++) {
            // 1��
            printf("*");

            // 2 ~ (m-1)��
            for (int j = 2; j <= m - 1; j++) {
                printf(" ");
            }

            // m��
            printf("*\n");
        }

        // n��
        for (int j = 1; j <= m; j++) printf("*");
        printf("\n");
    }

    {
        // �ǽ�����6
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
            if (i % 2 == 1) {   // Ȧ�� ��
                for (int j = 1; j <= m; j++) {
                    printf("%d", j);
                }
            }
            else {              // ¦�� ��
                for (int j = m; j >= 1; j--) {
                    printf("%d", j);
                }
            }
            printf("\n");
        }

        // 3) �ٸ� ���
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
        // �ǽ�����7 1)
        printf("\n");

        int n_lecture;
        int score, total;
        double average;

        printf("���� ���� = ");
        scanf_s("%d", &n_lecture);

        total = 0;
        for (int i = 1; i <= n_lecture; i++) {
            printf("����%d ���� = ", i);
            scanf_s("%d", &score);
            total += score;
        }
        average = total / n_lecture;

        printf("���� = %d/%d\n", total, n_lecture * 100);
        printf("��� = %.2f/100.0\n", average);
    }

    {
        // �ǽ�����7 2)
        printf("\n");

        int n_lecture, n_student;
        int score, total;
        double average;

        printf("�л� �� = ");
        scanf_s("%d", &n_student);
        printf("���� ���� = ");
        scanf_s("%d", &n_lecture);

        // **���� ���� �̸��� ��ġ�� �ʰ� ��������**
        for (int j = 1; j <= n_student; j++) {
            total = 0;
            for (int i = 1; i <= n_lecture; i++) {
                printf("����%d ���� = ", i);
                scanf_s("%d", &score);
                total += score;
            }
            average = total / n_lecture;

            printf("���� = %d/%d\n", total, n_lecture * 100);
            printf("��� = %.2f/100.0\n", average);
        }
    }

    {
        // �Ǻ���ġ
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
        // �Ǻ���ġ-ġŲ
        // pass
    }

    return 0;
}