#include<stdio.h>
int main()
{
   int x,y;
   int s,d,p,div;
   
   printf("Enter any two numbers\n");
   scanf("%d %d",&x,&y);
   
   s=x+y;
   d=x-y;
   p=x*y;
   div=x/y;
   
   printf("Sum of %d and %d  is: %d\n",x,y,s);
   printf("Subtraction of %d and %d  is: %d\n",x,y,d);
   printf("Product of %d and %d is: %d\n",x,y,p);
   printf("Division of %d and %d is: %d\n ",x,y,div);
   getch();
   
}
