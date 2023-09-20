/*
*Programmer:Adina
*Date:12Sept2023
*Description:This program takes two DOBs from user and finds out who is older.

//--included files--//
#include<stdio.h>

//--Global variables--//

int main()
{
	int dob1, mob1, yob1; //date of birth of first person
	int dob2, mob2, yob2; //date of birth of second person
	printf("\nEnter the date of birth of person 1:");
	scanf("%d", &dob1);
	if(dob1<=0)
	{
		printf("\nInvalid value of date"); //checks for valid date values
	}
	printf("\nEnter the date of birth of person 1:");
	scanf("%d", &dob1);
	if(dob1<=0)
	{
		printf("\nInvalid value of date");
	}
        printf("\nEnter the month of birth of person 1:"); //checks for valid month values
	scanf("%d", &mob1);
	if((mob1<=0)&&(mob1>12))
	{
		printf("\nInvalid value of month");
	}
	printf("\nEnter the year of birth of person 1:");
	scanf("%d", &yob1);
	if((yob1=0)&&(yob1>2023))
	{
		printf("\nInvalid value of year");
	}
	printf("\nEnter the date of birth of person 2:");
	scanf("%d", &dob2);
	if(dob2<=0)
	{
		printf("\nInvalid value of date");
	}
	printf("\nEnter the month of birth of person 1:");
	scanf("%d", &mob2);
	if((mob2<=0)&&(mob2>12))
	{
		printf("\nInvalid value of month");
	}
	printf("\nEnter the year of birth of person 2:");
	scanf("%d", &yob2);
	if((yob2<0)&&(yob>2023))
	{
		printf("\nInvalid value of year");
	}
	if(yob1>yob2)  //checks if person 1 is older or not
	{
		printf("\nPerson 1 is older");
	}
	else if(yob1<yob2)
	{
		printf("\nPerson 2 is older");
	}
		else if(yob1==yob2)
		{
			if(mob1>mob2)
			{
				printf("\n Person 1 is older");
			}
			else if(mob2>mob1)
				{
					printf("\nPerson 2 is older");
				}
				else if(mob1==mob2)
				{
					if(dob1>dob2)
					{
						printf("\nperson 1 is older");
					}
					else if(dob2>dob1)
					{
						printf("\nPerson 2 is older");
					}
						else
						{
							printf("\nBoth the persons are equal");
						}
				}
		}
	
} //end main
