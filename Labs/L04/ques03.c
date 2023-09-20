/*
*Programmer:Adina
*Date:12Sept2023
*Description:This program prints the sum of the squares of  numbers inputted by the user.

//--included files--//
#include<stdio.h>

//--Global variables--//

int main()
{	
	
	int i =0;  //loop counter variable
	int nums:  //stores input
	int sum = 0;  //this variable will store the sum of the squares of inputted numbers
	int n; //this variable will take numbers as input from the user
	printf("Enter the number of integers of which you want the sum of squares");
	
	while(i<n)  //loop terminates when i become greater than n
	{
		nums = 0;
		printf("\nEnter the number %d: ",i);
		scanf("%d",&nums);
		sum = sum +(nums*nums);
		i = i+1;
	}	//end while
	print("\nSum is:%d", sum);  //sum printed

} //end main
