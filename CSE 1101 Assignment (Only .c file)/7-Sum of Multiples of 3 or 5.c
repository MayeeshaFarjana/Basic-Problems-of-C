// Modify the previous program such that only multiples of three or five are considered in the sum, e.g. 3, 5, 6, 9, 10, 12, 15 for n=17

#include<stdio.h>
int main()
{
    int n,sum=0,i;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%3==0 || i%5==0)
            sum+=i;
    }
    printf("\nThe desired summation is: %d\n",sum);
    return 0;
}
