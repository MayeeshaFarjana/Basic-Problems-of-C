/* Write a program to print the numbers between 1 and 10, along with an indication of whether each is even or odd, like this:
1 is odd
2 is even
3 is odd
...
(Hint: use the % operator.) */

#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=10;i++)
    {
        if(i%2==0)
            printf("%d is even\n",i);
        else
            printf("%d is odd\n",i);
    }
    return 0;
}
