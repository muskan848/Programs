/*
 * program to evaluate reverse polish expression ,postfix to infix conversion
 * 
 * Muskan,1910990665,6/8/2021
 * que15
*/


#include <stdio.h>

//global variable
int top =-1;

int mystrlen(char *s)
{
    int i=0;
    while(s[i]!='\0')
    {
        i++;
    }
    return i;
}

void push(int *arr,int element)
{

    arr[++top]=element;
}

int pop(int *arr)
{
    return arr[top--];
}

int reversePolish(char *s)
{
    int len = mystrlen(s),i=0;

    int arr[len];

    while(s[i]!='\0')
    {
      if(s[i]>='0' && s[i]<='9')
      {
          push(arr,s[i]-48);
      }
      else
      {
        int a=pop(arr);
        int b=pop(arr);

        if(s[i] == '+')
        {
            push(arr,b+a);
        }
        else if(s[i] == '-')
        {
            push(arr,b-a);
        }
        else if(s[i] == '*')
        {
            push(arr,b*a);
        }
        else if(s[i] == '/')
        {
            push(arr,b/a);
        }
        else if(s[i] == '%')
        {
            push(arr,b%a);
        }
      }
      i++;
    }
    return pop(arr);
}

int main()
{
    char expr[20];

    printf("Enter reverse polish expr :");

    scanf("%s",expr);

    printf("Result :%d\n",reversePolish(expr));
}





