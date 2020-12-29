// Write a program to find out (the hard way, by counting them) how many of the numbers from 1 to 10 are greater than 3. (The answer, of course, should be 7.) Your program should have a loop which steps a variable (probably named i) over the 10 numbers. Inside the loop, if i is greater than 3, add one to a second variable which keeps track of the count. At the end of the program, after the loop has finished, print out the count.

#include<stdio.h>
int main()
{
    int count=0,i;
    for(i=1; i<=10; i++)
    {
        if(i>3)
            count++;
    }
    printf("\t\tThere are %d number(s) greater than 3 from 1 to 10\n",count);
    return 0;
}
