/*
*Programmer:Adina
*Date:20Sept2023
*Description:This program tells if a number is divisible by 3 or not.
*/

#include<stdio.h>

int main()
{
	int num;
	printf("Enter a number:" );
	scanf("%d", &num);	
	if(num%3==0)
	{
		printf("\n%d is divisible by 3",num);
	}
	
	else
	{
		printf("\n%d is not divisible by 3",num);
	}
}
