/*
*Programmer:Adina
*Date:20Sept2023
*Description:This program input an 8-bit integer from the usr, checks if its 7th and 4th bits are on, and if so, turns them off.
*/

#include<stdio.h>

int main()
{
	int n, bit7, bit4;
	printf("Input 8-bit number: ");
	scanf("%d",&n);
	//finding the fourth and seventh bit
	bit7=(n/1000000)%10;
	bit4=(n/1000)%10;
	if(bit7&&bit4)
	{
		n = n-1000000-1000;
		}	
		
	printf("%d", n);
}	//end main
