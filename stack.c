#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define maxsize 3
int stack[10];
int top =-1,choice;
void main()
{
printf("Stack Operation\n");
do
{
printf("-----------------------\n");
printf("1. Push\n");
printf("2. Pop\n");
printf("3. Display\n");
printf("4. Exit\n");
printf("-----------------------\n");
printf("Enter your choice\n");
scanf("%d",&choice);
switch (choice)
{
case 1 :push();
	break;
case 2 :pop();
	break;
case 3 :display();
	break;
case 4 : exit(0);
}
}while(choice!=4);
getch();
}
push()
{
int n;
if(top ==(maxsize -1))
{
printf("Stack is full\n");
}
else
{
printf("Enter the element to be pushed\n");
scanf("%d",&n);
top = top+1;
stack[top]=n;
}
return;
}
pop()
{
int n;
if (top==-1)
{
printf("Stack is empty\n");
}
else
{
n=stack[top];
printf("Popped element is %d\n",n);
top=top-1;
}
return;
}
display()
{
int i;
if (top== -1)
{
printf("Stack is empty\n");
}
else
{
printf("The Status of the stack is \n");
for (i=0;i<=top;i++)
{
printf("%d\n",stack[i]);
}
}
return;
}
