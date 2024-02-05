#include<stdio.h>
int main(){
    int a,b;
    printf("ENTER A NUMBER:");
    scanf("%d",&a);
    printf("ENTER 1 FOR PLUS UNARY OPERATOR\n");
    printf("ENTER 2 FOR MINUS UNARY OPERATOR\n");
    printf("ENTER 3 FOR PRE INCREMENT OPERATOR\n");
    printf("ENTER 4 FOR POST INCREMENT OPERATOR\n");
    printf("ENTER 5 FOR PRE DECREMENT OPERATOR\n");
    printf("ENTER 6 FOR POST DECREMENT OPERATOR\n");
    printf("ENTER YOUR CHOICE:");
    scanf("%d",&b);
    if (b==1){
        a = +a;
        printf("AFTER PLUS UNARY OPERATOR NO. IS %d\n",a);
    }
    if (b==2){
        a = -a;
        printf("AFTER MINUS UNARY OPERATOR NO. IS %d\n",a);
    }
    if (b==3){
        a = ++a;
        printf("AFTER PRE INCREMENT OPERATOR NO. IS %d\n",a);
    }
    if (b==4){
        a = a++;
        printf("AFTER POST INCREMENT OPERATOR NO. IS %d\n",a);
    }
    if (b==5){
        a = --a;
        printf("AFTER PRE DECREMENT OPERATOR NO. IS %d\n",a);
    }
    if (b==6){
        a = a--;
        printf("AFTER POST DECREMENT OPERATOR NO. IS %d\n",a);
    }
    printf("SUDHASNU SEKHAR ROLL NO 42");
    return 0;
}






