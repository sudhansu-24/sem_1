#include <stdio.h>
int main(){
    int i,j,k,larg;
    printf("ENTER FIRST NUMBER: ");
    scanf("%d",&i);
    printf("ENTER SECOND NUMBER: ");
    scanf("%d",&j);
    printf("ENTER THIRD NUMBER: ");
    scanf("%d",&k);
    
    larg = (i>=j && i>=k) ? i : ((j>=i  && j>=k) ? j : k);

    printf("The largest number among them is %d",larg);
    
    return 0;
}