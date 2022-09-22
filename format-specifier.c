#include <stdio.h>
int main()
{
    int a = 4;
    float b = 7.333;
    printf("Value of a is %d and value of b is %f\n", a, b);
    // Now using Format Specifiers
    /*
    Using whole number after decimal in number to print till certain number of digits, and using before decimals to get character spaces.
    */
    /* Note:
         To take character number more than in the specifier for seeing difference in effect.
         We can also use it in negative(-) to leave character-space after the specifier.
    */
    printf("Value of a is %d and value of b is %10.5f\n", a, b);
    printf("Value of a is %d and value of b is %-10.5f\n", a, b);
    return 0;
}
