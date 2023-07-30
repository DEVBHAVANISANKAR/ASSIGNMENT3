//Write a program to check whether roots of a given quadratic equation are real & distinct, real & equal or imaginary roots
#include<stdio.h>
int main()
{
    int a,b,c,D;
    printf("enter three numbers : ");
    scanf("%d %d %d",&a,&b,&c);
    D=(b*b-4*a*c);
    if(D>=0)
    {
        printf("roots are real and distinct");
    }
    else if(D==0)
    {
        printf("roots are real and equal");
    }
    else if(D<0)
    {
         printf("roots are imagination roots");

    }
    return 0;
    }

