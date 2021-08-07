/*
 * program to reverse a string
 *
 * Muskan,1910990665,26/7/2021
 * question 8
*/

#include <stdio.h>

int mystrlen(char *str)
{
  int i=0;
  
  while(str[i]!='\0')
  {
    i++;
  }
  
  return i;
}

int main()
{
   char s[100];
  
   char temp;
  
   int start =0;
 
   printf("Enter a string to reverse :");
  
   fgets(s,sizeof(s),stdin);
 
   int end=mystrlen(s)-2;

   while(start<=end)
   {
       temp=s[start];
       s[start]=s[end];
       s[end]=temp;
       start++;
       end--;
   }

  s[mystrlen(s)-1]='\0';

   puts(s);
  
   return 0;
}

