/*
*Programmer:Adina
*Date:10Oct2023
*Description:This program takes an array with N elements as input, and sorts the array into ascending order and then prints the
sorted version.
*/
#include<stdio.h>
int main()
{
	int n;
	
	int i,j, min;
	int temp;
	printf("\nEnter the size of your array:");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		printf("\nEnter element number %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	
	printf("\nThe original array is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d, ",arr[i]);
	}
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp = arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
	}
	printf("\nThe sorted array is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d, ",arr[i]);
	}
}
