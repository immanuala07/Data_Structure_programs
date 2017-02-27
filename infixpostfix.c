#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
void infix_postfix(char infix[],char postfix[]);
int F (char sym);
int G (char sym);
void main()
{
char infix[20],postfix[20];
printf("Enter the valid infix expression\n");
scanf("%s",&infix);
infix_postfix(infix,postfix);
printf("The Postfix expression is %s\n",postfix);
getch();
}
int F (char sym)
{
switch(sym)
{
case '+':
case '-': return 2;
case '*':
case '/': return 4;
case '^':
case '$': return 5;
case '(': return 0;
case '#': return -1;
default : return 8;
}
}
int G (char sym)
{
switch(sym)
{
case '+':
case '-': return 1;
case '*':
case '/': return 3;
case '^':
case '$': return 6;
case '(': return 9;
case ')': return 0;
default : return 7;
}
}
void infix_postfix (char infix[],char postfix[])
{
int top,i,j;
char s[20],sym;
top=-1;
s[++top]= '#';
j=0;
for(i=0;i<strlen(infix);i++)
{
sym = infix[i];
while (F(s[top])>G(sym))
postfix[j++]=s[top--];
if(F(s[top])!=G(sym))
s[++top]=sym;
else
top--;
}
while (s[top]!='#')

postfix[j++]=s[top--];

postfix[j]='\0';
return;
}
