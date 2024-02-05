#include <stdio.h>

struct Person {
    char name[50];
    int age;
    char designation[20];
};

void printPersonDataToFile(const char *filename, struct Person people[], int count) {
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        perror("Error opening file");
        return;
    }

    for (int i = 0; i < count; i++) {
        fprintf(file, "NAME: %s\n", people[i].name);
        fprintf(file, "AGE: %d\n", people[i].age);
        fprintf(file, "DESIGNATION: %s\n", people[i].designation);  
        fprintf(file, "\n");
    }

    fclose(file);
}

int main() {
    printf("NAME: SUDHANSU SEKHAR \n");
    printf("Roll NO. 42 \n");

    struct Person managers[] = {
        {"RAJU", 15, "Manager"},
        {"Ranveer", 69, "Senior Manager"}
    };
    struct Person workers[] = {
        {"DAKSH", 23, "Worker"},
        {"AMAR", 34, "Worker"}
    };

    printPersonDataToFile("managers.txt", managers, sizeof(managers) / sizeof(managers[0]));
    printPersonDataToFile("workers.txt", workers, sizeof(workers) / sizeof(workers[0]));  
    printf("DATA PRINTED SUCCESSFULLY.\n");

    return 0;
}
