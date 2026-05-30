// 7 Even/Odd using Switch: Number % 2 ka result 0 ya 1 hoga. Uspe switch lagao
#include <stdio.h>

int main()
{
    int num, rem;

    printf("Enter number: ");
    scanf("%d", &num);

    rem = num % 2;

    switch (rem)
    {
    case 0:
        printf("Even\n");
        break;
    case 1:
        printf("Odd\n");
        break;
    default:
        printf("Error\n");
    }

    return 0;
}
