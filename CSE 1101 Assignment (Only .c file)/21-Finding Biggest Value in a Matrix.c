// Write a program that takes a 5×5 matrix of integer values as input and then find out the biggest number from upper–left to lower-bottom diagonal elements of that matrix.

#include<stdio.h>
int main()
{
    printf("Enter a 5*5 Matrix: \n");
    int a[5][5];
    int x;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    x=a[0][0];
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(j==i)
            {
                if(x<=a[i][j])
                    x=a[i][j];
                else
                    x=x;
            }
            else
                continue;
        }
    }
    printf("\nThe biggest number from upper-left to lower-bottom diagonal elements of that matrix is %d\n",x);
    return 0;
}
