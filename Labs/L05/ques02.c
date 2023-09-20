/*
*Programmer:Adina
*Date:20Sept2023
*Description:This program prints greetings according to the time.
*/

#include<stdio.h>
int main()
{
	int hours;
	int minutes;
	printf("\nEnter hours:");
	scanf("%d",&hours);
	printf("\nEnter hours:");
	scanf("%d",&minutes);
	printf("\nYour time is: %d:%d", hours, minutes);
	if((hours>=5)&&(hours<12))
	{
		printf("\nGood Morning");
	}
	else if((hours>=12)&&(hours<=18))
		{
			printf("\nGood Evening");
		}
		else if((hours>18)&&(hours<=24))
			{
				printf("\nGood night");
			}
			else
				{
					printf("\nInvalid time!");
				}
}
