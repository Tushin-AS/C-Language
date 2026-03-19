/*
Write a C program that checks two given temperatures and returns true if one temperature is less than 0 and the other is greater than 100,
otherwise it returns false.
*/

# include <stdio.h>
# include <stdbool.h>

int main()
{
    float temp1, temp2;
    bool ax = false;

    printf("Temperature 1 in °C >> ");
    scanf("%f", &temp1);
    printf("Temperature 2 in °C >> ");
    scanf("%f", &temp2);

    if (temp1 < 0 && temp2 > 100 || temp1 > 100 && temp2 < 0) {
        ax = true;
    }

    printf("%i", ax);

    return 0;
}