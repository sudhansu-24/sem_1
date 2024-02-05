#include <stdio.h>
typedef struct employ_details{
char name[25]; int age; char position[25];
}emp;
void printData(struct employ_details record[], int size) { FILE *managerFile, *workerFile;
int i;
managerFile = fopen("managers.txt", "w"); workerFile = fopen("workers.txt", "w");
for (i = 0; i < size; i++) {
if (record[i].position[0] == 'm' || record[i].position[0] == 'M') {
fprintf(managerFile, "Name: %s\t Age: %d\n\n", record[i].name, record[i].age);
}
else {
fprintf(workerFile, "Name: %s\t Age: %d\n\n", record[i].name, record[i].age);
}
}
fclose(managerFile); fclose(workerFile);
printf("Data written to files successfully!\n");
}
int main() {
printf("NAME:SWYAM\n"); printf("ROLL NO: 39\n"); printf("--------------------\n\n");
emp record[] = {
{"TONY", 35, "Manager"},
{"THOR", 25, "Worker"},
{"LOKI", 40, "Manager"},
{"STEVE", 30, "Worker"},
{"PETER",32,"Manager"},
{"BRUCE",27,"Worker"}
};
int size = sizeof(record) / sizeof(record[0]); printData(record,size);
return 0;
}
