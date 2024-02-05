#include <stdio.h>
#include <string.h>

// Define a structure to represent an employee
struct Employee {
    char name[50];
    int employeeID;
    char position[20];
};

int main() {
    // Define an array of structures to store information about managers and workers
    struct Employee employees[] = {
        {"Manager 1", 101, "Manager"},
        {"Worker 1", 201, "Worker"},
        {"Manager 2", 102, "Manager"},
        {"Worker 2", 202, "Worker"},
        // Add more employees as needed
    };

    // Open files for managers and workers
    FILE *managerFile = fopen("managers.txt", "w");
    FILE *workerFile = fopen("workers.txt", "w");

    // Check if file openings are successful
    if (managerFile == NULL || workerFile == NULL) {
        printf("Error opening files.\n");
        return 1;
    }

    // Print data of managers and workers to the respective files
    for (int i = 0; i < sizeof(employees) / sizeof(employees[0]); i++) {
        if (strcmp(employees[i].position, "Manager") == 0) {
            fprintf(managerFile, "Name: %s, ID: %d, Position: %s\n", employees[i].name, employees[i].employeeID, employees[i].position);
        } else if (strcmp(employees[i].position, "Worker") == 0) {
            fprintf(workerFile, "Name: %s, ID: %d, Position: %s\n", employees[i].name, employees[i].employeeID, employees[i].position);
        }
    }

    // Close the files
    fclose(managerFile);
    fclose(workerFile);

    printf("Data written to managers.txt and workers.txt\n");

    // Your printf statement
    printf("\nSUDHANSU SEKHAR ROLL NO.42\n");

    return 0;
}
