#include <stdio.h>

int main() {
    float amount, discount, finalAmount;

    // Input
    printf("Enter purchase amount: ");
    scanf("%f", &amount);

    // Discount calculation
    if (amount > 5000) {
        discount = amount * 0.20;
    }
    else if (amount >= 2000) {
        discount = amount * 0.10;
    }
    else {
        discount = amount * 0.05;
    }

    // Final amount after discount
    finalAmount = amount - discount;

    // Output
    printf("Discount = ₹%.2f\n", discount);
    printf("Final Amount = ₹%.2f\n", finalAmount);

    return 0;
}