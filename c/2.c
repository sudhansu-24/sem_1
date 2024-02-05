#include<stdio.h>
int main(){
    int a,n,r,s;
    printf("Enter the first term of the series: \n");
    scanf("%d",&a);
    printf("Enter the number of terms in the series: \n");
    scanf("%d",&n);
    printf("Enter the common ratio in the series: \n");
    scanf("%d",&r);
    s=a*((1-pow(r,n+1))/(1-r));
    printf("The sum of geometric series is: %d",s);
    return 0;
}