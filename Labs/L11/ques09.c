#include <stdio.h>
#include <string.h>

struct registers {
    int course_id;
    char course_name[20];
};

struct student {
    int stu_id;
    char fname[20];
    char lname[20];
    char email[50];
    int cellno;
    struct registers reg[50];
};

int main() {
    struct student data[50];
    char inputBuffer[100];  // Adjust the buffer size as needed

    for (int i = 0; i < 5; i++) {
        printf("Enter student id: ");
        fgets(inputBuffer, sizeof(inputBuffer), stdin);
        sscanf(inputBuffer, "%d", &data[i].stu_id);

        printf("Enter first name: ");
        fgets(data[i].fname, sizeof(data[i].fname), stdin);
        data[i].fname[strcspn(data[i].fname, "\n")] = '\0';  // Remove newline character

        printf("Enter last name: ");
        fgets(data[i].lname, sizeof(data[i].lname), stdin);
        data[i].lname[strcspn(data[i].lname, "\n")] = '\0';  // Remove newline character

        printf("Enter student email: ");
        fgets(data[i].email, sizeof(data[i].email), stdin);
        data[i].email[strcspn(data[i].email, "\n")] = '\0';  // Remove newline character

        printf("Enter student cell number: ");
        fgets(inputBuffer, sizeof(inputBuffer), stdin);
        sscanf(inputBuffer, "%d", &data[i].cellno);

        printf("Enter course id: ");
        fgets(inputBuffer, sizeof(inputBuffer), stdin);
        sscanf(inputBuffer, "%d", &data[i].reg[i].course_id);

        printf("Enter course name: ");
        fgets(data[i].reg[i].course_name, sizeof(data[i].reg[i].course_name), stdin);
        data[i].reg[i].course_name[strcspn(data[i].reg[i].course_name, "\n")] = '\0';  // Remove newline character
    }

    printf("\n");

    for (int i = 0; i < 5; i++) {
        printf("Data of student %d\n", i + 1);
        printf("%d\n", data[i].stu_id);
        printf("%s\n", data[i].fname);
        printf("%s\n", data[i].lname);
        printf("%s\n", data[i].email);
        printf("%d\n", data[i].cellno);
        printf("%d\n", data[i].reg[i].course_id);
        printf("%s\n", data[i].reg[i].course_name);
    }

    return 0;
}
