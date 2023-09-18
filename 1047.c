#include <stdio.h>

int main() {
    int startHour, startMinute, endHour, endMinute;
    int durationHour, durationMinute;

    // Input start and end times
    scanf("%d %d %d %d", &startHour, &startMinute, &endHour, &endMinute);

    // Calculate total minutes for start and end times
    int startTimeInMinutes = startHour * 60 + startMinute;
    int endTimeInMinutes = endHour * 60 + endMinute;

    // Calculate the duration in minutes
    int totalDurationInMinutes;
    if (endTimeInMinutes > startTimeInMinutes) {
        totalDurationInMinutes = endTimeInMinutes - startTimeInMinutes;
    } else {
        totalDurationInMinutes = 24 * 60 - startTimeInMinutes + endTimeInMinutes;
    }

    // Calculate hours and minutes from total duration in minutes
    durationHour = totalDurationInMinutes / 60;
    durationMinute = totalDurationInMinutes % 60;

    // Print the duration
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", durationHour, durationMinute);

    return 0;
}
