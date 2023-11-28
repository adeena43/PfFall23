/*
*Programmer: Adina faraz
*Date: 28 Nov 2023
*Desc: Create a structure to keep record of each course (course code, course name, course gpa, semester). 
Make a console application that allows to input course infromation and save data to a file. 
Then it has an option to view transcript, calculate CGPA and SGPAs.
*/

#include <stdio.h>
#include <stdlib.h>

#define MAX_COURSES 50

// Define a structure to keep record of each course
struct Course {
    char code[20];
    char name[50];
    float gpa;
    int semester;
};

// Function prototypes
void inputCourse(struct Course *courses, int *numCourses);
void saveToFile(struct Course *courses, int numCourses);
void viewTranscript(struct Course *courses, int numCourses);
float calculateCGPA(struct Course *courses, int numCourses);
float calculateSGPA(struct Course *courses, int numCourses, int semester);

int main() { 
int i, j;
    struct Course courses[MAX_COURSES];
    int numCourses = 0;
    int choice;

    do {
        printf("\nMenu:\n");
        printf("1. Input Course Information\n");
        printf("2. Save Data to File\n");
        printf("3. View Transcript\n");
        printf("4. Calculate CGPA\n");
        printf("5. Calculate SGPA\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                inputCourse(courses, &numCourses);
                break;
            case 2:
                saveToFile(courses, numCourses);
                break;
            case 3:
                viewTranscript(courses, numCourses);
                break;
            case 4:
                printf("CGPA: %.2f\n", calculateCGPA(courses, numCourses));
                break;
            case 5:
                {
                    int semester;
                    printf("Enter semester to calculate SGPA: ");
                    scanf("%d", &semester);
                    printf("SGPA for Semester %d: %.2f\n", semester, calculateSGPA(courses, numCourses, semester));
                }
                break;
            case 6:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }

    } while (choice != 6);

    return 0;
}

void inputCourse(struct Course *courses, int *numCourses) {
    if (*numCourses < MAX_COURSES) {
        printf("Enter course code: ");
        scanf("% s", courses[*numCourses].code);

        printf("Enter course name: ");
        scanf("% s", courses[*numCourses].name);

        printf("Enter course GPA: ");
        scanf("%f", &courses[*numCourses].gpa);

        printf("Enter semester: ");
        scanf("%d", &courses[*numCourses].semester);

        (*numCourses)++;
        printf("Course information added successfully.\n");
    } else {
        printf("Maximum number of courses reached.\n");
    }
}

void saveToFile(struct Course *courses, int numCourses) {
    FILE *file = fopen("transcript.txt", "w");

    if (file == NULL) {
        perror("Error opening file");
        return;
    }
	int i;
    fprintf(file, "Course Code\tCourse Name\tGPA\tSemester\n");
    for (i = 0; i < numCourses; i++) {
        fprintf(file, "%s\t%s\t%.2f\t%d\n", courses[i].code, courses[i].name, courses[i].gpa, courses[i].semester);
    }

    fclose(file);
    printf("Data saved to file successfully (transcript.txt).\n");
}

void viewTranscript(struct Course *courses, int numCourses) {
	int i;
    printf("\nTranscript:\n");
    printf("Course Code\tCourse Name\tGPA\tSemester\n");
    for (i = 0; i < numCourses; i++) {
        printf("%s\t%s\t%.2f\t%d\n", courses[i].code, courses[i].name, courses[i].gpa, courses[i].semester);
    }
}

float calculateCGPA(struct Course *courses, int numCourses) {
    float totalGPA = 0;
	int i;
    for (i = 0; i < numCourses; i++) {
        totalGPA += courses[i].gpa;
    }

    if (numCourses > 0) {
        return totalGPA / numCourses;
    } else {
        return 0.0;
    }
}

float calculateSGPA(struct Course *courses, int numCourses, int semester) {
    float totalGPA = 0;
    int count = 0;
	int i;
    for (i = 0; i < numCourses; i++) {
        if (courses[i].semester == semester) {
            totalGPA += courses[i].gpa;
            count++;
        }
    }

    if (count > 0) {
        return totalGPA / count;
    } else {
        return 0.0;
    }
}
