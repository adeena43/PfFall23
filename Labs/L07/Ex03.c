#include<stdio.h>
int main()
{
	int n;
	int i;
	int sum =0;
	printf("Enter the size of the number: ");
	scanf("%d",&n);
	int arr[n];
	
	printf("\nEnter your number: ");
	
	for(i=0;i<n;i++)
	{
		scanf("%1d",&arr[i]);
	}
	
		for(i=0;i<n;i++)
	{
		sum = sum +arr[i];
	}
	printf("\nThe sum of your number is: %d", sum);
}
