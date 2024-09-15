#include <stdio.h>
#include <math.h>
 
int main() {
 
   double a, b , c, pi=3.14159;

    scanf("%lf %lf %lf", &a, &b, &c);

    double triangle = (a * c)/2;

    double circle = pi * pow(c,2);

    double trapezoid = ((a + b) * c)/2;

    double square = pow(b,2);

    double retangle = a * b;

    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", triangle, circle, trapezoid, square, retangle);
     
    return 0;
}