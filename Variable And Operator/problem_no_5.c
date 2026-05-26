// 5 . WAP to calculate simple interest. SI = P _ R _ T / 100
#include <stdio.h>
int main()
{
    float principal, rate, time, amound, SI;

    printf("Enter the principal amound :");
    scanf("%f", &principal);

    printf("Enter the rate of intrst in % :");
    scanf("%f", &rate);

    printf("Enter the time duration ");
    scanf("%f", &time);

    SI = (principal * rate * time) / 100;
    amound = principal + SI;

    printf("The simple intrst is %.2f\n", SI);
    printf("The Amound is %.2f\n", amound);

    return 0;
}