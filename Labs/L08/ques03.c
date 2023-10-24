/*
*Programmer:Adina
*Date:24October2023
*Description:A user defined function which finds the occurence of a specific letter in a string/text
*/

#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	int count=0;
	char str[20];
	char ch;
	printf("Enter your text: ");
	gets(str);
	printf("%s",str);
	printf("\nEnter the letter you want to find: ");
	scanf("%c",&ch);
	for(i=0;str[i] != '\0';i++)
	{
		if(str[i]==ch)
		{
			count++;
		}
	//	printf("\nThe number of occurences of letter a in the given text is %d",count);
	}
	printf("\nThe number of occurences of letter a in the given text is %d",count);
}
