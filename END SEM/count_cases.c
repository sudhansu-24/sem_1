#include<stdio.h>
#include<ctype.h>
int main(){
    FILE *fptr;
    fptr = fopen("SUDHANSU.txt","r");
    int uppercase = 0;
    int lowercase = 0;
    int special = 0;
    char ch;
    while((ch = fgetc(fptr)) != EOF){
        if(isupper(ch)){
            uppercase++;
        }
        else if(islower(ch)){
            lowercase++;
        }
        else{
            special++;
        }
        
    }
    fclose(fptr);
    printf("NO. OF UPPER CASES: %d\n",uppercase);
    printf("NO. OF LOWER CASES: %d\n",lowercase);
    printf("NO. OF SPECIAL CASES: %d\n",special);
    return 0;
}