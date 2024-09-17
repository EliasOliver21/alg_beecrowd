#include <stdio.h>
 
int main() {
 
    int value, value_initial;
    int note_100, note_50, note_20, note_10, note_5, note_2, note_1;

    scanf("%d", &value);

    value_initial = value;

    note_100 = value/100;

    value -= note_100 * 100;

    note_50 = value/50;

    value -= note_50 * 50;

    note_20 = value/20;

    value -= note_20 * 20;

    note_10 = value/10;

    value -= note_10 * 10;

    note_5 = value/5;

    value -= note_5 * 5;

    note_2 = value/2;

    value -= note_2 * 2;

    note_1 = value/1;

    printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n",value_initial,note_100, note_50, note_20, note_10, note_5, note_2, note_1);
 
    return 0;
}