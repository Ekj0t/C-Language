#include <stdio.h>

/*
Local Variables are given more preference than global
*/
int b = 34; // Global Variable
int func1(int b1)
{
    int loc;              // Local Variable inside func1
    static int myvar = 0; // Static Variables are only allocated once and get ignored if the program runs again
    // Static variables keeps value intact and doesn't forget it.
    printf("The value of myvar is %d\n", myvar);
    myvar++;
    printf("The address of b inside func1 is %d\n", b); // Printing Global Variable
    return b1 * 10;
}

int main()
{
    int b = 344; // Local Variable inside main
    printf("The address of b inside main is %d\n", &b);
    int val = func1(b); // Myvar = 0
    val = func1(b);     // Myvar = 1
    int *ptr = &val;
    printf("The value of func1 is %d\n", val);
    return 0;
}
