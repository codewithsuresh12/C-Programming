// 28.	WAP to check if alphabet is vowel or consonant using ASCII and logical operators.
#include <stdio.h>

int main()
{
    char ch;

    printf("Enter an alphabet: ");
    scanf("%c", &ch);

    // Check using ASCII values
    if (ch == 65 || ch == 69 || ch == 73 || ch == 79 || ch == 85 ||   // A,E,I,O,U
        ch == 97 || ch == 101 || ch == 105 || ch == 111 || ch == 117) // a,e,i,o,u
    {
        printf("%c is a Vowel", ch);
    }
    else if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122)) // A-Z or a-z
    {
        printf("%c is a Consonant", ch);
    }
    else
    {
        printf("Not an alphabet");
    }

    return 0;
}