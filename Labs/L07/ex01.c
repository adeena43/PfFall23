#include<stdio.h>
int main()
{
	int x, y;
	int q=0 ;
	printf("\nEnter two numbers to divide:");
	scanf("%d",&x);
	scanf("%d",&y);
	int c=x;
	if(x<y)
	{
		printf("\n%d divided by %d is 0",c,y);

	}
	while(x>y)
	{
		x=x-y;
		q++;
	}
	printf("\n%d divided by %d is %d",c,y,x);
}
