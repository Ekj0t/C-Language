#include <stdio.h>

int function1(int array[])
{

    for (int i = 0; i < 4; i++)
    {
        printf("The value of %d is %d\n", i, array[i]);
    }
    array[0] = 13465; // If we change the value here then it will also change in the main.

    return 0;
}

void function2(int *ptra)
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value of %d is %d\n", i, ptra[i]);
    }
    *(ptra + 2) = 4589;
}

void function3(int array[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("The value at %d, %d is %d\n", i, j, array[i][j]);
        }
    }
}
int main()
{
    int arr[] = {23, 123, 134, 34};
    printf("The value of first array is %d\n", arr[0]);
    function1(arr);
    printf("The value of first array is %d\n", arr[0]);
    function2(arr);
    function2(arr);
    int array[][2] = {{23, 123}, {5, 14}};
    function3(array);
    return 0;
}
