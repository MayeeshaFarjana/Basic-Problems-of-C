// Write a program to read the following numbers, round then off to the nearest integers and print out the results in integer form: 35.7  	50.21	-23.73	-46.45

#include<stdio.h>
int main()
{
     int n;
     float a;
     printf("how many numbers: ");
     scanf("%d",&n);
     for(int i=1; i<=n; i++)
     {
         scanf("%f", &a);
         int b=a;
         if((a-b)<=0.50)
            printf("%d\n",b);
         else
            printf("%d\n",b+1);

     }
     return 0;
}
