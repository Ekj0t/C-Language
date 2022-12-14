#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char *operation;
    int num1, num2;
    operation = argv[1];
    num1 = atoi(argv[2]);
    num2 = atoi(argv[3]);

    // Checking whether the program is working?
    // printf("Operation is %s\n", operation);
    // printf("Num1 is %d\n", num1);
    // printf("Num2 is %d\n", num2);

    // 0(zero) means same and 1(one) means not same
    if (strcmp(operation, "add") == 0)
    {
        printf("add: %d\n", num1 + num2);
    }
    else if (strcmp(operation, "subtract") == 0)
    {
        printf("subtract: %d\n", num1 - num2);
    }
    else if (strcmp(operation, "multiply") == 0)
    {
        printf("multiply: %d\n", num1 * num2);
    }
    else if (strcmp(operation, "divide") == 0)
    {
        printf("divide: %d\n", num1 / num2);
    }

    return 0;
}
