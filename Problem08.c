// Write a C program to check which number is nearest to the value 100 among two given integers.
// Return 0 if the two numbers are equal.

# include <stdio.h>
# include <stdlib.h>

int compareNum(int a, int b)
{
    if (a == b) {
        return 0;
    } else {
        return abs(a - 100) > abs(b - 100) ? b : a;
    }
}
int main()
{
    printf("%d", compareNum(190, 28));

    return 0;
}