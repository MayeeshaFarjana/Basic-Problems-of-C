// Write a program to print the first 7 positive integers and their factorials. (The factorial of 1 is 1, the factorial of 2 is 1 * 2 = 2, the factorial of 3 is 1 * 2 * 3 = 6, the factorial of 4 is 1 * 2 * 3 * 4 = 24, etc.) [Extra credit: why did I only ask for the first 7?]

#include<stdio.h>
int main(){
    int x=1,i,j,n;
    printf("Enter a number: ");
    scanf("%d", &n); // For extra credit I'm taking input from users
    for(i=1;i<=n;i++)
    {
        printf("The factorial of %d is ",i);
        for(j=1;j<=i;j++)
        {
            x*=j;
            if(j!=i)
                printf("%d*",j);
            else
                printf("%d =",j);
        }
        printf(" %d\n",x);
        x=1;
    }
    return 0;
}
