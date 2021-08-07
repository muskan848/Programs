/*
 * program to compute the first location in the string1 where any character from the string2 occurs
 *
 * Muskan,1910990665,27/7/2021
 * question 11
*/

#include<stdio.h>

int mystrlen(char *s)
{
  int i=0;	

  while(s[i]!='\0')
  {
    i++;
  }

  return i;
}

int any(char *s1,char *s2)
{
  
  int len=mystrlen(s1)-1;

  int min=len;
  
  for(int i=0;s2[i]!='\0';i++)
  {
    for(int j=0;s1[j]!='\0';j++)
    {
      if(s2[i]==s1[j] && j<min)
      {
       min=j;
      }
    }
  }

  if(min==len)
  {
    return -1;
  }

  else
  {
    return min;
  }
}

int main()
{
  char s1[50];
  char s2[50];

  int ans;

  printf("String 1 :");

  fgets(s1,sizeof(s1),stdin);

  printf("String 2 :");

  fgets(s2,sizeof(s2),stdin);

  printf("result :%d \n",any(s1,s2));

}
