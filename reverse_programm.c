#include<stdio.h>
void main()
{
    int n,rem,rev=0;
    printf("Enter the number for n:");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        n=n/10;
        rev=rev*10+rem;
        
    }
    printf("The reverse of the number is: %d",rev);
}