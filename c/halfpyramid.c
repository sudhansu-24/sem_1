#include <stdio.h>
 
void main()
{
  int rows, i, j;
  char ch = 'A';
 
  printf("Enter the no. of rows: ");
  scanf("%d", &rows);
 
  for (i = 0; i <= rows; i++)
  {
    for (j = 0; j <= i; j++)
    {
      printf(" %c", (char)(ch + i));
    }
    printf("\n");
  }
  printf("SUDHANSU SEKHAR ROLL NO 42");
}
