#include <stdio.h>
int main()
{
    int a =4;
    float b = 7.333;
    printf("Value of a is %d and value of b is %f\n", a,b);
    // Now using Format Specifiers
    /* 
    Using whole number after decimal in number to print till certain number of digits, and using before decimals to get character spaces.
    */ 
    printf("Value of a is %d and value of b is %10.5f\n", a,b);
    return 0;
}
