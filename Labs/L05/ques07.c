/*
*Programmer:Adina
*Date:20Sept2023
*Description:This program asks for the amount of money user has spnt in shopping and then applies various discounts
*/
#include<stdio.h>

int main()
{
	float SalesPrice, amount;
	printf("Please enter your amount of shopping: ");
	scanf("%f",&amount);
	if(amount>6000)
	{
		SalesPrice=amount-(amount*0.5);
		printf("\nYour discounted price is:%f",SalesPrice);	
	}
	else if((amount>4000)&&(amount<=6000))
	{	
		SalesPrice=amount-(amount*0.3);
		printf("\nYour discounted price is:%f",SalesPrice);
	}
		else if((amount>2000)&&(amount<4000))
		{	
			SalesPrice=amount-(amount*0.2);
			printf("\nYour discounted price is:%f",SalesPrice);
		}
			else if(amount>1999)
			{
				SalesPrice=amount-(amount*0.5);
				printf("\nYour discounted price is:%f",SalesPrice);
			}
				else
				{
					printf("\nYour price is:%f", amount);
				}
}		//end main()
