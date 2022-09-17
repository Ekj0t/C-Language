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
    &&(Logical AND)         If both
    ||(Logical OR)          is not equal to
    !(Logical NOT)          greater than
*/


int main()
{
    printf("Hello World\n");
    int a, b, c, d, e, f,g,h,i,j,k;
    int x, y;
    x = 500;
    y = 10;

    //Arithmetic Operators
    a = AdditionOperator(x, y);
    b = SubtractionOperator(x, y);
    c = MultiplicationOperator(x, y);
    d = DivisionOperator(x, y);
    e = ModulusOperator(x, y);
    //Relational Operators
    f = EqualsToOperator(x,y);
    g = NotEqualsToOperator(x,y);
    h = GreaterThanOperator(x,y);
    i = SmallerThanOperator(x,y);

    printf("Different results are:\n Addition: %d,\n Subtraction: %d,\n Multiplication: %d,\n Division: %d,\n Modulus: %d,\n", a, b, c, d, e);

    if (f = 1)
    {
        printf("Both Numbers are same\n");
    } else{
        printf("Both Numbers are not same");
    }
    
    return 0;
}
