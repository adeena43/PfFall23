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
	
}
