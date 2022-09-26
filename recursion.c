#include <stdio.h>

// This program is able to print factorials till 16, last point 16!(factorial) = 2004189184
int factorial(int number)
{
    if (number == 1 || number == 0)
    {
        return 1;
    }
    else
    {
        return (number * factorial(number - 1));
    }
}

int main()
{
    int num;
    printf("Enter the number you want factorial of: ");
    scanf("%d", &num);
    printf("The factorial of %d is %d\n", num, factorial(num));
    return 0;
}
