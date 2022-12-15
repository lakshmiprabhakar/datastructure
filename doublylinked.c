#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
	struct node *prev;
};
struct node *head=NULL,*temp,*newnode;

void insertionAtFront();
void insertionAtLast();
void insertAfterPosition();
void deleteAtFront();
void deleteAtLast();
void deleteAtSpecific();
void search();
void display();

void main()
{
	int choice;
	do
	{
	printf("\n0.Exit \n1.insertion at front \n2.insertion at last \n3.insertion at specific location\n4.delete at front \n5.delete at last \n6.delete at specific location \n7.search an element \n8.display");
	printf("Enter the choice(0/1/2/3/4/5/6/7/8)");
	scanf("%d",&choice);
	printf("\n........Doubly Linked List.......\n");
	
	switch(choice){
	
	case 1:
	insertionAtFront();
	break;
	case 2:
	insertionAtLast();
	break;
	case 3:
	insertAfterPosition();
	break;
	case 4:
	deleteAtFront();
	break;
	case 5:
	deleteAtLast();
	break;
	case 6:
	deleteAtSpecific();
	break;
	case 7:
	search();
	break;
	case 8:
	display();
	break;
	case 0:
	printf("Exiting..");
	break;
	default:
	{
	printf("Enter a valid choice");	
	} 
	}	
	}
	while(choice!=0);
}
void insertionAtFront()
{
 newnode=(struct node *)malloc(sizeof(struct node));
 printf("Enter the data");
 scanf("%d",&newnode->data);
 if(head==NULL)
{
	newnode->next=head;
	newnode->prev=NULL;
	head=newnode;
}
else
{
	newnode->prev=NULL;
	newnode->next=head;
	head->prev=newnode;
	head=newnode;
	display();
}
}

void insertionAtLast()
{
newnode=(struct node *)malloc(sizeof(struct node));
 printf("Enter the data");
 scanf("%d",&newnode->data);
newnode->next=NULL;
temp=head;
while(temp->next!=NULL)
{
	temp=temp->next;
}	
newnode->prev=temp;
temp->next=newnode;
display();
}
void insertAfterPosition()
{
int pos,i=1;
printf("\nEnter the position:");
scanf("%d",&pos);
newnode=(struct node *)malloc(sizeof(struct node));
 printf("Enter the data");
 scanf("%d",&newnode->data);
temp=head;
while(i<pos)
{
 temp=temp->next;
 i++;
}
newnode->prev=temp;
newnode->next=temp->next;
temp->next=newnode;
temp=newnode->next;
temp->prev=newnode;
display();
}

void deleteAtFront()
{
if(head!=NULL)
{
 temp=head->next;
 temp->prev=NULL;
 free(head);
 head=temp; 
}
display();
}

void deleteAtLast() 
{
struct node *ptr;
temp=head;
while(temp->next!=NULL)
{
 ptr=temp;
 temp=temp->next;
}
ptr->next=NULL;
free(temp);
display();
}
void deleteAtSpecific()
{
int pos,i=1;
printf("\nEnter the position:");
scanf("%d",&pos);
temp=head;
while(i<pos)
{
 temp=temp->next;
 i++;
}

}



void display()
{
if(head==NULL)
	printf("\n Empty list");
else
	{
	temp=head;
	while(temp!=NULL)
	{
	printf("%d \t",temp->data);
	temp=temp->next;	
	}
	}
printf("\n \n");
}


