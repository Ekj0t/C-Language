#include <stdio.h>

// to write function after main for calling it and not to break the code.
int sum(int a, int b);
void printstar(int n);
int takenumber();

int main()
{
    int a, b, c, d;
    a = 9;
    b = 87;
    c = sum(a, b);
    printf("Sum is: %d\n", c);
    printstar(7);
    d = takenumber();
    printf("The number entered is: %d", d);


    return 0;
}
// With arguments and with return value.
int sum(int a, int b)
{
    return a + b;
}

// With argument without return value
void printstar(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c", '*');
    }
}

// Without argument with return value
int takenumber()
{
    int i;
    printf("\nEnter a number: ");
    scanf("%d", &i);
    return i;
}