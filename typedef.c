#include <stdio.h>

// Use case of typedef in structures:
typedef struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[100];
} std;

int main()
{
    // Used to change name of a datatype:
    // typedef <previous_name> <alias_name>;
    typedef unsigned long ul;
    // Since unsigned long is a long name using ul in place of it for ease
    ul l1, l2, l3;
    // l1, l2, l3 are three unsigned longs declared with ul

    // Example use of typedef:
    typedef int integer;
    integer a = 10;
    printf("Value of a is %d\n", a);

    // Using std in place of Student for ease:
    std s1, s2;
    s1.id = 1;
    s2.id = 2;
    printf("The ID of s1 is %d\n", s1.id);
    printf("The ID of s2 is %d\n", s2.id);

    // int *x, y;
    typedef int *IntPointer;
    IntPointer x, y;
    int z = 2021;
    x = &z;
    y = &z;
    printf("Value of x is: %d\n", *x);
    printf("Address of x and y is: %d\n", y);
    return 0;
}
