
#include<stdio.h>
#include<conio.h>
#include<math.h>

#define MAX 100

int bucketSort(int [], int);
int findMax(int [], int);
int insertionSort(int [], int);

int main()	{
	int arr[MAX], i, n;
	
	printf("Enter the Size of the array...\t");
	scanf("%d", &n);
	
	printf("\nEnter the array elements now...\n");
	for(i=0; i<n; i++)
		scanf("%d", &arr[i]);
		
	bucketSort(arr, n);
	
	for(i=0; i<n; i++)
		printf("\t%d", arr[i]);		
	
	getch();
	return 0;
}

int findMax(int arr[], int n)	{
	int i, max = arr[0];
	
	for(i=0; i<n; i++)	{
		if(max < arr[i])
			max = arr[i];
	}
	
	return max;
}

int insertionSort(int arr[], int n)	{
	int i, j, temp;
	
	for(i=0; i<n; i++)	{
		for(j=i-1; j>=0; j--)	{
			if(arr[j] > arr[j+1])	{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}

int bucketSort(int arr[], int n)	{
	int max = findMax(arr, n);
	
	printf("\nMax = %d", max);
	
	int buckets[10][MAX], tracker[10], divider=0, i, j;
	
	divider = (int)ceil((float)(max+1)/10);
	
	printf("\nDivider = %d", divider);
	
	for(i=0; i<10; i++)
		tracker[i] = 0;
	
	for(i=0; i<n; i++)	{
		j = (int)floor((float)arr[i]/divider);
		buckets[j][tracker[j]] = arr[i];
		(tracker[j])++;
		
		if(tracker[j] > 1)
			insertionSort(buckets[j], tracker[j]);
	}
	
	printf("\n\nBuckets...\n");
	for(i=0; i<10; i++)	{
		printf("%d-", i);
		for(j=0; j<tracker[i]; j++)
			printf("\t%d", buckets[i][j]);
		printf("\n");
	}
	
	int k=0;
	for(i=0; i<10; i++)
		for(j=0; j<tracker[i]; j++)
			arr[k++] = buckets[i][j];
			
	printf("\nEnd Function\n\n");
}
