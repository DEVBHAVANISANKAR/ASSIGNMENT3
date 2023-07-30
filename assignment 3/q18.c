// Write a program which takes the month number as an input and display number of days in that month
#include<stdio.h>
int main()
{
    int month,a=31,b=28,c=30;
    printf("enter a no of month");
    scanf("%d",&month);
    switch(month)
    {
     case 1: 
    printf("january");
    printf("no of days is %d",a);
    break;

    case 2: 
    printf("february");
    printf("no of days is %d",b);
    break;

    case 3: 
    printf("march");
    printf("no of days is %d",a);
    break;

    case 4: 
    printf("april");
    printf("no of days is %d",b);
    break;

    case 5: 
    printf("may");
    printf("no of days is %d",a);
    break;

    case 6: 
    printf("june");
    printf("no of days is %d",b);
    break;

    case 7: 
    printf("jUNE");
    printf("no of days is %d",a);
    break;

    case 8: 
    printf("AUGUST");
    printf("no of days is  %d",a);
    break;

    case 9: 
    printf("september");
    printf("no of days is %d",b);
    break;

    case 10: 
    printf("october");
    printf("no of days is %d",a);
    break;

    case 11: 
    printf("november");
    printf("no of days is %d",b);
    break;

    case 12: 
    printf("december");
    printf("no of days is %d",a);
    break;

    default:
    printf("invalid choice");
     
    }

    printf("\n");

    return 0;
}
