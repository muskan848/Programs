//Muskan,1910990665

//Selection Sort Analyze

// time complexity :-
//   best case :o(n^2)
//   avg case  :o(n^2)
//   worst case :o(n^2)
// space complexity : o(1)
// Not a stable algorithm
// implace


#include<stdio.h>
#include<stdlib.h>
#include <sys/time.h>

void selectionSort(int *arr,int size)
{
  int min,temp;
  
  for(int i=0;i<size;i++)
  {
    min = i;
    for(int j=i+1 ;j<size ;j++)
    {
      if(arr[j] < arr[min])
      {
        min=j;
      }    
    }
    if(min !=i)
    {
    temp = arr[i];
    arr[i] = arr[min];
    arr[min] = temp;
    } 
  }  
}


int main()
{
  int size;
 
  printf("Enter size:");
  scanf("%d",&size);

  int arr[size];
  
  //scaning random elements
 /* for(int i=0;i<size;i++)
  {
    arr[i]=rand();
  }
*/
  int k=size-1;
  for(int i=0;i<size;i++)
  {
   arr[i] = k--;
  }
  struct timeval e;

  //time before the selection sort
 
  gettimeofday(&e,NULL);
  long startTime = e.tv_sec *1000 + e.tv_usec/1000;
  printf("Start time :%ld \n", startTime); 

  //sort
   selectionSort(arr,size);

  // time after the selection sort
  
   gettimeofday(&e,NULL);
   long endTime = e.tv_sec *1000 + e.tv_usec/1000;
   printf("End time :%ld \n", endTime); 

   printf("Time taken to sort the array :%ld \n" , endTime-startTime);

 }

