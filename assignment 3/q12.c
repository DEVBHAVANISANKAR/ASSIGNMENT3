//Write a program to check whether a given alphabet is in uppercase or lowercase.
#include<stdio.h>
int main()
{
    char s;
    printf("enter a alphabet : ");
    scanf("%c",&s);
    if(s>=65&&s<=90)
    {
        printf("uppercase");
    }
    else if(s>=97&&s<=122){
        printf("lowercase");
    }
    else 
    {
        printf("special character");
    }
    
}