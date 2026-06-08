// Q6. String Length Using Pointer
#include <stdio.h>

int main()
{
    char str[100];
    char *ptr;
    int count = 0;

    printf("Enter string: ");
    gets(str);

    ptr = str;

    while (*ptr != '\0')
    {
        count++;
        ptr++;
    }

    printf("Length = %d", count);

    return 0;
}