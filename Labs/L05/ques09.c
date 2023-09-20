/*
*Programmer:Adina
*Date:12Sept2023
*Description:This program prints the roots of a quadratic equation.
*/
#include<stdio.h>
#include<math.h>		//including maths header file to use maths functions

int main()
{
	float a, b, c, x1, x2;
	printf("\nEnter the coefficient of x square: ");
	scanf("%f",&a);
	printf("\nEnter the coefficient of x: ");
	scanf("%f",&b);
	printf("\nEnter the constant: ");
	scanf("%f",&c);
	if(a==0)
	{
		printf("\nInvalid input for a");
	}
	x1 = (-b+sqrt(b*b-4*a*c))/2*a;
	x2 = (-b-sqrt(b*b-4*a*c))/2*a;
	printf("\n The two roots of the quadratic equation are %f and %f", x1,x2);
}  // end main
