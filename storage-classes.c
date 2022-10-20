#include <stdio.h>
#include "temp.c"

extern int sum; // used to take value from global variable

int main()
{
    // Decleration - Telling compiler about the variable and no space reserved.
    // Definition - Decleration + space reservation.
    // int sum = 100;
    register int var = sum; // Used to register the value
    printf("%d\n", var);
    printf("Hello World, %d", sum);
    return 0;
}