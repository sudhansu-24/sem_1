#include <stdio.h>
#include <ctype.h>
int main() {

printf("----------------------\n\n");
FILE *file;
char ch;
file = fopen("PROGRAM.txt", "r");
int uppercaseCount = 0;
int lowercaseCount = 0;
int specialcount = 0;
while ((ch = fgetc(file)) != EOF){
if (isupper(ch)) {
uppercaseCount++;
}
else if (islower(ch)){
lowercaseCount++;
}
else{
specialcount++;
}
}
fclose(file);
printf("Number of uppercase letters: %d\n", uppercaseCount);
printf("Number of lowercase letters: %d\n", lowercaseCount);
printf("Number of special characters: %d\n", specialcount);
printf("\nSUDHANSU SEKHAR ROLL NO.42");
return 0;
}
