//Write a C Program to compute the LCM and GCD of two numbers.
/*
*Programmer:Adina
*Date:03October2023
*Description:Practicing loop with dummy problems.
*/

#include<stdio.h>
int main()
{
	int a,b,hcf,lcm, ans, ans1;
	printf("Enter two numbers to compute their Greatest Comon Divisor and Least Common Multiple: ");
	scanf("%d",&a);
	scanf("%d",&b);
	if(a>b)
	{
		
		hcf=b;
	}
	else
	{
		hcf=a;
	}
	while(hcf>0)
	{
		if(a%hcf==0)
		{
			if(b%hcf==0)
			{
				ans=hcf;
				printf("\nThe greatest common divisor of %d and %d is %d ",a,b,ans);
				break;	
			}
		}
		hcf--;
	}
	
	
	
			while(1)
			{
				
				if(lcm%a==0&&lcm%b==0)
				{
					printf("\nLeast Common Multiple is:%d",lcm);
					break;
				}
				lcm++;
			}
	
}
