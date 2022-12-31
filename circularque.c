#include<stdio.h>
#define MAX 5
int cqueue_arr[MAX];
int front=-1;
int rear=-1;

void enqueue();
void dequeue();
void display();
void search();

void main()
{
int choice,item;
printf("\nCircular Queue Operations\n");
do
	{
	printf("\n1.Insert an element\n2.Delete an element\n3.Display\n4.Search\n5.Exit\n");
	printf("\nEnter your choice:");
	scanf("%d",&choice);
	switch(choice)
	{
	case 1:
	printf("Input the element for enqueue:\n");
	scanf("%d",&item);
	enqueue(item);
	break;
	
	case 2:
	dequeue();
	break;
	case 3:
	display();
	break;
	case 4:
	search();
	break;
	case 5:
	break;
	default:
	printf("Enter a valid choice");
	}
	}
	while(choice!=5);
}
void enqueue(int item)
	{
	if((front==0&&rear==MAX-1)||(front==rear+1))
	{
	printf("Queue overflow");
	return;
	}
	if(front==-1)
	{
	front=0;
	rear=0;
	}
	else
	{
	if(rear==MAX-1)
	rear=0;
	else
	rear=rear+1;
	}
	cqueue_arr[rear]=item;
	}
void dequeue()
	{
	if(front==-1)
	{
	printf("Queue underflow");
	return;
	}
	printf("Element deleted from queue is:%d\n",cqueue_arr[front]);
	if(front==rear)
	{
	front=-1;
	rear=-1;
	}
	else
		{
		if(front==MAX-1)
		front=0;
		else
		front=front+1;
		}	
	}
void search()
	{
	int front_pos=front,rear_pos=rear,k,flag=0;
	printf("Enter the element to be searched");
	scanf("%d",&k);
	if(front==-1)
		{
		printf("Queue is empty");
		return;
		}
	if(front_pos<=rear_pos)
	while(front_pos<=rear_pos)
	  {
	  if(cqueue_arr[front_pos]==k)
	  flag=1;
	  front_pos++;
	  }
	else
	{
	while(front_pos<=MAX-1)
	{
	if(cqueue_arr[front_pos]==k)
	flag=1;
	front_pos++;
	}
	front_pos=0;
	while(front_pos<=rear_pos)
	{
	if(cqueue_arr[front_pos]==k)
	flag=1;
	front_pos++;
	}
	}
	if(flag==1)
	printf("\n Element present in queue\n");
	else
	printf("\n Element not present in queue\n");
	}
	
void display()
{
int front_pos=front,rear_pos=rear;
if(front==-1)
{
printf("Queue is empty\n");
return;
}
printf("Queue elements: \n");
if(front_pos<=rear_pos)
while(front_pos<=rear_pos)
	{
	printf("%d",cqueue_arr[front_pos]);
	front_pos++;
	}
else
{
while(front_pos<=MAX-1)
	{
	printf("%d",cqueue_arr[front_pos]);
	front_pos++;
	}
	front_pos=0;
	while(front_pos<=rear_pos)
	{
	printf("%d",cqueue_arr[front_pos]);
	front_pos++;
	}
}

}
	
