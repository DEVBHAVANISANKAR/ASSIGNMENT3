//Write a program to find the greatest among three given numbers. Print number once if the greatest number appears two or three times
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter three numbers : ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b&&a>c)
    {
        printf("%d is greatest",a);
    }
    else if(b>a&&b>c){
        printf("%d is greatest",b);
    }
    else if(c>b&&c>a)
    {
         printf("%d is greatest",c);
    }
    else if(a==b&&a==c)
      {
        printf("%d is greatest ",a);
      }
     if(a==b||a==c||b==c)
    {
      if(a==b&&c>b)
      {
        printf("%d is greatest",c);
      }
      else if(a==b&&c<b)
      {
        printf("%d is greatest",b);
      }
      if(a==c&&b>c)
      {
        printf("%d is greatest",b);
      }
      else if(a==c&&c>b)
      {
        printf("%d is greatest",c);
      }
      if(c==b&&a>b)
      {
        printf("%d is greatest",a);
      }
      else if(c==b&&b>a)
      {
        printf("%d is greatest",b);
      }
      
    }
    return 0;
}
