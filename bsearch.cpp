#include<stdio.h>
#include<stdlib.h>
#define size 10
 
int binsearch(int[], int, int, int);
void sort (int a[],int); 
int main() {
   int num, i, key, position;
   int low, high, list[size];
 
   printf("\nEnter the total number of elements");
   scanf("%d", &num);
 
   printf("\nEnter the elements of list :");
   for (i = 0; i < num; i++) {
      scanf("%d", &list[i]);
   }
 
   low = 0;
   high = num - 1;
 
   printf("\nEnter element to be searched : ");
   scanf("%d", &key);
 sort (list,num);
 printf("The sorted n list is \n");
for(i=0;i<num;i++)
printf("%d\n",list[i]);

   position = binsearch(list, key, low, high);
 
   if (position != -1) {
      printf("\nNumber present at %d", (position + 1));
   } else
      printf("\n The number is not present in the list");
   return (0);
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

// Binary Search function
int binsearch(int a[], int x, int low, int high) 
{
   int mid;
 
   if (low > high)
      return -1;
 
   mid = (low + high) / 2;
 
   if (x == a[mid]) {
      return (mid);
   } else if (x < a[mid]) {
      binsearch(a, x, low, mid - 1);
   } else {
      binsearch(a, x, mid + 1, high);
   }
}
