#include<stdio.h>
void main()
{
    float tax, salary;
    printf("Enter the value of your salary:");
    scanf("%f", &salary);
    if(salary<=250000){
        tax=0;
            printf("no tax\n");
        
    }
    else if(salary<=500000){
        tax=(salary-250000)*0.05;
    }
    else if(salary<=1000000){
        tax=(250000*.05)+(salary-500000)*.20;
    }
    else{
        tax=(250000*.05)+(500000*.20)+(salary-1000000)*.30;
    }
    printf("The tax amount is %.2f", tax);
}