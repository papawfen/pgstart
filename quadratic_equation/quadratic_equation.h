/**
 * @file quadratic_equation.h
 * @brief Заголовочный файл, содержащий прототип функции для решения квадратных уравнений.
 */

#ifndef QUADRATIC_EQUATION
#define QUADRATIC_EQUATION

#include <math.h>                             
#include <float.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * @brief Решает квадратное уравнение вида ax^2 + bx + c = 0.
 * @param a Коэффициент при x^2.
 * @param b Коэффициент при x.
 * @param c Константный член.
 * @return Указатель на массив из двух чисел с плавающей точкой, содержащий корни уравнения.
 *         Если уравнение не имеет действительных корней, функция вернет NULL.
 *         Если у уравнения один действительный корень, оба элемента массива будут равны.
 *         Если у уравнения два действительных корня, они будут возвращены в массиве.
 * @note Вызывающая сторона ответственна за освобождение памяти, выделенной для возвращаемого массива.
 */

double* quadratic_equation(double a, double b, double c);

#endif // QUADRATIC_EQUATION