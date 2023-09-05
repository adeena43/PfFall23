#include<stdio.h>
int main()
{	
	
	float length;
	float breadth;
	float height;
	printf("Calculating the volume of a container\n");
	printf("\nEnter the length:");
	scanf("%f",&length);
	printf("\nEnter the breadth:");
	scanf("%f",&breadth);
	printf("Enter the height:");
	scanf("%f",&height);
	printf("The volume of the container is:%f",length*breadth*height);
}
