//Write a program to check whether a given number is an even number or an odd number without using % operator
#include<stdio.h>
int main()
{
    int a,result=0;
  printf("enter a number : ");
  scanf("%d",&a);
  result=a&1;
  if(result==1){
    printf("odd");
  }
  else {
    printf("even");
  }

 return 0;   
}