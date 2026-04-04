#include <stdio.h>

void main() {
    float m1, m2, m3, m4, m5;
    float total, percentage;

    // Input marks
    printf("Enter marks of 5 subjects: ");
    scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);
    if(m1>100 || m1<0 || m2>100 || m2<0 || m3>100 || m3<0 || m4>100 || m4<0 || m5>100 || m5<0){
        printf("invalid input");
        return;
    }

    // Calculate total and percentage
    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5;

    // Display results
    printf("Total = %.2f\n", total);
    printf("Percentage = %.2f\n", percentage);

    // Division using else-if ladder
    if (percentage >= 60) {
        printf("Division: First Class\n");
    }
    else if (percentage >= 50) {
        printf("Division: Second Class\n");
    }
    else if (percentage >= 40) {
        printf("Division: Third Class\n");
    }
    else {
        printf("Division: Fail\n");
    }
}