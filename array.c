#include<stdio.h>
void main()
{
int a[25],i,n;
printf("Enter the array size:");
scanf("%d",&n);
printf("Enter the array elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\nArray elements are:");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
}
