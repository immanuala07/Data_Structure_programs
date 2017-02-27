/*
	NAME:		Vikramsinh Dantkale
	R No:		1647252
	Program:	Radix Sort
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>

#define MAX 100

int findMax(int [], int);
int radixSort(int [], int);
int displayArray(int [], int);

int main()	{
	int arr[MAX], i, n;
	
	printf("Enter the Size of the array...\t");
	scanf("%d", &n);
	
	printf("\nEnter the array elements now...\n");
	for(i=0; i<n; i++)
		scanf("%d", &arr[i]);
		
	radixSort(arr, n);
	
	for(i=0; i<n; i++)
		printf("\t%d", arr[i]);		
	
	getch();
	return 0;
}

int radixSort(int arr[], int n)	{
	int max = findMax(arr, n), noOfPass=0, moder, temp, i, j, k;
	printf("\nMax = %d", max);
	
	while(max != 0)	{
		noOfPass++;
		max = max / 10;
	}
	
	for(moder=10, k=0; moder<=pow(10, noOfPass); moder*=10, k++)	{
		for(i=0; i<n; i++)
			for(j=0; j<n-i-1; j++)
				if((arr[j]%moder)/pow(10,k) > (arr[j+1]%moder)/pow(10,k))	{
					temp = arr[j];
					arr[j] = arr[j+1];
					arr[j+1] = temp;
				}
		printf("\nmoder = %d\tk = %d", moder, k);
		displayArray(arr, n);
	}
	
	printf("\n\nEnd Function.\n\n");
}

int findMax(int arr[], int n)	{
	int i, max = arr[0];
	
	for(i=0; i<n; i++)	{
		if(max < arr[i])
			max = arr[i];
	}
	
	return max;
}

int displayArray(int arr[], int n)	{
	int i;
	printf("\nDisplay Array...\n");
	for(i=0; i<n; i++)	{
		printf("\t%d", arr[i]);
	}
	printf("\n\n");
}
