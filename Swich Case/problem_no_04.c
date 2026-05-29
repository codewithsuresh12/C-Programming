// 4 Gender: M/m = Male, F/f = Female print karo
#include <stdio.h>

int main()
{
    char gender;

    printf("Enter Gender M/F: ");
    scanf(" %c", &gender);

    switch (gender)
    {
    case 'M':
        printf("Male\n");
        break;
    case 'm':
        printf("Male\n");
        break;
    case 'F':
        printf("Female\n");
        break;
    case 'f':
        printf("Female\n");
        break;
    default:
        printf("Invalid Input\n");
    }

    return 0;
}