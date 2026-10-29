#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES 
#include <locale.h>
#include <stdio.h>
#include <math.h>

int sum(int m, int n);
double pow2(int exp);
double calc(double x);
double sum_cos(int n, double x);

int main()
{
	setlocale(LC_ALL, "RUS");

	// задание 1
	
    int m, n;

    printf("введите число m: ");
    scanf("%d", &m);
    printf("введите число n: ");
    scanf("%d", &n);

    if (m < n) 
    {
        printf("m должно быть >= n.\n\n\n");
    }
    else 
    {
        int s = sum(m, n);

        int numb = m - n + 1;
        printf("выполнено %d раз\n", numb);
        printf("результат: %d\n", s);
    }

	// задание 1а

    int limit;

    printf("\n\n\nвведите целое число m: ");
    scanf("%d", &limit);

    printf("cтепени двойки до %d:\n", limit);

    for (int i = 0; ; i++)
    {
        double p = pow2(i);

        if (p > limit) {
            break;
        }

        printf("2^%2d = %1.0f", i, p);

        if (p >= 1024) 
        {
            double K = p / 1024.0;
            printf("\n результат: %.1lfK", K);
        }
        
        printf("\n");
    }

    // задание 2, вариант 6???

    double start_int = 1.0;
    double end_int = 3.0;
    double dx; // шаг табул€ции
    double x, y; 

    printf("\n\n\nтабулирование функции: y = x^3 - 4x^2 + 2\n");
    printf("интервал: [1; 3]\n");

    printf("введите шаг табул€ции: ");
    scanf("%lf", &dx);

    if (dx <= 0) 
    {
        printf("шаг должен быть положительным числом!\n");
        return 1;
    }

    printf("\n-------------------\n");
    printf("|    x    |  f(x)   |\n");
    printf("-------------------\n");


    for (x = start_int; x <= end_int; x += dx)
    {
        y = calc(x);

        printf("| %7.2lf | %7.3lf |\n", x, y);
    }

    printf("-------------------\n\n\n\n");

    // задание 3, вариант 18

    int u;
    double s;
    double result;

    printf("введите натуральное число u: ");

    if (scanf("%d", &u) != 1 || n <= 0) 
    {
        printf("u должно быть натуральным числом.\n");

        return 1;
    }

    printf("введите действительное число s: ");

    if (scanf("%lf", &s) != 1)
    {
        printf("ошибка ввода x.\n");
        return 1;
    }

    result = sum_cos(u, s);

    printf("\nрезультат вычислени€ суммы: %.6lf\n", result);

    return 0;
}

int sum(int m, int n) 
{
    int s = 0;

    for (int i = m; i >= n; i--)
    {
        s += i;
    }

    return s;
}

double pow2(int exp) 
{
    return pow(2.0, (double)exp);
    
}

double calc(double x)
{

    double result = pow(x, 3) - 4 * pow(x, 2) + 2;

    return result;
}

double sum_cos(int u, double s)
{
    double sum = 0.0;

    for (int i = 1; i <= u; i++)
    {
        sum += cos(pow(s, i));
    }

    return sum;
}