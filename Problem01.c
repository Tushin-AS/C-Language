// Write a C program to compute the sum of the two input values. If the two values are the same, then return triple their sum.

#include <stdio.h>

int main()
{
    int a, b, sum;

    printf("Input two integers: ");
    scanf("%d %d", &a, &b);

    if (a == b) {
        sum = (a + b) * 3;
    } else {
        sum = a + b;
    }

    printf("Summation: %d", sum);

    return 0;
}