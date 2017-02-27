#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define maxsize 3
void Qinsert();
void Qdelete();
void Qdisplay();
int q[10];
int rear =-1,front=0,choice;
int main()
{
int rpt;
printf("Queue Operation\n");
do
{
printf("-----------------------\n");
printf("1. Insert\n");
printf("2. Delete\n");
printf("3. Display\n");
printf("4. Exit\n");
printf("-----------------------\n");
printf("Enter your choice\n");
scanf("%d",&choice);
switch (choice)
{
case 1 :Qinsert();
	break;
case 2 :Qdelete();
	break;
case 3 :Qdisplay();
	break;
case 4 :exit(0);
}
}while (choice!=4);
getch();
}
void Qinsert()
{
int n;
if ( (rear ==(maxsize -1) && front==0)) //|| front==rear+1 )
{
printf("Q is full\n");
}
else if (rear==maxsize-1)
rear=0;
else
{
printf("Enter the element to be pushed\n");
scanf("%d",&n);
rear = rear+1;
q[rear]=n;
}
return;
}
void Qdelete()
{
int n;
if (front==rear+1 || rear == -1)
{
printf("Q is empty\n");
return;
}
else
{
if(front == rear-1)
{
front = 0;
rear = -1;
}
else if(front == maxsize-1)
front = 0;


n=q[front];
printf("Popped element is %d\n",n);
front=front+1;
return;
}
}
void Qdisplay()
{
int i;
if (front==rear+1)
{
printf("Stack is empty\n");
return;
}
else
{
printf("The Status of the stack is \n");
for (i=front;i<=rear;i++)
{
printf("%d\n",q[i]);
}
}
return;
}
