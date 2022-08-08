// Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and convert it into USD.

#include <stdio.h>

int main()
{
    float a;
    printf("Enter amount in INR : ");
    scanf("%f",&a);
    printf("\n%.2f INR = %.2f USD",a,a/76.23);
    return 0;
}