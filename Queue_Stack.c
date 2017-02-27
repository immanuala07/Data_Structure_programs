#include<conio.h>
#include<stdio.h>
#include<process.h>
int stack[5];
int size=5,top=-1;
void push(int n)
{	
	if(top==size-1)
		printf("Stack is full");
	else
	{	
		top++;
		stack[top]=n;
	}
}
int pop()
{	
	if(top==-1)
		printf("Stack is empty");
	else
		
		return stack[top--];
 return -1;
}
void display()
{	
	int i;
	for(i=0;i<=top;i++)
	{	
		printf("%d\t",stack[i]);
	}
	printf("\n");
}
void deleteQ(int n)
{	
	int temp;
	if(n==0)
	{	
		pop();
	}
	else
	{	
		temp=pop();
	
		deleteQ(n-1);
		push(temp);
	}
	
}
int main()
{	int ch,x;
	while(1)
	{	
	//	system("cls");
		printf("\n\n\t Program Of Queue Opration.\n");
		printf("\n\t 1. Insert");
		printf("\n\t 2. Delete");
		printf("\n\t 3. Display");
		printf("\n\t 0. Exit");
		printf("\n\t Enter the choice: ");
		scanf("%d",&ch);
		switch(ch)
		{	
			case 1:	printf("Enter the value to Insert");
					scanf("%d",&x);
					push(x);
				//	getch();
					break;
			case 2:	deleteQ(top);
				//	getch();
					break;
			case 3:	display();
				//	getch();
					break;
			case 0:	exit(1);
			default:printf("\n Invalid Choice");
				//	fflush(stdin);
		}
	}
}
