#include <stdio.h>
int main()
{
    int num, index = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("The list is as follows: \n");
    // Do While Loop
    do
    {
        printf("%d\n", index);
        index++; // index = index + 1;
    } while (index < num);

    // While Loop
    int i = 0;
    while (i <= num)
    {
        printf("\t%d\n", i);
        i++; // index = index + 1;
    }

    // For Loop
    int j;
    for ( j = 0; j <= num; j++) // it will take only the last expression in second expression as default and work accordingly.
    {
        printf("%d\n", j);
    }
    

    return 0;
}
