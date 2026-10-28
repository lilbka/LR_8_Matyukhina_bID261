# Лабораторная работа №8

## 1. Условие задачи номер 3 (вариант 18)
![Uploading image.png…]()


## Блок-схема к заданию 3

https://sun9-64.vkuserphoto.ru/s/v1/ig2/HwpPf5iW-Iwgtusn6Pf5FqXUMKmB6r_g34yqUaWqzjj2S2_NRkd64lnQlFDA9PM4hvnids3ZqpFdYgAGO0i0zPnY.jpg?quality=95&as=32x18,48x27,72x40,108x61,160x90,240x135,360x202,480x269,540x303,640x359,720x404,1080x606,1280x718&from=bu&u=jXvNKjKK2xrBlM63EVSw9BMGkv3yJXmbzKclZAr1egA&cs=1280x0

## 2. Реализация программы
#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES 
#include <locale.h>
#include <stdio.h>
#include <math.h>

double calc_sin(int n);

int main()
{

 // задание 3, вариант 18

 int N;

 printf("введите значение N : ");

 if (scanf("%d", &N) != 1 || N <= 0) 
 {
     printf("N должно быть положительным целым числом.\n");
     return 1;
 }

 double result = calc_sin(N);

 if (result == 0.0) 
 {
     printf("произошло деление на ноль.\n");
 }
 else 
 {
     printf("результат для N=%d: %.6lf\n", N, result);
 }

 return 0;

}

double calc_sin(int n)
{
    double proizv = 1.0; 
    double sum_cos = 0.0; 
    double sum_sin = 0.0;   

    for (int i = 1; i <= n; i++)
    {

        sum_cos += cos(i);
        sum_sin += sin(i);

        if (sum_sin == 0.0)
        {
            return 0.0;
        }

        proizv = proizv * (sum_cos / sum_sin);
    }

    return proizv;
}

## 3. Результаты работы программы
введите значение N : 2
результат для N=2: 0,045534

## 4. Информация о разработчике
Матюхина Софья, бИД-261

