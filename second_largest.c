#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter the number for a,b,c:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b){
        if(a>c){
            if(b>c){
                printf("second largest number is:%d",b);
            }
            lse{
                printf("second largest number is:%d",c);
            }
        }else{
            printf("second largest number is:%d",a);
        }    
    }
    else{
        if(b>c){
            if(a>c){
                printf("second largest number is:%d",a);
            }
            else{
                printf("second largest number is:%d",c);
            } 
        }
        else{
            printf("second largest number is:%d",b);
        }
    }
}
                
        
    
