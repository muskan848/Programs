/*
 * Program which returns 1 if the string t occurs at the end of the string s, and zero otherwise
 *
 * Muskan,1910990665,29/7/2021
 * question13
*/

#include <stdio.h>

int mystrlen(char *s)
{
  int i=0;

  while(s[i]!='\0')
  {
    i++;
  }
  return i;
}

int strend(char *s1,char *s2)
{
    int len1= mystrlen(s1)-1;

    int len2= mystrlen(s2)-1;

    int diff,j=0;

    if(len2>len1)
    {return 0;}

    else
    {diff=len1-len2;}

    while(s2[j]!='\0')
    {
        if(s1[diff] == s2[j])
        {
            diff++;
            j++;
        }
        else
        {
            return 0;
        }
    }

    if(s1[diff]=='\0' && s2[j]=='\0')
    {return 1;}

    return 0;

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

  printf("result :%d \n",strend(s1,s2));
}

