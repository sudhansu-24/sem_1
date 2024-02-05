#include<stdio.h>

int main(int argc,char *argv[]){
    int i;
printf("Number of arguments are %d",argc);

for(i=1; i<argc ; i++){
    printf("\nARGUMENT NO. %d is %s",i,argv[i]);
}
return 0;
}