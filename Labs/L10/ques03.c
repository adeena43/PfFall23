#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool isprime(int num)
{
	
	int i;
	
	if(num<2)
	{
		return false;
	}
	for(i=2;i*i<=num;i++)
	{
		if(num%i==0)
		{
			return false;
			
		}
		
	}
	return true;
}

void fillPrime(int **matrix, int rows, int cols)
{
	int currentPrime=2;
	int i, j;
	for(i=0; i<rows; i++)
	{
		for(j=0;j<cols;j++)
		{
			while(!isprime(currentPrime))
			{
				currentPrime++;
			}
			matrix[i][j]=currentPrime;
			currentPrime++;
		}
	}
}

void printPrime(int **matrix, int rows, int cols)
{
	
	int i, j;
	for(i=0; i<rows; i++)
	{
		for(j=0;j<cols;j++)
		{
			printf("%d\t",matrix[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int rows, cols;
	int i,j;
	printf("\nEnter the number of rows: ");
	scanf("%d", &rows);
	
	printf("\nEnter the number of columns: ");
	scanf("%d", &cols);
	
	//dynamically allocates memory for a 2d array
	int** arr = (int**)malloc(rows*sizeof(int*));
	for(i=0; i<rows;i++)
	{
		arr[i]=(int*)malloc(cols*sizeof(int));
	}
	
	fillPrime(arr, rows, cols);
	
	printf("\nArray filled with consecutive prime numbers:\n");
	printPrime(arr,rows, cols);
	
	return 0;
}
