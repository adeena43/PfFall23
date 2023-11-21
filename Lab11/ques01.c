#include <stdio.h>
#include <string.h>

// Define the structure for a student
struct Student {
    int roll_number;
    char name[50];
    char department[50];
    char course[50];
    int year_of_joining;
};

// Function to print names of all students who joined in a particular year
void printStudentsByYear(struct Student students[], int numStudents, int year) {
	int i;
    printf("Students who joined in %d:\n", year);
    for ( i = 0; i < numStudents; i++) {
        if (students[i].year_of_joining == year) {
            printf("%s\n", students[i].name);
        }
    }
}

// Function to print the data of a student given their roll number
void printStudentByRollNumber(struct Student students[], int numStudents, int rollNumber) {
    printf("Details of student with Roll Number %d:\n", rollNumber);
    int i;
    for ( i = 0; i < numStudents; i++) {
        if (students[i].roll_number == rollNumber) {
            printf("Roll Number: %d\n", students[i].roll_number);
            printf("Name: %s\n", students[i].name);
            printf("Department: %s\n", students[i].department);
            printf("Course: %s\n", students[i].course);
            printf("Year of Joining: %d\n", students[i].year_of_joining);
            return;  // Stop searching once the student is found
        }
    }
    printf("Student with Roll Number %d not found.\n", rollNumber);
}

int main() {
    // Assume there are 450 students in the college
    struct Student students[450];

    // Populate student data (you can add more students as needed)
    students[0].roll_number = 101;
    strcpy(students[0].name, "John Doe");
    strcpy(students[0].department, "Computer Science");
    strcpy(students[0].course, "B.Tech");
    students[0].year_of_joining = 2020;

    students[1].roll_number = 102;
    strcpy(students[1].name, "Jane Smith");
    strcpy(students[1].department, "Electrical Engineering");
    strcpy(students[1].course, "B.Tech");
    students[1].year_of_joining = 2021;

    // Example usage
    printStudentsByYear(students, 2, 2020);
    printStudentByRollNumber(students, 2, 102);

    return 0;
}


int main() {
    // Assume there are 450 students in the college
    struct Student students[450];

    // Populate student data (you can add more students as needed)
    students[0] = {101, "John Doe", "Computer Science", "B.Tech", 2020};
    students[1] = {102, "Jane Smith", "Electrical Engineering", "B.Tech", 2021};

    // Example usage
    printStudentsByYear(students, 2, 2020);
    printStudentByRollNumber(students, 2, 102);

    return 0;
}
}
