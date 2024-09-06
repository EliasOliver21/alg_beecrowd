#include <stdio.h>

int main(){

    // Criando variáveis a e b para serem os fatores
    int a, b;

    // Entrada dos fatores
    scanf("%d %d", &a,&b);

    //Realizando a multiplicação
    float produto = a * b;

    //Mostrando o resultado da multiplicação
    printf("PROD = %.0f\n", produto);

}