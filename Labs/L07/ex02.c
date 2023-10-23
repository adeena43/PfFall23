
/*
*Programmer:Adina
*Date:10October2023
*Description: Rotates the array from a certain position.
*/

#include<stdio.h>
int main()
{
	int n;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	int arr[n];
	int i;
	int j, k;
	int pos;
	int temp;
	for(i=0;i<n;i++)
	{
		printf("\nEnter the element number %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d, ",arr[i]);
	
	}
	
	printf("\nEnter the position by which you want to rotate the array: ");
	scanf("%d",&pos);
	printf("\n");
	
	for(j=0;j<pos;j++)
	{
		temp = arr[0];
		for( k =0;k<n-1;k++)
		{
			arr[k]=arr[k+1];
		}
		arr[n-1]=temp;
	}
	
	for(i=0;i<n;i++)
	{
		printf("%d, ",arr[i]);
	
	}
}
