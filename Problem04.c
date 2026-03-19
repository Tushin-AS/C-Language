// Write a C program to check a given integer and return true if it is within 10 of 100 or 200.

# include <stdio.h>
# include <stdbool.h>
# include <stdlib.h>

bool checkInt(int x) {
    if (abs(x - 100) <= 10 || abs(x - 200) <= 10) {
        return true;
    }

    return false;
}

int main()
{
    int a = 25;
    printf("%i", checkInt(a));

    return 0;
}