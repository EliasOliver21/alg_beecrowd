#include <stdio.h>
 
int main() {

    double number1, number2, qty1, qty2, value1, value2;

    scanf("%lf %lf %lf %lf %lf %lf", &number1, &qty1, &value1, &number2,&qty2 ,&value2);

    double total = (qty1 * value1) + (qty2 * value2);

    printf("VALOR A PAGAR: R$ %.2lf\n", total);

}