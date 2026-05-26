// 2 . WAP to swap 2 numbers WITHOUT using 3rd variable. 3 tareeke se karo: + -, _ /, ^.

#include <stdio.h>
int main()
{
    int a, b; // get 2 integer input

    printf("Enter the value of a :");
    scanf("%d", &a);
    printf("Enter the value of b :");
    scanf("%d", &b);

    printf("Value before swaping a : %d\n", a); // 10
    printf("Value before swaping b : %d\n", b); // 20

    a = a + b;
    b = a - b;
    a = a - b;

    printf("Value after swaping a : %d\n", a); // 20
    printf("Value after swaping b : %d\n", b); // 10
    return 0;
}