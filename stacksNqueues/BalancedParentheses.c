/*
 *  program that checks whether the sequence of brackets in the given string is balanced or not.
 *  
 *  Muskan,1910990665
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
int isEmpty()
{
  if(top==-1)
      return 1;
  else
    return 0;
}
void push(char *arr,char element)
{
    arr[++top]=element;
}

char pop(char *arr)
{
    return arr[top--];
}

char peek(char *arr)
{
    return arr[top];
}

int balancedParentheses(char *s)
{
    int len = mystrlen(s),i=0;

    char arr[len];
    
    while(s[i]!='\0')
    {
        if(s[i]=='(' || s[i]=='{' || s[i]=='[' )
        {
          push(arr,s[i]);
        }
       
        else if(isEmpty())
        {
            return 0;
        }
        
         else if(s[i]==')')
        {
            if(peek(arr)=='('){pop(arr);}
            else{return 0;}
        }
        
        else if(s[i]=='}')
        {
            if(peek(arr)=='{'){pop(arr);}
            else{return 0;}
        }
        
        else if(s[i]==']')
        {
            if(peek(arr)=='['){pop(arr);}
            else{return 0;}
        }
        i++;
    }
    return isEmpty();
}

int main()
{
    char str[20];

    printf("Enter String :");

    scanf("%s",str);

    int ans = balancedParentheses(str);

    if(ans==1)
    {
      printf("True \n");
    }
    else
    {
     printf("False \n");
    }
}


