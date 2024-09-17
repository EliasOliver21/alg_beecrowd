#include <stdio.h>
 
int main() {
 
    int initial_days, years, mouths, days;

    scanf("%d", &initial_days);

    years = initial_days / 365;

    initial_days -= years * 365;

    mouths = initial_days / 30;

    initial_days -= mouths * 30;

    days = initial_days;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", years, mouths, days);


    return 0;
}