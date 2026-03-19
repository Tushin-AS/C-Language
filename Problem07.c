// Write a C program to check two given integers whether either of them is in the range 100..200 inclusive.

# include <stdio.h>
# include <stdbool.h>

bool checkValue(int a, int b)
{
    if ((a >= 100 && a <= 200) || (b >= 100 && b <= 200)) return true;

    return false;
}

int main()
{
    printf("%i", checkValue(123,122));
    return 0;
}