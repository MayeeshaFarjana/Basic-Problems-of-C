// Write a guessing game where the user has to guess a secret number. After every guess the program tells the user whether his number was too large or too small. At the end the number of tries needed should be printed. I counts only as one try if the user inputs the same number consecutively.

#include<stdio.h>
int main()
{
    int x,i,j,n=7;
    for(i=1;;i++)
    {
        printf("Guess the number:\n");
        scanf("%d",&x);
        if(x>n)
            printf("Too large\n");
        else if(x<n)
            printf("Too small\n");
        else{
            printf("You guessed right\n");
            break;
        }
    }
    printf("You had to try %d times to guess the number.\n",i);
}
