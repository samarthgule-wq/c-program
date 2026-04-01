#include<stdio.h>
void main()
{
    int start, end,i,j,isprime;
    printf("Enter the range (strart end)");
    scanf("%d%d",&start,&end);
    printf("prime numbers between %d and%d are:\n",start, end);
    for(i=start; i<=end; i++){
         if(i<=1)
    continue;
    isprime=1;
        for(j=2; j<=i/2; j++){
            if(i%j==0){
                isprime=0;
                break;
            }
        }
        if(isprime==1)
            printf("%d ",i);
    }
}