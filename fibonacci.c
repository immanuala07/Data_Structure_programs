#include<stdio.h>
#include<conio.h>
int main()
{
   int n, first = 0, second = 1, s, i;
 
   printf("Enter the number of terms\n");
   scanf("%d",&n);
 
   printf("First %d terms of Fibonacci series are :-\n",n);
 
   for ( i = 0 ; i < n ; i++ )
   {
      if ( i <= 1 )
         s = i;
      else
      {
         s = first + second;
         first = second;
         second = s;
      }
      printf("%d\n",s);
   }
 
   return 0;
}
