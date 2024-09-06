#include <stdio.h>

int main(){

    //Define a Constante pi
    double pi = 3.14159;

    //Define a Variável referente ao raio   
    double raio;
   
    //Entrada do valor do raio
    scanf("%lf", &raio);
   
    //Calcula a área do círculo
    double area = pi * (raio * raio);
   
    //Imprime a área com 4 casas decimais depois da vírgula
    printf("A=%.4f\n", area);

}