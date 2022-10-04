#include <stdio.h>
#include <string.h>

int arrayRev(int *array)
{
    for (int i = 6; i >= 0; i--)
    {
        printf("%c", array[i]);
    }
    return 0;
}

int main()
{
    int string[] = {'1', '2', '3', '4', '5', '6', '7', '\0'};
    int i = 0;
    while (string[i] != '\0')
    {
        printf("%c", string[i]);
        i++;
    }
    printf("\n");
    arrayRev(string);

    return 0;
}
