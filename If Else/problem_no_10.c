// 10. Uppercase/Lowercase: Character input, case check karo aur convert karo
#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
    {
        printf("%c is Uppercase\n", ch);
        printf("Lowercase: %c\n", ch + 32);
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("%c is Lowercase\n", ch);
        printf("Uppercase: %c\n", ch - 32);
    }
    else
    {
        printf("%c is not an alphabet\n", ch);
    }

    return 0;
}