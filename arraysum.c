#include<stdio.h>
void main()
{
int a[20],i,count,sum=0;
printf("Enter the size of the array:");
scanf("%d",&count);
printf("Enter thr array elements");
for(i=0;i<count;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<count;i++)
{
sum=sum+a[i];
}
printf("sum=%d",sum);
}
