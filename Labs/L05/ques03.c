/*
*Programmer:Adina
*Date:20Sept2023
*Description:This program asks the usr if he wants to delete or not and then prform the instructed task
*/
#include<stdio.h>

int main()
{
	char c;
	printf("Are you sure to delete? [Y/y]/[N/n]");
	scanf("%c",&c);
	switch(c)
	{
		case 'y':
			printf("\nDeleted successfully");
			break;

		case 'Y':
			printf("\nDeleted successfully");
			break;
		case 'n':
			printf("\nDelete cancelled");
			break;
		case 'N':
			printf("\nDelete cancelled");
			break;
		default:
			printf("\nChoose the right option");
	}
}
