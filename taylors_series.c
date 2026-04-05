#include<stdio.h>
#include<math.h>
void main()
{
   float x,term,sum;
   int n,i;
   printf("Enter the value of x:");
   scanf("%f",&x);
   printf("Enter the number of terms:");
   scanf("%d",&n);
   x=x*3.14/180;
   printf("The mathematical sin value is =%f\n",sin(x));
   term=x;
   sum=x;
   for (i=1; i<n; i++)
   {
    term=term*(-1)*x*x/((2*i)*(2*i+1));
    sum=sum+term; 
  }
  printf("The calculated sin value is=%f\n",sum);
}