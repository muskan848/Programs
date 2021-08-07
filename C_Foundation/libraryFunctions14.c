/*
 * program to implement library functions strncpy, strncat, and strncmp
 *
 * Muskan,1910990665,29/7/2021
 * question 14
*/

#include <stdio.h>

void mystrncpy(char *s,char *t,char *d,int n)
{
    int j=0,i=0;
    int k=n;
    while(t[j] != '\0' && n>0)
    {
        d[i++] = t[j++];
        n--;
    }

    while(s[k]!='\0')
    {
     d[i++]=s[k++];
    }
}

void mystrncat(char *s,char *t,char *d,int n)
{
    int i=0,j=0,k=0;
    while(s[i]!='\0')
    {
     d[j++]=s[i++];
    }
    while(n>0)
    {
        d[j++]=t[k++];
        n--;
    }
    d[j]='\0';

}

int mystrncmp(char *s,char *t,int n)
{
    int i=0,j=0;
    while(t[j]!='\0'|| s[i]!='\0' && n-->0)
    {
        if(s[i] == t[j])
        {
            i++;
            j++;
        }
        else
        {
            return s[i]-t[j];
        }
    }
    return 0;
}

int main()
{
    char s1[30];
    char s2[30];
    char d[50];

    int temp,n;

    printf("String 1 :");
    
    scanf("%s",s1);

    printf("String 2 :");
    
    scanf("%s",s2);

    printf("size of characters of their argument :");
    
    scanf("%d",&n);

    printf("Press 1 -> copy \n Press 2 ->concat \n press 3 ->compare\n");
    
    scanf("%d",&temp);

    switch(temp)
    {
        case 1:
          mystrncpy(s1,s2,d,n);
          printf("Result :%s\n",d);
          break;
        case 2:
          mystrncat(s1,s2,d,n);
          printf("Result :%s\n",d);
          break;
        case 3:
          printf("Result :%d\n",mystrncmp(s1,s2,n));
          break;
        default:
          printf("Invalid\n");
	  break;
    
     }
}

