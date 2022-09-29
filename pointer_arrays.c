#include <stdio.h>

int main()
{
    int a = 34;
    int *ptra = &a;
    printf("%d\n", ptra);
    printf("%d\n", ptra + 1);
    char b = 'a';
    char *pointer = &b;
    printf("%d\n", pointer);
    printf("%d", pointer + 1);

    int arr[] = {1,2,3,4,5,6,7};
    printf("%d", arr[0]);
    return 0;
}
