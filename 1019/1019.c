#include <stdio.h>
 
int main() {
 
    int initial_time, hours,minutes,seconds;

    scanf("%d", &initial_time);

    hours = initial_time / 3600;

    initial_time -= hours * 3600;

    minutes = initial_time / 60;

    initial_time -= minutes * 60;

    seconds = initial_time;

    printf("%d:%d:%d\n", hours,minutes,seconds);
 
    return 0;
}