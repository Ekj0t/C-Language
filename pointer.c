#include <stdio.h>
// Pointers are datatypes used to store address of other data types
// (&) is used to store address of an operator ,(*) is used to get the value of other datatypes
int main()
{
    printf("Pointers\n");
    int a = 76;
    printf("The value of a is %d\n", a);
    int *pointer = &a;
    int *pointer2 = NULL;                                       // if not initialized then has NULL
    printf("The address of pointer is %x\n", pointer);          // (%x) to print address of pointer(in this case)
    printf("The address of garbage pointer is %x\n", pointer2); // The address of garbage pointer is 2f9000, after using null: The address of garbage pointer is 0
    printf("The address of a is %x\n", &a);
    printf("The address of pointer to a is %x\n", &pointer);
    printf("The value of pointer is %d\n", *pointer); // Use (*) before pointers otherwise will not work

    return 0;
}
