// Suppose that a 563 is entered through the keyboard, your program should print “Five Six Three”. Write a program such that it does this for any positive integers.

#include<stdio.h>
#include<string.h>
int main()
{
    char n[1000000];
    printf("Enter a number:");
    gets(n);

    for(int i=0;i<strlen(n);i++)
    {
        if(n[i] =='0') {printf("Zero ");continue;}
        if(n[i] =='1') {printf("One ");continue;}
        if(n[i] =='2') {printf("Two ");continue;}
        if(n[i] =='3') {printf("Three ");continue;}
        if(n[i] =='4') {printf("Four ");continue;}
        if(n[i] =='5') {printf("Five ");continue;}
        if(n[i] =='6') {printf("Six ");continue;}
        if(n[i] =='7') {printf("Seven ");continue;}
        if(n[i] =='8') {printf("Eight ");continue;}
        if(n[i] =='9') {printf("Nine ");continue;}
    }

return 0;
}
