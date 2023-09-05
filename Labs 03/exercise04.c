#include<stdio.h>
int main()
{
	int Fuel;
	int TotalDistance;
	int south = 10;
	int west = 10;
	int south2 = 5;
	int north = 15;
	TotalDistance = south + west + north + south2;
	Fuel = 2*TotalDistance;
	printf("The total distance is %d", TotalDistance);
	printf("\nThe total fuel consumed is: %d", Fuel);
}