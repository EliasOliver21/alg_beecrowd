#include <stdio.h>
#include <math.h>
 
int main() {


    double radius;
    double pi = 3.14159;
    
    scanf("%lf", &radius);

    double volume = (4/3.0) * (pi) * pow(radius, 3);

    printf("VOLUME = %.3lf\n", volume);
 
    return 0;
}