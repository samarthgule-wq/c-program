#include<stdio.h>
int main()
{
   int marks;
   printf("Enter the marks:");
   scanf("%d",&marks);
   if(marks<0 || marks>100)
   {
      printf("invalid marks please enter correct marks");
   }
   se if(marks<50)
   {
      printf("Grade F\n");
   }
   else if(marks>=50 && marks<60)
   {
      printf("Grade E\n");
   }
   else if(marks>=60 && marks<70)
   {
      printf("Grade D\n");
   }
   else if(marks>=70 && marks<80)
   {
      printf("Grade c\n");
   }
   else if(marks>=80 && marks<90)
   {
      printf("Grade B\n");
   }
   else if(marks>=90 && marks<100)
   {
      printf("Grade A\n");
   }
   else
   {
      printf("invalid charecter please enter vvalid charecter");
   }
   return 0;
}