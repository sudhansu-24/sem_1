#include <stdio.h>

int main(int argc, char *argv[]) {
    // Check if the correct number of command-line arguments is provided
    if (argc != 3) {
        printf("Usage: %s <file_1> <file_2>\n", argv[0]);
        return 1;
    }

    // Open file_1 for reading
    FILE *file_1 = fopen(argv[1], "rb");
    if (file_1 == NULL) {
        perror("Error opening file_1");
        return 2;
    }

    // Open file_2 for writing
    FILE *file_2 = fopen(argv[2], "wb");
    if (file_2 == NULL) {
        perror("Error opening file_2");
        fclose(file_1);
        return 3;
    }

    // Copy the content of file_1 to file_2
    int ch;
    while ((ch = fgetc(file_1)) != EOF) {
        fputc(ch, file_2);
    }

    fclose(file_1);
    fclose(file_2);

    printf("File copied successfully from %s to %s\n", argv[1], argv[2]);
    
    printf("\nSUDHANSU SEKHAR ROLL NO.42\n");

    return 0;
}
