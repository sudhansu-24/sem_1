#include<stdio.h>
int main()
{

    int i,fact = 1,n;
    
    printf("Enter the number for which you want to find factorial:");
    
    scanf("%d",&n);
    
    for(i=n;i>=1;i--){
        fact = fact * i;
    }
    printf("factorial of %d is %d",n,fact);
    
    printf("\nSUDHANSU SEKHAR ROLL NO 42");
    return 0;
}

