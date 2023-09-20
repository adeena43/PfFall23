#include <stdio.h>

int main() {
    char character;

    printf("Enter a character: ");
    scanf("%c", &character);

    if ((character >= 'a' && character <= 'z')) {
        printf("The character is a small alphabet.\n");
    } else if ((character >= 'A' && character <= 'Z')) {
        printf("The character is a capital alphabet.\n");
    } else if (character >= '0' && character <= '9') {
        printf("The character is an integer.\n");
    } else {
        printf("The character is a special character.\n");
    }

    return 0;
} //end main()
