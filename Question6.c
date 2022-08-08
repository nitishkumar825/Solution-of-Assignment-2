// Write a program which takes a character as an input and displays its ASCII code.

#include <stdio.h>

int main()
{
    char ch;
    printf("Enter any character : ");
    scanf("%c",&ch);
    printf("ASCII code of %c = %d",ch,ch);
    return 0;
}