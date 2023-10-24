/*
*Programmer:Adina
*Date:24October2023
*Description:create a function
called decideCarUsage that helps users decide whether they should use their car
on a particular day of the week. Users provide the numeric part of their car's
number and the day of the week (1 to 7). The program applies a simple rule:
even-numbered cars should be used on even days, and odd-numbered cars on odd
days. The function returns 1 if the car should be used and 0 if it should not.
*/
#include<stdio.h>
int decideCarUsage(int a, int b)
{
	printf("\nEnter the numeric part of your car's number: ");
	scanf("%d",&a);
	printf("\nEnter the day number: ");
	scanf("%d",&b);
	
	if(a%2==0&&b%2==0||a%2!=0&&b%2!=0)
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}

int main()
{
	int x,y;
	int check;
	check=decideCarUsage(x,y);
	if(check==1)
	{
		printf("\nThe car should be used ");
	}
	else
	{
		printf("\nThe car should not be used ");
	}
}
