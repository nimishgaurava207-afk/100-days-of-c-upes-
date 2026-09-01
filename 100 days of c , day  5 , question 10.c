#include <stdio.h>

int main(){
    int total_time, hours, minutes, seconds;
    printf("Enter total time in seconds: ");
    scanf("%d", &total_time);
    hours = total_time / 3600;
    minutes = (total_time % 3600) / 60;
    seconds = total_time % 60;
    printf("Time: %d hours, %d minutes , %d seconds\n", hours, minutes, seconds);
    return 0;
}