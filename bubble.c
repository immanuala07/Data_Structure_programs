#include<stdio.h>
//#include<conio.h>
int main()
{
int i,n,temp,a[20],j;
	printf("\n\n\n");
printf("Enter the value of n\n");
scanf("%d",&n);
printf("Enter the elements\n");
for (i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
	for(i=0;i<n-1;i++)
    {
			for(j=i+1;j<n;j++)
			if(a[i]>a[j])
			{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			}
	}
printf("The sorted elements:\n");
for(i=0;i<n;i++)
printf("%d\n",a[i]);
getch();
}
