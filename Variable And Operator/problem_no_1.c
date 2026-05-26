// 1 . WAP to swap 2 numbers using 3rd variable.

#include <stdio.h>
int main()
{
    int a, b, temp; // get 3 integer input

    printf("Enter the value of a :");
    scanf("%d", &a);
    printf("Enter the value of b :");
    scanf("%d", &b);

    printf("Value before swaping a : %d\n", a); // 10
    printf("Value before swaping b : %d\n", b); // 20

    temp = a;
    a = b;
    b = temp;

    printf("Value after swaping a : %d\n", a); // 20
    printf("Value after swaping b : %d\n", b); // 10

    return 0;
}