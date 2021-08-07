/*
 * program to count the vowels and cosonants in a given string
 *
 * Muskan,1910990665,23/7/2021
 * question3
*/

#include<stdio.h>

int mystrlen(char *str)
{
  int i=0;

  while(str[i]!='\0')
  {
    i++;
  }

  return i;
}

void vowelsAndConsonants(char str[])
{

  int size = mystrlen(str);
  
  int i=0,c=0,v=0;
  
  while(i<size-1)
  {
    if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' )
     {v++;}
    else
     {c++;}
    i++;
  }
 
  printf("Vowels:%d\n" ,v);

  printf("Consonants:%d\n",c);
}
  
int main()
{
  char str[20];

  printf("Enter String :");
 
  fgets(str,sizeof(str),stdin);
 
  vowelsAndConsonants(str);
}

