#include<stdio.h>
int main()
{
   int P,T;
   float R,I;
   
   P=170400;
   T=14;
   R=2.4;
   
   I=(P*T*R)/100;
   
   printf("Principle Amount = %d\n",P);
   printf("Time in Months = %d\n",T);
   printf("Rate of Interest = %f\n",R);
   printf("Simple Interest = %f\n",I);
   getch();    
}
