/*
 * program to delete each character in string1 that matches any character in string2
 *
 * Muskan,1910990665,27/7/2021
 * question 10
*/


#include<stdio.h>

void squeeze(char *s1,char *s2,char *ans)
{
   int j=0,k=0;
   
   int x;
 
   for(int i=0;s1[i]!='\0';i++)
   {
     x=0;
     k=0;
   
     while(s2[k]!='\0')
    {
	  if(s1[i]==s2[k++])
	  {
            x=1;
	    break;
	  }

    }

      if(x==0)    
     ans[j++]=s1[i]; 
  
   }
}

int main()
{
  char s1[50];
  char s2[50];
  char ans[50];

  printf("String 1 :");

  fgets(s1,sizeof(s1),stdin);

  printf("String 2 :");

  fgets(s2,sizeof(s2),stdin);

  squeeze(s1,s2,ans);

  printf("Result :");

  printf("%s \n",ans);
}
