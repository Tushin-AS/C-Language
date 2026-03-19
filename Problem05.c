/*
Write a C program that checks if a positive integer is divisible by either 3 or 7, or both.
If the integer is a multiple of 3, then the program will return true.
Similarly, if the integer is a multiple of 7, then also the program will return true.
If the integer is not a multiple of 3 or 7, then the program will return false.
*/

# include <stdio.h>

int main()
{
    int a = 21;

    int x1 = (a % 3) == 0 ? 1 : 0;
    int x2 = (a % 7) == 0 ? 1 : 0;
    int x3 = (a % 3 == 0) && (a % 7 == 0) ? 1 : 0;

    printf("%d\n%d\n%d", x1, x2, x3);

    return 0;
}