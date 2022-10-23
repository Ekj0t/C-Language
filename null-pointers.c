#include <stdio.h>

int main()
{
    int a = 34;
Case1:
{
    int *ptr = NULL;
    if (ptr != NULL)
    {
        printf("The address of a is %d\n", *ptr);
    }
    else
    {
        printf("The pointer is a null pointer and cannot be derefrenced\n");
    }
}

Case2:{
    int *ptr = &a;
    if (ptr != NULL)
    {
        printf("The address of a is %d\n", *ptr);
    }
    else
    {
        printf("The pointer is a null pointer and cannot be derefrenced\n");
    }
}
    return 0;
}
