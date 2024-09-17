#include <stdio.h>
 
int main() {
    //Joaozinho quer calcular e mostrar a qtde de combustivel gasto
    // 12km/l de autonomia
    int time, avg_vel;

    scanf("%d %d", &time, &avg_vel);
    
    float distance = avg_vel * time;

    float fuel_spent = distance / 12;

    printf("%.3f\n", fuel_spent);
 
    return 0;
}