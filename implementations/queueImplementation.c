// circular queue implementation with the help of arrays
// Muskan,1910990665

/*
 * time complexities
 * enqueue() -> O(1)
 * dequeue() -> O(1)
 * peek() -> O(1)
 * search ->O(n)
 * display ->O(n)
 * isEmpty() ->O(1)
 * isFull() ->O(1)
 */ 


#include <stdio.h>

int front=-1,rear=-1;

void enqueue(int *arr,int size,int ele)
{
    if(front == -1 && rear==-1)
    {
        front=rear=0;
        arr[rear]=ele;
    }
  else if((rear+1)%size == front)
   {
       printf("queue is full :( \n ");
   }
   else
   {
        rear = (rear + 1) % size;
        arr[rear] = ele;
   }
}

void dequeue(int *arr,int size)
{
      int data=front;
      if (front == -1)
      {
     printf("\n Queue is empty !! \n");
      }
      else if(front == rear)
      {
          
          front =-1;
          rear=-1;
          printf("dequeued element :%d",arr[data]);
      }
      else
      {
       front=(front+1)%size;
       printf("dequeued element :%d",arr[data]);
      }
}

void peek(int *arr,int size)
{
     if (front == -1)
      {
     printf("\n Queue is empty !! \n");
      }
      else
     printf("peek element :%d",arr[rear]);
}

void display(int *arr,int size)
{
 
 int i=front;
 while(i!=rear)
 {
     printf("%d ",arr[i]);
     i=(i+1)%size;
 }
 printf("%d",arr[rear]);
  
}

int main()
{
    int size,n,ele,op;

    printf("Enter size of queue :");

    scanf("%d",&size);

    int arr[size];

    printf("Number of operations you want to perform :");

    scanf("%d",&op);
    
    while(op--)
   {
    printf("\n 1->enqueue \n 2->dequeue \n 3->peek \n 4->display\n");

    scanf("%d",&n);

    switch(n)
    {
      case 1: 
              printf(" \nEnter element you want to enqueue :");
              scanf("%d",&ele);
              enqueue(arr,size,ele);
              break;
      case 2:
              dequeue(arr,size);
              break;
      case 3:
              peek(arr,size);
              break;
      case 4:
              display(arr,size);
              break;
      default:
              printf("Invalid case");
              break;

    }
  }
}



