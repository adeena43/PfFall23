/*Consider Two integers a and b taken as input from the user. Using Loops iterate the value of
a till the value of b.
If the value of a<=9 the output should correspond to the English representation of the
numbers i.e., 8=Eight, 9=Nine etc.
If the iteration exceeds 9 then the programs should print if the exceeded number is even or odd*/
/*
*Programmer:Adina
*Date:03October2023
*Description:Practicing loop with dummy problems.
*/
#include<stdio.h>
int main()
{
	int a,b,i;
	printf("Enter two integers:");
	scanf("%d",&a);
	scanf("%d",&b);
	for(i=a;i<=b;i++)
	{
		switch(i)
		{
			case 0:
				printf("\nZero,");
				break;
			case 1:
				printf("\nOne,");
				break;
			case 2:
				printf("\nTwo,");
				break;
			case 3:
				printf("\nThree,");
				break;
			case 4:
				printf("\nFour,");
				break;
			case 5:
				printf("\nFive,");
				break;
			case 6:
				printf("\nSix,");
				break;
			case 7:
				printf("\nSeven,");
				break;
			case 8:
				printf("\nEight,");
				break;
			case 9:
				printf("\nNine,");
				break;
			default:
			{
				if(i%2==0)
				{
					printf("\nEven,");
				}
				else
				{
					printf("\nOdd,");
				}
				}	
			}
	}
			
	
	
}
