#include <stdio.h>
 
int main() {
 
    double value;
    int note_100, note_50, note_20, note_10, note_5, note_2, note_1;
    int cent1, cent5, cent10, cent25, cent50;

    scanf("%lf", &value);

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

    note_1 = value/1 ;

    value -= note_1;

    cent50 = value/0.5;

    value -= cent50 * 0.5;

    cent25 = value/0.25;

    value -= cent25 * 0.25;

    cent10 = value/0.1;

    value -= cent10 * 0.1;

    cent5 = value / 0.05;

    value -= cent5 * 0.05;

    cent1 = value / 0.01;

    printf("NOTAS:\n"
            "%d nota(s) de R$ 100.00\n"
            "%d nota(s) de R$ 50.00\n"
            "%d nota(s) de R$ 20.00\n"
            "%d nota(s) de R$ 10.00\n"
            "%d nota(s) de R$ 5.00\n"
            "%d nota(s) de R$ 2.00\n"
            "MOEDAS:\n"
            "%d moeda(s) de R$ 1.00\n"
            "%d moeda(s) de R$ 0.50\n"
            "%d moeda(s) de R$ 0.25\n"
            "%d moeda(s) de R$ 0.10\n"
            "%d moeda(s) de R$ 0.05\n"
            "%d moeda(s) de R$ 0.01\n",note_100, note_50, note_20, note_10, note_5, note_2, note_1,cent50, cent25 , cent10, cent5, cent1);
 
    return 0;

}