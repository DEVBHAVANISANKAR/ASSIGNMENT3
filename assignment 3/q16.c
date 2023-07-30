//Write a program to check whether a given character is an alphabet (uppercase), an alphabet (lower case), a digit or a special character.
#include<stdio.h>
int main()
{
    char s;
    printf("enter a character : ");
    scanf("%c",&s);
    if(s>=65&&s<=90)
    {
        printf("%c is uppercase",s);

    }
    else if(s>=97&&s<=122) {
        printf("%c is lowercase",s);
    }
    else {
        printf("%c is digit or special character ",s);
    }
    
    return 0;
}