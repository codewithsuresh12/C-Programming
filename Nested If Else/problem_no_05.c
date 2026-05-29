// 5.Income Tax Calculator: Slab: 0-2.5L = 0%, 2.5-5L = 5%, 5-10L = 20%, 10L+ = 30%
#include <stdio.h>

int main()
{
    float income, tax = 0;

    printf("Enter Annual Income in Rs: ");
    scanf("%f", &income);

    if (income <= 250000)
    {
        tax = 0; // 0% tax
    }
    else
    {
        if (income <= 500000)
        {
            tax = (income - 250000) * 0.05; // 5% on amount above 2.5L
        }
        else
        {
            if (income <= 1000000)
            {
                tax = (250000 * 0.05) + (income - 500000) * 0.20; // 5% + 20%
            }
            else
            {
                tax = (250000 * 0.05) + (500000 * 0.20) + (income - 1000000) * 0.30; // 5% + 20% + 30%
            }
        }
    }

    printf("\nAnnual Income: Rs.%.2f\n", income);
    printf("Income Tax: Rs.%.2f\n", tax);
    printf("Income After Tax: Rs.%.2f\n", income - tax);

    return 0;
}