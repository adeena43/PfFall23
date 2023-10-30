#include<stdio.h>

int main()
{
	int i, n, x, y;
	int count;
	printf("Enter a number:");
	scanf("%d",&n);
	
	for(i=1;i<=n*n*n ; i++)
	{
		count=0;
		for(x=1; x*x*x<i; x++)
		{
			for(y=x; x*x*x+y*y*y<=i; y++)
			{
				if(x*x*x+y*y*y==i)
				{
					count = count+1;
				}
			}
		}
		if(count==2)
		{
			printf("\n%d",i);
		}
		
	}
}
