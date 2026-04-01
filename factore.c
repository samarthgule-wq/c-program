#include <stdio.h>

int main() {
    int choice, num, i, isPrime, fact;

    while (1) {
        // Menu
        printf("\n--- MENU ---\n");
        printf("1. Even or Odd\n");
        printf("2. Prime Check\n");
        printf("3. Factorial\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1: // Even or Odd
                printf("Enter a number: ");
                scanf("%d", &num);

                if (num % 2 == 0)
                    printf("Even number\n");
                else
                    printf("Odd number\n");
                break;

            case 2: // Prime Check
                printf("Enter a number: ");
                scanf("%d", &num);

                isPrime = 1;

                if (num <= 1)
                    isPrime = 0;
                else {
                    for (i = 2; i <= num / 2; i++) {
                        if (num % i == 0) {
                            isPrime = 0;
                            break;
                        }
                    }
                }

                if (isPrime)
                    printf("Prime number\n");
                else
                    printf("Not a prime number\n");
                break;

            case 3: // Factorial
                printf("Enter a number: ");
                scanf("%d", &num);

                fact = 1;
                for (i = 1; i <= num; i++) {
                    fact = fact * i;
                }

                printf("Factorial = %d\n", fact);
                break;

            case 4: // Exit
                printf("Exiting program...\n");
                return 0;

            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}