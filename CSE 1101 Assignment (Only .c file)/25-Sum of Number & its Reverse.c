/*	Write a program, where user will enter an integer number and the output will be the sum of the given input and reverse of that number.
Input: 705
Output: 1212 (because 705+507).  */

#include<stdio.h>
#include<math.h>
int main()
{
    int n,a,b,x,c,s=0,len=0;
    printf("Enter an integer: ");
    scanf("%d",&n);
    a=n;
    b=n;
    while(n!=0)
    {
        n=n/10;
        len++;
    }
    for(int j=len-1; a!=0; j--)
    {
        x=a%10;
        a=a/10;
        c=x*round(pow(10,j));
        s+=c;
    }
    printf("The reversed number is %d\n",s);
    printf("The summation is %d\n",b+s);
    return 0;
}
