#include<stdio.h>
#include<string.h>

int main (){
    char str1[10] = "SUDHANSU";
    char str2[10] = "SEKHAR";
    // puts(strcat(str1,str2));
    // printf("LENGTH OF THE STRING 1 IS %d",strlen(str2));
    // printf("REVERSE OF THE STRING 1 IS %s\n",strrev(str1));
    // puts(strrev(str2));
    strcpy(str1,str2);
    puts(str1);
}