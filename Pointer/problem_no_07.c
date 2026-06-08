// Q7. Reverse a String Using Pointer
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    char *start, *end, temp;

    printf("Enter string: ");
    gets(str);

    start = str;
    end = str + strlen(str) - 1;

    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    printf("Reversed String = %s", str);

    return 0;
}