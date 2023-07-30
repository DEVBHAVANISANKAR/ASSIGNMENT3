// Write a program to print greater between two numbers. Print one number of both are the same.
#include<stdio.h>
int main(){
    int a,b;
    printf("enter two number : ");
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        printf("%d is greatest",a);
    }
    else if (a==b)
    {
        printf("both are same : %d",a);
    }
    else 
    {
        printf("%d is greatest ",b);
    }
    return 0;
}