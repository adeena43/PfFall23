#include <stdio.h>
#include <string.h>

// Define a structure for book information
struct Book {
    int accessionNumber;
    char author[100];
    char title[100];
    int isIssued; // 0 for not issued, 1 for issued
};

// Function prototypes
void displayBookInfo(struct Book book);
void displayAllBooks(struct Book library[], int totalBooks);
void displayBooksByAuthor(struct Book library[], int totalBooks, char author[]);
int countBooksByTitle(struct Book library[], int totalBooks, char title[]);
int countTotalBooks(struct Book library[], int totalBooks);
void issueBook(struct Book library[], int totalBooks);

int main() {
    const int MAX_BOOKS = 100;
    struct Book library[MAX_BOOKS];
    int totalBooks = 0;

    int choice;
    do {
        // Display menu
        printf("\nLibrary Menu:\n");
        printf("1 - Display book information\n");
        printf("2 - Add a new book\n");
        printf("3 - Display all books of a particular author\n");
        printf("4 - Display the number of books of a particular title\n");
        printf("5 - Display the total number of books in the library\n");
        printf("6 - Issue a book\n");
        printf("0 - Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: // Display book information
                if (totalBooks > 0) {
                    int accession;
                    printf("Enter the accession number of the book: ");
                    scanf("%d", &accession);

                    // Find the book with the given accession number
                    int found = 0;
                    for (int i = 0; i < totalBooks; i++) {
                        if (library[i].accessionNumber == accession) {
                            displayBookInfo(library[i]);
                            found = 1;
                            break;
                        }
                    }

                    if (!found) {
                        printf("Book not found with accession number %d\n", accession);
                    }
                } else {
                    printf("No books in the library.\n");
                }
                break;

            case 2: // Add a new book
                if (totalBooks < MAX_BOOKS) {
                    printf("Enter book details:\n");
                    printf("Accession number: ");
                    scanf("%d", &library[totalBooks].accessionNumber);

                    // Clear the input buffer
                    while ((getchar()) != '\n');

                    printf("Author: ");
                    fgets(library[totalBooks].author, sizeof(library[totalBooks].author), stdin);
                    library[totalBooks].author[strcspn(library[totalBooks].author, "\n")] = '\0'; // Remove trailing newline
                    printf("Title: ");
                    fgets(library[totalBooks].title, sizeof(library[totalBooks].title), stdin);
                    library[totalBooks].title[strcspn(library[totalBooks].title, "\n")] = '\0'; // Remove trailing newline

                    library[totalBooks].isIssued = 0; // Initialize as not issued
                    totalBooks++;
                    printf("Book added successfully.\n");
                } else {
                    printf("Library is full. Cannot add more books.\n");
                }
                break;

            case 3: // Display all books of a particular author
                if (totalBooks > 0) {
                    char author[100];
                    printf("Enter the author's name: ");
                    fgets(author, sizeof(author), stdin);
                    author[strcspn(author, "\n")] = '\0'; // Remove trailing newline
                    displayBooksByAuthor(library, totalBooks, author);
                } else {
                    printf("No books in the library.\n");
                }
                break;

            case 4: // Display the number of books of a particular title
                if (totalBooks > 0) {
                    char title[100];
                    printf("Enter the title: ");
                    fgets(title, sizeof(title), stdin);
                    title[strcspn(title, "\n")] = '\0'; // Remove trailing newline
                    int count = countBooksByTitle(library, totalBooks, title);
                    printf("Number of books with title '%s': %d\n", title, count);
                } else {
                    printf("No books in the library.\n");
                }
                break;

            case 5: // Display the total number of books in the library
                printf("Total number of books in the library: %d\n", countTotalBooks(library, totalBooks));
                break;

            case 6: // Issue a book
                if (totalBooks > 0) {
                    issueBook(library, totalBooks);
                } else {
                    printf("No books in the library.\n");
                }
                break;

            case 0: // Exit
                printf("Exiting the program. Goodbye!\n");
                break;

            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }

    } while (choice != 0);

    return 0;
}

// Function to display book information
void displayBookInfo(struct Book book) {
    printf("Accession number: %d\n", book.accessionNumber);
    printf("Author: %s\n", book.author);
    printf("Title: %s\n", book.title);
    printf("Issued: %s\n", (book.isIssued) ? "Yes" : "No");
}

// Function to display all books of a particular author
void displayBooksByAuthor(struct Book library[], int totalBooks, char author[]) {
    printf("Books by author '%s':\n", author);
    for (int i = 0; i < totalBooks; i++) {
        if (strcmp(library[i].author, author) == 0) {
            displayBookInfo(library[i]);
        }
    }
}

// Function to count the number of books with a particular title
int countBooksByTitle(struct Book library[], int totalBooks, char title[]) {
    int count = 0;
    for (int i = 0; i < totalBooks; i++) {
        if (strcmp(library[i].title, title) == 0) {
            count++;
        }
    }
    return count;
}

// Function to count the total number of books in the library
int countTotalBooks(struct Book library[], int totalBooks) {
    return totalBooks;
}

// Function to issue a book
void issueBook(struct Book library[], int totalBooks) {
    int accession;
    printf("Enter the accession number of the book to be issued: ");
    scanf("%d", &accession);

    // Find the book with the given accession number
    int found = 0;
    for (int i = 0; i < totalBooks; i++) {
        if (library[i].accessionNumber == accession) {
            if (library[i].isIssued) {
                printf("Book is already issued.\n");
            } else {
                library[i].isIssued = 1; // Mark as issued
               
     printf("Book issued successfully.\n");
            }
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Book not found with accession number %d\n", accession);
    }
}
