#include <stdio.h>

void StarPattern(int rows)
{
    // Write Stars
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}
void ReverseStarPattern(int rows)
{
    // Write Stars
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= rows - i - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}

int main()
{
    int rows, type;
    printf("Enter 0 for Triangular Star Pattern and 1 for Reverse Triangular Star Pattern: ");
    scanf("%d", &type);
    printf("How many rows do you want: ");
    scanf("%d", &rows);
    switch (type)
    {
    case 0:
        StarPattern(rows);
        break;

    case 1:
        ReverseStarPattern(rows);
        break;
    default:
        printf("You have entered invalid choice\n");
        break;
    }
    return 0;
}
