/*Write a program that will generate the Fibonacci series up to 10000. Also find the sum of the
generated Fibonacci numbers divisible by 3, 5 or 7 only.*/
/*
/*
*Programmer:Adina
*Date:03October2023
*Description:Practicing loop with dummy problems.
*/
#include<stdio.h>
int main()
{
	int i=1, prev=1, ans=0, temp,sum1=0;
	int n=15;
	for(i=0;i<=n;i++)
	{
		temp=ans;
		ans=ans+prev;
		prev=temp;
		printf("%d, ",ans);
		
	}

	for(i=0;i<=n;i++)
	{
		temp=ans;
		ans=ans+prev;
		prev=temp;
		if(ans%3==0||ans%5==0||ans%7==0)
		{
			sum1=sum1+ans;
		}
	
		
	}	
		printf("\nThe sum of fibonacci numbers divisible by 3,5 or 7 is: %d",sum1);	
}
