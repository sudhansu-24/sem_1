#include<stdio.h>
int main(){
    int i,j,temp,n;
    printf("ENTER SIZE : \n");
    scanf("%d",&n);
    int a[n];
    printf("ENTER VALUES : \n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++){
        for (j=i;j>=1;j--){             
            if(a[j-1]>a[j]){                //insertion logic
                temp = a[j-1];              
                a[j-1] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("SORTED ARRAY: ");
    for(i=0;i<n;i++){
        printf("%d",a[i]);
    }
    return 0;
}