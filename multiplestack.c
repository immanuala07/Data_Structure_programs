#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define max 6
int stack[10];
int top =-1,top1=max,choice;
void main()
{
int rpt = 1;
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

}
while(choice!=4);
getch();
}
push()
{
int n,ch;
if(top >= top1-1)
{
printf("Stack is full\n");
}
else
{
printf("\n press 1 to push in stack1 or press 2 for stack2:");
scanf("%d",&ch);
printf("Enter the element to be pushed\n");
scanf("%d",&n);
if(ch==1)
{
stack[++top]=n;
printf("\n %d element is successfully pushed in stack 1\n",n);
}
if(ch==2)
{
stack[--top1]=n;
printf("\n %d element is successfully pushed in stack 2\n",n);
}
else
printf("Wrong selection of stack");
}
return;
}

pop()
{
int n,ch,y;
printf("\n press 1 to pop from stack1 or press 2 for stack2?");
scanf("%d",&ch);
if(ch==1)
{
if(top==-1)
{
printf("stack underflow\n");
}
else
{
n=stack[top];
//stack[top]=0;
top=top-1;
printf("\n%d element is successfully poped from stack 1\n",n);
}
}
if(ch==2)
{
if(top1==max)
{
printf("stack underflow\n");
}
else
{
n=stack[top1];
//stack[top1]=0;
top1=top1+1;
printf("\n%d element is successfully poped from stack 2\n", n);
}
}
return;
}
display()
{
int i;
if (top== -1)
{
printf("Stack 1 is empty\n");

}
else
{
printf("The Status of the stack 1 is \n");
for (i=0;i<=top;i++)
{
printf("%d\n",stack[i]);
}
}
if (top1==max)
{
printf("Stack 2 is empty\n");
}
else
{
printf("The Status of the stack 2 is \n");
for (i=max-1;i>=top1;i--)
{
printf("%d\n",stack[i]);
}
}
return;
}
