#include<stdio.h>
#include<conio.h>
int count=0;
void towers (int,char,char,char);
int main()
{
int n;
{
	system("cls");
printf("Enter the value of n\n");
scanf("%d",&n);
printf("The moves involved in tower of hanoi are:\n");
towers(n,'s','t','d');
printf ("The recursion takes %d times\n",count);
}
getch();
}

void towers(int n,char s,char t,char d)
{
++count;
if(n==1)
{
printf("Move %d from %c to %c\n",n,s,d);
return;
}
towers(n-1,s,d,t);
printf("Move %d from %c to %c\n",n,s,d);
towers(n-1,t,s,d);

}
