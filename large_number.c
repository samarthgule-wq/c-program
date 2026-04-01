#include<stdio.h>
void main()
{
    int a,b,c,d;
    printf("enter the number for value a b c d:");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a>b){
        if(a>c){
            if(a>d){
                printf("large number is:%d",a);
            }
            else{
                printf("large number is:%d",d);
            }
        }
        else{
            if(b>c){
                if(b>d){
                    printf("large number is:%d",b);
                }
                else{
                    printf("large number is:%d",d);
                }
            }
            else{
                printf("large number is:%d",c);
            }
        }
    }
    else{
        if(b>c){
            if(b>d){
                printf("large number is:%d",b);
            }
            else{
                printf("large number is:%d",d);
            }
        }
        else{
            if(c>d){
                printf("large number is:%d",c);
            }
            else{
                printf("large number is:%d",d);
            }
        }
    }
}