// 6 Currency Converter: 1.INR to USD, 2.USD to INR, 3.INR to EUR, 4.EUR to INR. Rate: 1 USD = 83 INR, 1 EUR = 90 INR
#include <stdio.h>

int main()
{
    int choice;
    float amount, result;

    printf("1.INR to USD\n");
    printf("2.USD to INR\n");
    printf("3.INR to EUR\n");
    printf("4.EUR to INR\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Enter amount in INR: ");
        scanf("%f", &amount);
        result = amount / 83;
        printf("USD: %.2f\n", result);
        break;
    case 2:
        printf("Enter amount in USD: ");
        scanf("%f", &amount);
        result = amount * 83;
        printf("INR: %.2f\n", result);
        break;
    case 3:
        printf("Enter amount in INR: ");
        scanf("%f", &amount);
        result = amount / 90;
        printf("EUR: %.2f\n", result);
        break;
    case 4:
        printf("Enter amount in EUR: ");
        scanf("%f", &amount);
        result = amount * 90;
        printf("INR: %.2f\n", result);
        break;
    default:
        printf("Invalid Choice\n");
    }

    return 0;
}