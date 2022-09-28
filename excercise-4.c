#include <stdio.h>

int fib_recursive(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return fib_recursive(n - 1) + fib_recursive(n - 2);
    }
}

int fib_itreative(int n)
{
    int f[n + 2];
    f[0] = 0;
    f[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        f[i] = f[i - 1] + f[i - 2];
    }
    return f[n];
}
int main()
{
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);
    printf("%d\n", fib_itreative(number));
    printf("%d\n", fib_recursive(number));

    return 0;
}
