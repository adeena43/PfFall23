*Programmer:Adina
*Date:03October2023
*Description:This program finds the maximum and minimum value in an array
*/
#include<stdio.h>
int main()
{
	int arr[10];
	int max=0, min=0;
	printf("Enter 10 elements to the array.");
	for(int i=0;i<10;i++)
	{
		printf("\nEnter element number %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	
	for(int j=0;j<10;j++)
	{
		if(arr[j]>max)
		{
			max=arr[j];
		}
	}
	min=arr[0];
	for(int k =0; k<10;k++)
	{
		if(arr[k]<min)
		{
			min=arr[k];
		}
	}
	
	printf("\nThe largest element of the array is %d",max);
	printf("\nThe smallest element of the array is %d",min);
}
