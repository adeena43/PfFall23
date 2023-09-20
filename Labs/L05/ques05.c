/*
*Programmer:Adina
*Date:20Sept2023
*Description:This program takes two number and one operator as an input and then performs the operation
*/
#include <stdio.h>

int main() {
    float num1, num2;
    char oper;

    // Input the first number
    printf("Enter the first number: ");
    scanf("%f", &num1);

    // Input the arithmetic operator
    printf("Enter an arithmetic operator (+, -, *, /): ");
    scanf("%c", &oper); // Note the space before %c to consume any newline character

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

    return 0;
}		// end main()
