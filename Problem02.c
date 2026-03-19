/*
Write a C program that will take a number as input and find the absolute difference between the input number and 51.
If the input number is greater than 51, it will return triple the absolute difference.
*/

# include <stdio.h>
# include <math.h>

int difference (int x)
{
    return x > 51 ? abs(x - 51) * 3 : abs(x - 51);
}

int main()
{
    int x;
    printf("Input an Integer: ");
    scanf("%d", &x);
    int d = difference(x);
    printf("Difference: %d", d);
    
    return 0;
}