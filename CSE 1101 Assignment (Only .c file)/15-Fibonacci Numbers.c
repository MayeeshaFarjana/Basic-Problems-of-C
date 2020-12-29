// Write a program to print the first 10 Fibonacci numbers. Each Fibonacci number is the sum of the two preceding ones. The sequence starts out 0, 1, 1, 2, 3, 5, 8, ...

#include<stdio.h>
int main()
{
    int i,j,k;
    printf("The first 10 Fibonacci Numbers are: ");
    i=0;
    j=1;
    for(k=1;k<11;k++)
    {
        printf("%d ",i);
        j=i+j;
        i=j-i;
    }
    printf("\n");
    return 0;
}
