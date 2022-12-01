#include<stdio.h>

int stack[100],choice,n,top,x,i; //global declaration

void push(void);                // function declaration
void pop(void);
void display(void);


void main()
{

top=-1;



printf("\nEnter the size of stack[MAX=100]:");
scanf("%d",&n);

printf("\n\t STACK OPERATIONS USING ARRAY:");
printf("\n\t.........");
printf("\n\t 1.PUSH \n\t 2.POP \n\t 3.DISPLAY\n\t 4.EXIT\n\t");



do
{
printf("\nEnter the Choice:");
scanf("%d",&choice);


switch(choice)
{
case 1:

push();
break;

case 2:

pop();
break;

case 3:

display();
break;

case 4:

printf("\n\tEXIT POINT");
break;

default:
{
printf("\n\tPlease enetr a valid choice(1/2/3/4)");
}

}
}
while(choice!=4);

}
void push()
{
if(top>=n-1)
{
printf("\n\tSTACK is overflow");
}
else
{
printf("Enter a value to be pushed:");
scanf("%d",&x);
top++;
stack[top]=x;
}
}
void pop()
{
if(top==-1){
printf("\n\tstack is underflow");
}
if(top>-1)
{
printf("\n\tThe popped elements is %d",stack[top]);
top--;
display();
}
}
void display()
{
if(top>=0)
{
printf("\nThe elements in stack\n");
for(i=top;i>=0;i--)
printf("\n%d",stack[i]);
}
else
{
printf("\nThe stack is empty");
}
}

