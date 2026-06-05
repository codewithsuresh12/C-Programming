// 2. WAP to Find Sum of First N Natural Numbers using do-while loop
#include <stdio.h>

int main()
{
    int n, i = 1, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    do
    {
        sum = sum + i;
        i++;
    } while (i <= n);

    printf("Sum = %d", sum);

    return 0;
}