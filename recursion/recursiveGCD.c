/*
 * recursive solution of greatest common divisor (hcf)2
 * Muskan,1910990665
*/

#include <stdio.h>

int gcd(int a,int b)
{
  if(a==b) return a;

  if(a%b==0) return b;

  if(b%a==0) return a;

  // according to euclid's theorem
  if(a>b)
  { 
   return gcd(a%b,b); 
  }
  else
  {
   return gcd(a,b%a);
  }
}

int main()
{
  int a,b;

  printf("Enter 1st number :");
  
  scanf("%d",&a);

  printf("Enter 2nd number :");
  
  scanf("%d",&b);

  int ans = gcd(a,b);

  printf("GCD :%d \n",ans);
}
