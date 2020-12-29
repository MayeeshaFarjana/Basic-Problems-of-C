/*	For the certain electrical circuit with an inductance L and resistance R, the damped natural frequency is given by frequency = sqrt((1/LC)-(R^2/4*C^2))
it is described to study the variation of this frequency with C (capacitance). Write a program to calculate the frequency for different values of C starting from 0.01 to 0.1 in steps of 0.01. */

#include<stdio.h>
#include<math.h>
int main()
{
    double L,R,C,f;
    scanf("%lf %lf",&L,&R);
    for(C=0.01 ; C<= 0.10 ; C+=0.01)
       {
           double P = (pow(R,2))/(4*pow(C,2)) ;
           double Q = 1.0 / (L*C);
           if(P<=Q)
           {
              f = sqrt(Q - P );
              printf("For the capacitance %0.2lf the frequency is %0.2lf\n",C,Q);
           }
           else
           {
               printf("Invalid inputs\n"); break;
           }

       }
return 0;
}
