// 2.. Month Days: Month number 1-12 input, usme kitne din hai batao
#include <stdio.h>

int main()
{
    int month;

    printf("Enter month number 1-12: ");
    scanf("%d", &month);

    switch (month)
    {
    case 1:
        printf("31 Days\n");
        break;
    case 2:
        printf("28 or 29 Days\n");
        break;
    case 3:
        printf("31 Days\n");
        break;
    case 4:
        printf("30 Days\n");
        break;
    case 5:
        printf("31 Days\n");
        break;
    case 6:
        printf("30 Days\n");
        break;
    case 7:
        printf("31 Days\n");
        break;
    case 8:
        printf("31 Days\n");
        break;
    case 9:
        printf("30 Days\n");
        break;
    case 10:
        printf("31 Days\n");
        break;
    case 11:
        printf("30 Days\n");
        break;
    case 12:
        printf("31 Days\n");
        break;
    default:
        printf("Invalid Month\n");
    }

    return 0;
}