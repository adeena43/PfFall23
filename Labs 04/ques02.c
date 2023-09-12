/*
*Programmer:Adina
*Date:12Sept2023
*Description:This program prints a square of stars for n numbers.

//--included files--//
#include<stdio.h>

//--Global variables--//

int main()
{
	int i=1; //a counter variable for while loop1
	int j=1; //a counter variable for while loop2
	while(i<=n) //this loop generates a new lines after printing one row of stars
	{
		printf("\n");
		while(j<=n) //this loop prints the pattern of stars
		{
			printf("*");
			j=j+1; //adds 1 to the previous value of j
		}
		i = i+1; //adds 1 to the previous value of i
		
	}
} // end main
