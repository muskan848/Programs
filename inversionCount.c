/* 
 * program to count the inversion pairs
 * two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j
 *
 * Muskan,1910990665,12/8/2021
*/ 


#include <stdio.h>

int merge(int *arr,int l ,int m ,int r)
{
    int i=l ,j=m+1 ,k=l ,count=0;
    
    int temp[r+1];
    
    while(i<=m && j<=r)
    {
       if(arr[i]<=arr[j])
       {
           temp[k++] = arr[i++];
       }
       else
       {        
          temp[k++] = arr[j++];
          count = count + (m-i+1);
       }
    }
    
    while(i<=m)
    temp[k++]=arr[i++];
    
    while(j<=r)
    temp[k++]=arr[j++];
    
    for(i=l ;i<=r ;i++)
    {
        arr[i]=temp[i];
    }
    
    return count;
}

int inv_count(int *arr,int l ,int r)
{
    int count=0;
    if(l<r)
    {
     int mid = (l+r)/2;
     
     count += inv_count(arr,l,mid);
     
     count += inv_count(arr,mid+1,r);
     
     count += merge(arr,l,mid,r);
    }
    
    return count;
}

int main()
{
  int n;
 
  printf("Enter size :");
 
  scanf("%d",&n);
 
  int a[n];

  printf("Array elements :");
 
  for(int i=0; i<n ;i++)
  {
      scanf("%d",&a[i]);
  }
 
  int count =  inv_count(a,0,n-1);
 
  printf("Inversion count :%d\n",count);
}

