// Uninitialized pointer is also known as wild pointer
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int a = 34;
    int *ptr; // Wild pointer
    ptr = &a; // Now, not wild pointer
    printf("The value of ptr is %d\n", *ptr);
    return 0;
}
