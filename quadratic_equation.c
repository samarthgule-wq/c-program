#include<stdio.h>
#include<math.h>
int main()
{ 
    float a,b,c,disc,root1,root2,real, imag;
    printf("Enter a value for a,b,c:");
    scanf("%f%f%f",&a,&b,&c);
    if((a==0)&&(b==0))
    {
        printf("roots cannot br determined");
    }
    else if(a==0)
    {
        printf("linear equation");
        root1=-c/b;
        printf("root is %f",root1);
    }
    else
    {
        disc=b*b*-4*a*c;
        if(disc==0)
        {
            root1=root2=-b/(2*a);
            printf("roots are real and equal:\n");
            printf("root1=root2=%f",root1);
        }
        else if(disc>0)
        {
            root1=(-b+sqrt(disc))/(2*a);
            root2=(-b-sqrt(disc))/(2*a);
            printf("roots are real and distinct:\n");
            printf("root1=%f\troot2=%f",root1,root2);
        }
        else
        {
            real=-b/(2*a);
            imag=sqrt(-disc)/(2*a);
            printf("roots are complex roots are:\n");
            printf("root1=%f+i%f\t",real,imag);
            printf("root2=%f-i%f\n",real,imag);
        }
    }
    return 0;
}