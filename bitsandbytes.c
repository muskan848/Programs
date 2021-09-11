
#include <stdio.h>


//1
int bitAnd(int a,int b)
{
   return ~(~a | ~b);
}


//2
int bitXor(int a,int b)
{
   return ~(~a & ~b) & ~(a & b);
}


//3
int sign(int a)
{
  int b = a>>31;
  if(b==1)
  {
      return 0; //negative
  }
  else
  {
      return 1; //positive
  }
}


//4
int getbyte(int x,int n)
{
    int no =127;
    no = no<<8*n ;
   int b =(no&x);
   return b>>8*n;
}


//5
int logicalShift(int x, int n)
{
    /* Doing an arithmetic shift zeroing out all the bits to the left of previous MSB */
    x=x>>n;
    int a= (~((1<<31)>>n-1));
    return x&a;
}


//6
int conditional(int x, int y, int z) {

  // Converts x to a boolean value
  x = !(!x);

  int var = (~x + 1);
  return ((var & y) + (~var & z));
}

//7
int bang(int x)
{
    int z=(x|(~x+1));
    return z+1;
}


int main()
{
    int a,b;
    printf("Enter 1st number :");

    scanf("%d",&a);

    printf("Enter 2nd number :");

    scanf("%d",&b);

    printf("%d " ,bitAnd(a,b));

    printf("%d " ,bitXor(a,b));

    int x= 305419896;
    int n=1;
    printf("%d ",getbyte(x,n));

    printf("%d ",logicalShift(x,n));

    printf("%d ",conditional(2,4,5));

    printf("%d ",bang(1));

   
}




