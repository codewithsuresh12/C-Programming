// ATM Machine project user input the the amound and machine provid tha money the also resit.
#include <stdio.h>

int main()
{
    int amount, temp;
    int n500 = 0, n200 = 0, n100 = 0, totalNotes = 0;

    printf("===== Welcome to ATM =====\n");
    printf("Available Notes: 100, 200, 500\n");
    printf("Enter amount to withdraw: ");
    scanf("%d", &amount);

    // Validation: amount 100 ka multiple hona chahiye
    if (amount % 100 != 0)
    {
        printf("Sorry! Amount must be multiple of 100\n");
        return 0;
    }

    if (amount <= 0)
    {
        printf("Invalid amount!\n");
        return 0;
    }

    temp = amount;

    // 500 ke notes nikalo
    n500 = temp / 500;
    temp = temp % 500;

    // 200 ke notes nikalo
    n200 = temp / 200;
    temp = temp % 200;

    // 100 ke notes nikalo
    n100 = temp / 100;
    temp = temp % 100;

    // Agar abhi bhi temp bacha hai to amount nahi ban sakta
    if (temp != 0)
    {
        printf("Sorry! Cannot dispense Rs.%d with available notes\n", amount);
        printf("Try amount like 100, 200, 300, 400, 500, 600, 700...\n");
        return 0;
    }

    totalNotes = n500 + n200 + n100;

    printf("\n===== Transaction Successful =====\n");
    printf("Withdraw Amount: Rs.%d\n", amount);
    printf("----------------------------------\n");
    if (n500 > 0)
        printf("500  x %d = Rs.%d\n", n500, n500 * 500);
    if (n200 > 0)
        printf("200  x %d = Rs.%d\n", n200, n200 * 200);
    if (n100 > 0)
        printf("100  x %d = Rs.%d\n", n100, n100 * 100);
    printf("----------------------------------\n");
    printf("Total Notes Dispensed: %d\n", totalNotes);
    printf("Thank You!\n");

    return 0;
}