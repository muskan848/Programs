/* 
 * tower of hanoi
 * Muskan,1910990655
 * que3
*/

#include <stdio.h>

int c=0;

void towerOfHanoi(int n, char from, char to, char aux)
{
  if(n==0)
   {  
    return ;	 
   }

  towerOfHanoi(n-1,from,aux,to);

  printf("%c to %c\n",from,to);
  c++;

  towerOfHanoi(n-1,aux,to,from);
}

int main()
{
  int n;
  
  printf("Number of plates :");

  scanf("%d",&n);

  towerOfHanoi(n,'A','C','B');

  printf("Total movements required = %d\n",c);

}
