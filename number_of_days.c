#include<stdio.h>
void main()
{ 
      int a;
      printf("enter a value for a to see days and month:");
      scanf("%d",&a);
      switch(a)
      {
        case 1:printf("days :31\n");
        printf("month:january\n");
        break;
        case 2:printf("days:28/29\n");
        printf("month:february\n");
        break;
        case 3:printf("days:31\n");
        printf("month:march\n");
        break;
        case 4:printf("days:30\n");
        printf("month:april\n");
        break;
        case 5:printf("days:31\n");
        printf("month:may\n");
        break;
        case 6:printf("days:30\n");
        printf("month:june\n");
        break;
        case 7:printf("days:31\n");
        printf("month:july\n");
        break;
        case 8:printf("days:31\n");
        printf("month:august\n");
        break;
        case 9:printf("days:30\n");
        printf("month:september\n");
        break;
        case 10:printf("days:31\n");
        printf("month:october\n");
        break;
        case 11:printf("days:30\n");
        printf("month:november\n");
        break;
        case 12:printf("days:31\n");
        printf("month:december\n");
        break;
        default:printf("invalid input please enter correct input");
        break;
      }
}