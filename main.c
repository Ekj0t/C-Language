#include <stdio.h>

/*
    Arithmetic operators:

    Operator    Description
    +           Addition
    -           Subtraction
    *           Multiplication
    /           Division
    %           Modulus
*/

int AdditionOperator(int a, int b)
{
    return a + b;
}
int SubtractionOperator(int a, int b)
{
    return a - b;
}
int MultiplicationOperator(int a, int b)
{
    return a * b;
}
int DivisionOperator(int a, int b)
{
    return a / b;
}
int ModulusOperator(int a, int b)
{
    return a % b;
}
int main()
{
    printf("Hello World\n");
    int a, b, c, d, e;
    int x, y;
    x = 500;
    y = 10;

    a = AdditionOperator(x, y);
    b = SubtractionOperator(x, y);
    c = MultiplicationOperator(x, y);
    d = DivisionOperator(x, y);
    e = ModulusOperator(x, y);

    printf("Different results are Addition: %d,\n Subtraction: %d,\n Multiplication: %d,\n Division: %d,\n Modulus: %d,\n", a, b, c, d, e);
    return 0;
}
