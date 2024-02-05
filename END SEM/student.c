#include<stdio.h>

struct student{
    char name[50];
    int  class;
    float marks;
};

int main(){
    struct student students[5];

    for(int i=0;i<5;i++){
        printf("\nENTER STUDENT DETAILS %d: \n",i+1);
        printf("NAME: ");
        scanf("%s",&students[i].name);
        printf("\nCLASS: ",i+1);
        scanf("%d",&students[i].class);
        printf("\nMARKS: ",i+1);
        scanf("%f",&students[i].marks);
        printf("\n");
    }

    printf("\n STUDENT INFORMATION \n");
    for(int i=0; i<5;i++){
        printf("\nSTUDENT %d : \n",i+1);
        printf("\nSTUDENT NAME : %s",students[i].name);
        printf("\nCLASS : %d",students[i].class);
        printf("\nMARKS : %f",students[i].marks);

    }
return 0;
}