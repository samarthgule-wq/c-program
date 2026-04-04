#include<stdio.h>
void main()
{
    int num,temp,rem,fact,sum=0,i;
    printf("Enter a number:");
    scanf("%d",&num);
    temp=sum;
    while(num>0){
        rem = num%10;
        fact=1;
        for(i=1; i<=rem; i++){
            fact = fact*i;
        }
        sum = sum+fact;
        num=num/10;
    }
    if(sum==temp){
        printf("strong number\n");
    }
    else{
        printf("Not a strong number\n");
    }

}