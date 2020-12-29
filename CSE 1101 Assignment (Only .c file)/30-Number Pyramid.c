/* Write a program that can generate the following pyramid:
                         1

                   1     3     1

            1      3     5     3    1

     1      3      5     7     5     3     1  */

#include<stdio.h>
int main()
{
    int n,m,s=1,g=1;
    n=4;
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<n-i;j++)
            printf(" ");
        for(int k=n-i;k<=n;k++,s=s+2)
            printf("%d",s);
        g=s-4;
        for(int l=n+1;l<=n+i;l++,g=g-2)
            printf("%d",g);
        printf("\n");
        s=1;
    }
}

