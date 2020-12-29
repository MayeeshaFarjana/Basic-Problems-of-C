// Write a program to shift a variable 2 bits to the left.

#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter a variable: ");
    scanf("%d",&a);
    a<<=2;
    b=a;
    printf("\nThe left shifted variable is = %d\n",b);
    return 0;
}
