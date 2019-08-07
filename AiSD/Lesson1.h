//
//  Lesson 1.h
//  AiSD
//
//  Created by Денис Баринов on 23/11/2018.
//  Copyright © 2018 Денис Баринов. All rights reserved.
//

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int gen (int W) {
    W = (2*W+time(NULL))%100+1;
    printf("%d \n", W);
    return W;
}

void Lesson1() {
    //  Задача 1: Ввести вес и рост человека. Рассчитать и вывести индекс массы тела по формуле I=m/(h*h); где m-масса тела в килограммах, h - рост в метрах.
    printf("Задача 1: \n");
    int m = 78;
    double h = 1.8;
    double I = 0;
    I = m/(h*h);
    printf("I = %lf \n", I );
    
    // Задача 2: Найти максимальное из четырех чисел. Массивы не использовать.
    printf("Задача 2: \n");
    int a1 = 3;
    int a2 = 88;
    int a3 = 533;
    int a4 = 21;
    int max1 = 0;
    int max2 = 0;
    int max = a1;
    if (a1 > a2) {
        max1 = a1;
    } else max1 = a2;
    if (a3 > a4) {
        max2 = a3;
    } else max2 = a4;
    if (max1 > max2) {
        max = max1;
    } else max = max2;
    printf("Максимальное число %d \n", max);
    
    // Задача 3: Написать программу обмена значениями двух целочисленных переменных:
    printf("Задача 3: \n");
    //    a. с использованием третьей переменной;
    int a = 5;
    int b = 9;
    int c = 0;
    c = a;
    a = b;
    b = c;
    printf("a = %d, b = %d \n", a, b);
    //    b. *без использования третьей переменной.
    a = a + b;
    b = a - b;
    a = a - b;
    printf("a = %d, b = %d \n", a, b);
    
    // Задача 4: Написать программу нахождения корней заданного квадратного уравнения.
    // axx+bx+c=0
    printf("Задача 4: \n");
    a = 4;
    b = 36;
    c = 9;
    double D = 0;
    double x1 = 0;
    double x2 = 0;
    double x = 0;
    D = b * b - 4 * a * c;
    if (D > 0) {
        x1 = (-b + sqrt(D)) / (4 * a * c);
        x2 = (-b - sqrt(D)) / (4 * a * c);
        printf("x1 = %lf, x2 = %lf \n", x1, x2);
    } else if (D == 0) {
        x = (-b) / (4 * a * c);
        printf("x = %lf \n", x);
    } else
        printf("Корней нет \n");
    
    // Задача 5: С клавиатуры вводится номер месяца. Требуется определить, к какому времени года он относится.
    printf("Задача 5: \n");
    int month = 12;
    if (month == 2 || month == 3 || month == 4) {
        printf("Весна \n");
    } else if (month == 5 || month == 6 || month == 7) {
        printf("Лето \n");
    } else if (month == 8 || month == 9 || month == 10) {
        printf("Осень \n");
    } else if (month == 11 || month == 12 || month == 1) {
        printf("Зима \n");
    } else {
        printf("Введите правильный номер месяца \n");
    }
    
    // Задача 6: Ввести возраст человека (от 1 до 150 лет) и вывести его вместе с последующим словом «год», «года» или «лет».
    printf("Задача 6: \n");
    int age = 134;
    if (age == 11 || age == 12 || age == 13 || age == 14) {
        printf("Возраст человека %d лет \n", age);
    } else if (age % 10 == 1) {
        printf("Возраст человека %d год \n", age);
    } else if (age % 10 == 2 || age % 10 == 3 || age % 10 == 4) {
        printf("Возраст человека %d года \n", age);
    } else
        printf("Возраст человека %d лет \n", age);
    
    // Задача 7: С клавиатуры вводятся числовые координаты двух полей шахматной доски (x1,y1,x2,y2). Требуется определить, относятся ли поля к одному цвету или нет.
    printf("Задача 7: \n");
    int x3 = 1;
    int y3 = 1;
    int x4 = 4;
    int y4 = 5;
    if ((x3+y3)%2 == (x4+y4)%2) {
        printf("Поля относятся к одному цвету \n");
    } else {
        printf("Поля относятся к разным цветам \n");
    }
    // Задача 8: Ввести a и b и вывести квадраты и кубы чисел от a до b.
    printf("Задача 8: \n");
    a = 6;
    b = 15;
    while (a <= b) {
        c = a*a;
        printf("%d %d ", c, c*a);
        a++;
    }
    printf("\n");
    
    // Задача 9: Даны целые положительные числа N и K. Используя только операции сложения и вычитания, найти частное от деления нацело N на K, а также остаток от этого деления.
    printf("Задача 9: \n");
    int N = 7;
    int K = 7;
    int chastnoe = 0;
    while (N >= K) {
        N -= K;
        chastnoe++;
    }
    printf("Частное %d, Остаток от деления %d \n", chastnoe, N);
    
    // Задача 10: Дано целое число F (> 0). С помощью операций деления нацело и взятия остатка от деления определить, имеются ли в записи числа N нечетные цифры. Если имеются, то вывести True, если нет — вывести False.
    printf("Задача 10: \n");
    int F = 235;
    while (F > 0) {
        a = F%10;
        F = (F-a)/10;
        if (a%2 == 1)
            break;
    }
    printf(" %s \n", (a%2 == 1) ? "True" : "Falce" );
    
    // Задача 11: С клавиатуры вводятся числа, пока не будет введен 0. Подсчитать среднее арифметическое всех положительных четных чисел, оканчивающихся на 8.
    printf("Задача 11: \n");
    int X;
    int i = 0;
    int sum = 0;
    printf("Введите числа а затем 0 для расчета \n");
    do {
        scanf("%d", &X);
        if (X%10 == 8 /* && X > 0 && X%2 == 0 */) {
            i++;
            sum += X;
        }
        printf("%d \n", sum);
        printf("%d", i);
    } while (X != 0);
    if (i>0) {
        double u;
        u = sum/i;
        printf("Среднее значение %.2lf \n", u);
    }
    
    // Задача 12: Написать функцию нахождения максимального из трех чисел.
    printf("Задача 12: \n");
    a = 11;
    b = 58;
    c = 33;
    if (a > b && a > c)
        printf ("Максимальное число a = %d \n", a);
    else if (b > c)
        printf ("Максимальное число b = %d \n", b);
    else
        printf ("Максимальное число c = %d \n", c);
    
    // Задача 13: Написать функцию, генерирующую случайное число от 1 до 100.
    printf("Задача 13: \n");
    // с использованием стандартной функции rand()
    srand(time(NULL)); // инициализация счетчика
    printf("%d \n", rand()%100+1);
    // без использования стандартной функции rand()
    gen (876);
    //    int gen (int W) {
    //        W = (2*W+time(NULL))%100+1;
    //        printf("%d \n", W);
    //        return W;
    //    }
    
    // Задача 14: Автоморфные числа. Натуральное число называется автоморфным, если оно равно последним цифрам своего квадрата. Например, 25 \ :sup: 2 = 625. Напишите программу, которая вводит натуральное число N и выводит на экран все автоморфные числа, не превосходящие N.
    printf("Задача 14: \n");
    N = 128882;
    i = 0;
    int v;
    int n = 1;
    while (i <= N) {
        v = pow(10,n);
        while (i < (v-1)) {
            i++;
            if ((i*i)%v == i)
                printf("%d (%d) \n", i, i*i);
        }
        n++;
    }
}