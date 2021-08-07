/*
 * Program to swap two variables without using a third variable
 * 
 * Muskan ,1910990665,23/7/2021
 * question_1
*/

#include <stdio.h>

void swap(int,int);

int main()
{
  int a,b;

  printf("Enter 1st variable:");

  scanf("%d",&a);

  printf("Enter 2nd variable:");

  scanf("%d",&b);

  swap(a,b);
}

void swap(int a,int b)
{

  a=a+b;
  
  b=a-b;
  
  a=a-b;
  
  printf("1st variable :%d \n",a);
  
  printf("2nd variable :%d \n",b);
}
