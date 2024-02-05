#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,item;
    int arr[5]={1,2,3,5,4};
    // printf("ENTER SIZE OF ARRAY: \n");
    // scanf("%d",&n);
    // int arr[n];
    // printf("ENTER THE ELEMENTS OF THE ARRAY:\n");
    // for(int i=0;i<n;i++){
    //     scanf("%d",&arr[i]);
    //}
    printf("ENTER THE ITEM TO BE SEARCHED: \n");
    scanf("%d",&item);
    int i=0;
    while(i<5){
        if (arr[i]==item){
            printf("ITEM FOUND AT INDEX %d\n",i);
            exit(0);
        }
        ++i;
    }
    printf("ITEM NOT FOUND...");
    return 0;
}