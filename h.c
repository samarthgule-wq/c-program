#include <stdio.h>

int main() {
    // Check shelves 1 to 10
    for (int shelf = 1; shelf <= 10; shelf++) {
        // If shelf 5 is out of stock
        if (shelf == 5) {
            break;
            printf("Shelf %d is empty. Halting checks.\n", shelf);
            //gcc.break;
            //break;  // Stop checking further shelves
        }
        // Otherwise, print shelf status
        printf("Shelf %d is stocked.\n", shelf);
    }

    return 0;
}