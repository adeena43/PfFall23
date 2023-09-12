/*
*Programmer:Adina Faraz
*Date:12Sept2023
*Description:This programe takes character inputs from the user and finds if they form a palindrome
*/

//--included files--//
#include<stdio.h>

//--Global variables--//

int main()
{
	int n;
	char letter; 
  char c[10] = {0}; //declaring a character array for inputs
  int i = 0;
  printf("enter the number of letters you want to enter (<10): ");
  while(i<n) //entering elements to our array
  {
  	printf("\nEnter character %d: ",i+1);
  	scanf("%c",&letter);
  	arr[i]= letter;
  	i = i+1;
  }
  
  i = 0;
  while(i<n/2) //checks if the elements of the array form a palindrome or not
  {
  	if(arr[i]==arr[n-1])
  	{
		i = i+1;
		n = n-1;
		
	  }
	  
	else
	printf("Not a palindrome");
  }
  printf("it's a palindrome");
   
} //end main
