// Write a program that asks the user for a number n and gives him the possibility to choose between computing the sum and computing the product of 1,…,n.

#include<stdio.h>
int main()
{
    int n,sum=0,prod=1;
    printf("Enter a number:");
    scanf("%d",&n);
    int x;
    printf("Press 1 for sum and 2 for Product...\n");
    scanf("%d",&x);
    for(int i=1;i<=n;i++)
    {
       sum+=i;
       prod*=i;
    }
    if(x==1)
        printf("\nThe summation is: %d\n",sum);
    if(x==2)
        printf("\nThe product is: %d\n",prod);
    return 0;
}
