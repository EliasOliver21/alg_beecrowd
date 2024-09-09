#include <stdio.h>

int main(){

    int employ_number, hours_worked;
    float hour_value, salary;

    scanf("%d %d %f", &employ_number, &hours_worked, &hour_value);

    salary = (hour_value * hours_worked);

    printf("NUMBER = %d\nSALARY = U$ %.2f\n",employ_number,salary);

}