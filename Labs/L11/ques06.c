#include <stdio.h>

// Define the structure for Date
struct Date {
    int day;
    int month;
    int year;
};

// Function to check if a year is a leap year
int isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Function to get the number of days in a given month and year
int getDaysInMonth(int month, int year) {
    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month == 2 && isLeapYear(year)) {
        return 29;
    }
    return daysInMonth[month];
}

// Function to add days to a date
struct Date addDays(struct Date currentDate, int daysToAdd) {
    while (daysToAdd > 0) {
        int daysInMonth = getDaysInMonth(currentDate.month, currentDate.year);
        if (currentDate.day + daysToAdd > daysInMonth) {
            daysToAdd -= (daysInMonth - currentDate.day + 1);
            currentDate.day = 1;
            if (currentDate.month == 12) {
                currentDate.month = 1;
                currentDate.year++;
            } else {
                currentDate.month++;
            }
        } else {
            currentDate.day += daysToAdd;
            daysToAdd = 0;
        }
    }
    return currentDate;
}

int main() {
    // Get the current date
    struct Date currentDate;
    printf("Enter current date (day month year): ");
    scanf("%d %d %d", &currentDate.day, &currentDate.month, &currentDate.year);

    // Add 45 days to the current date
    struct Date finalDate = addDays(currentDate, 45);

    // Display the final date
    printf("Current Date: %02d/%02d/%04d\n", currentDate.day, currentDate.month, currentDate.year);
    printf("Final Date: %02d/%02d/%04d\n", finalDate.day, finalDate.month, finalDate.year);

    return 0;
}
