// 12 Roman to Integer: I=1, V=5, X=10, L=50, C=100, D=500, M=1000. Single character input
#include <stdio.h>

int main()
{
    char ch;
    int value;

    printf("Enter Roman numeral: ");
    scanf(" %c", &ch);

    switch (ch)
    {
    case 'I':
    case 'i':
        value = 1;
        break;
    case 'V':
    case 'v':
        value = 5;
        break;
    case 'X':
    case 'x':
        value = 10;
        break;
    case 'L':
    case 'l':
        value = 50;
        break;
    case 'C':
    case 'c':
        value = 100;
        break;
    case 'D':
    case 'd':
        value = 500;
        break;
    case 'M':
    case 'm':
        value = 1000;
        break;
    default:
        value = 0;
        printf("Invalid Roman numeral\n");
        return 0;
    }

    printf("Integer: %d\n", value);
    return 0;
}