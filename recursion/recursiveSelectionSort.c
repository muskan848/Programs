/* 
 * recursive solution of selection sort 1
 * Muskan,1910990665
*/

#include <stdio.h>

int minimum(int *arr,int size,int j,int min)
{
    //base condition
    if(j==size)
    {
        return min;
    }

    if(arr[j] < arr[min])
    {
        min = j;
    }

    return minimum(arr,size,j+1,min);

}

void selectionSort(int *arr,int size,int i)
{
    //base condition
    if(i==size)
    {
     return;
    }

    int min = i;

    min = minimum(arr,size,i+1,min);

    //swap
    if(min != i)
    {
    int temp = arr[i];
    arr[i] = arr[min];
    arr[min] = temp;
    }

    selectionSort(arr,size,i+1);
}

int main()
{
    int size;

    printf("Enter size of array :");

    scanf("%d",&size);

    int arr[size];

    printf("Enter elements of array :");

    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    selectionSort(arr,size,0);

    printf("Array after sorting :");

    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }

}


