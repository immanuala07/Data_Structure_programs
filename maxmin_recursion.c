#include<stdio.h>
#include<conio.h>
int max, min;
void maxMin(int a[], int lb, int ub);
int main()	{
	int a[20], i, n;
	
	printf("Enter the Size of the array...\t");
	scanf("%d", &n);
	
	printf("\nEnter the array elements now...\n");
	for(i=0; i<n; i++)
		scanf("%d", &a[i]);
		
max = min = a[0];

	
	maxMin(a, 0, n);
	
	printf("\nMax...\t%d\nMin...\t%d", max, min);	
	
	getch();
	return 0;
}

void maxMin(int a[], int lb, int ub)	{
	if(lb == ub)
		return;
	else	
	{
		if(max < a[lb])
			max = a[lb];
		
		if(min > a[lb])
			min = a[lb];
			
		maxMin(a, ++lb, ub);
	}
}
