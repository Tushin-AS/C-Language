#include <stdio.h>

int main() {
    #if __STDC_VERSION__ >= 201710L
        printf("C17 or later\n");
    #elif __STDC_VERSION__ >= 201112L
        printf("C11\n");
    #elif __STDC_VERSION__ >= 199901L
        printf("C99\n");
    #elif __STDC__
        printf("C89/C90\n");
    #else
        printf("Pre-ANSI C\n");
    #endif
    
    printf("Version: %ldL\n", __STDC_VERSION__);
    return 0;
}