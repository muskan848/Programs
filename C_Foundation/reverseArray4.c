/*
 * program to reverse the given array
 * Muskan,1910990665,24/7/2021
 * question4
*/

#include<stdio.h>

void reverse(int *arr,int size)
{
  int temp;
  
  int start=0;
  
  int end= size-1; 
  
  while(start<end)
  {
   temp = arr[start];
  
   arr[start] = arr[end];
  
   arr[end] = temp;
  
   start++;
  
   end--;
  }
  
}

int main()
{
  int n;
  
  printf("Enter size of array :");
  
  scanf("%d",&n);	  
  
  int arr[n];
  
  printf("Elements of array :");
  
  for(int i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
 
  reverse(arr,n);
 
  printf("Array after reversing :");

  for(int i=0;i<n;i++)
  {
   printf("%d ",arr[i]);
  }
}

