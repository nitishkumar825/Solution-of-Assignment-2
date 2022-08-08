//Write a program to swap values of two int variables

#include <stdio.h>

int main()
{
    int a,b,c;
    a=15,b=19;
    printf("Before Swapping\nValue of A = %d\nValue of B = %d",a,b);
    c=a;
    a=b;
    b=c;
    printf("\n\nAfter Swapping\nValue of A = %d\nValue of B = %d",a,b);
    return 0;
}