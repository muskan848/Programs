
/*
 * program to compute the position of the rightmost occurrence of t in s , or - 1 if there is none
 * muskan,1910990665,28/7/2021
 * question12
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


int strindex(char *s,char *t)
{
    int len1 = mystrlen(s);

    int len2 = mystrlen(t);
    
    int j=0, index=-1;
    
    for(int i=0;i<len1;i++)
    {
        int c=0;

	while(t[j]!='\0' && s[i] == t[j])
        {
            i++;
            j++;
            c=1;
        }

	if(t[j] == '\0')
        {
            index = i-len2;
            i--;
        }

	if(c){i--;}

	j=0;
    }
    return index;
}

int main()
{
    char s[30];

    char t[30];
    
    printf("Enter String 1 :");

    scanf("%s",s);
    
    printf("Enter String 2 :");

    scanf("%s",t);
    
    printf("Right most index :%d \n",strindex(s,t));
    
}



