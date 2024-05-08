#include <stdio.h>

int main(){
    // Constante pi
   float pi = 3.14159;
    //variável referente ao raio   
   int raio;
   
   //Entrada do raio
   scanf("%d", &raio);
   
   //Calcula a área do círculo
   float area = pi * (raio * raio);
   
   //imprime a área com 4 casas decimais depois da vírgula
   printf("A=%.4f\n", area);

    return 0;
}