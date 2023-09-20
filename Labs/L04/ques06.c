/*
*Programmer:Adina
*Date:12Sept2023
*Description:This program prints a pyramid of stars for n numbers.

//--included files--//
#include<stdio.h>

//--Global variables--//

int main()
{
	 
  int n;  
  int i,j, k;
  printf("Enter number of rows: ");  
  scanf("%d",&n);  
  
  
	i = 1;
	while(i<=n)  // this loop is to generate a enw line after completing one row
	{
		j = i;
		while(j<=n)    //this loop prints the empty spaces
		{
			printf(" ");
			j = j+1;
		}
		k = 1;       
	
		while(k<=(2*i)-1)     //prints the upper half boundary of diamond
		{
			if(k==2||k==(2*i)-1)
			printf("*");
			else
			printf(" ");
			k = k+1;
		}
	
		printf("\n");
		i = i+1;
	}
   	//Printing the lower half of the diamond
	i = n-1;
	while(i>=1)    //genrating new line
	{
		j = n;
		while(j>=i)  //printing empty spaces out and inside of the diamond
		{
			printf(" ");
			j = j-1;
		}
		k = 1;
		while(k<=(2*i)-1)
		{
			if(k==1||k==(2*i)-1)    //printing the stars for lower half boundary of the diamond
			printf("*");
			else
			printf(" ");
		}
	
		printf("\n");
		i = i+1;
	}
  
  return 0;  
}  
} //end main
