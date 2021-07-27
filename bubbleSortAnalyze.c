//Muskan,1910990665

// Bubble Sort analyze
 
// time complexity :-
//   best case :o(n) (already sorted)
//   avg case  :o(n^2)
//   worst case :o(n^2) 
// space complexity : o(1)
// stable algorithm
// implace 





#include<stdio.h>
#include<stdlib.h>
#include <sys/time.h>

int main()
{
  int size;
  int sorted;
  int temp;

  printf("Enter size:");
  scanf("%d",&size);

  int arr[size];
  
  //scaning random elements
  for(int i=0;i<size;i++)
  {
    arr[i]=rand();
  }

  struct timeval e;

  //time before the bubble sort
  gettimeofday(&e,NULL);
  long startTime = e.tv_sec *1000 + e.tv_usec/1000;
  printf("Start time :%ld \n", startTime); 

  //sort
  for(int i=0;i<size-1;i++)
  {
    sorted = 0;
    for(int j=0;j<size-i-1;j++)
    {
      if(arr[j]>arr[j+1])
      {
	      temp=arr[j];
	      arr[j]=arr[j+1];
	      arr[j+1]=temp;
	      sorted = 1;
      }
    }
    if(sorted==0)
    {
      break;
    }
  }

  // time after the bubble sort
   gettimeofday(&e,NULL);
   long endTime = e.tv_sec *1000 + e.tv_usec/1000;
  printf("End time :%ld \n", endTime); 

   printf("Time taken to sort the array :%ld \n" , endTime-startTime);

 }

 
