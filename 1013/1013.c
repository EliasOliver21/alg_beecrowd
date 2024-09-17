#include <stdio.h>
#include <math.h>
 
int main() {
 
    int a,b,c;

    scanf("%d %d %d", &a,&b,&c);

    float equation = (a + b + (abs(a-b)))/2;

    float equation2 = (equation + c + (fabs(equation-c)))/2;

    printf("%.0f eh o maior\n", equation2);
 
    return 0;
}