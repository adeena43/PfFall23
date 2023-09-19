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
