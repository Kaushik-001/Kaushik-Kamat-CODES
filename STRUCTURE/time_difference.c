#include <stdio.h>
typedef struct diff
{
    int hours, minutes, seconds;
} time;

time* calculate(time start_time, time stop_time);

int main()
{
    time start_time, end_time, *difference;
    printf("Enter the hours , minutes and seconds for start time :");
    scanf("%d %d %d", &start_time.hours, &start_time.minutes, &start_time.seconds);

    printf("Enter the hours , minutes and seconds for end  time :");
    scanf("%d %d %d", &end_time.hours, &end_time.minutes, &end_time.seconds);

    difference = calculate(start_time, end_time);
    printf("START TIME IS : %d %d %d ", start_time.hours, start_time.minutes, start_time.seconds);
    printf("END TIME IS : %d %d %d ", end_time.hours, end_time.minutes, end_time.seconds);
    
    printf("Difference TIME IS : %d %d %d ", difference->hours, difference->minutes, difference->seconds);
    return 0;
}

time* calculate(time start_time, time end_time)
{
    time *difference;
    if (end_time.seconds > start_time.seconds)
    {
        --start_time.minutes;
        start_time.seconds += 60;
    }
    difference->seconds = start_time.seconds - end_time.seconds;
    if (end_time.minutes > start_time.minutes)
    {
        --start_time.hours;
        start_time.minutes += 60;
    }
    difference->minutes = start_time.minutes - end_time.minutes;
    difference->hours = start_time.hours - end_time.hours;
    return difference;
}