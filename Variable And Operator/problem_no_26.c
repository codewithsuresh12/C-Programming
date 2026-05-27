// 26.	WAP to find profit or loss. Input Cost Price and Selling Price. Also print profit/loss amount.
#include <stdio.h>

int main()
{
    float cp, sp, amount;

    printf("Enter Cost Price: ");
    scanf("%f", &cp);
    printf("Enter Selling Price: ");
    scanf("%f", &sp);

    if (sp > cp)
    {
        amount = sp - cp;
        printf("Profit = %.2f", amount);
    }
    else if (cp > sp)
    {
        amount = cp - sp;
        printf("Loss = %.2f", amount);
    }
    else
    {
        printf("No Profit No Loss");
    }

    return 0;
}