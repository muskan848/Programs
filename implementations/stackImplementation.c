//implementation of stack with the help of arrays :)
//Muskan,1910990665

/*time complexities
 * push() -> O(1)
 * pop() -> O(1)
 * peek() -> O(1)
 * search -> O(n)
 * display -> O(n)
 * isEmpty() ->O(1)
*/


#include <stdio.h>

//global variable
int top =-1;

int isEmpty()
{
  if(top==-1)
    return 1;
  else
    return 0;
}

int isFull(int size)
{
  if(top==size-1)
    return 1;
  else
    return 0;
  }


void push(int *arr,int size,int element)
{
    arr[++top]=element;
}

int pop(int *arr,int size)
{
    return arr[top--];
}

int peek(int *arr,int size)
{
    return arr[top];
}

void display(int *arr,int size)
{

  for(int i=top;i>=0;i--)
  {
   printf("%d ",arr[i]);
  }
}


int main()
{
    int size,n,ele,op;

    printf("Enter size of stack :");

    scanf("%d",&size);

    int arr[size];
 
    printf("Number of operations you want to perform :");

    scanf("%d",&op);

    while(op--)
   {
    printf("\n 1->push \n 2->pop \n 3->peek \n 4->isEmpty \n 5->isFull \n 6->display\n");

    scanf("%d",&n);

    switch(n)
    {
      case 1:
               if(isFull(size)==1)
               {printf("Stack is Full :( \n");}
               else
              {
              printf(" \nEnter element you want to push :");
              scanf("%d",&ele);
              push(arr,size,ele);

              }
              break;
      case 2:
               if(isEmpty()==1)
               {printf("Stack is Empty :( \n");}
               else
               {printf("poped element :%d",pop(arr,size));}
              break;
      case 3:
               if(isEmpty()==1)
               {printf("Stack is Empty :( \n");}
               else
              {printf("peek element :%d",peek(arr,size));}
              break;
      case 4:
              if(isEmpty()==1)printf("true");
              else printf("false");
              break;
      case 5:
              if(isFull(size)==1)printf("true");
              else printf("false");
              break;
      case 6:
              display(arr,size);
              break;
      case 7:
              printf("Invalid case");
              break;

    }
  }
}
