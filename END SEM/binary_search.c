#include<stdio.h>
int main(){
    int lr=0,up=4,f=0,mid,item;
    int arr[5] = {10,20,30,40,50};
    printf("ENTER SEARCHING ITEM: \n");
    scanf("%d",&item);
    while(lr<=up){
       mid = (lr+up)/2; 
       if(arr[mid]==item){
        f=1; break;
       }
       if(arr[mid]<item){
        lr = mid + 1;
       }
       else{
        up = mid - 1;
       }
    }
    if (f==1){
        printf("ITEM FOUND at %d",mid);
    }
    else{
        printf("ITEM NOT FOUND  \n");
    }
    return 0;
}