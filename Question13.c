// Write a program to take a three-digit number from the user and rotate its digits by one position towards the right.

#include <stdio.h>

int main()
{
    int num,r,q;
    printf("Enter a three digit number : ");
    scanf("%d",&num);
    r = num%10;
    q = num/10;
    num = (r*100)+q;
    printf("Result = %d",num);
    return 0;
}