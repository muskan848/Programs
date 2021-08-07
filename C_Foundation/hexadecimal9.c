/*
 * Program to converts a string of hexadecimal digits (including an optional 0x or 0X) into its equivalent integer value
 *
 * Muskan,1910990665,29/7/2021
 * question9
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

int value(char s)
{
  if(s>='0' && s<='9')
  {
      return s-48;
  }
  else if(s>='a' && s<='f')
  {
      return s-97+10;
  }
  else if(s>='A' && s<='F')
  {
      return s-65+10;
  }
}

int htoi(char *s)
{
    int ans=0,j=1;

    int len = mystrlen(s);

    for(int i=len-1;i>=2;i--)
    {
       ans += j*value(s[i]);

       j=j*16;
    }
    return ans;
}

int main()
{
    char s[10];

    printf("Enter hexadecimal digits :");

    scanf("%s",s);

    printf("Integer value :%d\n",htoi(s));
}

