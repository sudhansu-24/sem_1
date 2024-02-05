#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    char ch;
    FILE *mainfile;
    FILE *copyfile;

    if (argc != 3) {
        printf("Usage: %s <input_file> <output_file>\n", argv[0]);
        exit(1);
    }

    mainfile = fopen(argv[1], "r");
    copyfile = fopen(argv[2], "w");

    if (mainfile == NULL || copyfile == NULL) {
        printf("File opening Error or file not Found\n");
        exit(1);
    }

    ch = fgetc(mainfile);

    while (ch != EOF) {
        fputc(ch, copyfile);
        ch = fgetc(mainfile);
    }

    printf("File copied successfully\n");

    fclose(mainfile);
    fclose(copyfile);

    return 0;
}
