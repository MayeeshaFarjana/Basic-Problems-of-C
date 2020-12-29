/*	Write a program to input two numbers and a choice and calculate the result according to the following conditions:
Choice			Result
1	            Add
2	            Subtract
3	            Multiply
4	            Divide
5	            Remainder   */


#include<stdio.h>
int main()
{
    int a,b,n;
    printf("Enter 2 numbers: ");
    scanf("%d %d",&a,&b);
    printf("Enter the number to choose the action:\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Remainder\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        printf("The result is %d\n",a+b);
        break;
        case 2:
        printf("The result is %d\n",a-b);
        break;
        case 3:
        printf("The result is %d\n",a*b);
        break;
        case 4:
        printf("The result is %d\n",a/b);
        break;
        case 5:
        printf("The result is %d\n",a%b);
        break;
    }
    return 0;
}
