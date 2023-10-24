/*
*Programmer:Adina
*Date:24October2023
*Description:create a C program that performs password length
validation and user authentication based on the given requirements below:


a)    
Prompts the user to enter a password.


b)    
Validates the entered password by checking if it is
at least 8 characters long.


c)    
If the password meets the length requirement, the
program should compare it to a stored password "Secure123."


d)    
If the
entered password matches the stored password, display "Login successful.
Welcome!" Otherwise, display "Login failed. Incorrect password."

*/

#include<stdio.h>
#include<string.h>
int main()
{
	char password[]={"Secure123"};
	char pass[100];
	printf("\nEnter the password: ");
	gets(pass);
	if(strlen(pass)>=8)
	{
		if(strcmp(pass,password)==0)
		{
			printf("\nLogin successful, Welcome!");
		}
		else
	{
		printf("\nLogin failed, Incorrect password.");
	}
	}
	else
	{
		printf("\nLogin failed, Incorrect password.");
	}
}
