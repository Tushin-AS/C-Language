/*
Write a C program that checks two given integers and returns true if at least one of them is 30 or if their sum is 30.
In other words, if either of the two integers is 30 or if their sum equals 30, the program will return true.
*/

#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    int q1 = a == 30 ? 1 : 0;
    int q2 = b == 30 ? 1 : 0;
    int q3 = (a + b) == 30 ? 1 : 0;

    printf("%d\n%d\n%d", q1, q2, q3);

    return 0;
}