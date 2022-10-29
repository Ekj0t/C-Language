#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b)
{
    return a + b;
}

void greetHelloandExecute(int (*fptr)(int, int))
{
    printf("Hello user\n");
    printf("The sum of a and b is %d\n", fptr(5, 7));
}

void greetGMandExecute(int (*fptr)(int, int))
{
    printf("Good Morning user\n");
    printf("The sum of a and b is %d\n", fptr(5, 7));
}

int main()
{
    int (*ptr)(int, int);
    ptr = sum;
    greetHelloandExecute(ptr);
    return 0;
}
