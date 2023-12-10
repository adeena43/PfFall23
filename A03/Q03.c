/*
*Programmer: Adina faraz
*Date: 9 Dec 2023
*Descrition: Create three text files named Department.txt, Personal.txt and Combine.txt. The Personal.txt file contains
 ID and Name. Whereas the Department.txt file contains ID and Salary. Write a function that takes input
 as record IDs and mergesthe details from both personal and department files and then add this entry into
 the Combine.txt file (ID, Name, Salary).
*/
#include <stdio.h>
#include <stdlib.h>

void mergeAndWriteToFile(int recordIDs[], int numRecords);

int main() {
    // Assuming you have some record IDs to process
    int recordIDs[] = {101, 102,103}; 
    int numRecords = sizeof(recordIDs) / sizeof(recordIDs[0]);

    mergeAndWriteToFile(recordIDs, numRecords);

    return 0;
}

void mergeAndWriteToFile(int recordIDs[], int numRecords) {
    FILE *personalFile, *departmentFile, *combineFile;

    personalFile = fopen("Personal.txt", "r");
    departmentFile = fopen("Department.txt", "r");
    combineFile = fopen("Combine.txt", "a");

    if (personalFile == NULL || departmentFile == NULL || combineFile == NULL) {
        perror("Error opening files");
        exit(EXIT_FAILURE);
    }

    int currentID;
    char name[50];
    float salary;

    for (int i = 0; i < numRecords; i++) {
        currentID = recordIDs[i];

        // Read from Personal.txt
        fseek(personalFile, 0, SEEK_SET);
        while (fscanf(personalFile, "%d %s", &currentID, name) != EOF) {
            if (currentID == recordIDs[i]) {
                // Read from Department.txt
                fseek(departmentFile, 0, SEEK_SET);
                while (fscanf(departmentFile, "%d %f", &currentID, &salary) != EOF) {
                    if (currentID == recordIDs[i]) {
                        // Write to Combine.txt
                        fprintf(combineFile, "%d %s %.2f\n", currentID, name, salary);
                        break;
                    }
                }
                break;
            }
        }
    }

    fclose(personalFile);
    fclose(departmentFile);
    fclose(combineFile);
}
