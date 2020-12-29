// Write a program to calculate sum of n subjects to find the percentage.

#include<stdio.h>
int main()
{
    int n;
    float sum=0.00, percentage;;
    printf("How many subjects: ");
    scanf("%d", &n);
    float a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%f",&a[i]);
        sum+=a[i];
    }
    printf("The summation is %.2f\n", sum);
    percentage=sum/n;
    printf("The percentage is %.2f percent\n", percentage);
    return 0;
}
