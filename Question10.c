// Write a program to make the last digit of a number stored in a variable as zero.

/*
    (Example - if x=2345 then make it x=2340)
*/

#include <stdio.h>

int main()
{
    int x=2345;
    int a = x%10;
    printf("%d",x-a);
    return 0;
}