// 8 Max of 2 using Switch: (a > b) ka result 1 ya 0 aayega. Switch se print karo

#include <stdio.h>

int main()
{
    int a, b, result;

    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);

    result = a > b;

    switch (result)
    {
    case 1:
        printf("Max: %d\n", a);
        break;
    case 0:
        printf("Max: %d\n", b);
        break;
    default:
        printf("Error\n");
    }

    return 0;
}