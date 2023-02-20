#include<stdio.h>
int queue[50],x,i,n,choice;
int front=-1;
int rear=-1;

void enqueue();
void dequeue();
void display();  

void main()
{
printf("*********linear queue operations*********");
printf("enetr the size ");
scanf("%d",&n);
do
{
	printf("\n1.enqueue\n2.dequeue\n3.display\n4.exit\n");
	printf("enter a choice: \n");
	scanf("%d",&choice);
	switch(choice)
	{
	case 1:
	enqueue();
	break;
	case 2:
	dequeue();
	break;
	case 3:
	display();
	break;
	case 4:
	printf(".....Exiting.....");
	break;
	default:
	printf("enter a valid option\n");
	}
}
while(choice!=4);
}
void enqueue()
{
if(rear==n-1)
  {
   printf("\nOverflow");
   printf("select another option");
  }
else
  {
  printf("\nenter the data:");
  scanf("%d",&x);
  if(front==-1&&rear==-1)
   {
    front=rear=0;
    queue[rear]=x;
   }
   else
    {
     rear++;
     queue[rear]=x;
    }
   }
   printf("\n enqueued data= %d",queue[rear]);
}
void dequeue()
{
if(front==-1)
{
 printf("underflow\n enter other option.");
}
else if(front==rear)
 {
  front=rear=-1;
 }
else
 {
  printf("dequeued element=%d",queue[front]);
  front++;
 }
}
void display()
{
if(front==-1&&rear==-1)
 {
  printf("\nempty queue");
 }
else
 {
  printf("the elements are..\n");
  for(i=front;i<=rear;i++)
   {
    printf("%d",queue[i]);
   }
 }
}











