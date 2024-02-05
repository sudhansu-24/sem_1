#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("SUDHANSU.txt","r");
    // if (fptr==NULL){
    //     printf("FILE DOESN'T EXIST...");
    // }
    char ch;
    ch = fgetc(fptr);
    while(ch != EOF){
        printf("%c",ch);
        ch = fgetc(fptr);
    }
    printf("\n");
    fclose(fptr);
    return 0;
}