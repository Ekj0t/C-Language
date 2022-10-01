#include <stdio.h>

//Call By Reference Example
void changeValue(int *address)
{
    *address = 354;
}

int main()
{
    int a = 34, b = 56;
    printf("The value of a is %d\n", a);
    changeValue(&a);
    printf("The value of a is %d\n", a);
    return 0;
}
