#include <stdio.h>

int main() {
    int pin = 1947;
    int balance = 52000;
    int option, enteredPin, withdrawlAmount, depositAmount;

    printf("Welcome to the ATM Simulator!\n");

    while (1) {
        printf("\nKindly Enter Your 4 Digit PIN: ");
        scanf("%d", &enteredPin);

        if (enteredPin != pin) {
            printf("Invalid PIN! Please try again.\n");
            continue;
        }

        printf("\nATM Menu:\n");
        printf("1. Check Balance\n");
        printf("2. Withdraw\n");
        printf("3. Deposit\n");
        printf("4. Exit\n");
        printf("Enter your option: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                printf("Your current balance is: $%d\n", balance);
                break;
                
            case 2:
                printf("Enter the amount to withdrawl: ");
                scanf("%d", &withdrawlAmount);
                if (withdrawlAmount > balance) {
                    printf("Insufficient balance.\n");
                } else {
                    balance -= withdrawlAmount;
                    printf("Withdrawal successful.\n Remaining balance is: $%d\n", balance);
                }
                break;
            case 3:
                printf("Enter the amount to deposit: ");
                scanf("%d", &depositAmount);
                balance += depositAmount;
                printf("Deposit successful.\n Updated balance is: $%d\n", balance);
                break;
            case 4:
                printf("Thank you for using the ATM. Good day!Come Again\n");
                return 0;
            default:
                printf("Invalid option. Please try again.\n");
                break;
        }
    }

    return 0;
}
