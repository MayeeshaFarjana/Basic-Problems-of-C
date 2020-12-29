/* Given a set of integers, write a program to count the frequency of each integer. Integer range 0 – 100. Example:
Input: 1 2 3 4 5 6 3 3 2 100 2 3 4
Output: 1 has 1 time2 has 3 times, 3 has 4 times, 4 has 2 times, 5 has 1 time, 6 has 1 time, 100 has 1 time. */

#include<stdio.h>
int main()
{
    int n;
    printf("How many numbers: ");
    scanf("%d",&n);
    int ar[n];
    int s=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(int j=0;j<=100;j++)
    {
        for(int i=0;i<n;i++)
        {
            if(j==ar[i])
                s++;
            else
                s=s;
        }
        if(s>0)
            printf("%d has %d times.\n",j,s);
        if(s==0)
            continue;
        s=0;
    }
    return 0;
}
