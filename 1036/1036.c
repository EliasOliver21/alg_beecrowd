#include <stdio.h>
#include <math.h>
int main() {
 
    double a,b,c;
    double root1 = 0, root2 = 0, delta = 0;

    scanf("%lf %lf %lf", &a, &b, &c);

    delta = pow(b,2) - 4 * a *c;

    if(delta < 0 || sqrt(delta) < 0 || a == 0){

        printf("Impossivel calcular\n");

    }else{

        root1 = ((-b) + sqrt(delta))/ (2 * a);

        root2 = ((-b) - sqrt(delta))/ (2 * a);

        printf("R1 = %.5lf\n",root1);

        printf("R2 = %.5lf\n",root2);
    }
 
    return 0;
}