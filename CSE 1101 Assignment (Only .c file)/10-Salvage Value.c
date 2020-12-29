// The straight line method of computing the yearly depreciation of the value of an item is given by, Depreciation = (Purchase price – salvage value) / Years of service. Write a program to determine the salvage value of an item when the purchase price, year of service and the annual depreciation are given by user.

#include<stdio.h>
int main(){
    int d,y,s,p;
    printf("Enter Purchase Price, Years of Service and the Annual Depreciation by the stated order: ");
    scanf("%d %d %d",&p,&y,&d);
    s=p-(d*y);
    printf("\nThe salvage value is %d\n",s);
    return 0;
}
