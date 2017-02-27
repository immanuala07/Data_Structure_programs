#include<stdio.h>
#include<conio.h>
int main()
{
	int a[20],n,i,k,x,c;
y:if(c==0)
{
	printf("\n\n\n");
void sort (int a[],int);
void bsearch(int a[],int,int);

printf("Enter the limit\n");
scanf("%d",&n);
printf("Enter the element\n");
for (i=0;i<n;i++)
scanf("%d",  &a[i]);
sort (a,n);
printf("The sorted n list is \n");
for(i=0;i<n;i++)
printf("%d\n",a[i]);
printf("Enter the key element\n");
scanf("%d",&k);
bsearch (a,n,k);
printf("\n\n\n");
printf("Enter 0 to continue \n\n");
scanf("%d",&c);
goto y;
}
getch();
}
void sort (int a[],int n)
{
int i,j,temp;
	for(i=0;i<n-1;i++)

			for(j=i+1;j<n;j++)
			if(a[i]>a[j])
			{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			}
}
void bsearch (int a[],int n,int key)
{
int mid,low=0,high=n-1,no=0,i;
while(low<=high)
{
mid = (low + high)/2.0;
if (a[mid]==key)
no=1;
 if (key < a[mid])
 high = mid - 1;
else
low = mid + 1;
}
for(i=0;i<n;i++)
if(a[i]==key)
if(no==1)
printf("%d is present at %d pos\n",key,i+1);
else
printf("Element is not present");

}
