#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

struct Dept {
    char Name[20];
    char Role[20];
    int Communication;
    int Teamwork;
    int Creativity;
};

char* Name_Rand(char Names[20][20], int Name_Used[20]);
char* Role_Rand(char Role[5][20], int Role_Used[5]);
int Initialize_Dept(struct Dept dept[], char Names[20][20], int Name_Used[20]);
void print_Dept(struct Dept dept[], char Name[20]);
int dept_sum(struct Dept dept[]);

int main() {
    int i;
    printf("Adin Faraz\n23k-0008\n");
    srand(time(NULL));

    char Name_pool[20][20] = {"Raza", "Zainab", "John", "Farhana",
                              "Bisma", "Muhammed", "Umer", "Fahad",
                              "Bill", "Huzaifa", "Minahil", "Umair",
                              "Fiza", "Fariha", "Rusman", "Fakhar",
                              "Alishba", "Umair", "Rabia", "Ayan"};
    int Name_Used[20];
    for (i = 0; i < 20; i++) {
        Name_Used[i] = 0;
    }

    struct Dept HR[5];
    struct Dept Finance[5];
    struct Dept Marketing[5];
    struct Dept Logistics[5];

    Initialize_Dept(HR, Name_pool, Name_Used);
    Initialize_Dept(Finance, Name_pool, Name_Used);
    Initialize_Dept(Marketing, Name_pool, Name_Used);
    Initialize_Dept(Logistics, Name_pool, Name_Used);

    int sum[4] = {dept_sum(HR), dept_sum(Finance), dept_sum(Marketing), dept_sum(Logistics)};
    int max_indice = 0;
    int max = sum[0];
    for (i = 0; i < 4; i++) {
        if (sum[i] > max) {
            max = sum[i];
            max_indice = i;
        }
    }
    switch (max_indice) {
        case 0:
            print_Dept(HR, "HR");
            break;

        case 1:
            print_Dept(Finance, "Finance");
            break;

        case 2:
            print_Dept(Marketing, "Marketing");
            break;

        case 3:
            print_Dept(Logistics, "Logistics");
            break;

        default:
            break;
    }

    return 0;
}

char* Name_Rand(char Names[20][20], int Name_Used[20]) {
    while (1) {
        int random_index = rand() % 21;
        if (Name_Used[random_index] == 0) {
            Name_Used[random_index] = 1;
            return Names[random_index];
        }
    }
}

char* Role_Rand(char Role[5][20], int Role_Used[5]) {
    while (1) {
        int random_index = rand() % 6;
        if (Role_Used[random_index] == 0) {
            Role_Used[random_index] = 1;
            return Role[random_index];
        }
    }
}

int Initialize_Dept(struct Dept dept[], char Names[20][20], int Name_Used[20]) {
    int i;
    char Role[5][20] = {"Director", "Executive", "Manager ", "Employee", "Trainee "};
    int Role_used[5] = {0, 0, 0, 0, 0};
    for (i = 0; i < 5; i++) {
        strcpy(dept[i].Name, Name_Rand(Names, Name_Used));
        strcpy(dept[i].Role, Role_Rand(Role, Role_used));
        dept[i].Communication = rand() % 101;
        dept[i].Creativity = rand() % 101;
        dept[i].Teamwork = rand() % 101;
    }
}

void print_Dept(struct Dept dept[], char Name[20]) {
    int i;

    printf("\n----------------------------------------\n");
    printf("| %-10s | %-15s | Communication | Creativity | Teamwork |\n", "Name", "Role");
    printf("----------------------------------------\n");

    for (i = 0; i < 5; i++) {
        printf("| %-10s | %-15s | %-13d | %-10d | %-8d |\n",
               dept[i].Name,
               dept[i].Role,
               dept[i].Communication,
               dept[i].Creativity,
               dept[i].Teamwork);
    }

    printf("----------------------------------------\n");
}

int dept_sum(struct Dept dept[]) {
    int sum = 0;
    int i;
    for (i = 0; i < 5; i++) {
        sum += dept[i].Communication + dept[i].Creativity + dept[i].Teamwork;
    }
    return sum;
}
