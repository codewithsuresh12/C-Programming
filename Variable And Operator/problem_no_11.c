// 11.	WAP to check if a character is vowel or consonant using logical operators.

#include <stdio.h>
int main()
{
    char ch;

    printf("Enter the charcater :");
    scanf("%c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        printf("The character %c is vowel.\n", ch);
    }
    else
    {
        printf("The character %c is consonant.\n", ch);
    }
    return 0;
}