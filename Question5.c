// Write a program to input a three-digit number and display the sum of the digits.

#include <stdio.h>

int main()
{
    int num,rem,sum=0;
    printf("Enter three digit number : ");
    scanf("%d",&num);
    while (num != 0)
    {
        rem = num%10;
        num = num/10;
        sum += rem;
    }
    printf("Sum of the digits = %d",sum);
    
    return 0;
}