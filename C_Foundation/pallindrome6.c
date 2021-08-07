/*
 * program to identify string is pallindrome or not
 *
 * Muskan,1910990665,26/72021
 * question 6 
*/
 
#include<stdio.h>
#include <ctype.h>

int mystrlen(char *str)
{
  int i=0;

  while(str[i]!='\0')
  {
    i++;
  }

  return i;
}

int pallindrome(char str[])
{
  int size= mystrlen(str);
  
  int start =0;
  
  int end=size-2;

  while(start<end)
  {
    if(str[start]==' ')
    {
     start++;
    }
    else if(str[end]==' ')
    {
     end--;
    }
    else if(str[start] == str[end])
    {
      start++;
      end--;
    }
    else
    {
     return 0;
    }
    
  }
  return 1;

}

int main(){
 
   char str[20];
  
   int temp;   
   
   printf("Enter string :");
  
   fgets(str,sizeof(str),stdin);
   
   for(int i = 0; str[i]; i++){
    str[i] = tolower(str[i]);
   }

   temp = pallindrome(str);
   
   if(temp==1)
   {
    printf("True\n");
   }
   else
   {
    printf("False\n");
   }
}
