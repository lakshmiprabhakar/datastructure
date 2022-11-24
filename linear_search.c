#include<stdio.h>
void main()
{
int a[20],i,n,key,f=0;
printf("Enter the array size:");
scanf("%d",&n);
printf("Enter the array elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\nEnter the value to search:");
scanf("%d",&key);
for(i=0;i<n;i++)
{
if(key==a[i])
 {
  f=1;
  break;
 }
}
if(f=1)
 {
  printf("The element is found");
 }
else
 {
  printf("element is not found");
 }
}
