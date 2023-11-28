/*
*Programmer: Adina Faraz
*Date: 28 Nov 2023
*Description: Read two files in binary mode and compare them to know if they are equal or not
*/


#include<stdio.h>
#include<stdlib.h>



int compareFiles(FILE *file1, FILE *file2) {
    char ch1, ch2;

    while ((ch1 = fgetc(file1)) != EOF && (ch2 = fgetc(file2)) != EOF) {
        if (ch1 != ch2) {
            return 0; // Files are not equal
        }
    }

    // Check if both files reached the end
    if (ch1 != EOF || ch2 != EOF) {
        return 0; // Files have different lengths
        
    }
	
    return 1; // Files are equal
}

int main() {
    FILE *file1, *file2;

    // Open the files in binary mode
    file1 = fopen("file1.txt", "rb");
    file2 = fopen("file2.txt", "rb");

    if (file1 == NULL || file2 == NULL) {
        perror("Error opening files");
        return 1;
    }

    // Compare files
    if (compareFiles(file1, file2)) {
        printf("The files are equal.\n");
    } else {
        printf("The files are not equal.\n");
    }

    // Close the files
    fclose(file1);
    fclose(file2);

    return 0;
}

