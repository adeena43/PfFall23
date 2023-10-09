/*Description:A C program that input n numbers from user in an array and displays it in reverse
order.*/
/*
*Programmer:Adina
*Date:03October2023
*/
#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the size of your array: ");
	scanf("%d",&n);
	int arr[n];
	printf("\nEnter %d elements in your array: ",n);
	
	for(i=0;i<n;i++)
	{
		printf("\nEnter element number %d :",i+1);
		scanf("%d",&arr[i]);
	}//end for loop
	
	printf("\nThe reversed array is: ");
	for(i=n-1;i>=0;i--)
	{
		printf("%d, ",arr[i]);
	} //end for loop
}//end main()
