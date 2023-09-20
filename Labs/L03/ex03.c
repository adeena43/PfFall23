#include<stdio.h>
#include<math.h>
int main()
{
	float perp;
	float hyp;
	float base;
	printf("\nEnter the length of Perpendicular:");
	scanf("%f",&perp);
	printf("\nEnter the length of Base:");
	scanf("%f",&base);
	hyp = sqrt((base*base)+(perp*perp));
	printf("\nThe length of Hypoteneous is:%f", hyp);
}
