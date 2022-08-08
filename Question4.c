// Write a program to swap values of two int variables without using a third variable.

#include <stdio.h>

int main()
{
    int a = 12,b=27;
    printf("Before Swapping\nValue of A = %d\nValue of B = %d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\n\nAfter Swapping\nValue of A = %d\nValue of B = %d",a,b);
    return 0;
}