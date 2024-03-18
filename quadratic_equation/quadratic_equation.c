#include "quadratic_equation.h"

double* quadratic_equation(double a, double b, double c) {
    if (a == 0) return NULL;
    if (isnan(a) || isnan(b) || isnan(c)) return NULL;
    double *res = calloc(2, sizeof(double));
    double d = pow(b, 2.0) - 4.0 * a * c; // d == 0 у уравнения 1 корень равный нулю
    if (d < 0) { // у уравнения нет корней
        return NULL;
    } else {  // у уравнения 2 корня или 1
        res[0] = (-b + sqrt(d)) / (2.0 * a);
        res[1] = (-b - sqrt(d)) / (2.0 * a);
    }
    return res;
}
