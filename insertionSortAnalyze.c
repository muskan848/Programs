// Muskan ,1910990665

// Insertion Sort analyze
 
// time complexity :-
//   best case :o(n) (already sorted)
//   avg case  :o(n^2)
//   worst case :o(n^2) 
// space complexity : o(1)
// stable algorithm
// implace 


#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>

void insertionSort(int *arr,int n)
{
  int key,j;
  for(int i=1;i<n;i++)
  {
    key=arr[i];
    j=i-1;
    while(j>=0 && arr[j]>key)
    {
      arr[j+1]=arr[j];
      j--;
    }
    arr[j+1]=key;
  }
}

int main()
{
  int size;

  printf("Enter Size :");
  scanf("%d",&size);

  int arr[size];
  
  //scaning random elements
   
  for(int i=0;i<size;i++)
    {
      arr[i]=rand();
    }
  
  struct timeval e;

 //time before the insertion sort
  gettimeofday(&e,NULL);
  long startTime = e.tv_sec *1000 + e.tv_usec/1000;
  printf("Start time :%ld \n", startTime);
 

 //sort
   insertionSort(arr,size);
  

 // time after the insertion sort
  gettimeofday(&e,NULL);
  long endTime = e.tv_sec *1000 + e.tv_usec/1000;
  printf("End time :%ld \n", endTime);

  printf("Time taken to sort the array :%ld \n" , endTime-startTime);


}

