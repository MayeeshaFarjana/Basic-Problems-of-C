// Write a program that prints the next 20 leap years.

#include<stdio.h>
int main()
{
    int j=0,n,i;
    printf("Enter current year: ");
    scanf("%d",&n);
    for(i=n+1;;i++)
    {
        if(j==20)
            break;
        else if(((i % 4 == 0) && (i % 100 !=0)) || (i % 400==0)){
            printf("%d\n", i);
            j++;
        }
    }
    return 0;
}
