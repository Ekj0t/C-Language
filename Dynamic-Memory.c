#include <stdio.h>
#include <stdlib.h> // Dynamic memory functions are inside stdlib.h

int main()
{ /*Use size command to know about the information of the program
  Example:
  Input: size(Command) .\Dynamic-Memory.exe(Filename)
  text     data     bss    dec      hex filename >> (Data in Bytes)
  14344    1532     112   15988    3e74 .\Dynamic-Memory.exe
  */

    /* 4 functions for dynamic memory allocation:
         malloc
         calloc
         realloc
         free

    */
    int *ptr;
    int n;
    // Use of malloc
    // malloc: stands for memory allocation
    printf("Enter the size of the array you want to create:");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no %d of this array\n", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("The value at %d of this array is %d\n", i, ptr[i]);
    }

    // Use of calloc
    // calloc: stands for contiguous allocation
    printf("Enter the size of the array you want to create\n");
    scanf("%d", &n);

    ptr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no %d of this array\n", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("The value at %d of this array is %d\n", i, ptr[i]);
    }

    // Use of realloc
    // realloc: stands for reallocation
    printf("Enter the size of the new array you want to create\n");
    scanf("%d", &n);

    ptr = (int *)realloc(ptr, n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the new value no %d of this array\n", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("The new value at %d of this array is %d\n", i, ptr[i]);
    }

    // free: used to free allocated memory
    free(ptr);

    return 0;
}
