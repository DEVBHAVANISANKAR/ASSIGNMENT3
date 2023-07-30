//Write a program to check whether a given number is a three-digit number or not
#include<stdio.h>
int main()
{
    int a;;
  printf("enter a number : ");
  scanf("%d",&a);
  
  if(a>=100&&a<=999){
    printf("yes three digit number");
  }
  else {
    printf("not a three digit number");
  }

 return 0;   
}