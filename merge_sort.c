#include<stdio.h>
#include<conio.h>
void msort (int a[20],int l,int h);
void simple_merge(int a[20],int low,int mid,int high);
int main()
{
int a[20],i,n;
int x=0;
a:if(x==0)
{
	printf("\n\n\n");
printf("Enter the value of n\n");
scanf("%d",&n);
printf("Enter the elements\n");
for (i=0;i<n;i++)
scanf("%d",&a[i]);
msort(a,0,n-1);
printf("Simple sorted array is \n");
for (i=0;i<n;i++)
printf("%d\n",a[i]);
printf("\n\n\n");
printf("Enter 0 to continue \n\n");
scanf("%d",&x);
goto a;
}
getch();
}

void msort (int a[],int l,int h)
{
int m;
if (l<h)
{
m=(l+h)/2;
msort(a,l,m);
msort(a,m+1,h);
simple_merge(a,l,m,h);
}
}

void simple_merge(int a[20],int low,int mid,int high)
{
int i=low,j=mid+1,k=low,c[20];
while(i<=mid && j<=high)
{
if (a[i] < a[j])
c[k++]=a[i++];
else
c[k++]=a[j++];
}
while (i<=mid)
c[k++]=a[i++];
while(j<=high)
c[k++]=a[j++];
for(i=low;i<=high;i++)
a[i]=c[i];
}
