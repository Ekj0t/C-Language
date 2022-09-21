#include <stdio.h>

int main()
{
    int a, i;
    printf("Enter the number you want multiplication table of\n");
    scanf("%d\n", &a);
    
    for (a, i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n", a, i,a*i);
    }
    
    return 0;
}
