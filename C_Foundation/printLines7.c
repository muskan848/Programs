/*
 * program to print all the lines which are longer than 80 characters
 *
 * Muskan,1910990665,29/7/2021
 * question7
*/

#include <stdio.h>


int main() {

    int n;

    printf("Total no. of lines: ");

    scanf("%d", &n);

    while(n-->=0) {

        char s[200];

        fgets(s,sizeof(s),stdin);

        int i;

        for(i=0;s[i]!='\0'&&i<=80;i++);

        if(i>80) printf("%s\n", s);

    }
}
