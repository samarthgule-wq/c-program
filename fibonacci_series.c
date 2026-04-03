#include <stdio.h>

int main() {
    int limit, a = 0, b = 1, next, count = 0;

    // Input
    printf("Enter the limit: ");
    scanf("%d", &limit);

    printf("Fibonacci series up to %d:\n", limit);

    // Generate Fibonacci series
    while (a <= limit) {
        printf("%d ", a);
        count++;

        next = a + b;
        a = b;
        b = next;
    }

    // Output count
    printf("\nTotal terms = %d", count);

    return 0;
}