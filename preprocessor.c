// #include directive brings all the content of one file to another
#include <stdio.h>
#include "matrix-multiplication.c"

// #define is used to assign a value to some variable globally
#define PI 3.14
#define Square(r) r *r

// #undef is used to undefine a macro

// #ifdef used if a macro is 
// #ifndef checks whether a macro is not defined
// #if used for if
// #else used of else
// #elif used for elseif
// #pragma is used to issue some advanced command to compiler

/*
Predefined Macro in C:
1. __DATE__ for "MMM DD YYYY" 
2. __TIME__ for "HH:MM:SS"
3. __FILE__ for current filename as string
4. __LINE__ for current line number as decimal constant 
5. __STDC__ for defined as 1(one) when the compiler compiles with the ANSI compiler
*/

int main()
{
    float var = PI;
    int r = 4;
    printf("Hello World %f\n", var);
    printf("The area of circle is %f\n", PI * Square(r));

    printf("File name is %s\n", __FILE__);
    printf("Today's Date is %s\n", __DATE__);
    printf("Time now is %s\n", __TIME__);
    printf("ANSI Standard: %d\n", __STDC__);
    return 0;
}
