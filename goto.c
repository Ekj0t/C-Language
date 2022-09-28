#include <stdio.h>
int main()
{
label:
    printf("Hello guys\n");
    printf("We are inside label\n");
    // goto end; // directing to end
    printf("Hello World\n");
    // goto label;

    int num;
    for (int i = 0; i < 8; i++)
    {
        printf("%d", i);
        for (int j = 0; j < 8; j++)
        {
            printf("Enter the number, enter 0 to exit\n");
            scanf("%d", &num);
            if (num == 0)
            {
                // break;
                goto end;
            }
        }
    }
end:
    printf("This is the end\n");
    return 0;
}
