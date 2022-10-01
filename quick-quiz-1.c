#include <stdio.h>

void ChangeValuesA(int *x, int *y)
{
    *x = *x + *y;
    *y = (*x - *y) -*y;
}

int main()
{
    int a = 5, b = 3;
    printf("The Value of a is %d and b is %d\n", a, b);
    ChangeValuesA(&a, &b);
    printf("The Value of a is %d and b is %d\n", a, b);
    return 0;
}
