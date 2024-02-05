#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[50];
    int rollNumber;
    float marks;
};


void addStudentRecord(FILE *file, struct Student student) {
    fwrite(&student, sizeof(struct Student), 1, file);
}


void readStudentRecords(FILE *file) {
    struct Student student;

    fseek(file, 0, SEEK_SET);  

    printf("\nStudent Records:\n");

    while (fread(&student, sizeof(struct Student), 1, file) == 1) {
        printf("Name: %s, Roll Number: %d, Marks: %.2f\n", student.name, student.rollNumber, student.marks);
    }
}


void editStudentRecord(FILE *file, int rollNumber, struct Student newStudent) {
    struct Student student;

    fseek(file, 0, SEEK_SET);  

    while (fread(&student, sizeof(struct Student), 1, file) == 1) {
        if (student.rollNumber == rollNumber) {
            fseek(file, -sizeof(struct Student), SEEK_CUR);  
            fwrite(&newStudent, sizeof(struct Student), 1, file);
            fflush(file);  
            printf("\nRecord edited successfully.\n");
            return;
        }
    }

    printf("\nRecord not found.\n");
}


void appendStudentRecord(FILE *file) {
    struct Student newStudent;

    printf("\nEnter details for the new student:\n");
    printf("Name: ");
    scanf("%s", newStudent.name);
    printf("Roll Number: ");
    scanf("%d", &newStudent.rollNumber);
    printf("Marks: ");
    scanf("%f", &newStudent.marks);

    fseek(file, 0, SEEK_END);  
    fwrite(&newStudent, sizeof(struct Student), 1, file);
}

int main() {
    FILE *studentFile = fopen("Student.dat", "rb+");

    if (studentFile == NULL) {
        printf("Error opening Student.dat file.\n");
        return 1;
    }

    
    struct Student student1 = {"SUDHANSU SEKHAR", 42, 95.5};  // Updated name and roll number
    struct Student student2 = {"SHRAY", 75, 92.0};

    
    addStudentRecord(studentFile, student1);
    addStudentRecord(studentFile, student2);

    
    printf("Initial Student Records:\n");
    readStudentRecords(studentFile);

    
    int rollNumberToEdit = 42;
    struct Student newStudentData = {"SUDHANSU", 102, 95.0};  // Updated name and roll number
    editStudentRecord(studentFile, rollNumberToEdit, newStudentData);

    
    readStudentRecords(studentFile);

    
    appendStudentRecord(studentFile);

    
    readStudentRecords(studentFile);

    
    printf("\nSHRAY DOBHAL ROLL NO 75\n");

    fclose(studentFile);

    return 0;
}
