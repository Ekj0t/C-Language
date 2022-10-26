#include <stdio.h>
#include <stdlib.h>

int main1()
{
    int m, n, sum = 0;
    int first[3][4], second[4][2], result[3][2];

    printf("Enter the first matrix\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            // Taking input of first matrix
            // printf("Enter the %d %d element of your first element\n", i, j);
            scanf("%d", &first[i][j]);
            // printf("\t");
        }
        // printf("\n");
    }
    printf("Enter the second matrix\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            // Taking input of second matrix
            // printf("Enter the %d %d element of your second element\n", i, j);
            scanf("%d", &second[i][j]);
            // printf("\t");
        }
        // printf("\n");
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            // Calculate the result
            for (int k = 0; k < 4; k++)
            {
                sum += first[i][k] * second[k][j];
            }

            result[i][j] = sum;
            sum = 0;
        }
    }

    // Print the resultant matrix
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            // Print the result
            printf("%d \t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
