//HOW TO TAKE SIMPLE INPUT FROM USER;
#include <stdio.h>
int main()
{
    int x;
    printf("ENTER A NUMBER : ");
    scanf("%d",&x);
    int y = x*x;
    printf("SQUARE OF THE NUMBER YOU ENTERED : %d",y);
    return 0;
}
// WAP A CODE TO TAKE MULTIPLE INPUT FROM USER IN A SINGLE LINE;
#include <stdio.h>
int main()
{
    int p,q;
    printf("ENTER A VALUE OF P AND Q : ");
    scanf("%d%d",&p,&q);
    printf("p = %d q = %d",p,q);
    return 0;
}