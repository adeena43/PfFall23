/*
*Programmer:Adina
*Date:24October2023
*Description:A user defined function which takes two integers from the user and swaps them
*/

#include<stdio.h>

void swap(int a, int b)
{
	
	int temp;
	printf("\nEnter integer number 1: ");
	scanf("%d",&a);
	printf("\nEnter integer number 2: ");
	scanf("%d",&b);	
	temp=a;
	a=b;
	b=temp;
	printf("\nThe value of a: %d and b: %d",a,b);
}
int main()
{
	int x,y;
	swap(x,y);
}
