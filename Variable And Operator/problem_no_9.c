// 9.	WAP to find greatest of 2 numbers using ternary operator ?:
#include <stdio.h>
int main()
{
    int A, B;

    printf("Enter the value of A :");
    scanf("%d", &A);

    printf("Enter the value of B :");
    scanf("%d", &B);

    (A > B) ? printf("%d is grater\n", A) : printf("%d is greater\n", B);

    return 0;
}