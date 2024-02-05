#include <stdio.h>
void stringrev(char str1[]){
    for(int i=0,j=9-1;i<9/2;i++,j--){
        char temp = str1[i];
        str1[i] = str1[j];
        str1[j] = temp;
        puts(str1);
    };

}

int main(){
    char str[9]="SUDHANSU";
    printf("THE REVERSED STRING IS : ");
    stringrev(str);

    return 0;
}