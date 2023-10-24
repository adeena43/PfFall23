/*
*Programmer:Adina
*Date:24October2023
*Description:A user defined function which takes two integers from the user and an arithmetic operator and then performs the desired operation
*/
#include<stdio.h>
void calculator(float a, float b, char c)
{
	float num1, num2;
    char oper;

    // Input the first number
    printf("Enter the first number: ");
    scanf("%f", &num1);

    // Input the arithmetic operator
    printf("Enter an arithmetic operator (+, -, *, /): ");
    scanf(" %c", &oper); // Note the space before %c to consume any newline character

    // Input the second number
    printf("Enter the second number: ");
    scanf("%f", &num2);

    // Perform the requested operation based on the operator
    switch (oper) {
        case '+':
            printf("%f + %f = %f\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%f - %f = %f\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%f * %f = %f\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("%f / %f = %f\n", num1, num2, num1 / num2);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator entered.\n");
    }
}

int main()
{
	float x, y;
	char oper;
	calculator(x,y,oper);
}
