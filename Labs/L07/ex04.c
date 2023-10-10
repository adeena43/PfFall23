/*
*Programmer:Adina
*Date:10October2023
*Description: takes a 2D array from user and checks if the matrix is symmetric or not.
*/

#include<stdio.h>
int main()
{
	int arr[2][2];
	int transpose[2][2];
	int i,j;
	printf("\nEnter your elements for a 2x2 matrix: ");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\nYour 2x2 matrix is: \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			transpose[j][i]=arr[i][j];
		}
	}
	printf("\n");
	
	printf("\nYour transpose matrix is:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",transpose[i][j]);
		}
		printf("\n");
	}	
	int count=0;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			if(transpose[i][j]==arr[i][j]);
			{
				count++;
			}
			
		}
	}
	if(count==3)
	{
		printf("\nYour matrix is symmetric");
	}
	else
	{
		printf("\nYour matrix is non symmetric");
	}
}
