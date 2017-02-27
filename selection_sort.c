#include<stdio.h>
#include<conio.h>
int main()
{
int i,n,j,temp,a[20],min;
int x=0;
a:if(x==0)
{
	printf("\n\n\n");
printf("Enter the value of n\n");
scanf("%d",&n);
printf("Enter the elements :\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n-1;i++)
{
min = i;
for(j=i+1;j<n;j++)
{
if(a[min] > a[j])
min = j;
}
temp = a[min];
a[min]=a[i];
a[i]=temp;
}
printf("The sorted elements:\n");
for(i=0;i<n;i++)
printf("%d\n",a[i]);
printf("\n\n\n");
printf("Enter 0 to continue \n\n");
scanf("%d",&x);
goto a;
}
getch();
}
