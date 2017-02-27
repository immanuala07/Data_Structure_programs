#include<stdio.h>
#include<conio.h>
int main()
{
int i,a[10],n,k,found=0,c=0;
int x=0;
a:if(x==0)
{
	printf("\n\n\n");
printf("How many elements\n");
scanf("%d",&n);
printf("Enter the elements\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Enter the Key\n");
scanf("%d",&k);
for(i=0;i<n;i++)
{
if(a[i]==k)
{
	found=1;
	break;
}
}
if(found==1)
printf("%d is found at %d position\n",k,i+1);
else
printf("Element not found\n");
printf("\n\n\n");
printf("Enter 0 to continue \n\n");
scanf("%d",&x);
goto a;
}
getch();
}
