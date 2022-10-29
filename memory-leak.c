#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, i = 0;
    int *i2;
    while (i < 45545)
    {
        printf("Welcome to Ekjot Singh\n");
        i2 = malloc(34444 * sizeof(int));
        if (i % 100 == 0)
        {
            printf("Hello\n");
        }
        i++;
        free(i2);// without memory leak we will counter a situation of memory leak
    }

    return 0;
}
