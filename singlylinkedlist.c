#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{
int data;
struct node *link;
};
struct node *header;

void insertfirst()
{
	struct node*newnode;//initialising
	newnode=(struct node*)malloc(sizeof(struct node*));//memory allocation
	if(newnode==NULL)
	{printf("\nNo Space");}
	else
	{printf("\nEnter the value to be inserted:");
	scanf("%d",&newnode->data);
	newnode->link=NULL;
	
	if(header==NULL)
	header=newnode;
	else
	{newnode->link=header;
	header=newnode;
	}
	printf("\n%d inserted into the list",newnode->data);
}}
void insertlast()
{
	struct node*temp,*newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->link=NULL;
	temp=header;
	if(newnode==NULL)
	 printf("\nNo space available");
	else
	 {
           while(temp->link!=NULL)
	   {
	    temp=temp->link;
	   }
	   printf("\nEnter the element to be inserted:");
	   scanf("%d",&newnode->data);
	   temp->link=newnode;
	   printf("\n%d inserted",newnode->data);
	 }
}
void insertposition()
{
 	struct node *temp,*newnode;
	int pos,i=1;
	newnode=(struct node*)malloc(sizeof(struct node ));
	printf("enter the position you want to insert:");
	scanf("%d",&pos);
	printf("enter data to be inserted:");
	scanf("%d",&newnode->data);
	temp=header;
	while(i<pos)
	{
	temp=temp->link;
	i++;	
	}
	newnode->link=temp->link;
	temp->link=newnode;
	display();
}
void deletefirst()
{
	struct node *temp;
	temp=header;
	header=temp->link;
	printf("%d deleted",temp->data);
	free(temp);
}
void deletelast()
{
	struct node *temp,*p;
	temp=header;
	while(temp->link!=NULL)
	{
	p=temp;
	temp=temp->link;	
	}
	printf("\nDeleted last element",temp->data);
	free(temp);
	p->link=NULL;
}
void deleteposition()
{
	struct node *temp,*p;
	int key;
	printf("\nEnter the value of the node to be deleted:");
	scanf("%d",&key);
	temp=header;
	temp=temp->link;
	while(temp->data!=key)
	{
	 p=temp;
	 temp=temp->link;
	if(temp==NULL)
	{printf("the %d value not exist",key);}
	break;
	}
	
	if(temp->data==key)
	{
	printf("%d deleted",temp->data);
	if(temp->data==key)
	{
	 p=header;
	 header=temp->link;
	 free(p);	
	}
	else
	{
	p->link=temp->link; 
	}	
	}
}
void search()
{
	struct node *temp;
	int key,pos=0;
	temp=header;
	printf("\nEnter the elements to be searched:");
	scanf("%d",&key);
	while(temp->data!=key)
	{
	temp=temp->link;
	pos++;
	if(temp==NULL)
	break;
	}
	if(temp==NULL)
	{
	 printf("\n the %d value not exist",key);
	return 0;	
	}
	if(temp->data==key)
	{
	 printf("\n%d is available in location %d",key,pos+1);
	}
}
void display()
{
	struct node *p;
	if(header==NULL)
	 printf("list is empty");
	else
	{
	printf("\nelements in linked list are:");
	p=header;
	while(p!=NULL)
	{
	printf("\t%d",p->data);
	p=p->link;
	}	
	}
}

void main()
{
int choice;
printf("\nSingly linked list\n");
do
{
printf("\n1.Insert at beginning\n2.Insert at last\n3.Insert at specific location\n4.Delete at first\n5.Delete at last\n6.Delete after specified location\n7.Search\n8.Display\n9.Exit");
printf("\nEnter a choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
insertfirst();
break;

case 2:
insertlast();
break;

case 3:
insertposition();
break;

case 4:
deletefirst();
break;

case 5:
deletelast();
break;

case 6:
deleteposition();
break;

case 7:
search();
break;

case 8:
display();
break;

case 9:
printf("Exiting the program");
exit(0);

default:
{
   printf("\n\t please enter a valid choice(1/2/3/4/5/6/7/8/9):");
}
}
}
while(choice!=9);
}

