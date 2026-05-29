// 4.Discount System: Bill >5000 = 20% discount, 3000-5000 = 10% discount. Agar member hai to extra 5%#include <stdio.h>

int main()
{
    float bill, discount = 0, extra = 0, totalDiscount = 0, finalAmount;
    int member; // 1 = Yes, 0 = No

    printf("Enter Bill Amount: ");
    scanf("%f", &bill);
    printf("Are you a member? 1=Yes, 0=No: ");
    scanf("%d", &member);

    if (bill > 5000)
    {
        discount = bill * 0.20; // 20% discount
    }
    else
    {
        if (bill >= 3000)
        {
            discount = bill * 0.10; // 10% discount
        }
        else
        {
            discount = 0; // koi discount nahi
        }
    }

    if (member == 1)
    {
        extra = bill * 0.05; // extra 5%
    }
    else
    {
        extra = 0;
    }

    totalDiscount = discount + extra;
    finalAmount = bill - totalDiscount;

    printf("\nOriginal Bill: Rs.%.2f\n", bill);
    printf("Base Discount: Rs.%.2f\n", discount);
    if (extra > 0)
    {
        printf("Member Discount 5%%: Rs.%.2f\n", extra);
    }
    printf("Total Discount: Rs.%.2f\n", totalDiscount);
    printf("Final Amount to Pay: Rs.%.2f\n", finalAmount);

    return 0;
}