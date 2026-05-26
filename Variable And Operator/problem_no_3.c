// 3 . WAP to find ASCII value of a character entered by user.

#include <stdio.h>
int main()
{
    char ch; // for character .

    printf("Enter the character :");
    scanf("%c", &ch); // user se input liya

    printf("ASCII value of %c = %d ", ch, ch); // %c for character and %d for her ASCII value

    return 0;
}