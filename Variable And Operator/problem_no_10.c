// 10.	WAP to find greatest of 3 numbers using ternary operator only. No if-else.
#include <stdio.h>
int main()
{
    int A, B, C, max;

    printf("Enter the value of A :");
    scanf("%d", &A);

    printf("Enter the value of b :");
    scanf("%d", &B);

    printf("Enter the value of C :");
    scanf("%d", &C);

    max = (A > B) ? ((A > C) ? A : C) : ((B > C) ? B : C);
  
    printf("The gratest number is %d", max);

    return 0;
}