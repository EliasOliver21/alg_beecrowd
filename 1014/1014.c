#include <stdio.h>
 
int main() {
 
    int distance;
    float fuel_spent;

    scanf("%d %f", &distance, &fuel_spent);

    double consumption = distance/fuel_spent;

    printf("%.3lf km/l\n", consumption);
 
    return 0;
}