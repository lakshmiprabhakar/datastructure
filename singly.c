#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{
   int data;
   struct node *LINK;
};
struct node *header=NULL;

void insertfirst()
{
	struct node *ptr;
	ptr=(struct node *)malloc(sizeof(struct node *));
	if(ptr==NULL)
	   printf("\nNo Space");
	else {
	      printf("\nEnter the element to be inserted:");
	      scanf("%d",&ptr->data);
	      ptr->LINK=NULL;
	      if(header==NULL)
                 header=ptr;
	      else
	        {
 		  ptr->LINK=header;
 		  header=ptr;	        
	        }
	      
	 printf("\n%d inserted into the list",ptr->data);
	  }
}
void insertlast()
{
	struct node *temp,*ptr;
	ptr=(struct node *)malloc(sizeof(struct node *));
	ptr->LINK=NULL;
	temp=header;
	if(ptr==NULL)
	   printf("\nNo space available");
	else
	{
	while(temp->LINK!=NULL)
          temp=temp->LINK;
         printf("\nEnter the element to be inserted:");
         scanf("%d",&ptr->data);
         temp->LINK=ptr;
         printf("\nThe %d inserted ",ptr->data);
        }
}
void insertlocation()
{
	int key;
	struct node *temp,*ptr;
	ptr=(struct node *)malloc(sizeof(struct node *));
	ptr->LINK=NULL;
	printf("\nEnter the value to be inserted at a specific location: ");
	scanf("%d",&key);
	    temp=header;
	    while(temp->data!=key)
              {
              temp=temp->LINK;
              if(temp==NULL)
               break;
              }
              if(temp==NULL)
              {
                printf("%d value not exist",key);
                return;
              }
              if(temp->data==key)
              {
               if(ptr==NULL)
                printf("\nNo Space");
               else 
               {
                 printf("\nEnter the element to be inserted:");
                 scanf("%d",&ptr->data);
                 ptr->LINK=temp->LINK;
                 temp->LINK=ptr;
                 printf("\n%d inserted after %d",ptr->data,key);               
               }
              }
}
void deletefirst()
{
	struct node *temp;
	temp=header;
	header=temp->LINK;
	printf("%d deleted",temp->data);
	free(temp);
}
void deletelast()
{
	struct node *temp,*p;
	temp=header;
	while(temp->LINK!=NULL)
	{
		p=temp;
		temp=temp->LINK;	
	}
	printf("%d deleted",temp->data);
	free(temp);
	p->LINK=NULL;
}
void deletelocation()
{
	struct node *temp,*p;
	int key;
	printf("\nEnter the value of the node to be deleted:");
	scanf("%d",&key);
	temp=header;
	while(temp->data!=key)
	{
	 p=temp;
	 temp=temp->LINK;
	 if(temp==NULL)
	 break;
	}
	if(temp==NULL)
	{
		printf("The %d value not exist",key);
		return;
	}
	if(temp->data==key)
	{
		printf("%d deleted",temp->data);
		p->LINK=temp->LINK;
		free(temp);
	}
}
void search()
{
	struct node *temp;
	int key,pos=0;
	temp=header;
	printf("\nEnter the element to be searched");
	scanf("%d",&key);
	while(temp->data!=key)
	{
		temp=temp->LINK;
		pos++;
		if(temp==NULL)
		break;
	}
	if(temp==NULL)
	{
		printf("\nThe %d value not exist",key);
		return;
	}
	if(temp->data==key)
         {
         	printf("\n%d is available in location '%d'",key,pos+1);
         }
}
void display()
{
	struct node *p;
	if(header==NULL)
		printf("List is Empty");
	else
	{
		printf("\nElements in linked list are:");
		p=header;
		while(p!=NULL)
		{
			printf("\t%d",p->data);
			p=p->LINK;
		}
	}
}
	      
void main()
{
	int choice;
	printf("\nSINGLY LINKED LIST\n");
	
	do
	{
	   printf("\n\n1.Insert in beginning\n 2.Insert at last\n 3.Insert at any random location\n 4.Delete from Beginning\n 5.Delete from last\n 6.Delete node after specified location\n 7.Search for an element\n 8.Display\n 9.Exit");	  
	
	printf("\nEnter a choice:");
	scanf("%d",&choice);
	switch(choice)
	{
	case 1:insertfirst();break;
	case 2:insertlast();break;
	case 3:insertlocation();break;
	case 4:deletefirst();break;
	case 5:deletelast();break;
	case 6:deletelocation();break;
	case 7:search();break;
	case 8:display();break;
	case 9:exit(0);
	
	default:printf("\n Invalid option");
	}
	} while(choice!=9);
	
}	
