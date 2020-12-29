// Write a program to swap the values of two variables without using third variable.

#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two variables: ");
    scanf("%d %d", &a, &b);
    printf("\nBefore swapping a=%d & b=%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nAfter swapping a=%d & b=%d\n",a,b);
    return 0;
}
