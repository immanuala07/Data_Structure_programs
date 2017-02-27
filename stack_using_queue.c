#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define maxsize 4
int q[10],p[10];
int rear =-1,front=0,x=-1,choice;
int main()
{
int rpt;
printf("Queue Operation\n");
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
case 4 :exit(0);
}
}while (choice!=4);
getch();
}
push()
{
int n;
if(rear ==(maxsize -1))
{
printf("Q is full\n");
return;
}
else
{
printf("Enter the element to be pushed\n");
scanf("%d",&n);
++x;
rear = rear+1;
q[rear]=n;
return;
}
}
pop()
{
int i,n;
if (x==-1)
{
printf("Q is empty\n");
return;
}
else
{
for(i=0;i<rear;i++)
{
p[i]=q[i];	
}
x--;	
n=q[i];
printf("Popped element is %d\n",n);
front=front+1;

for(i=0;i<x;i++)
q[i]=p[i];	

return;
}
}
display()
{
int i;
if (x==-1)
{
printf("Stack is empty\n");
return;
}
else
{
printf("The Status of the stack is \n");
for (i=0;i<=x;i++)
{
printf("%d\n",q[i]);
}
}
return;
}
