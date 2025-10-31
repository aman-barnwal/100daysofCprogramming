#include <stdio.h>

int main() {
    int total_seconds;
    int hours, minutes, seconds;

    printf("Enter time in seconds: ");
    scanf("%d", &total_seconds);

    hours = total_seconds / 3600;           // 1 hour = 3600 seconds
    total_seconds = total_seconds % 3600;   // remaining seconds after hours
    minutes = total_seconds / 60;           // 1 minute = 60 seconds
    seconds = total_seconds % 60;           // remaining seconds

    printf("Time = %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}

