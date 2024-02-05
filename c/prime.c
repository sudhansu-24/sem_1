#include<stdio.h>

int main(){

int n, var,i,m, loop=0;

printf("ENTER A NUMBER: ");

scanf("%d", &n);

var=n;

m=n/2; for(i=2;i<=m;i++)

{

if(n%i==0){

printf("%d IS NOT PRIME", var); loop=1;
printf("\nSUDHANSU SEKHAR ROLL NO 42");
break;
}
} if(loop==0){

printf("%d IS PRIME", var);
printf("\nSUDHANSU SEKHAR ROLL NO 42");

} return 0;
}


