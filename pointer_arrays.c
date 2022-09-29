#include <stdio.h>

int main()
{
    // (&) is used to store address of an operator ,(*) is used to get the value of other datatypes
    int a = 34;
    int *ptra = &a;
    printf("%d\n", ptra);
    printf("%d\n", ptra + 1);
    char b = 'a';
    char *pointer = &b;
    printf("%d\n", pointer);
    printf("%d\n", pointer + 1);

    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    printf("%d\n", arr[0]);
    // Line number 17 and 18 will work same
    printf("%d\n", &arr[0]);
    printf("%d\n", arr);
    // Line number 19 and 20 will work same
    printf("%d\n", &arr[1]);
    printf("%d\n", arr + 1);
    // Line number 22 and 23 will work same
    printf("%d\n", *(&arr[0]));
    printf("%d\n", *(arr));
    // Line number 25 and 26 will work same
    printf("%d\n", *(&arr[1]));
    printf("%d\n", *(arr + 1));
    return 0;
}
