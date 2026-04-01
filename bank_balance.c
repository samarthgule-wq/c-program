#include <stdio.h>

int main() {
    int choice;
    float balance = 1000, amount;  // initial balance

    while (1) {
        // Menu
        printf("\n--- BANK MENU ---\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Balance Check\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1: // Deposit
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);

                balance = balance + amount;
                printf("Deposit successful!\n");
                break;

            case 2: // Withdraw
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);

                if (amount <= balance) {
                    balance = balance - amount;
                    printf("Withdrawal successful!\n");
                } else {
                    printf("Insufficient balance!\n");
                }
                break;

            case 3: // Balance Check
                printf("Current Balance: ₹%.2f\n", balance);
                break;

            case 4: // Exit
                printf("Thank you for using banking system!\n");
                return 0;

            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}