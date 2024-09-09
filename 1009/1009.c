#include <stdio.h>

int main(){

    char name[25];
    float fixed_salary;
    float total_sales;

    scanf("%s %f %f", &name, &fixed_salary, &total_sales);

    double total = (total_sales * 0.15) + fixed_salary;

    printf("TOTAL = R$ %.2lf\n", total);

}