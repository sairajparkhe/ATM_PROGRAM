//ATM program----->SAIRAJ
#include <stdio.h>
int main()
{
    float x, y; // two variables for credit and debit.
    char ch;
    printf("Enter initial amount\n");
    scanf("%f", &x);
    printf("Enter\nc for CREDIT\nd for DEBIT\nb for BALANCE\n");
    scanf("\n%c", &ch);
    switch (ch)
    {
    case 'c':
        printf("Enter Credit amount\n");
        scanf("%f", &y);
        x = x + y;
        printf("Net Amount=%.3f", x);
        break;
    case 'd':
        printf("Enter Withdrawal Amount\n");
        scanf("%f", &y);
        if (x >= y)
        {
            x = x - y;
            printf("Net Amount=%.3f", x);
        }
        else
        {
            printf("Insufficient Amount");
        }
        break;
    case 'b':
        printf("Amount in your Account=%.3f", x);
        break;
    default:
        printf("Choose correct option for operation");
    }
    return 0;
}