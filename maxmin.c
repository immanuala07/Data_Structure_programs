//C code to find largest and smallest number in an array
#include<stdio.h>
int main(){
  int a[50],size,i,big,small;

  printf("\nEnter the size of the array: ");
  scanf("%d",&size);
  printf("\nEnter %d elements in to the array: ", size);
  for(i=0;i<size;i++)
      scanf("%d",&a[i]);

  big=a[0];
  for(i=1;i<size;i++){
      if(big<a[i])
           big=a[i];
  }
  printf("\nLargest element: %d\n",big);
 
  small=a[0];
  for(i=1;i<size;i++){
      if(small>a[i])
           small=a[i];
  }
  printf("\nSmallest element: %d\n",small);

  return 0;
}
