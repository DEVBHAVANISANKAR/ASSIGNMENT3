//Write a program to check whether a given number is divisible by 3 and divisible by 2.
#include<stdio.h>
int main()
{
    int num;
    printf("enter a num : ");
    scanf("%d",&num);
    if(num%2==0&&num%3==0)
    {
        printf("%d is divisible by 2 and 3",num);

    }
    else {
        printf("%d not divisible by 2 and 3",num);
    }
    return 0;
}