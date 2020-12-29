// Write a program that prints a multiplication table for numbers up to 12.

#include <stdio.h>
int main() {
    int n, i;
    printf("Enter an integer: ");
    scanf("%d", &n);
    for (i = 1; i <= 12; ++i) {
        printf("%d * %d = %d \n", n, i, n * i);
    }
    return 0;
}
