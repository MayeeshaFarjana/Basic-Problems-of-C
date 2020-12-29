// Write a program that asks the user for a number n and prints the sum of the numbers 1 to n

#include<stdio.h>
int main()
{
    int n,i,sum;
    printf("Enter an integer number: ");
    scanf("%d", &n);
    i=1;
    sum=0;
    while(i<=n) // Calculating the sum
    {
        sum = sum + i;
        i++;
    }
    printf("The sum of 1 to %d is %d\n", n,sum);
    return 0;
}
