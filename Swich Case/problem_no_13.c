// 13 . Traffic Light System: R=Stop, Y=Ready, G=Go. Agar invalid input to "Wrong Input" print karo
#include <stdio.h>

int main()
{
    char light;

    printf("Enter signal R/Y/G: ");
    scanf(" %c", &light);

    switch (light)
    {
    case 'R':
    case 'r':
        printf("Stop\n");
        break;
    case 'Y':
    case 'y':
        printf("Ready\n");
        break;
    case 'G':
    case 'g':
        printf("Go\n");
        break;
    default:
        printf("Wrong Input\n");
    }

    return 0;
}