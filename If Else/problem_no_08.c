// 8.. Electricity Bill: Units input. First 50 = 0.50/unit, Next 100 = 0.75/unit, Next 100 = 1.20/unit, Above 250 = 1.50/unit + 20% surcharge
#include <stdio.h>

int main()
{
    int units;
    float bill = 0.0, surcharge = 0.0, total = 0.0;

    printf("Enter total units: ");
    scanf("%d", &units);

    if (units <= 50)
    {
        bill = units * 0.50;
    }
    else if (units <= 150)
    {
        bill = 50 * 0.50 + (units - 50) * 0.75;
    }
    else if (units <= 250)
    {
        bill = 50 * 0.50 + 100 * 0.75 + (units - 150) * 1.20;
    }
    else
    {
        bill = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (units - 250) * 1.50;
        surcharge = bill * 0.20; // 20% surcharge on bill
    }

    total = bill + surcharge;

    printf("Units: %d\n", units);
    printf("Base Bill: Rs. %.2f\n", bill);
    if (surcharge > 0)
        printf("Surcharge 20%%: Rs. %.2f\n", surcharge);
    printf("Total Bill: Rs. %.2f\n", total);

    return 0;
}