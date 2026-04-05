#include <stdio.h>

int main() {
    int n, i, j, isPrime, sum = 0;

    // Input
    printf("Enter the value of N: ");
    scanf("%d", &n);

    // Loop from 2 to N
    for (i = 2; i <= n; i++) {

        isPrime = 1; // assume prime

        // Check if i is prime
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }

        // If prime, add to sum
        if (isPrime == 1) {
            sum = sum + i;
        }
    }

    // Output
    printf("Sum of prime numbers up to %d = %d", n, sum);

    return 0;
}