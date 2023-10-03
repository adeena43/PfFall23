//Write a C Program that takes any number from the user and identifies if the number is a
//perfect number or not.

#include<stdio.h>
int main()
{
	int n,sum=0,i=1;
	printf("Enter any number: ");
	scanf("%d",&n);
	while(i<n)
	{
		if(n%i==0)
		{
			sum=sum+i;
			
		}
		i++;
	}
	if(sum==n)
	{
		printf("\n%d is a perfect number.",n);
	}
	else
	{
		printf("\n%d is not a perfect number.",n);
	}

}
