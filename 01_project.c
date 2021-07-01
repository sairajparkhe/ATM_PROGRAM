#include <stdio.h>

float balance = 5000; // intial balance to be 5000 for all
int anotherTransaction;

void transaction()
{
    //int pin;
    //pintf("Enter the pin");
    //scanf("%d",&pin);
    //if (pin!=5555){
    //    printf("******WRONG******PIN ENTERED");
    //}
    //else{

    int choice;
    printf("Enter any option\n\n");
    printf("1. Withdraw\n");
    printf("2. Deposit\n");
    printf("3. Balance\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:;
        int amountToWidthdraw;
        printf("Please enter amount to withdraw: ");
        scanf("%d", &amountToWidthdraw);
        if (amountToWidthdraw > balance)
        {
            printf("Insuffient funds in your account");
            printf("\n\nDo you want another transaction?\nPress 1 to proceed and 2 to exit\n\n");
            scanf("%d", &anotherTransaction);
            if (anotherTransaction == 1)
            {
                transaction();
            }
        }
        else
        {
            balance = balance - amountToWidthdraw;

            printf("You have withdrawn %d and your new balance is %f ", amountToWidthdraw, balance);

            // request for another transaction
            printf("\n\nDo you want another transaction?\nPress 1 to proceed and 2 to exit\n\n");
            scanf("%d", &anotherTransaction);
            if (anotherTransaction == 1)
            {
                transaction();
            }
        }
        break;

    case 2:;
        // DEPOSIT

        int amountToDeposit;
        printf("Please enter amount to deposit: ");
        scanf("%d", &amountToDeposit);

        balance = amountToDeposit + balance;

        printf("Thank you for depositing, new balance is: %f", balance);

        printf("\n\nDo you want another transaction?\nPress 1 to proceed and 2 to exit\n\n");
        scanf("%d", &anotherTransaction);
        if (anotherTransaction == 1)
        {
            transaction();
        }

        break;

    case 3:;

        // BALANCE
        printf("Your bank balance is: %f", balance);

        printf("\n\nDo you want another transaction?\nPress 1 to proceed and 2 to exit\n\n");
        scanf("%d", &anotherTransaction);
        if (anotherTransaction == 1)
        {
            transaction();
        }

        break;

    default:
        printf("\n\n************ERROR CAUSED DUE TO UNDIFIENDED STATEMENT************\n\n");
        break;
    }
    //}
}

int main()
{
    int pin;
    printf("Enter the PIN:");
    scanf("%d", &pin);
    if (pin != 5555)
    {
        printf("******WRONG PIN ENTERED******\n");
    }
    else
    {   
        printf("******WLECOME******\n");
        transaction();
        printf("\n\n******THANK YOU*******\n");
    }
    return 0;
}