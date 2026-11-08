# Лабораторная работа №8

## 1. Условие задачи номер 3 (вариант 18)
https://sun9-69.vkuserphoto.ru/s/v1/ig2/fq_oeJnuIzeV1W10N16GdUFOs6rooFmDLJEk4SZyEOU9shUjgXCroYtNGmOpkcfCs2AvrvmEMAawLN0hitKHTrGt.jpg?quality=95&as=32x15,48x22,72x33,108x49,160x73,240x109,360x163,480x218,540x245,640x290,720x327,765x347&from=bu&u=JC6jOecY2j62c2RT7nRypicu5_3zxNQEQ4Eykn82DNs&cs=765x0

## Блок-схема к заданию 3

https://sun9-48.vkuserphoto.ru/s/v1/ig2/h1PodtQaDn7PwccOqcVVHz_gHEJQQFxJpbPkeezyDfSzN-s6pZR3hNOXuir6pqwV4Uvx6poon9w_ORsiNAmP_07y.jpg?quality=95&as=32x24,48x36,72x53,108x80,160x119,240x178,360x267,480x356,540x401,640x475,720x534,1080x802,1280x950&from=bu&u=x14P2TR2tLcCG14wfkeKn40O-gt_2oEI08hEEojf6DI&cs=1280x0

## 2. Реализация программы
#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES 
#include <locale.h>
#include <stdio.h>
#include <math.h>

double sum_cos(int n, double x);

int main()
{

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

 printf("\nрезультат вычисления суммы: %.6lf\n", result);

 return 0;
 
}

## 3. Результаты работы программы
введите натуральное число u: 2
введите действительное число s: 3

результат вычисления суммы: -1,901123

## 4. Информация о разработчике
Матюхина Софья, бИД-261

