#include <stdio.h>

int main(){
    //Constante pi
    float pi = 3.14159;
    //Variável referente ao raio   
    float raio;
   
    //Entrada do raio
    scanf("%f", &raio);
   
    //Calcula a área do círculo
    float area = pi * (raio * raio);
   
    //Imprime a área com 4 casas decimais depois da vírgula
    printf("A=%.4f\n", area);

}