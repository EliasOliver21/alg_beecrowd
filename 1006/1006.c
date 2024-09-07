#include <stdio.h>

int main(){

    int peso1 = 2, peso2 = 3, peso3 = 5;

    double nota1, nota2, nota3;

    scanf("%lf %lf %lf", &nota1, &nota2, &nota3);

    double media = ((nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3))/10;

    printf("MEDIA = %.1lf\n", media);

}