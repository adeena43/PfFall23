/*
*Programmer:Adina
*Date:03October2023
*Description:This program takes an array input from the user and then print the sum of its elements.
*/

#include<stdio.h>
int main()
{	
	int i, sum=0;
	int arr[9];
	for(i=0;i<9;i++)
	{
		printf("\nEnter element number %d in your array: ",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<9;i++)
	{
		sum=sum+arr[i];
	}
	printf("The sum of all the elements of an array is: %d",sum);
}
