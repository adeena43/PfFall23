/*
*Programmer:Adina
*Date:12Sept2023
*Description:This program prints a pyramid of stars for n numbers.
*/
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
		while(j<=i)
		{
			printf("*"); //this loop generates a new line afer every row of stars
			j=j+1;
		}
		i = i+1;
		
	}
} //end main
