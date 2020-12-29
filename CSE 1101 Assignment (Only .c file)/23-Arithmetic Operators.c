/* Write a program to input two numbers and an operator and calculate the result according to the following conditions:
Operator		Result
‘+’			    Add
‘-‘			    Subtract
‘*’			    Multiply
‘/’			    Divide
‘%’			    Remainder  */

#include<stdio.h>
int main()
{
    int a,b;
    char n;
    printf("Enter 2 numbers: ");
    scanf("%d %d",&a,&b);
    printf("Enter the operator to choose the action:\n '+'\n '-'\n '*'\n '/'\n '%%'\n");
    scanf(" %c",&n);
    switch(n)
    {
        case '+':
        printf("The result is %d\n",a+b);
        break;
        case '-':
        printf("The result is %d\n",a-b);
        break;
        case '*':
        printf("The result is %d\n",a*b);
        break;
        case '/':
        printf("The result is %d\n",a/b);
        break;
        case '%':
        printf("The result is %d\n",a%b);
        break;
    }
    return 0;
    }
