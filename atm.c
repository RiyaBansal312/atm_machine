
#include <stdio.h>

// Initializing the balance amount as 0.
float balance_amount = 0.0;
int user_pin = 1234; // Default PIN

// Function for operations in ATM Machine
void atm_machine_transaction();

int main()
{
    atm_machine_transaction();
    printf("Thank you for the visit!\n");
    return 0;
}

// Function definition for operations in ATM Machine
void atm_machine_transaction()
{
    printf("Welcome to the ATM Machine\n");

    // PIN verification
    int entered_pin;
    printf("Enter your PIN: ");
    scanf("%d", &entered_pin);

    if (entered_pin != user_pin) {
        printf("Incorrect PIN. Please try again.\n");
        return;
    }

    printf("\nChoices Available in the ATM Machine\n");
    printf("1. Deposit Money\n");
    printf("2. Withdraw Money\n");
    printf("3. Balance Amount\n\n");

    // Take an appropriate option to select which operation
    // you want to be performed by the ATM Machine.

    int option;
    printf("Your option: ");
    scanf("%d", &option);

    float withdraw_amount, deposit_amount;
    int new_transaction;

    switch (option)
    {
    // Case for Depositing money
    case 1:
        printf("\nEnter the amount to deposit: ");
        scanf("%f", &deposit_amount);
        balance_amount += deposit_amount;
        printf("Your current balance is Rs. %.2f. Thanks for depositing!\n", balance_amount);
        break;

    // Case for Money Withdrawal
    case 2:
        printf("\nPlease enter amount to withdraw: ");
        scanf("%f", &withdraw_amount);
        if (withdraw_amount > balance_amount)
        {
            printf("Insufficient funds! Please proceed to deposit money.\n");
        }
        else
        {
            balance_amount -= withdraw_amount;
            printf("You have withdrawn Rs. %.2f and your balance is Rs. %.2f\n", withdraw_amount, balance_amount);
        }
        break;

    // Case for checking current bank amount
    case 3:
        printf("Your current bank balance is: %.2f\n", balance_amount);
        break;

    // Case for options out of range
    default:
        printf("Invalid Option!\nPlease choose from the provided options to continue.\n");
    }
}