/*
 * program to compute square root of a number without using inbuilt function (Binary search)
 *
 * Muskan ,1910990665 ,20/7/2021
 * Assignment 1
*/

#include <stdio.h>

float squareRoot(float,int);

void main(){

  float number = 0;
  int precision = 0;

  printf("Enter a number :");
  scanf("%f",&number);
  printf("Enter precision :");
  scanf("%d",&precision);
  
  float result = squareRoot(number,precision);
  printf("%.*lf",precision,result);
}

//function to compute sqroot of a number which returns float data type
 
float squareRoot(float number,int precision)
{
  //variables
  float start=0;
  float end=number;
  float ans;
  float mid;
  float increament=0.1;

  // integer part of square root
 while(start<=end)
 {
   mid = (start+end)/2;
   if(mid*mid == number)
   {
    ans = mid;
    break;
   }
   else if(mid*mid < number)
   {
    start = mid+1;	   
    ans=mid; 
   }
   else
   {
    end=mid-1;
   }
 }

 // fractional part of square root
   for(int i=0; i<precision ;i++)
   {
    while(ans*ans<=number)
    {
     ans += increament;
    }
    ans -= increament;
    increament = increament/10;
   }
return ans;
}

