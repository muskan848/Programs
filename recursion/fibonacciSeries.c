#/*
 * Print n times the every third element of the fibonacci series
 * Muskan,1910990665,5/8/2021
 * question4
*/

#include <stdio.h>

void fib(int n,int a,int b)
{
   if(n==0)
   {
     return;
   }

   if((a+b)%2==0)
   {
     printf("%d ",a+b);
     n=n-1;   
   }

   fib(n,b,a+b);
}

int main()
{
  int n,a=1,b=1;

  printf("number of elements you want to print :");

  scanf("%d",&n);

  fib(n,a,b);

}
