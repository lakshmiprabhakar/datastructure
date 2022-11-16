#include<stdio.h>
void main()
{
int a;
printf("Enter a number:");
scanf("%d",&a);
if(a==0)
{
    printf("The number is zero");
}
else
  {
    if(a>0)
    {
        printf("The given number is positive");
    }
    else
    {
        printf("The given number is negative");
    }
  
  }
}