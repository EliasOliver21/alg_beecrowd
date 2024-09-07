#include <stdio.h>

int main(){

    int a,b,c,d;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    // Difereça dos produtos de a e b & c e d.
    float diferenca = (a*b)-(c*d);

    printf("DIFERENCA = %.0f\n", diferenca);
}