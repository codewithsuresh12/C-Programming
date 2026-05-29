// 11 Hospital System: 1.Cardiology 2.Ortho 3.Neuro. Har department ka sub-menu: 1.Doctor List 2.Book Appointment
#include <stdio.h>

int main()
{
    int dept, option;

    printf("1.Cardiology\n");
    printf("2.Ortho\n");
    printf("3.Neuro\n");
    printf("Select Department: ");
    scanf("%d", &dept);

    switch (dept)
    {
    case 1:
        printf("Cardiology\n");
        printf("1.Doctor List\n");
        printf("2.Book Appointment\n");
        printf("Enter option: ");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            printf("Dr. Sharma\nDr. Verma\n");
            break;
        case 2:
            printf("Appointment Booked for Cardiology\n");
            break;
        default:
            printf("Invalid Option\n");
        }
        break;
    case 2:
        printf("Ortho\n");
        printf("1.Doctor List\n");
        printf("2.Book Appointment\n");
        printf("Enter option: ");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            printf("Dr. Singh\nDr. Gupta\n");
            break;
        case 2:
            printf("Appointment Booked for Ortho\n");
            break;
        default:
            printf("Invalid Option\n");
        }
        break;
    case 3:
        printf("Neuro\n");
        printf("1.Doctor List\n");
        printf("2.Book Appointment\n");
        printf("Enter option: ");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            printf("Dr. Patel\nDr. Reddy\n");
            break;
        case 2:
            printf("Appointment Booked for Neuro\n");
            break;
        default:
            printf("Invalid Option\n");
        }
        break;
    default:
        printf("Invalid Department\n");
    }

    return 0;
}