//Write a program which takes the cost price and selling price of a product from them user. Now calculate and print profit or loss percentage.
#include<stdio.h>
int main()
{
    float cp,sp,profit_percentage,loss_percentage;
    printf("enter the cost price and selling price : ");
    scanf("%f %f",&cp,&sp);
    if(sp>cp) 
    {
      profit_percentage= ((sp-cp)/cp)*100;
      printf("%.2f profit%%",profit_percentage);
    }
    else{
        loss_percentage=((cp-sp)/cp)*100;
        printf("%.2f loss %%",loss_percentage);
    }
    
    return 0;




}