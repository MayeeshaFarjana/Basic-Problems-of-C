/* Write a program to compute the average of the ten numbers 1, 4, 9, ..., 81, 100, that is, the average of the squares of the numbers from 1 to 10.
(This will be a simple modification of Exercise 3 from last week: instead of printing each square as it is computed, add it in to a variable sum which keeps track of the sum of all the squares, and then at the end, divide the sum variable by the number of numbers summed.)
If you keep track of the sum in a variable of type int, and divide by the integer 10, you'll get an integer-only approximation of the average (the answer should be 38).). If you keep track of the sum in a variable of type float or double, on the other hand, you'll get the answer as a floating-point number, which you should print out using %f in the printf format string, not %d.
(In a printf format string, %d prints only integers, and %f is one way to print floating-point numbers. In this case, the answer should be 38.5.) */

#include<stdio.h>
int main()
{
    int sum=0;
    double avg;
    for(int i=0;i<=10;i++)
    {
        sum+=(i*i);
    }
    avg=sum/10.0;
    printf("The average of the ten numbers 1, 4, 9, ..., 81, 100 is %.2f\n",avg);
    return 0;
}
