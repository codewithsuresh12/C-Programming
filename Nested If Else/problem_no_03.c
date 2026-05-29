// 3.Employee Bonus: Salary < 10000 = 20% bonus, 10000-20000 = 15% bonus, >20000 = 10% bonus. Service >10 years = extra 5%
#include <stdio.h>

int main()
{
    float salary, bonus = 0, extra = 0, totalBonus = 0;
    int service;

    printf("Enter Salary: ");
    scanf("%f", &salary);
    printf("Enter Service Years: ");
    scanf("%d", &service);

    if (salary < 10000)
    {
        bonus = salary * 0.20; // 20% bonus
    }
    else
    {
        if (salary <= 20000)
        {
            bonus = salary * 0.15; // 15% bonus
        }
        else
        {
            bonus = salary * 0.10; // 10% bonus
        }
    }

    if (service > 10)
    {
        extra = salary * 0.05; // extra 5%
    }
    else
    {
        extra = 0;
    }

    totalBonus = bonus + extra;

    printf("\nSalary: Rs.%.2f\n", salary);
    printf("Service: %d years\n", service);
    printf("Base Bonus: Rs.%.2f\n", bonus);
    if (extra > 0)
    {
        printf("Extra 5%% Bonus: Rs.%.2f\n", extra);
    }
    printf("Total Bonus: Rs.%.2f\n", totalBonus);
    printf("Net Salary: Rs.%.2f\n", salary + totalBonus);

    return 0;
}