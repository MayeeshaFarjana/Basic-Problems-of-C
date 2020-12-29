// Write a program that prints all prime numbers. (Note: if your programming language does not support arbitrary size numbers, printing all primes up to the largest number you can represent is fine too.)

#include<stdio.h>
int main()
{
    int n,x=0,i,j;
    printf("Select the range: ");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
                x++;
            else
                x=x;
        }
        if(x==0){
            printf("%d\n",i);
            x=0;
        }
        else{x=0;
            continue;
        }
    }
    return 0;
}
