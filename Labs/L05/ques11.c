/*
*Programmer:Adina
*Date:20Sept2023
*Description:This program takes 8 bits from the user and then swaps the half bits with each other.
*/
#include<stdio.h>

int main()
{
	int higherBits, lowerBits , bits8;
	printf("Enter an 8-bit number:");
	scanf("%d",&bits8);

    if (bits8 >= 0 && bits8 <= 255) {
        // Check if at least two digits are present
        if (bits8 >= 10) {
            int lowerBits = bits8 % 10000;       // Get the lower 4 bits
            int higherBits = bits8 / 10000;     // Get the higher 4 bits

            // Exchange the higher and lower 4 bits
            int swappedNum = (lowerBits * 10000) + higherBits;

            printf("Original number: %d\n", bits8);
            printf("Number after swapping: %d\n", swappedNum);
        } else {
            printf("At least two digits are not present in the entered number.\n");
        }
    } else {
        printf("Invalid input. Please enter an 8-bit number (0-255).\n");
    }

    return 0;

}
