#include<stdio.h>
int main()
{	
	
	float radius;
	float pi = 3.142;
	float height;
	printf("Calculating the volume of a container\n");
	printf("\nEnter the radius:");
	scanf("%f",&radius);
	printf("\nEnter the height:");
	scanf("%f",&height);
	printf("\nEnter the breadth:");
	printf("The volume of the container is:%f",pi*radius*radius*height);
}
