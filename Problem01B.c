// Write a C program to compute the sum of the two input values. If the two values are the same, then return triple their sum.
// Simple Solution

#include <stdio.h>

int addition (int a, int b)
{
    return a == b ? (a + b) * 3 : a + b ;
}

int main()
{
    int a = 12;
    int b = 12;
    int result = addition(a, b);
    printf("Summation: %d", result);
    
    return 0;
}