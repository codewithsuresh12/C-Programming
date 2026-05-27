// 25.	WAP to calculate total salary. Total = Basic + DA + HRA - PF. DA=25%, HRA=15%, PF=12% of Basic.
#include <stdio.h>

int main()
{
    float basic, da, hra, pf, total;

    printf("Basic Salary enter kar: ");
    scanf("%f", &basic);

    da = basic * 0.25;  // 25%
    hra = basic * 0.15; // 15%
    pf = basic * 0.12;  // 12%
    total = basic + da + hra - pf;

    printf("Basic Salary = %.2f\n", basic);
    printf("DA = %.2f\n", da);
    printf("HRA = %.2f\n", hra);
    printf("PF = %.2f\n", pf);
    printf("Total Salary = %.2f", total);

    return 0;
}