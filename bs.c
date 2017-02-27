/*
 * C Program to Sort Array using Bucket Sort
 */
#include <stdio.h>
 void insert(int a[], int n);
void Bucket_Sort(int array[], int n)
{  
    int i, j,temp;  
    int count[n]; 
    for (i = 0; i < n; i++)
        count[i] = 0;
 
    for (i = 0; i < n; i++)
        (count[array[i]])++;
 
   for(i=1;i<n;i++)
  {
      temp=array[i];
      j=i-1;
      while((temp<array[j])&&(j>=0))
	  {
      array[j+1]=array[j];
    	j=j-1;
      }
      array[j+1]=temp;
  }   
 /*
   for (i = 0, j = 0; i < n; i++)  
        for(; count[i] > 0; (count[i])--)
            array[j++] = i;
       
       for(i=1;i<n;i++)
  {
      temp=array[i];
      j=i-1;
      while((temp<array[j])&&(j>=0))
	  {
      array[j+1]=array[j];
    	j=j-1;
      }
      array[j+1]=temp;
  }
 
   */    
}   
/* End of Bucket_Sort() */
/*
void insert(int a[], int n)
{  
    int i, j,temp;  
	 
  for(i=1;i<n;i++)
  {
      temp=a[i];
      j=i-1;
      while((temp<a[j])&&(j>=0))
	  {
      a[j+1]=a[j];
    	j=j-1;
      }
      a[j+1]=temp;
  }
  for (i = 0; i < n; i++)
        printf("%d ", a[i]);   
    printf("\n");  
}
 */
/* The main() begins */
int main()
{
    int array[100], i, num; 
 
    printf("Enter the size of array : ");   
    scanf("%d", &num);   
    printf("Enter the %d elements to be sorted:\n",num); 
    for (i = 0; i < num; i++)
        scanf("%d", &array[i]); 
    printf("\nThe array of elements before sorting : \n");
    for (i = 0; i < num; i++)
        printf("%d ", array[i]); 
		// insert(array,num);
		 printf("\ninsertion \n"); 
    printf("\nThe array of elements after sorting : \n"); 
    Bucket_Sort(array, num); 
    
    for (i = 0; i < num; i++)
        printf("%d ", array[i]);   
    printf("\n");     
    return 0;
}
