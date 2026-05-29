// 11.Weekday/Weekend: Day number 1-7 input, Weekend hai ya Weekday
#include <stdio.h>

int main()
{
    int day;
    printf("Enter day number 1-7: ");
    scanf("%d", &day);

    if (day >= 1 && day <= 5)
    {
        printf("Weekday\n");
    }
    else if (day == 6 || day == 7)
    {
        printf("Weekend\n");
    }
    else
    {
        printf("Invalid day! Enter 1 to 7\n");
    }

    return 0;
}