//Write a program to check whether a given number is an even number or an odd number
#include<stdio.h>
int main()
{
    int a;
  printf("enter a number : ");
  scanf("%d",&a);
  if(a%2==0)
  {
    printf("even");
  }
  else {
    printf("odd");
  }
  return 0;
}