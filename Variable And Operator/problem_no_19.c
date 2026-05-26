// 19.	WAP to calculate total marks and percentage of 5 subjects. Also print grade using operators
#include <stdio.h>
int main()
{
    float Marathi, Hindi, English, Science, History;

    printf("Enter the mark of Marathi : ");
    scanf("%f", &Marathi);

    printf("Enter the mark of Hindi : ");
    scanf("%f", &Hindi);

    printf("Enter the mark of English : ");
    scanf("%f", &English);

    printf("Enter the mark of Science : ");
    scanf("%f", &Science);

    printf("Enter the mark of History : ");
    scanf("%f", &History);

    float total, per;

    total = Marathi + Hindi + English + Science + History;
    per = (Marathi + Hindi + English + Science + History) / 5;

    printf("The Total Mark Is : %f\n", total);
    printf("The Percentage is %f\n", per);

    (per >= 90) ? printf("Grade is A\n") : (per >= 80) ? printf("Grade is B\n")
                                       : (per >= 60)   ? printf("Grade is C\n")
                                       : (per >= 45)   ? printf("Grade is D\n")
                                                       : printf("Fail\n");

    return 0;
}