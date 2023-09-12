/*
*Programmer:Adina
*Date:12Sept2023
*Description:This program gives two values of x by using quadratic formula.

//--included files--//
#include<stdio.h>
#include<math.h>

//--Global variables--//

int main()
{
	float x1 = 0; 
	float x2 = 0; //variables to store the answer 
	float a, b, c; //variables to store the coefficients
	printf("\nEnter the value of a:");
	scanf("%f",&a);
	printf("\nEnter the value of b:");
	scanf("%f",&b);
	printf("\nEnter the value of c:");
	scanf("%f",&c);
	if(a==0) //checks if a is greater than 0
	{
		printf("Invalid value of the coefficient of x square!")
	}
	else
	{
		x1 =(-b+(sqrt(b*b-4*a*c))/(2*a);
			
		x2 =(-b-(sqrt(b*b-4*a*c))/(2*a);
			if((b*b-4*a*c)>0) //checks if roots are real
			{
				printf("\nx1 = %f and x2 = %f",x1, x2);
			}
			else
			{
				printf("\nRoots are imaginary") //prints the answers.
			}
	}
		
} //end main
