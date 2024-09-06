#include <stdio.h>

int main(){

    // Define as variáveis a e b correspondentes as duas notas de um aluno
    float a, b;

    //Entrada das notas
    scanf("%f %f", &a, &b);

    // Definição dos pesos
    float peso1 = 3.5 , peso2 = 7.5; 

    //cálculo das notas com os pesos
    float nota1 = a * peso1, nota2 = b * peso2;

    //Média dos resultados das avaliações
    float media = (nota1 + nota2)/11;

    // Mostrando a média
    printf("MEDIA = %.5f\n", media);

}