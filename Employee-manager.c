#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Dynamic Memory Allocation
    // ABC Pvt Ltd. manages employee records of other companies.
    // Employee Id can be of any length and it can contain any character
    // For 3 employees, you have to take 'length of employee id' as input in a length integer variable.
    // Then, you have to take employee id as an input and display it on screen.
    // Store the employee id in a character array which is allocated dynamically.
    // You have to create only one character array dynamically
    // EXAMPLE:
    // Employee 1:
    // Enter no of characters in your eId
    // 45
    // Dynamically allocate the character array.
    // take input from user

    // Employee 2:
    // Enter no of characters in your eId
    // 4
    // Dynamically allocate the character array.
    // take input from user

    // Employee 3:
    // Enter no of characters in your eId
    // 9
    // Dynamically allocate the character array.
    // take input from user

    int eId;
    char *ptr;
    char a, b;
    int i = 0;
    while (i < 3)
    {
        printf("Employee %d:Enter no of characters in your eId\n", i + 1);
        scanf("%d", &eId);
        getchar();
        printf("Enter the value of a\n");
        scanf("%c", &a);
        getchar();
        printf("Enter the value of b\n");
        scanf("%c", &b);
        ptr = (char *)malloc((eId + 1) * sizeof(char));

        printf("Enter the Employee Id\n");
        scanf("%s", ptr);
        printf("You Employee Id is %s\n", ptr);
        free(ptr);

        i++;
    }

    return 0;
}
