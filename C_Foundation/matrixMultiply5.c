/*
 * program to multiply two matrix
 * Muskan,1910990665,25/7/2021
 * question5
*/

#include<stdio.h>

int main()
{
 
 // matrix 1
 int m,n;

 printf("Enter the rows and columns of first matrix :");

 scanf("%d %d",&m,&n);
 
 int mat1[m][n];

 printf("Enter the elements of first matrix :");

 for(int i=0;i<m;i++)
  for(int j=0;j<n;j++)
    scanf("%d",&mat1[i][j]);

//matrix 2
 int p,q;

 printf("Enter the rows and columns of second matrix :");

 scanf("%d %d",&p,&q);

 int multiply[m][q]; 

 if(n!=p)
 {
  printf("Matrix multiplication is not possible!");
 }

 else
 {
  int mat2[p][q]; 

  printf("Enter the elements of second matrix :");

  for(int i=0;i<p;i++)
     for(int j=0;j<q;j++)
      scanf("%d",&mat2[i][j]);

  //product
   int sum=0;
 
   for (int c = 0; c < m; c++) 
      {
      for (int d = 0; d < q; d++)
      {
        for (int k = 0; k < p; k++) 
	{
          sum = sum + mat1[c][k]*mat2[k][d];
        }
 
        multiply[c][d] = sum;
        sum = 0;
      }
    }


  
 //print
 printf("matrix after multilication\n");

 for (int c = 0; c < m; c++) {
      for (int d = 0; d < q; d++)
        printf("%d\t", multiply[c][d]);
 
      printf("\n");
    }
  }
 }  

