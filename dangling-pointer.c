#include <stdio.h>
#include <stdlib.h>

int *FunctionDangling()
{
    int a, b, sum;
    a = 34;
    b = 312;
    sum = a + b;
    return &sum;
}

int main()
{
case1:
{
    int *ptr = (int *)malloc(7 * sizeof(int));
    ptr[0] = 35;
    ptr[1] = 34;
    ptr[2] = 33;
    ptr[3] = 3;
    free(ptr);
}
case2:
{
    int *dangptr = FunctionDangling();
}

case3:
{
    int *danglingpointer3;
    int a = 1234;
    danglingpointer3 = &a;

}



    return 0;
}
