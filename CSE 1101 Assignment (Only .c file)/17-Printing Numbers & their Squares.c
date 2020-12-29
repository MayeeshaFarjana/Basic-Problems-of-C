/* Write a program to print the numbers from 1 to 10 and their squares:
	1	1
	2	4
	3	9
	...
	10	100
*/

#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<11;i++)
    {
        printf("%d  %d\n",i,(i*i));
    }
}
