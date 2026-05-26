// 18.	WAP to convert days into years, weeks, days. Example: 375 days = 1 year, 1 week, 3 days
#include <stdio.h>
int main()
{
    int totalday, year, week, day;

    printf("Enter the day :");
    scanf("%d", &totalday);

    year = (totalday / 365);     // 1 year = 365 day
    week = (totalday % 365) / 7; // modulas se remainder nikal jayega remander / 7 week nikal jayega
    day = (totalday % 365) % 7;  // remainder day

    printf(" %d Total day = %d year , %d week , %d day \n", totalday, year, week, day);

    return 0;
}