// Write a program to print unit digit of a given number

#include <stdio.h>

int main()
{
    int x=1234;
    int y = x%10;
    printf("Unit digit of %d is %d.",x,y);
    return 0;
}