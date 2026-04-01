#include <stdio.h>

int main() {
    int choice;
    float balance = 1000, amount;

    while (1) {
        // Menu
        printf("\n--- ATM MENU ---\n");
        printf("1. Withdraw\n");
        printf("2. Deposit\n");
        printf("3. Mini Statement\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1: // Withdraw
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);

                if (amount <= balance) {
                    balance = balance - amount;
                    printf("Withdrawal successful!\n");
                } else {
                    printf("Insufficient balance!\n");
                }
                break;

            case 2: // Deposit
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);

                balance = balance + amount;
                printf("Deposit successful!\n");
                break;

            case 3: // Mini Statement
                printf("Current balance: ₹%.2f\n", balance);
                break;

            case 4: // Exit
                printf("Thank you for using ATM!\n");
                return 0;

            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}