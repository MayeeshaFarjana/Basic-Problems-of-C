// Write a program to read the price of an item in decimal form (like 16.20) and print the output in paisa (like 1620 paisa).

#include<stdio.h>
#include<math.h>
int main()
{
    float t;
    int p;
    printf("Enter the price in Taka: ");
    scanf("%f",&t);
    p=ceil(t*100);
    printf("The Price in Paisa is %d\n", p);
    return 0;
}
