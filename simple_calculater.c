#include<stdio.h>
void main()
{
    float a,b,result;
    char op;
    printf("Enter the input:");
    scanf("%f%f%s",&a,&b,&op);
    switch(op)
    {
        case '+':result=a+b;
        printf("result is %f",result);
        break;
        case '-':result=a-b;
        printf("result is%f",result);
        break;
        case '*':result=a*b;
        printf("result is %f",result);
        break;
        case '/':result=a/b;
        printf("result is %f",result);
        break;
        default:printf("invalid operator");
        break;
    }

}