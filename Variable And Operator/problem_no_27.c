// 27.	WAP to convert total minutes into days, hours, minutes. Ex: 2000 min = 1 day, 9 hr, 20 min
#include <stdio.h>

int main()
{
    int total_min, days, hours, minutes;

    printf("Enter total minutes: ");
    scanf("%d", &total_min);

    days = total_min / 1440; // 24*60 = 1440
    hours = (total_min % 1440) / 60;
    minutes = (total_min % 1440) % 60;

    printf("%d min = %d day, %d hr, %d min", total_min, days, hours, minutes);

    return 0;
}