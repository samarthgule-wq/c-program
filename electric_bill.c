#include<stdio.h>
void main()
{
    float units ,bill;
    printf("enter the number of units consumed:");
    scanf("%f",&units);
    if(units<=100){
        bill= units * 1.5;
    }
    else if(units<300){
        bill=100*1.5 +(units-100)*2.5;
    }
    else{
        bill=100*1.5 +200*2.5 +(units-300)*3.5;
    }
    if(bill>1000){
        bill=bill+(0.10*bill);
    }
    printf("Total Electric bill is%.2f",bill);
}