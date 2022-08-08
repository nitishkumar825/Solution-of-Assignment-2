// Write a program to check whether the given number is even or odd using a bitwise operator.

#include <stdio.h>
 
int main()
{
   int n;
 
   printf("Enter an integer\n");
   scanf("%d",&n);
 
   if (n&1)
      printf("Odd\n");
   else
      printf("Even\n");
 
   return 0;
}