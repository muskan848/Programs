/*
 * program to print a pyramid pattern with given no. of rows
 * 
 * Muskan,1910990665,24/7/2021
 * question2
*/
#include<stdio.h>

void pattern(int);

int main(){

  int rows;	

  printf("Enter rows:");

  scanf("%d",&rows);

  pattern(rows);  
}

void pattern(int rows)
{
  for(int i=1;i<=rows;i++)
  {
    for(int j=1;j<=rows-i;j++)
    {
     printf(" ");
    }
    for(int j=1;j<=i;j++)
    {
     printf("# ");
    }
    printf("\n");
  }
}
