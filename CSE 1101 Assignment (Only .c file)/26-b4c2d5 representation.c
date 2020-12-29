/* Problem is defined by the below example:
Input: b4c2d5
Output: bbbbccddddd
That is b4 represent the letter ‘b’ will be printed 4 times. */

#include<stdio.h>
#include<string.h>
int main()
{
  int x;
  char ar[1000];
  printf("Input: ");
  scanf("%s",&ar);
  x=strlen(ar);
  for(int i=1;i<x;i++)
  {
    if(ar[i]<='9' && ar[i]>='0' && ar[i-1]<='z' && ar[i-1]>='a')
    {
        int s = ar[i] -'0';/*char to int*/
        printf("Output: ");
        for(int j=0;j<s;j++)
            printf("%c", ar[i-1]);
    }
  }
  return 0;
}
