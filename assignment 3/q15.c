//Write a program to check whether a given number is positive, negative or zero
#include<stdio.h>
int main()
{
    int num;
    printf("enter a num : ");
    scanf("%d",&num);
    if(num>0)
    {
        printf("%d is positive",num);

    }
    else if(num==0) {
        printf("%d is equal to 0",num);
    }
    else if(num<0) {
        printf("%d is negative",num);
    }
    
    return 0;
}