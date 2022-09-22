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

/*
    Relational operators:

    Operator    Description
    ==          is equal to
    !=          is not equal to
    >           greater than
    <           less than
    >=          Greater than or equal to
    >=          Less than or equal to
*/

int EqualsToOperator(int a, int b)
{
    return a == b;
}
int NotEqualsToOperator(int a, int b)
{
    return a != b;
}
int GreaterThanOperator(int a, int b)
{
    return a > b;
}
int SmallerThanOperator(int a, int b)
{
    return a < b;
}
int GreaterEqualsToOperator(int a, int b)
{
    return a >= b;
}
int SmallerEqualsToOperator(int a, int b)
{
    return a <= b;
}
/*
    Logical operators:

    Operator                Description
    &&(Logical AND)         If both operators are non-zero
    ||(Logical OR)          if any of the two operators are non-zero
    !(Logical NOT)          Reverse the upper two operators.
*/

int LogicalAndOperator(int a, int b)
{
    return a && b;
}

int LogicalOROperator(int a, int b)
{
    return a && b;
}

int main()
{
    printf("Hello World\n");
    int a, b, c, d, e, f, g, h, i, j, k, l;
    int x, y;
    x = 500;
    y = 10;

    // Arithmetic Operators
    a = AdditionOperator(x, y);
    b = SubtractionOperator(x, y);
    c = MultiplicationOperator(x, y);
    d = DivisionOperator(x, y);
    e = ModulusOperator(x, y);
    // Relational Operators
    f = EqualsToOperator(x, y);
    g = NotEqualsToOperator(x, y);
    h = GreaterThanOperator(x, y);
    i = SmallerThanOperator(x, y);
    j = LogicalAndOperator(x, y);
    k = LogicalOROperator(x, y);
    l = LogicalNOTOperator(x, y);

    printf("Different results are:\n Addition: %d,\n Subtraction: %d,\n Multiplication: %d,\n Division: %d,\n Modulus: %d,\n", a, b, c, d, e);

    if (f = 1)
    {
        printf("Both Numbers are same\n");
    }
    else
    {
        printf("Both Numbers are not same\n");
    }
    if (j = 1)
    {
        printf("Both Numbers are non-zero\n");
    }
    else
    {
        printf("Both Numbers are not non-zero\n");
    }
    if (k = 1)
    {
        printf("Any one number non-zero\n");
    }
    else
    {
        printf("Both Numbers are zero\n");
    }

    return 0;
}
