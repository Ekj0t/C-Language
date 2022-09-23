#include <stdio.h>
/*
    Give students money if they passed in:
    Maths - 15
    Science - 15
    Both - 45
 */
int main()
{
    int num;
    printf("Enter 1 if passed in maths, 2 if paased in science and 3 if passed in both\n");
    scanf("%d", &num);
    switch (num)
    {
    case 1:
        printf("You passed in Maths you will get Rs 15\n");
        break;

    case 2:
        printf("You passed in Science you will get Rs 15\n");
        break;

    case 3:
        printf("You passed in Maths you will get Rs 45\n");
        break;

    default:
        printf("SAD!! You passed in no subjects\n");
        break;
    }
    return 0;
}
