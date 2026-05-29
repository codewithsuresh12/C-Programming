// 6. Leap Year: Year leap hai ya nahi. Rule: divisible by 4 but not 100, unless 400
#include <stdio.h>
int main()
{
    int year;

    printf("Enter the year :");
    scanf("%d", &year);

    if (year % 4 == 0)
    {
        printf("This year is leap year \n");
    }
    else
    {
        printf("This year is not a leap year\n");
    }
    return 0;
}